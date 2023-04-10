// Copyright 2023 by Sulley. All Rights Reserved.

#include "Core/EPlayerCameraManager.h"
#include "Camera/PlayerCameraManager.h"
#include "Camera/CameraModifier_CameraShake.h"
#include "WaveOscillatorCameraShakePattern.h"
#include "PerlinNoiseCameraShakePattern.h"
#include "Utils/ECameraTypes.h"
#include "Utils/ECameraModifier_CameraShake.h"
#include "Engine/Scene.h"
#include "Kismet/GameplayStatics.h"
#include "Camera/CameraTypes.h"
#include "UObject/ScriptInterface.h"
#include "Engine/BlendableInterface.h"

AEPlayerCameraManager::AEPlayerCameraManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	/** Use our customized camera shake modifier class. */
	DefaultModifiers.Empty();
	DefaultModifiers.Add(UECameraModifier_CameraShake::StaticClass());
}

void AEPlayerCameraManager::ApplyCameraModifiers(float DeltaTime, FMinimalViewInfo& InOutPOV)
{
	Super::ApplyCameraModifiers(DeltaTime, InOutPOV);

	/** For post process blendables. */
	check(PostProcessMaterialSettings.WeightedBlendables.Array.Num() == WeightedBlendables.Num());

	for (int i = 0; i < WeightedBlendables.Num(); ++i)
	{
		FWeightedBlendableObject& WeightedBB = WeightedBlendables[i];
		float Weight = GetWeight(WeightedBB.Weight, WeightedBB.BlendInTime, WeightedBB.Duration, WeightedBB.BlendOutTime, WeightedBB.ElapsedBlendInTime, WeightedBB.ElapsedDurationTime, WeightedBB.ElapsedBlendOutTime, WeightedBB.bHasCompleted, DeltaTime);
		if (!WeightedBB.bHasCompleted)
		{
			/** The per-material weight only works in a very weird way requiring specific material setups.
			 *  See https://forums.unrealengine.com/t/post-process-blend-weight-acts-as-boolean-no-fade-in-out/368921/6.
			 */
			PostProcessMaterialSettings.WeightedBlendables.Array[i].Weight = Weight;
		}
		else
		{
			PostProcessMaterialSettings.WeightedBlendables.Array[i].Weight = 0.0f;
		}
	}

	AddCachedPPBlend(PostProcessMaterialSettings, MaterialWeight);

	/** For post process settings. */
	for (FWeightedPostProcess& WeightedPP : WeightedPostProcesses)
	{
		float Weight = GetWeight(WeightedPP.Weight, WeightedPP.BlendInTime, WeightedPP.Duration, WeightedPP.BlendOutTime, WeightedPP.ElapsedBlendInTime, WeightedPP.ElapsedDurationTime, WeightedPP.ElapsedBlendOutTime, WeightedPP.bHasCompleted, DeltaTime);
		if (!WeightedPP.bHasCompleted)
		{
			AddCachedPPBlend(WeightedPP.PPSetting, Weight);
		}
	}
}

float AEPlayerCameraManager::GetWeight(float& Weight, float& BlendInTime, float& Duration, float& BlendOutTime, float& ElapsedBlendInTime, float& ElapsedDurationTime, float& ElapsedBlendOutTime, bool& bHasCompleted, const float& DeltaTime)
{
	/** If blending in. */
	if (ElapsedBlendInTime < BlendInTime)
	{
		ElapsedBlendInTime = FMath::Clamp(ElapsedBlendInTime + DeltaTime, 0, BlendInTime);
		float ResultWeight = GetBlendedWeight(0.0f, Weight, BlendInTime, ElapsedBlendInTime);
		return ResultWeight;
	}

	/** Has blended in and duration is zero (infinite). */
	else if (Duration == 0.0f)
	{
		return Weight;
	}

	/** Has blended in and duration is not zero.  */
	else if (Duration != 0.0f && ElapsedDurationTime < Duration)
	{
		ElapsedDurationTime += DeltaTime;
		return Weight;
	}

	/** If blending out. */
	else if (ElapsedBlendOutTime < BlendOutTime)
	{
		ElapsedBlendOutTime = FMath::Clamp(ElapsedBlendOutTime + DeltaTime, 0, BlendOutTime);
		float ResultWeight = GetBlendedWeight(Weight, 0.0f, BlendOutTime, ElapsedBlendOutTime);
		return ResultWeight;
	}
	/** Has finished blending out. Set bHasCompleted to true. */
	else
	{
		bHasCompleted = true;
		return 0.0f;
	}
}

