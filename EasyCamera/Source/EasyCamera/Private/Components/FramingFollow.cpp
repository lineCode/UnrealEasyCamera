// Copyright 2023 by Sulley. All Rights Reserved.

#include "Components/FramingFollow.h"
#include "Core/ECameraSettingsComponent.h"
#include "Components/ECameraComponentAim.h"
#include "Components/TargetingAim.h"
#include "Utils/ECameraLibrary.h"
#include "Utils/ECameraTypes.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Camera/CameraComponent.h"
#include "Camera/CameraActor.h"
#include "GameFramework/HUD.h"

UFramingFollow::UFramingFollow()
{
	Stage = EStage::PostAim;

	CameraDistance = 200.0f;
	FollowOffset = FVector(0.0f, 0.0f, 0.0f);
	DampParams = FDampParams();
	FollowDamping = FVector(0.0f, 0.0f, 0.0f);
	ScreenOffset = FVector2f(0.0f, 0.0f);
	AdaptiveScreenOffsetDistanceX = FVector2f(200.0f, -100.0f);
	AdaptiveScreenOffsetDistanceY = FVector2f(200.0f, -100.0f);
	ScreenOffsetWidth = FVector2f(-0.1f, 0.1f);
	ScreenOffsetHeight = FVector2f(-0.1f, 0.1f);
	PreviousLocation = FVector(0.0f, 0.0f, 0.0f);
}

void UFramingFollow::UpdateComponent_Implementation(float DeltaTime)
{
	if (FollowTarget != nullptr)
	{
		FVector FollowPosition = GetRealFollowPosition();

		/** Get real screen offset. */
		FVector AimPosition = FVector(0, 0, 0);
		FVector2f RealScreenOffset = FVector2f(0, 0);
		if (GetOwningSettingComponent()->GetAimComponent() != nullptr &&
			GetOwningSettingComponent()->GetAimComponent()->IsA<class UTargetingAim>() &&
			GetOwningSettingComponent()->GetAimComponent()->GetAimTarget() != nullptr)
		{
			AimPosition = GetOwningSettingComponent()->GetAimComponent()->GetRealAimPosition();
			RealScreenOffset = GetAdaptiveScreenOffset(FollowPosition, AimPosition);
		}
		else RealScreenOffset = ScreenOffset;

		/** Transform from world space to local space. */
		FVector LocalSpaceFollowPosition = UECameraLibrary::GetLocalSpacePosition(GetOwningActor(), FollowPosition);

		/** Temporary (before damping) delta position. */
		FVector TempDeltaPosition = FVector(0, 0, 0);

		/** If using float curve, get the adaptive camera distance. */
		float AdaptiveCameraDistance = CameraDistance;
		if (PitchDistanceCurve != nullptr)
		{
			float Pitch = NormalizePitch(GetOwningActor()->GetActorRotation().Pitch);
			AdaptiveCameraDistance = PitchDistanceCurve->GetFloatValue(Pitch);
		}

		/** First move the camera along the local space X axis. */
		SetForwardDelta(LocalSpaceFollowPosition, TempDeltaPosition, AdaptiveCameraDistance);

		/** Then move the camera along the local space YZ plane. */
		SetYZPlaneDelta(LocalSpaceFollowPosition, TempDeltaPosition, RealScreenOffset, AdaptiveCameraDistance);

		/** Get damped delta position. */
		FVector DampedDeltaPosition = DampDeltaPosition(LocalSpaceFollowPosition, TempDeltaPosition, DeltaTime, RealScreenOffset);

		/** Store current position. */
		PreviousLocation = GetOwningActor()->GetActorLocation();

		/** Apply damped delta position. */
		GetOwningActor()->AddActorLocalOffset(DampedDeltaPosition);

		/** Update variables for HUD. */
		RealFollowPosition = FollowPosition;
		LocalFollowPosition = LocalSpaceFollowPosition;
	}
}

FVector UFramingFollow::GetRealFollowPosition()
{
	FVector ActorLocation = FollowTarget->GetActorLocation();
	FRotator ActorRotation = FollowTarget->GetActorRotation();
	FVector LocalOffset = UKismetMathLibrary::GreaterGreater_VectorRotator(FollowOffset, ActorRotation);

	return ActorLocation + LocalOffset;
}

