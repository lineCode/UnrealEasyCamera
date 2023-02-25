// Copyright 2023 by Sulley. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "WaveOscillatorCameraShakePattern.h"
#include "PerlinNoiseCameraShakePattern.h"
#include "Utils/ECameraTypes.h"
#include "Engine/Scene.h"
#include "Camera/CameraTypes.h"
#include "UObject/ScriptInterface.h"
#include "EPlayerCameraManager.generated.h"

class IBlendableInterface;

/**
 * This is the customized player camera manager. The main goal is to enable adding and clearing camera post processing effects,
 * such as depth of field, bloom, exposure, color grading, etc. Later uses, if necessary, will further extend this class.
 */
UCLASS(classGroup = "ECamera")
class EASYCAMERA_API AEPlayerCameraManager : public APlayerCameraManager
{
	GENERATED_BODY()

public:
	AEPlayerCameraManager(const FObjectInitializer& ObjectInitializer);

protected:
	FPostProcessSettings PostProcessMaterialSettings;
	TArray<FWeightedPostProcess> WeightedPostProcesses;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaterialWeight = 1.0f;

	bool bEFading = false;
	FVector2D EFadeAlpha;
	float EFadeInTime;
	float EFadeOutTime;
	float EFadeDuration;
	float EFadeTimeRemaining;
	TEnumAsByte<EEasingFunc::Type> EFadeInFunc;
	TEnumAsByte<EEasingFunc::Type> EFadeOutFunc;

public:
	virtual void ApplyCameraModifiers(float DeltaTime, FMinimalViewInfo& InOutPOV) override;

protected:
	virtual void DoUpdateCamera(float DeltaTime) override;

public:
	/** Applies a post process material to the player camera manager. 
	 *  @param InBlendableObject - The post process material to add.
	 *  @param InWeight - Amount of influence the post process effect will have. 1 means full effect, while 0 means no effect.
	 *  @TODO: removing reference will crash engine. I do not know why, but there might be a workaround. 
	 */
	UFUNCTION(BlueprintCallable, Category = "ECamera|PostProcess")
	void AddBlendable(const TScriptInterface<IBlendableInterface>& InBlendableObject, const float InWeight = 1.f);

	/** Removes a post process material added to the player camera manager.
	 *  @param InBlendableObject - The post process material to remove.
	 *  @TODO: removing reference will crash engine. I do not know why, but there might be a workaround. 
	 */
	UFUNCTION(BlueprintCallable, Category = "ECamera|PostProcess")
	void RemoveBlendable(const TScriptInterface<IBlendableInterface>& InBlendableObject);

	/** Add a post process to the player camera manager.
	 *  @param InPostProcess - The post process setting to add.
	 *  @param InWeight - Amount of influence the post process effect will have. 1 means full effect, while 0 means no effect.
	 *  @param InBlendInTime - Time used to blend into this post process.
	 *	@param InDuration - Duration for this post process. Set as 0 to keep it infinite.
	 *  @param InBlendOutTime - Time used to blend out of this post process.
  	 */
	UFUNCTION(BlueprintCallable, Category = "ECamera|PostProcess")
	void AddPostProcess(const FPostProcessSettings& InPostProcess, const float InWeight = 1.f, const float InBlendInTime = 0.5f, const float InDuration = 0.0f, const float InBlendOutTime = 0.5f);

	/** Removes all completed post processes. */
	UFUNCTION(BlueprintCallable, Category = "ECamera|PostProcess")
	void RemoveCompletedPostProcesses();

	/** Clears all post processes. */
	UFUNCTION(BlueprintCallable, Category = "ECamera|PostProcess")
	void RemoveAllPostProcesses();

	/**
	 * Does a camera fade to a solid color and then fades back.  Animates automatically.
	 * @param FromAlpha - Alpha at which to begin the fade. Range [0..1], where 0 is fully transparent and 1 is fully opaque solid color.
	 * @param ToAlpha - Alpha at which to finish in-fade.
	 * @param FadeInTime - How long the in-fade should take, in seconds.
	 * @param FadeInFunc - Blend function for in-fade.
	 * @param Duration - How long ToAlpha remains after finishing in-fase, in seconds.
	 * @param FadeOutTime - How long the out-fade should take, in seconds.
	 * @param FadeOutFunc - Blend function for out-fade.
	 * @param Color - Color to fade to/from.
	 */
	UFUNCTION(BlueprintCallable, Category = "ECamera|CameraFade")
	virtual void EasyStartCameraFade(float FromAlpha, float ToAlpha, float FadeInTime, TEnumAsByte<EEasingFunc::Type> FadeInFunc, float Duration, float FadeOutTime, TEnumAsByte<EEasingFunc::Type> FadeOutFunc, FLinearColor Color);

	/**
	 * Stops camera fading.
	 * @param StopAlpha - Alpha at which fade stops.
	 */
	UFUNCTION(BlueprintCallable, Category = "ECamera|CameraFade")
	virtual void EasyStopCameraFade(float StopAlpha = 0.0f);