void AEPlayerCameraManager::DoUpdateCamera(float DeltaTime)
{
	Super::DoUpdateCamera(DeltaTime);

	if (bEFading)
	{
		EFadeTimeRemaining = FMath::Max(EFadeTimeRemaining - DeltaTime, 0.0f);
		/** Fading in. */
		if (EFadeTimeRemaining >= EFadeDuration + EFadeOutTime)
		{
			FadeAmount = UKismetMathLibrary::Ease(EFadeAlpha.X, EFadeAlpha.Y, (EFadeInTime + EFadeDuration + EFadeOutTime - EFadeTimeRemaining) / EFadeInTime, EFadeInFunc);
		}
		/** Maintaining. */
		else if (EFadeTimeRemaining >= EFadeOutTime)
		{
			FadeAmount = EFadeAlpha.Y;
		}
		/** Fading out. */
		else
		{
			FadeAmount = UKismetMathLibrary::Ease(EFadeAlpha.Y, EFadeAlpha.X, 1.0f - EFadeTimeRemaining / EFadeOutTime, EFadeOutFunc);
		}
	}
}

void AEPlayerCameraManager::AddBlendable(const TScriptInterface<IBlendableInterface>& InBlendableObject, const float InWeight, const float InBlendInTime, const float InDuration, const float InBlendOutTime)
{
	RemoveCompletedBlendables();

	FWeightedBlendableObject NewWeightedBlendable = FWeightedBlendableObject(InBlendableObject, InWeight, InBlendInTime, InDuration, InBlendOutTime);
	PostProcessMaterialSettings.AddBlendable(InBlendableObject, 0.0f);
	WeightedBlendables.Add(NewWeightedBlendable);
}

void AEPlayerCameraManager::RemoveBlendable(const TScriptInterface<IBlendableInterface>& InBlendableObject)
{
	PostProcessMaterialSettings.RemoveBlendable(InBlendableObject);

	for (int i = 0, count = WeightedBlendables.Num(); i < count; ++i)
	{
		FWeightedBlendableObject& WeightedBlendable = WeightedBlendables[i];
		if (WeightedBlendable.InBlendableObject.GetObject() == InBlendableObject.GetObject())
		{
			WeightedBlendables.RemoveAt(i);
			break;
		}
	}
}

void AEPlayerCameraManager::AddPostProcess(const FPostProcessSettings& InPostProcess, const float InWeight, const float InBlendInTime, const float InDuration, const float InBlendOutTime)
{
	RemoveCompletedPostProcesses();

	FWeightedPostProcess NewWeightedPP = FWeightedPostProcess(InPostProcess, InWeight, InBlendInTime, InDuration, InBlendOutTime);
	WeightedPostProcesses.Add(NewWeightedPP);
}

void AEPlayerCameraManager::RemoveCompletedPostProcesses()
{
	for (int i = 0, count = WeightedPostProcesses.Num(); i < count; ++i)
	{
		FWeightedPostProcess& WeightedPP = WeightedPostProcesses[i];
		if (WeightedPP.bHasCompleted)
		{
			WeightedPostProcesses.RemoveAt(i);
			--i;
			--count;
		}
	}
}

void AEPlayerCameraManager::RemoveCompletedBlendables()
{
	for (int i = 0, count = WeightedBlendables.Num(); i < count; ++i)
	{
		FWeightedBlendableObject& WeightedBlendable = WeightedBlendables[i];
		if (WeightedBlendable.bHasCompleted)
		{
			PostProcessMaterialSettings.RemoveBlendable(WeightedBlendable.InBlendableObject);
			WeightedBlendables.RemoveAt(i);
			--i;
			--count;
		}
	}
}

void AEPlayerCameraManager::RemoveAllPostProcesses()
{
	WeightedPostProcesses.Empty();
}

