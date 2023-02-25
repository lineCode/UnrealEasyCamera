// Copyright 2023 by Sulley. All Rights Reserved.

#include "Components/HardLockAim.h"
#include "Utils/ECameraTypes.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"


UHardLockAim::UHardLockAim()
{
	Stage = EStage::Aim;
	RotationOffset = FRotator(0, 0, 0);
	DampParams = FDampParams();
	bUseQuatDamping = true;
	EulerDamping = FVector(0.0f, 0.0f, 0.0f);
	QuatDamping = 1.0f;
}

void UHardLockAim::UpdateComponent_Implementation(float DeltaTime)
{
	if (AimTarget != nullptr)
	{
		/** Get desired rotation and quaternion. */
		FQuat CurrentQuat = GetOwningActor()->GetActorQuat();
		FQuat DesiredQuat = AimTarget->GetActorQuat() * FQuat(RotationOffset);
		FRotator CurrentRotation = CurrentQuat.Rotator();
		FRotator DesiredRotation = DesiredQuat.Rotator();

		/** Use quaternion damping. */
		if (bUseQuatDamping)
		{
			FQuat DampedQuat;
			UECameraLibrary::DamperQuaternion(CurrentQuat, DesiredQuat, DeltaTime, QuatDamping, DampedQuat);
			GetOwningActor()->SetActorRotation(DampedQuat);
		}
		/** Use Euler damping. */
		else
		{
			FRotator DampedDeltaRotation;
			FRotator TempDeltaRotation = UKismetMathLibrary::NormalizedDeltaRotator(DesiredRotation, CurrentRotation);
			UECameraLibrary::DamperRotatorWithDifferentDampTime(DampParams, DeltaTime, TempDeltaRotation, EulerDamping, DampedDeltaRotation);
			GetOwningActor()->AddActorWorldRotation(DampedDeltaRotation);
		}
	}
}