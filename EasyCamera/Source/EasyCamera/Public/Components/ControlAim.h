// Copyright 2023 by Sulley. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ECameraComponentAim.h"
#include "ControlAim.generated.h"

/**
 * Player input camera rotation. You do not need to, and should not specify an AimTarget.
 */
UCLASS(Blueprintable, BlueprintType, classGroup = "ECamera")
class EASYCAMERA_API UControlAim : public UECameraComponentAim
{
	GENERATED_BODY()
	
public:
	UControlAim();

protected:
	/** Recentering parameters. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRecenteringParams RecenteringParams;

	/** Horizontal heading to which horizontal range is applied. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EHeading HorizontalHeading;

	/** Hard specified horizontal forward. Will ignore its pitch angle. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (EditCondition = "HorizontalHeading == EHeading::HardForward"))
	FVector HorizontalHardForward;

	/** Source actor for horizontal soft forward. Its position is used as the start position. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (EditCondition = "HorizontalHeading == EHeading::SoftForward"))
	AActor* HorizontalSource;

	/** Destination actor horizontal for soft forward. Its position is used as the end position. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (EditCondition = "HorizontalHeading == EHeading::SoftForward"))
	AActor* HorizontalDestination;

	/** Camera yaw bounding range, within [-180,180]. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "-180.0", ClampMax = "180.0"))
	FVector2f HorizontalRange;

	/** Whether to wrap camera horizontal rotation. Default is true. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bWrap;

	/** Camera pitch bounding range, within (-90, 90). Will be overridden if using OrbitFollow.  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "-90.0", ClampMax = "90.0"))
	FVector2f VerticalRange;

	/** Yaw move speed multiplier. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "0.0"))
	float HorizontalSpeed;

	/** Pitch move speed multiplier. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "0.0"))
	float VerticalSpeed;

	/** Acceleration and deceleration time when changing yaw. First element is acceleration, second is deceleration. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "0.0"))
	FVector2f HorizontalDamping;

	/** Acceleration and deceleration time when changing pitch. First element is acceleration, second is deceleration. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "0.0"))
	FVector2f VerticalDamping;

	/** Whether to replicate camera's rotation to Controller. This is useful when you want to set character's rotation in synchronization with this camera. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bSyncToController;

	/** This frame's raw mouse input delta X and Y. */
	float RawMouseDeltaX;
	float RawMouseDeltaY;
	/** Cached scaled mouse delta X and Y. */
	float CachedMouseDeltaX;
	float CachedMouseDeltaY;
	/** Already wait time. */
	float WaitElaspedTime;
	
public:
	virtual void UpdateComponent_Implementation(float DeltaTime) override;

	/** Get input mouse delta. */
	void GetMouseDelta();

	/** Get the multiplication of raw input mouse delta X and HorizontalSpeed. */
	UFUNCTION(BlueprintPure, Category = "ECamera|ControlAim")
	float GetMouseDeltaX() { return RawMouseDeltaX * HorizontalSpeed; }
	/** Get the multiplication of raw input mouse delta Y and VerticalSpeed. */
	UFUNCTION(BlueprintPure, Category = "ECamera|ControlAim")
	float GetMouseDeltaY() { return RawMouseDeltaY * VerticalSpeed; }

	/** Get damped mouse delta. */
	float GetDampedMouseDelta(const float& MouseDelta, bool bIsHorizontal, const float& DeltaTime);

	/** Resolve recentering. Returns whether camera is currently recentering. */
	bool ResolveRecentering(const float& DeltaTime);

	/** Get recentering target quaternion. */
	FQuat GetRecenteringTargetQuat();

	/** Convert yaw into range (-180, 180]. */
	float ConvertYaw(float Yaw);

	/** Constrain yaw. Returns the additional yaw when triggering wrap. */
	float ConstrainYaw(float& ResultDeltaX);

	/** Constrain pitch. */
	void ConstrainPitch(float& ResultDeltaY);
};