void AEPlayerCameraManager::EasyStartCameraFade(float FromAlpha, float ToAlpha, float FadeInTime, TEnumAsByte<EEasingFunc::Type> FadeInFunc, float Duration, float FadeOutTime, TEnumAsByte<EEasingFunc::Type> FadeOutFunc, FLinearColor Color)
{
	bEnableFading = true;
	bEFading = true;

	EFadeAlpha = FVector2D(FromAlpha, ToAlpha);
	EFadeInTime = FadeInTime;
	EFadeOutTime = FadeOutTime;
	EFadeDuration = FadeOutTime;
	EFadeTimeRemaining = FadeInTime + Duration + FadeOutTime;
	EFadeInFunc = FadeInFunc;
	EFadeOutFunc = FadeOutFunc;
	FadeColor = Color;

	/** Should sync FadeTimeRemaining in case of immediately stopping camera fade when calling the parent update function. */
	FadeTimeRemaining = EFadeTimeRemaining;
}

void AEPlayerCameraManager::EasyStopCameraFade(float StopAlpha)
{
	if (bEnableFading && bEFading)
	{
		FadeAmount = StopAlpha;
		bEnableFading = false;
		bEFading = false;
	}
}

UCameraShakeBase* AEPlayerCameraManager::StartCameraShakeWave(float Scale, 
															  ECameraShakePlaySpace PlaySpace, 
															  FRotator UserPlaySpaceRot,
															  bool bSingleInstance,
															  float LocationAmplitudeMultiplier, 
															  float LocationFrequencyMultiplier,
															  FWaveOscillator X, 
														  	  FWaveOscillator Y, 
														  	  FWaveOscillator Z,
															  float RotationAmplitudeMultiplier, 
															  float RotationFrequencyMultiplier,
															  FWaveOscillator Pitch, 
															  FWaveOscillator Yaw, 
															  FWaveOscillator Roll, 
															  FWaveOscillator FOV,
															  float Duration, 
															  float BlendInTime, 
															  float BlendOutTime)
{
	if (CachedCameraShakeMod && (Scale > 0.0f))
	{
		UWaveOscillatorCameraShakePattern* WavePattern = NewObject<UWaveOscillatorCameraShakePattern>();
		WavePattern->LocationAmplitudeMultiplier = LocationAmplitudeMultiplier;
		WavePattern->LocationFrequencyMultiplier = LocationFrequencyMultiplier;
		WavePattern->X = X;
		WavePattern->Y = Y;
		WavePattern->Z = Z;
		WavePattern->RotationAmplitudeMultiplier = RotationAmplitudeMultiplier;
		WavePattern->RotationFrequencyMultiplier = RotationFrequencyMultiplier;
		WavePattern->Pitch = Pitch;
		WavePattern->Yaw = Yaw;
		WavePattern->Roll = Roll;
		WavePattern->FOV = FOV;
		WavePattern->Duration = Duration;
		WavePattern->BlendInTime = BlendInTime;
		WavePattern->BlendOutTime = BlendOutTime;

		UCameraShakeBase* CameraShake = Cast<UECameraModifier_CameraShake>(CachedCameraShakeMod)->AddCameraShakeWave(WavePattern, FAddCameraShakeParams(Scale, PlaySpace, UserPlaySpaceRot), bSingleInstance);
		return CameraShake;
	}

	return nullptr;
}

UCameraShakeBase* AEPlayerCameraManager::StartCameraShakePerlin(float Scale,
																ECameraShakePlaySpace PlaySpace,
																FRotator UserPlaySpaceRot,
																bool bSingleInstance,
																float LocationAmplitudeMultiplier,
																float LocationFrequencyMultiplier,
																FPerlinNoiseShaker X,
																FPerlinNoiseShaker Y,
																FPerlinNoiseShaker Z,
																float RotationAmplitudeMultiplier,
																float RotationFrequencyMultiplier,
																FPerlinNoiseShaker Pitch,
																FPerlinNoiseShaker Yaw,
																FPerlinNoiseShaker Roll,
																FPerlinNoiseShaker FOV,
																float Duration,
																float BlendInTime,
																float BlendOutTime)
{
	if (CachedCameraShakeMod && (Scale > 0.0f))
	{
		UPerlinNoiseCameraShakePattern* PerlinPattern = NewObject<UPerlinNoiseCameraShakePattern>();
		PerlinPattern->LocationAmplitudeMultiplier = LocationAmplitudeMultiplier;
		PerlinPattern->LocationFrequencyMultiplier = LocationFrequencyMultiplier;
		PerlinPattern->X = X;
		PerlinPattern->Y = Y;
		PerlinPattern->Z = Z;
		PerlinPattern->RotationAmplitudeMultiplier = RotationAmplitudeMultiplier;
		PerlinPattern->RotationFrequencyMultiplier = RotationFrequencyMultiplier;
		PerlinPattern->Pitch = Pitch;
		PerlinPattern->Yaw = Yaw;
		PerlinPattern->Roll = Roll;
		PerlinPattern->FOV = FOV;
		PerlinPattern->Duration = Duration;
		PerlinPattern->BlendInTime = BlendInTime;
		PerlinPattern->BlendOutTime = BlendOutTime;

		UCameraShakeBase* CameraShake = Cast<UECameraModifier_CameraShake>(CachedCameraShakeMod)->AddCameraShakePerlin(PerlinPattern, FAddCameraShakeParams(Scale, PlaySpace, UserPlaySpaceRot), bSingleInstance);
		return CameraShake;
	}

	return nullptr;
}