	/** Start camera shake using Wave Oscillator pattern. 
	 * @param Scale - Scalar defining how intense to play the shake. 1.0 is normal.
	 * @param PlaySpace - Which coordinate system to play the shake in (affects oscillations and camera anims).
	 * @param UserPlaySpaceRot - Coordinate system to play shake when PlaySpace == UserDefined.
	 * @param bSingleInstance - If true, only allow a single instance of this shake class to play at each time. Subsequent attempts to play this shake will simply restart the timer.
	 * @param LocationAmplitudeMultiplier - Amplitude multiplier for all location shake.
	 * @param LocationFrequencyMultiplier - Frequency multiplier for all location shake.
	 * @param X - Shake in the X axis.
	 * @param Y - Shake in the Y axis.
	 * @param Z - Shake in the Z axis.
	 * @param RotationAmplitudeMultiplier - Amplitude multiplier for all rotation shake.
	 * @param RotationFrequencyMultiplier - Frequency multiplier for all rotation shake.
	 * @param Pitch - Pitch shake.
	 * @param Yaw - Yaw shake.
	 * @param Roll - Roll shake.
	 * @param FOV - FOV shake.
	 * @param Duration - Duration in seconds of this shake. Zero or less means infinity.
	 * @param BlendInTime - Blend-in time for this shake. Zero or less means no blend-in.
	 * @param BlendOutTime - Blend-out time for this shake. Zero or less means no blend-out.
	 */
	UFUNCTION(BlueprintCallable, Category = "ECamera|CameraShake", meta = (DisplayName = "StartCameraShake(Wave)", AdvancedDisplay = 3))
	virtual UCameraShakeBase* StartCameraShakeWave(float Scale, 
												   ECameraShakePlaySpace PlaySpace, 
												   FRotator UserPlaySpaceRot, 
												   bool bSingleInstance = false,
												   float LocationAmplitudeMultiplier = 1.f, 
												   float LocationFrequencyMultiplier = 1.f, 
												   FWaveOscillator X = FWaveOscillator(), 
												   FWaveOscillator Y = FWaveOscillator(), 
												   FWaveOscillator Z = FWaveOscillator(),
												   float RotationAmplitudeMultiplier = 1.f, 
												   float RotationFrequencyMultiplier = 1.f, 
												   FWaveOscillator Pitch = FWaveOscillator(), 
												   FWaveOscillator Yaw = FWaveOscillator(), 
												   FWaveOscillator Roll = FWaveOscillator(), 
												   FWaveOscillator FOV = FWaveOscillator(),
												   float Duration = 1.f, 
												   float BlendInTime = 0.2f, 
												   float BlendOutTime = 0.2f);

	/** Start camera shake using Perlin Noise pattern. 
	 * @param Scale - Scalar defining how intense to play the shake. 1.0 is normal.
	 * @param PlaySpace - Which coordinate system to play the shake in (affects oscillations and camera anims).
	 * @param UserPlaySpaceRot - Coordinate system to play shake when PlaySpace == UserDefined.
	 * @param bSingleInstance - If true, only allow a single instance of this shake class to play at each time. Subsequent attempts to play this shake will simply restart the timer.
	 * @param LocationAmplitudeMultiplier - Amplitude multiplier for all location shake.
	 * @param LocationFrequencyMultiplier - Frequency multiplier for all location shake.
	 * @param X - Shake in the X axis.
	 * @param Y - Shake in the Y axis.
	 * @param Z - Shake in the Z axis.
	 * @param RotationAmplitudeMultiplier - Amplitude multiplier for all rotation shake.
	 * @param RotationFrequencyMultiplier - Frequency multiplier for all rotation shake.
	 * @param Pitch - Pitch shake.
	 * @param Yaw - Yaw shake.
	 * @param Roll - Roll shake.
	 * @param FOV - FOV shake.
	 * @param Duration - Duration in seconds of this shake. Zero or less means infinity.
	 * @param BlendInTime - Blend-in time for this shake. Zero or less means no blend-in.
	 * @param BlendOutTime - Blend-out time for this shake. Zero or less means no blend-out.
	 */
	UFUNCTION(BlueprintCallable, Category = "ECamera|CameraShake", meta = (DisplayName = "StartCameraShake(Perlin)", AdvancedDisplay = 3))
	virtual UCameraShakeBase* StartCameraShakePerlin(float Scale,
												 	 ECameraShakePlaySpace PlaySpace,
													 FRotator UserPlaySpaceRot,
													 bool bSingleInstance = false,
													 float LocationAmplitudeMultiplier = 1.f,
													 float LocationFrequencyMultiplier = 1.f,
													 FPerlinNoiseShaker X = FPerlinNoiseShaker(),
													 FPerlinNoiseShaker Y = FPerlinNoiseShaker(),
													 FPerlinNoiseShaker Z = FPerlinNoiseShaker(),
													 float RotationAmplitudeMultiplier = 1.f,
													 float RotationFrequencyMultiplier = 1.f,
													 FPerlinNoiseShaker Pitch = FPerlinNoiseShaker(),
													 FPerlinNoiseShaker Yaw = FPerlinNoiseShaker(),
													 FPerlinNoiseShaker Roll = FPerlinNoiseShaker(),
													 FPerlinNoiseShaker FOV = FPerlinNoiseShaker(),
													 float Duration = 1.f,
													 float BlendInTime = 0.2f,
													 float BlendOutTime = 0.2f);

	/** Start camera shake with packed oscillation parameters.
	 * @param Scale - Scalar defining how intense to play the shake. 1.0 is normal.
	 * @param PlaySpace - Which coordinate system to play the shake in (affects oscillations and camera anims).
	 * @param UserPlaySpaceRot - Coordinate system to play shake when PlaySpace == UserDefined.
	 * @param bSingleInstance - If true, only allow a single instance of this shake class to play at each time. Subsequent attempts to play this shake will simply restart the timer.
	 * @param ShakeParams - Packed oscillation parameters.
	 */
	UFUNCTION(BlueprintCallable, Category = "ECamera|CameraShake", meta = (DisplayName = "EasyStartCameraShake"))
	virtual UCameraShakeBase* EasyStartCameraShake(float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot, bool bSingleInstance = false, FPackedOscillationParams ShakeParams = FPackedOscillationParams());

private:
	float GetBlendedWeight(const float& StartWeight, const float& TargetWeight, const float& BlendTime, const float& ElapsedTime);
};
