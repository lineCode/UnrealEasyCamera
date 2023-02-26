// Copyright 2023 by Sulley. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ECameraComponentAim.h"
#include "ControlAim.generated.h"

class UEnhancedInputLocalPlayerSubsystem;

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
	/** Whether you are using EnhancedInput. If true, the input will read from enhanced input. Otherwise, it reads from mouse input. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool bEnhancedInput;

	/** The input action to consume camera rotation. Ensure this action is correct. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (EditCondition = "bEnhancedInput == true"))
	class UInputAction* LookAction;

	/** Aim assist settings. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAimAssist AimAssist;

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

	/** If currently is in aim assist. */
	bool bInAimAssist;
	/** Screen distance when in aim assist. */
	float ScreenDistanceInAimAssist;
	/** The actor that is in aim assist. */
	AActor* ActorInAimAssist;
	/** Offset. */
	FVector OffsetInAimAssist;

	/** Enhanched input subsystem. */
	UEnhancedInputLocalPlayerSubsystem* Subsystem;
	
public:
	virtual void UpdateComponent_Implementation(float DeltaTime) override;
	virtual void ResetOnBecomeViewTarget(APlayerController* PC, bool bPreserveState) override;

	/** Get input mouse delta. */
	void GetMouseDelta();

	/** Get the multiplication of raw input mouse delta X and HorizontalSpeed. */
	UFUNCTION(BlueprintPure, Category = "ECamera|ControlAim")
	float GetMouseDeltaX() { return RawMouseDeltaX * HorizontalSpeed; }
	/** Get the multiplication of raw input mouse delta Y and VerticalSpeed. */
	UFUNCTION(BlueprintPure, Category = "ECamera|ControlAim")
	float GetMouseDeltaY() { return RawMouseDeltaY * VerticalSpeed; }

	/** Return bInAimAssist for HUD. */
	bool GetInAimAssist() { return bInAimAssist; }

	/** Return AimAsset for HUD. */
	const FAimAssist& GetAimAssist() { return AimAssist; }

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

	/** Check if there exists an actor will be in aim assist. */
	bool CheckAimAssist();
};
