// Copyright 2023 by Sulley. All Rights Reserved.


#include "Utils/ECameraLibrary.h"
#include "Utils/EAnimatedCamera.h"
#include "Core/ECameraBase.h"
#include "Core/ECameraSettingsComponent.h"
#include "Core/ECameraManager.h"
#include "Core/EPlayerCameraManager.h"
#include "Extensions/AnimatedCameraExtension.h"
#include "Engine/Engine.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"


void UECameraLibrary::DamperValue(const FDampParams& DampParams, const float& DeltaSeconds, const float& Input, float DampTime, double& Output)
{
	if (DeltaSeconds <= 0) { Output = 0.0f; return; }
	if (DampTime <= 0) { Output = Input; return; }

	switch (DampParams.DampMethod)
	{
		case EDampMethod::Naive:
		{
			float lnResidual = FMath::Loge(DampParams.Residual);
			Output = Input * (1.0f - FMath::Exp(lnResidual * DeltaSeconds / DampTime));
		}
		break;
		case EDampMethod::Simulate:
		{
			const int n = 10; // Split DeltaSeconds into *n* equally distributed segments
			float lnResidual = FMath::Loge(DampParams.Residual);
			float ratio = FMath::Exp(lnResidual * DeltaSeconds / n / DampTime);
			Output = Input - Input / n * ratio * (1.0f - FMath::Exp(lnResidual * DeltaSeconds / DampTime)) / (1.0f - ratio);
		}
		break;
		default:
			Output = Input;
		return;
	}
}

void UECameraLibrary::DamperVectorWithSameDampTime(const FDampParams& DampParams, const float& DeltaSeconds, const FVector& Input, float DampTime, FVector& Output)
{
	DamperValue(DampParams, DeltaSeconds, Input.X, DampTime, Output.X);
	DamperValue(DampParams, DeltaSeconds, Input.Y, DampTime, Output.Y);
	DamperValue(DampParams, DeltaSeconds, Input.Z, DampTime, Output.Z);
}

void UECameraLibrary::DamperVectorWithDifferentDampTime(const FDampParams& DampParams, const float& DeltaSeconds, const FVector& Input, FVector DampTime, FVector& Output)
{
	DamperValue(DampParams, DeltaSeconds, Input.X, DampTime.X, Output.X);
	DamperValue(DampParams, DeltaSeconds, Input.Y, DampTime.Y, Output.Y);
	DamperValue(DampParams, DeltaSeconds, Input.Z, DampTime.Z, Output.Z);
}

void UECameraLibrary::DamperRotatorWithSameDampTime(const FDampParams& DampParams, const float& DeltaSeconds, const FRotator& Input, float DampTime, FRotator& Output)
{
	DamperValue(DampParams, DeltaSeconds, Input.Pitch, DampTime, Output.Pitch);
	DamperValue(DampParams, DeltaSeconds, Input.Yaw, DampTime, Output.Yaw);
	DamperValue(DampParams, DeltaSeconds, Input.Roll, DampTime, Output.Roll);
}

void UECameraLibrary::DamperRotatorWithDifferentDampTime(const FDampParams& DampParams, const float& DeltaSeconds, const FRotator& Input, FVector DampTime, FRotator& Output)
{
	DamperValue(DampParams, DeltaSeconds, Input.Roll, DampTime.X, Output.Roll);
	DamperValue(DampParams, DeltaSeconds, Input.Pitch, DampTime.Y, Output.Pitch);
	DamperValue(DampParams, DeltaSeconds, Input.Yaw, DampTime.Z, Output.Yaw);
}

/** 
* @TODO: This function needs to be improved for more stable behaviour. Maybe some time later.
*/
void UECameraLibrary::SpringDampVector(const FDampParams& DampParams, const float& DeltaSeconds, const FVector& TemporalInput, const FVector& SpatialInput, FVector& Output)
{
	if (DampParams.DampMethod == EDampMethod::Spring)
	{
		FVector SpatialDelta = SpatialInput;
		FVector TemporalDelta = TemporalInput;

		FVector Acceleration;
		float RemainingTime = DeltaSeconds; 
		Output = FVector(0, 0, 0);
		while (RemainingTime > UE_KINDA_SMALL_NUMBER)
		{
			const float DampTime = FMath::Min(DampParams.MaxDeltaSeconds, RemainingTime);
			Acceleration = DampParams.SpringCoefficient * SpatialDelta;
			TemporalDelta = (1 - DampParams.SpringResidual) * TemporalDelta + DampTime * DampTime * Acceleration;
			SpatialDelta -= TemporalDelta;
			Output += TemporalDelta;
			RemainingTime -= DampTime;
		}
	}
}

