// Copyright 2023 by Sulley. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Utils/ECameraLibrary.h"
#include "Components/ECameraComponentFollow.h"
#include "FramingFollow.generated.h"

/**
 * FramingFollow keeps a fixed position of the follow target on screen space.
 */
UCLASS(Blueprintable, BlueprintType, classGroup = "ECamera")
class EASYCAMERA_API UFramingFollow : public UECameraComponentFollow
{
	GENERATED_BODY()

public:
	UFramingFollow();

protected:
	/** Camera distance to the *real* follow target after applying FollowOffset. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CameraDistance;

	/** A curve used to adjust camera distance according to camera pitch. The x-axis range should be within [-90, 90]. 
	 *  When camera looks down, pitch is negative; when camera looks up, pitch is positive.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* PitchDistanceCurve;

	/** Follow target's local space offset applied to the follow target. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector FollowOffset;

	/** Damp parameters you want to use for damping. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDampParams DampParams;

	/** Damping for camera to track the follow target. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "0.0", ClampMax = "5.0"))
	FVector FollowDamping;

	/** Screen space offset applied to the *real* follow target after applying FollowOffset. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "-0.5", ClampMax = "0.5"))
	FVector2f ScreenOffset;

	/** Start and end distance in which adaptive screen offset (X axis) is enable. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2f AdaptiveScreenOffsetDistanceX;

	/** Start and end distance in which adaptive screen offset (Y axis) is enable. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2f AdaptiveScreenOffsetDistanceY;

	/** Width of the screen offset. Pivoted at the X axis position. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "-1.0", ClampMax = "1.0"))
	FVector2f ScreenOffsetWidth;

	/** Height of the screen offset. Pivoted at the Y axis position. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "-1.0", ClampMax = "1.0"))
	FVector2f ScreenOffsetHeight;

	/** Real follow position. */
	FVector RealFollowPosition;
	/** Local space follow position. */
	FVector LocalFollowPosition;
	/** Location at previous frame. Used for Spring damp. */
	FVector PreviousLocation;

	FVector ExactSpringVel;

public:
	virtual void UpdateComponent_Implementation(float DeltaTime) override;

	/** Return real follow position. */
	FVector GetFollowPosition() { return RealFollowPosition; }

	/** Get local space follow position. */
	FVector GetLocalSpaceFollowPosition() { return LocalFollowPosition; }

	/** Get screen offset. */
	FVector2f GetScreenOffset() { return ScreenOffset; }

	/** Get screen offset width. */
	FVector2f GetScreenOffsetWidth() { return ScreenOffsetWidth; }

	/** Get screen offset height. */
	FVector2f GetScreenOffsetHeight() { return ScreenOffsetHeight; }

	/** Get the *real* screen offset based on the distance between follow position and aim position. */
	FVector2f GetAdaptiveScreenOffset(const FVector& FollowPosition, const FVector& AimPositio);

	/** Normalize pitch into [-90, 90]. */
	float NormalizePitch(float Pitch);

	/** Set delta position along the local X axis. */
	void SetForwardDelta(const FVector& LocalSpaceFollowPosition, FVector& TempDeltaPosition, float RealCameraDistance);

	/** Damp delta x and apply it. */
	void ApplyForwardDelta(FVector& TempDeltaPosition, float DeltaTime);

	/** Get delta position along the local YZ plane. */
	void SetYZPlaneDelta(const FVector& LocalSpaceFollowPosition, FVector& TempDeltaPosition, const FVector2f& RealScreenOffset);

	/** Damp temporary delta position. */
	FVector DampDeltaPosition(const FVector& LocalSpaceFollowPosition, const FVector& TempDeltaPosition, float DeltaTime, const FVector2f& RealScreenOffset);

	/** Ensure after damping, the follow target will be within the bound. */
	void EnsureWithinBounds(const FVector& LocalSpaceFollowPosition, FVector& DampedDeltaPosition, const FVector2f& RealScreenOffset);
};