FVector2f UFramingFollow::GetAdaptiveScreenOffset(const FVector& FollowPosition, const FVector& AimPosition)
{
	FVector Diff = FollowPosition - AimPosition;
	float ProjectedDistance = FMath::Sqrt(FMath::Square(Diff.X) + FMath::Square(Diff.Y));

	FVector2f OutRange = FVector2f(1.0f, 0.0f);
	FVector2f RealScreenOffset;
	RealScreenOffset.X = ScreenOffset.X * FMath::GetMappedRangeValueClamped(AdaptiveScreenOffsetDistanceX, OutRange, ProjectedDistance);
	RealScreenOffset.Y = ScreenOffset.Y * FMath::GetMappedRangeValueClamped(AdaptiveScreenOffsetDistanceY, OutRange, ProjectedDistance);

	return RealScreenOffset;
}

float UFramingFollow::NormalizePitch(float Pitch)
{
	float NormalizedPitch = Pitch;
	while (Pitch > 90) Pitch -= 360;
	while (Pitch < -90) Pitch += 360;
	return NormalizedPitch;
}

void UFramingFollow::SetForwardDelta(const FVector& LocalSpaceFollowPosition, FVector& TempDeltaPosition, float RealCameraDistance)
{
	TempDeltaPosition.X = LocalSpaceFollowPosition.X - RealCameraDistance;
}

void UFramingFollow::SetYZPlaneDelta(const FVector& LocalSpaceFollowPosition, FVector& TempDeltaPosition, const FVector2f& RealScreenOffset, float RealCameraDistance)
{
	float W = UKismetMathLibrary::DegTan(OwningCamera->GetCameraComponent()->FieldOfView / 2.0f) * RealCameraDistance * 2.0f;
	float ExpectedPositionY = W * RealScreenOffset.X;
	float ExpectedPositionZ = W / OwningCamera->GetCameraComponent()->AspectRatio * RealScreenOffset.Y;

	TempDeltaPosition.Y = LocalSpaceFollowPosition.Y - ExpectedPositionY;
	TempDeltaPosition.Z = LocalSpaceFollowPosition.Z - ExpectedPositionZ;
}

FVector UFramingFollow::DampDeltaPosition(const FVector& LocalSpaceFollowPosition, const FVector& TempDeltaPosition, float DeltaTime, const FVector2f& RealScreenOffset)
{
	FVector DampedDeltaPosition = FVector(0, 0, 0);
	if (DampParams.DampMethod != EDampMethod::Spring) UECameraLibrary::DamperVectorWithDifferentDampTime(DampParams, DeltaTime, TempDeltaPosition, FollowDamping, DampedDeltaPosition);
	else UECameraLibrary::SpringDampVector(DampParams, DeltaTime, GetOwningActor()->GetActorLocation() - PreviousLocation, TempDeltaPosition, DampedDeltaPosition);
	EnsureWithinBounds(LocalSpaceFollowPosition, DampedDeltaPosition, RealScreenOffset);

	return DampedDeltaPosition;
}

void UFramingFollow::EnsureWithinBounds(const FVector& LocalSpaceFollowPosition, FVector& DampedDeltaPosition, const FVector2f& RealScreenOffset)
{
	FVector ResultLocalSpacePosition = LocalSpaceFollowPosition - DampedDeltaPosition;

	float Width = UKismetMathLibrary::DegTan(OwningCamera->GetCameraComponent()->FieldOfView / 2.0f) * FMath::Abs(ResultLocalSpacePosition.X) * 2.0f;
	float LeftBound = (RealScreenOffset.X + ScreenOffsetWidth.X) * Width;
	float RightBound = (RealScreenOffset.X + ScreenOffsetWidth.Y) * Width;
	float BottomBound = (RealScreenOffset.Y + ScreenOffsetHeight.X) * Width / OwningCamera->GetCameraComponent()->AspectRatio;
	float TopBound = (RealScreenOffset.Y + ScreenOffsetHeight.Y) * Width / OwningCamera->GetCameraComponent()->AspectRatio;
	
	if (ResultLocalSpacePosition.Y < LeftBound)   DampedDeltaPosition.Y += ResultLocalSpacePosition.Y - LeftBound;
	if (ResultLocalSpacePosition.Y > RightBound)  DampedDeltaPosition.Y += ResultLocalSpacePosition.Y - RightBound;
	if (ResultLocalSpacePosition.Z < BottomBound) DampedDeltaPosition.Z += ResultLocalSpacePosition.Z - BottomBound;
	if (ResultLocalSpacePosition.Z > TopBound)    DampedDeltaPosition.Z += ResultLocalSpacePosition.Z - TopBound;
}