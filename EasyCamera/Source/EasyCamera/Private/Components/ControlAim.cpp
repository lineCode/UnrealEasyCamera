// Copyright 2023 by Sulley. All Rights Reserved.

#include "Components/ControlAim.h"
#include "Components/OrbitFollow.h"
#include "Utils/ECameraLibrary.h"
#include "Utils/ECameraTypes.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/Engine.h"
#include "Engine/World.h"

UControlAim::UControlAim()
{
	Stage = EStage::Aim;

	HorizontalHeading = EHeading::WorldForward;
	HorizontalHardForward = FVector(1, 0, 0);
	HorizontalRange = FVector2f(-180, 180);
	VerticalRange = FVector2f(-70, 70);
	bWrap = true;
	HorizontalSpeed = 1.0f;
	VerticalSpeed = 1.0f;
	HorizontalDamping = FVector2f(0.2f, 0.2f);
	VerticalDamping = FVector2f(0.2f, 0.2f);
	bSyncToController = false;

	CachedMouseDeltaX = 0.0f;
	CachedMouseDeltaY = 0.0f;
	WaitElaspedTime = 0.0f;
}

void UControlAim::UpdateComponent_Implementation(float DeltaTime)
{
	GetMouseDelta();
	
	/** Resolve recentering. */
	if (ResolveRecentering(DeltaTime))
	{
		CachedMouseDeltaX = 0;
		CachedMouseDeltaY = 0;
		return;
	}

	/** Apply speed multiplier. */
	float ResultDeltaX = RawMouseDeltaX * HorizontalSpeed;
	float ResultDeltaY = RawMouseDeltaY * VerticalSpeed;
	
	/** Damp, constrain and set camera yaw. */
	ResultDeltaX += GetDampedMouseDelta(ResultDeltaX, true, DeltaTime);
	float WrapYaw = ConstrainYaw(ResultDeltaX);
	GetOwningActor()->AddActorWorldRotation(FRotator(0, ResultDeltaX + WrapYaw, 0));

	/** Damp, constrain and set camera pitch. */
	ResultDeltaY += GetDampedMouseDelta(ResultDeltaY, false, DeltaTime);
	ConstrainPitch(ResultDeltaY);
	GetOwningActor()->AddActorLocalRotation(FRotator(ResultDeltaY, 0, 0));

	/** Update cached delta. */
	CachedMouseDeltaX = ResultDeltaX;
	CachedMouseDeltaY = ResultDeltaY;

	/** Sync with Controller. */
	if (bSyncToController)
	{
		GetOwningSettingComponent()->GetPlayerController()->SetControlRotation(GetOwningActor()->GetActorRotation());
	}
}

/**
 * @TODO: Maybe should figure out a more robust way to get mouse delta.
 * EnhancedInput might be a workaround.
 */
void UControlAim::GetMouseDelta()
{
	GetOwningSettingComponent()->GetPlayerController()->GetInputMouseDelta(RawMouseDeltaX, RawMouseDeltaY);
}

float UControlAim::GetDampedMouseDelta(const float& MouseDelta, bool bIsHorizontal, const float& DeltaTime)
{
	float DampTime;
	if (bIsHorizontal) DampTime = FMath::Abs(MouseDelta) < FMath::Abs(CachedMouseDeltaX) ? HorizontalDamping.Y : HorizontalDamping.X;
	else DampTime = FMath::Abs(MouseDelta) < FMath::Abs(CachedMouseDeltaY) ? VerticalDamping.Y : VerticalDamping.X;

	double Output = 0;
	UECameraLibrary::DamperValue(FDampParams(), DeltaTime, (bIsHorizontal ? MouseDelta - CachedMouseDeltaX : MouseDelta - CachedMouseDeltaY), DampTime, Output);
	return Output;
}

bool UControlAim::ResolveRecentering(const float& DeltaTime)
{
	if (RecenteringParams.bRecentering)
	{
		/** If input is not zero, return false. */
		if (RawMouseDeltaX != 0 || RawMouseDeltaX != 0)
		{
			WaitElaspedTime = 0;
			return false;
		}

		WaitElaspedTime += DeltaTime;
		if (WaitElaspedTime >= RecenteringParams.WaitTime)
		{
			FQuat TargetQuat = GetRecenteringTargetQuat();
			FQuat OutputQuat;
			UECameraLibrary::DamperQuaternion(GetOwningActor()->GetActorQuat(), TargetQuat, DeltaTime, RecenteringParams.RecenteringTime, OutputQuat);

			/** Set roll to 0, and apply to camera. */
			FRotator OutputRotation = OutputQuat.Rotator();
			OutputRotation.Roll = 0;
			GetOwningActor()->SetActorRotation(OutputRotation);
			return true;
		}
		else return false;
	}
	else return false;
}