void UECameraLibrary::ExactSpringDamperVector(const FVector& CurrentVector, const FVector& CurrentVelocity, const FVector& TargetVector, const FVector& TargetVelocity, FVector DampRatio, FVector HalfLife, const float& DeltaSeconds, FVector& OutVector, FVector& OutVelocity)
{
	ExactSpringDamperValue(CurrentVector[0], CurrentVelocity[0], TargetVector[0], TargetVelocity[0], DampRatio[0], HalfLife[0], DeltaSeconds, OutVector[0], OutVelocity[0]);
	ExactSpringDamperValue(CurrentVector[1], CurrentVelocity[1], TargetVector[1], TargetVelocity[1], DampRatio[1], HalfLife[1], DeltaSeconds, OutVector[1], OutVelocity[1]);
	ExactSpringDamperValue(CurrentVector[2], CurrentVelocity[2], TargetVector[2], TargetVelocity[2], DampRatio[2], HalfLife[2], DeltaSeconds, OutVector[2], OutVelocity[2]);
}


/** @TODO: Needs to be improved. */
void UECameraLibrary::ExactSpringDamperValue(const double& CurrentValue, const double& CurrentVelocity, const float& TargetValue, const float& TargetVelocity, float DampRatio, float HalfLife, const float& DeltaSeconds, double& OutValue, double& OutVelocity)
{
	float G = TargetValue;
	float Q = TargetVelocity;
	float D = (4.0f * 0.69314718056f) / (HalfLife + 1e-8f);
	float S = FMath::Square<float>(D / (DampRatio * 2.0f));
	float C = G + (D * Q) / (S + 1e-8f);
	float Y = D / 2.0f;

	// Critically damped
	if (FMath::Abs(S - D * D / 4.0f) < 1e-5f)
	{
		float J0 = CurrentValue - C;
		float J1 = CurrentVelocity + J0 * Y;

		float YDt = Y * DeltaSeconds;
		float E = 1.0f / (1.0f + YDt + 0.48f * YDt * YDt + 0.235f * YDt * YDt * YDt);

		OutValue = J0 * E + DeltaSeconds * J1 * E + C;
		OutVelocity = -Y * J0 * E - Y * DeltaSeconds * J1 * E + J1 * E;
	}
	// Under damped
	else if (S - D * D / 4.0f > 0.0f)
	{
		float W = FMath::Sqrt(S - D * D / 4.0f);
		float J = FMath::Sqrt(FMath::Square<float>(CurrentVelocity + Y * (CurrentValue - C)) / (W * W + 1e-8f) + FMath::Square<float>(CurrentValue - C));
		float P = FastAtan((CurrentVelocity + (CurrentValue - C) * Y) / (-(CurrentValue - C) * W + 1e-8f));

		J = (CurrentValue - C) > 0.0f ? J : -J;

		float YDt = Y * DeltaSeconds;
		float E = 1.0f / (1.0f + YDt + 0.48f * YDt * YDt + 0.235f * YDt * YDt * YDt);

		OutValue = J * E * FMath::Cos(W * DeltaSeconds + P) + C;
		OutVelocity = -Y * J * E * FMath::Cos(W * DeltaSeconds + P) - W * J * E * FMath::Sin(W * DeltaSeconds + P);
	}
	// Over damped
	else if (S - D * D / 4.0f < 0.0f)
	{
		float Y0 = (D + FMath::Sqrt(D * D - 4.0f * S)) / 2.0f;
		float Y1 = (D - FMath::Sqrt(D * D - 4.0f * S)) / 2.0f;
		float J1 = (C * Y0 - CurrentValue * Y0 - CurrentVelocity) / (Y1 - Y0);
		float J0 = CurrentValue - J1 - C;

		float Y0Dt = Y0 * DeltaSeconds;
		float Y1Dt = Y1 * DeltaSeconds;
		float E0 = 1.0f / (1.0f + Y0Dt + 0.48f * Y0Dt * Y0Dt + 0.235f * Y0Dt * Y0Dt * Y0Dt);
		float E1 = 1.0f / (1.0f + Y1Dt + 0.48f * Y1Dt * Y1Dt + 0.235f * Y1Dt * Y1Dt * Y1Dt);

		OutValue = J0 * E0 + J1 * E1 + C;
		OutVelocity = -Y0 * J0 * E0 - Y1 * J1 * E1;
	}
}