UCameraShakeBase* AEPlayerCameraManager::EasyStartCameraShake(float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot, bool bSingleInstance, FPackedOscillationParams ShakeParams)
{
	if (CachedCameraShakeMod && (Scale > 0.0f))
	{
		if (ShakeParams.ShakeType == ECameraShakeType::Wave)
		{
			return StartCameraShakeWave(Scale, 
										PlaySpace, 
										UserPlaySpaceRot, 
										bSingleInstance, 
										ShakeParams.LocationAmplitudeMultiplier, 
										ShakeParams.LocationFrequencyMultiplier,
										ShakeParams.X, 
										ShakeParams.Y, 
										ShakeParams.Z, 
										ShakeParams.RotationAmplitudeMultiplier, 
										ShakeParams.RotationFrequencyMultiplier,
										ShakeParams.Pitch, 
										ShakeParams.Yaw, 
										ShakeParams.Roll, 
										ShakeParams.FOV, 
										ShakeParams.Duration, 
										ShakeParams.BlendInTime, 
										ShakeParams.BlendOutTime
			);
		}
		else
		{
			FPerlinNoiseShaker X     = FPerlinNoiseShaker();
			FPerlinNoiseShaker Y     = FPerlinNoiseShaker();
			FPerlinNoiseShaker Z     = FPerlinNoiseShaker();
			FPerlinNoiseShaker Pitch = FPerlinNoiseShaker();
			FPerlinNoiseShaker Yaw   = FPerlinNoiseShaker();
			FPerlinNoiseShaker Roll  = FPerlinNoiseShaker();
			FPerlinNoiseShaker FOV   = FPerlinNoiseShaker();

			X.Amplitude = ShakeParams.X.Amplitude,          X.Frequency = ShakeParams.X.Frequency;
			Y.Amplitude = ShakeParams.Y.Amplitude,          Y.Frequency = ShakeParams.Y.Frequency;
			Z.Amplitude = ShakeParams.Z.Amplitude,          Z.Frequency = ShakeParams.Z.Frequency;
			Pitch.Amplitude = ShakeParams.Pitch.Amplitude,  Pitch.Frequency = ShakeParams.Pitch.Frequency;
			Yaw.Amplitude = ShakeParams.Yaw.Amplitude,      Yaw.Frequency = ShakeParams.Yaw.Frequency;
			Roll.Amplitude = ShakeParams.Roll.Amplitude,    Roll.Frequency = ShakeParams.Roll.Frequency;
			FOV.Amplitude = ShakeParams.FOV.Amplitude,      FOV.Frequency = ShakeParams.FOV.Frequency;

			return StartCameraShakePerlin(Scale,
										PlaySpace,
										UserPlaySpaceRot,
										bSingleInstance,
										ShakeParams.LocationAmplitudeMultiplier,
										ShakeParams.LocationFrequencyMultiplier,
										X,
										Y,
										Z,
										ShakeParams.RotationAmplitudeMultiplier,
										ShakeParams.RotationFrequencyMultiplier,
										Pitch,
										Yaw,
										Roll,
										FOV,
										ShakeParams.Duration,
										ShakeParams.BlendInTime,
										ShakeParams.BlendOutTime
			);
		}
	}

	return nullptr;
}

float AEPlayerCameraManager::GetBlendedWeight(const float& StartWeight, const float& TargetWeight, const float& BlendTime, const float& ElapsedTime)
{
	float ResultWeight = StartWeight + (TargetWeight - StartWeight) * ElapsedTime / BlendTime;
	if (ResultWeight < UE_SMALL_NUMBER) ResultWeight = 0.f;
	return ResultWeight;
}