FQuat UControlAim::GetRecenteringTargetQuat()
{
	FRotator TargetRotation = FRotator::ZeroRotator;
	FQuat TargetQuat = FQuat::Identity;

	/** Heading to WorldForward. */
	if (RecenteringParams.Heading == EHeading::WorldForward) 
		TargetRotation = FRotator::ZeroRotator;

	/** Heading to TargetForward. */
	else if (RecenteringParams.Heading == EHeading::TargetForward)
	{
		if (GetOwningSettingComponent()->GetFollowTarget() != nullptr)
			TargetRotation = GetOwningSettingComponent()->GetFollowTarget()->GetActorRotation();
		else
			TargetRotation = GetOwningActor()->GetActorRotation();
	}

	/** Heading to HardForward. */
	else if (RecenteringParams.Heading == EHeading::HardForward)
	{
		TargetRotation = RecenteringParams.HardForward.Rotation();
	}

	/** Heading to SoftForward. */
	else if (RecenteringParams.Heading == EHeading::SoftForward)
	{
		if (RecenteringParams.Source != nullptr && RecenteringParams.Destination != nullptr)
			TargetRotation = (RecenteringParams.Destination->GetActorLocation() - RecenteringParams.Source->GetActorLocation()).Rotation();
		else TargetRotation = GetOwningActor()->GetActorRotation();
	}

	/** Whether to reset pitch. */
	if (RecenteringParams.bResetPitch) TargetRotation.Pitch = 0;
	else TargetRotation.Pitch = GetOwningActor()->GetActorRotation().Pitch;

	TargetQuat = TargetRotation.Quaternion();
	return TargetQuat;
}

float UControlAim::ConvertYaw(float Yaw)
{
	float ConvertedYaw = Yaw;
	while (ConvertedYaw > 180) ConvertedYaw -= 360;
	while (ConvertedYaw < -180) ConvertedYaw += 360;
	return ConvertedYaw;
}

float UControlAim::ConstrainYaw(float& ResultDeltaX)
{
	float CenteringYaw = 0;
	if (HorizontalHeading == EHeading::WorldForward)
		CenteringYaw = 0;
	else if (HorizontalHeading == EHeading::TargetForward)
		CenteringYaw = GetOwningSettingComponent()->GetFollowTarget() != nullptr ? GetOwningSettingComponent()->GetFollowTarget()->GetActorRotation().Yaw : 0;
	else if (HorizontalHeading == EHeading::HardForward)
		CenteringYaw = HorizontalHardForward.Rotation().Yaw;
	else if (HorizontalHeading == EHeading::SoftForward)
		CenteringYaw = (HorizontalSource != nullptr && HorizontalDestination != nullptr)
						? (HorizontalDestination->GetActorLocation() - HorizontalSource->GetActorLocation()).Rotation().Yaw
						: 0;
	
	float YawBoundLeft = CenteringYaw + HorizontalRange.X;
	float YawBoundRight = CenteringYaw + HorizontalRange.Y;	
	float CameraYaw = GetOwningActor()->GetActorRotation().Yaw;
	float AddedCameraYaw = CameraYaw + ResultDeltaX;

	/** Whether the added camera yaw is within range. A little bit about math, but not hard. */
	if (FMath::FloorToInt((YawBoundRight - AddedCameraYaw) / 360) == FMath::CeilToInt((YawBoundLeft - AddedCameraYaw) / 360)) return 0.0f;
	/** If not within range, restrict yaw to bounds. Take bWrap into account. */
	if (ConvertYaw(AddedCameraYaw) > ConvertYaw(YawBoundRight))
	{
		if (!bWrap)
		{
			ResultDeltaX = ConvertYaw(YawBoundRight - CameraYaw);
			return 0.0f;
		}
		else return ConvertYaw(YawBoundLeft) + 360 - ConvertYaw(YawBoundRight);
	}
	if (ConvertYaw(AddedCameraYaw) < ConvertYaw(YawBoundLeft))
	{
		if (!bWrap)
		{
			ResultDeltaX = ConvertYaw(YawBoundLeft - CameraYaw);
			return 0.0f;
		}
		else return -(ConvertYaw(YawBoundLeft) + 360 - ConvertYaw(YawBoundRight));
	}
	return 0.0f;
}

void UControlAim::ConstrainPitch(float& ResultDeltaY)
{
	FRotator CameraRotation = GetOwningActor()->GetActorRotation();
	if (CameraRotation.Pitch + ResultDeltaY > VerticalRange.Y) ResultDeltaY = VerticalRange.Y - CameraRotation.Pitch;
	if (CameraRotation.Pitch + ResultDeltaY < VerticalRange.X) ResultDeltaY = VerticalRange.X - CameraRotation.Pitch;
}