float UECameraLibrary::FastAtan(float x)
{
	float Z = FMath::Abs(x);
	float W = Z > 1.0f ? 1.0f / Z : Z;
	float Pi = 3.14159265359;
	float Y = (Pi / 4.0f) * W - W * (W - 1) * (0.2447f + 0.0663f * W);
	return Z > 1.0 ? Pi / 2.0 - Y : Y;
}

void UECameraLibrary::DamperQuaternion(const FQuat& Quat1, const FQuat& Quat2, const float& DeltaSeconds, float DampTime, FQuat& Output)
{
	double T;
	DamperValue(FDampParams(), DeltaSeconds, 1, DampTime, T);
	Output = FQuat::Slerp(Quat1, Quat2, T);
}

FVector UECameraLibrary::GetLocalSpacePosition(const AActor* Camera, const FVector& InputPosition)
{
	FVector Diff = InputPosition - Camera->GetActorLocation();

	FVector ForwardVector = Camera->GetActorForwardVector();
	FVector RightVector = Camera->GetActorRightVector();
	FVector UpVector = Camera->GetActorUpVector();

	FVector LocalSpaceFollowPosition =
		UKismetMathLibrary::MakeVector(ForwardVector.X, RightVector.X, UpVector.X) * Diff.X +
		UKismetMathLibrary::MakeVector(ForwardVector.Y, RightVector.Y, UpVector.Y) * Diff.Y +
		UKismetMathLibrary::MakeVector(ForwardVector.Z, RightVector.Z, UpVector.Z) * Diff.Z;

	return LocalSpaceFollowPosition;
}

FVector UECameraLibrary::GetLocalSpacePositionWithVectors(const FVector& PivotPosition, const FVector& ForwardVector, const FVector& RightVector, const FVector& UpVector, const FVector& InputPosition)
{
	FVector Diff = InputPosition - PivotPosition;

	FVector LocalSpaceFollowPosition =
		UKismetMathLibrary::MakeVector(ForwardVector.X, RightVector.X, UpVector.X) * Diff.X +
		UKismetMathLibrary::MakeVector(ForwardVector.Y, RightVector.Y, UpVector.Y) * Diff.Y +
		UKismetMathLibrary::MakeVector(ForwardVector.Z, RightVector.Z, UpVector.Z) * Diff.Z;

	return LocalSpaceFollowPosition;
}

AECameraBase* UECameraLibrary::CallCamera(const UObject* WorldContextObject,        // World context object.
										  TSubclassOf<AECameraBase> CameraClass,    // Camera class inherited from AECameraClass.
								          FVector SpawnLocation,                    // Spawn location, default is origin.
										  FRotator SpawnRotation,                   // Spawn rotation, default is identity.
										  AActor* FollowTarget,                     // Follow target, can be null.
									      AActor* AimTarget,                        // Aim target, can be null.
										  float BlendTime,                          // Blend time from prior camera.
										  enum EViewTargetBlendFunction BlendFunc,  // Blend function.
										  float BlendExp,							// Blend exponential.
										  bool bLockOutgoing,						// Whether to lock outgoing frame.
	                                      bool bIsTransitory,						// Whether it is transitory.
										  float LifeTime,							// The life time.
										  bool bPreserveState						// Whether to preserve camera state.
										)
{
	AECameraBase* Camera;

	UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull);
	AActor* CameraActor = UGameplayStatics::GetActorOfClass(WorldContextObject, CameraClass);
	if (CameraActor == nullptr && World != nullptr)
	{
		Camera = CastChecked<AECameraBase>(World->SpawnActor(CameraClass));
	}
	else
	{
		Camera = CastChecked<AECameraBase>(CameraActor);
	}

	Camera->GetSettingsComponent()->SetFollowTarget(FollowTarget);
	Camera->GetSettingsComponent()->SetAimTarget(AimTarget);

	/** Set camera location and rotation. */
	Camera->SetActorLocation(SpawnLocation);
	Camera->SetActorRotation(SpawnRotation);

	/** Prepared to blend to the new camera. */
	if (World != nullptr)
	{
		/** Initialization. */
		Camera->ResetOnBecomeViewTarget(bIsTransitory, LifeTime, bPreserveState);

		/** Blend to new camera. This will automatically call old camera's EndViewTarget and new camera's BecomeViewTarget. */
		APlayerController* PC = UGameplayStatics::GetPlayerController(World, 0);
		PC->SetViewTargetWithBlend(Camera, BlendTime, BlendFunc, BlendExp, bLockOutgoing);
	}

	return Camera;
}

