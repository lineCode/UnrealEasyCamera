// Copyright 2023 by Sulley. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ECameraComponentAim.h"
#include "Utils/ECameraLibrary.h"
#include "HardLockAim.generated.h"

/**
 * HardLockAim uses the rotation of aim target.
 */
UCLASS(Blueprintable, BlueprintType, classGroup = "ECamera")
class EASYCAMERA_API UHardLockAim : public UECameraComponentAim
{
	GENERATED_BODY()

public:
	UHardLockAim();

protected:
	/** Rotation offset applied to aim target's rotation. In aim target's local space. In the order of roll, pitch and yaw. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator RotationOffset;

	/** Whether to use quaternion damping. If not, use Euler damping.
	 *  If pitch can be steep, use this to avoid gimbal lock. 
	 *  This is strongly recommended to use.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseQuatDamping;

	/** Damp parameters you want to use for damping. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (EditCondition = "bUseQuatDamping == false"))
	FDampParams DampParams;

	/** Euler damping for camera to track the aim target's rotation. Respectively for roll, pitch and yaw in order. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "0.0", ClampMax = "20.0", EditCondition = "bUseQuatDamping == false"))
	FVector EulerDamping;

	/** Quaternion damping for camera to track the aim target's rotation. Small numbers indicate responsiveness. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "0.0", ClampMax = "20.0", EditCondition = "bUseQuatDamping == true"))
	float QuatDamping;

public:
	virtual void UpdateComponent_Implementation(float DeltaTime) override;
};