AECameraBase* UECameraLibrary::CallAnimatedCamera(const UObject* WorldContextObject,            // World context object.
												  UAnimSequence* AnimToPlay,                    // Animation sequence to play.
												  AActor* RefCoordinateActor,					// In which actor's local space you want to play the camera animation.
												  FTransform RefCoordinate,                     // In which reference frame you want to play the camera animation.
												  FVector PositionOffset,						// Position offset, in reference space.
												  float BlendTime,								// Blend time from prior camera.
												  enum EViewTargetBlendFunction BlendFunc,		// Blend function
												  float BlendExp,								// Blend exponential.
												  bool bLockOutgoing)							// Whether to lock outgoing frame.
{
	AEAnimatedCamera* Camera;

	UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull);
	AActor* CameraActor = UGameplayStatics::GetActorOfClass(WorldContextObject, AEAnimatedCamera::StaticClass());
	if (CameraActor == nullptr && World != nullptr)
	{
		Camera = CastChecked<AEAnimatedCamera>(World->SpawnActor(AEAnimatedCamera::StaticClass()));
	}
	else
	{
		Camera = CastChecked<AEAnimatedCamera>(CameraActor);
	}

	UAnimatedCameraExtension* AnimatedCameraExtension = Cast<UAnimatedCameraExtension>(Camera->GetSettingsComponent()->GetExtensions()[0]);
	if (AnimatedCameraExtension)
	{
		AnimatedCameraExtension->SetAnim(AnimToPlay);
		AnimatedCameraExtension->SetRefActor(RefCoordinateActor);
		AnimatedCameraExtension->SetRef(RefCoordinate);
		AnimatedCameraExtension->SetOffset(PositionOffset);
	}

	if (World != nullptr)
	{
		APlayerController* PC = UGameplayStatics::GetPlayerController(World, 0);
		PC->SetViewTargetWithBlend(Camera, BlendTime, BlendFunc, BlendExp, bLockOutgoing);
	}

	return Camera;
}

void UECameraLibrary::TerminateActiveCamera(const UObject* WorldContextObject)
{
	UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull);
	AECameraManager* Manager = Cast<AECameraManager>(UGameplayStatics::GetActorOfClass(World, AECameraManager::StaticClass()));
	if (Manager != nullptr) Manager->TerminateActiveCamera();
}

AECameraBase* UECameraLibrary::GetActiveCamera(const UObject* WorldContextObject)
{
	AActor* ManagerActor = UGameplayStatics::GetActorOfClass(WorldContextObject, AECameraManager::StaticClass());
	if (ManagerActor != nullptr)
	{
		return Cast<AECameraManager>(ManagerActor)->GetActiveCamera();
	}
	else return nullptr;
}

AEPlayerCameraManager* UECameraLibrary::GetEPlayerCameraManager(const UObject* WorldContextObject, int32 index)
{
	APlayerCameraManager* Manager = UGameplayStatics::GetPlayerCameraManager(WorldContextObject, index);
	return Cast<AEPlayerCameraManager>(Manager);
}

FVector UECameraLibrary::GetPositionWithLocalOffset(AActor* TargetActor, const FVector& Offset)
{
	FVector ActorLocation = TargetActor->GetActorLocation();
	FRotator ActorRotation = TargetActor->GetActorRotation();
	FVector LocalOffset = UKismetMathLibrary::GreaterGreater_VectorRotator(Offset, ActorRotation);

	return ActorLocation + LocalOffset;
}

FVector UECameraLibrary::GetPositionWithLocalRotatedOffset(const FVector& Position, const FRotator& Rotation, const FVector& Offset)
{
	return Position + UKismetMathLibrary::GreaterGreater_VectorRotator(Offset, Rotation);
}