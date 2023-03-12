// Copyright 2023 by Sulley. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "ECameraTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ECameraLibrary.generated.h"

class AEPlayerCameraManager;

/**
 * UCameraLibrary contains functions for blueprint callable nodes.
 */
UCLASS()
class EASYCAMERA_API UECameraLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/** Damp a float with a given damp time. 
	 * @param DampParams - A set of damp parameters.
	 * @param DeltaSeconds - The elapsed time since last frame.
	 * @param Input - Input float to damp.
	 * @param DampTime - Damp time.
	 * @param Output - Resulting damped output float.
	 */
	UFUNCTION(BlueprintPure, Category = "ECamera|Utils", meta = (DisplayName = "DampSingleValue"))
	static void DamperValue(const FDampParams& DampParams, const float& DeltaSeconds, const float& Input, float DampTime, double& Output);

	/** Damp a vector with the same damp time for all elements in the vector.
	 * @param DampParams - A set of damp parameters.
	 * @param DeltaSeconds - The elapsed time since last frame.
	 * @param Input - Input vector to damp.
	 * @param DampTime - Damp time (float).
	 * @param Output - Resulting damped output vector.
	 */
	UFUNCTION(BlueprintPure, Category = "ECamera|Utils", meta = (DisplayName = "DampVectorWithSameDampTime"))
	static void DamperVectorWithSameDampTime(const FDampParams& DampParams, const float& DeltaSeconds, const FVector& Input, float DampTime, FVector& Output);

	/** Damp a vector with different damp times for different elements in the vector.
	 * @param DampParams - A set of damp parameters.
	 * @param DeltaSeconds - The elapsed time since last frame.
	 * @param Input - Input vector to damp.
	 * @param DampTime - Damp time (vector).
	 * @param Output - Resulting damped output vector.
	 */
	UFUNCTION(BlueprintPure, Category = "ECamera|Utils", meta = (DisplayName = "DampVectorWithDifferentDampTimes"))
	static void DamperVectorWithDifferentDampTime(const FDampParams& DampParams, const float& DeltaSeconds, const FVector& Input, FVector DampTime, FVector& Output);

	/** Damp a rotator with the same damp time for all elements in the vector.
	 * @param DampParams - A set of damp parameters.
	 * @param DeltaSeconds - The elapsed time since last frame.
	 * @param Input - Input rotator to damp.
	 * @param DampTime - Damp time (float).
	 * @param Output - Resulting damped output rotator.
	 */
	UFUNCTION(BlueprintPure, Category = "ECamera|Utils", meta = (DisplayName = "DampRotatorWithSameDampTime"))
	static void DamperRotatorWithSameDampTime(const FDampParams& DampParams, const float& DeltaSeconds, const FRotator& Input, float DampTime, FRotator& Output);

	/** Damp a rotator with different damp times for different elements in the rotator.
	 * @param DampParams - A set of damp parameters.
	 * @param DeltaSeconds - The elapsed time since last frame.
	 * @param Input - Input rotator to damp.
	 * @param DampTime - Damp time (vector).
	 * @param Output - Resulting damped output rotator.
	 */
	UFUNCTION(BlueprintPure, Category = "ECamera|Utils", meta = (DisplayName = "DampRotatorWithDifferentDampTimes"))
	static void DamperRotatorWithDifferentDampTime(const FDampParams& DampParams, const float& DeltaSeconds, const FRotator& Input, FVector DampTime, FRotator& Output);

	/** Use a simple spring mass system to damp a vector. Note that spring damping may cause unstable camera behavior.
	 *  If it is not what you really want, you are supposed to use other damping methods. 
	 * @param DampParams - A set of damp parameters.
	 * @param DeltaSeconds - The elapsed time since last frame.
	 * @param TemporalInput - Camera `current position` - `previous position`
	 * @param SpatialInput - Camera `desired position` - `current position` 
	 * @param Output - Resulting damped output vector.
	 */
	UFUNCTION(BlueprintPure, Category = "ECamera|Utils", meta = (DisplayName = "SpringDampVector"))
	static void SpringDampVector(const FDampParams& DampParams, const float& DeltaSeconds, const FVector& TemporalInput, const FVector& SpatialInput, FVector& Output);

	/** An exact spring damper used to damp an input vector. Credit to: https://theorangeduck.com/page/spring-roll-call#dampingratio. 
	 * @param CurrentVector - Input vector representing current property, e.g., position.
	 * @param CurrentVelocity - Input vector representing current velocity.
	 * @param TargetVector - Input vector representing target property, e.g., position.
	 * @param TargetVelocity - Input vector representing target velocity.
	 * @param DampRatio - Damp ratio used for the input vector. A value of 1 means a critically damped spring, a value <1 means an under-damped spring, and a value of >1 means a over-damped spring.
	 * @param HalfLife - Duration of time used to damp the input vector. Cannot be negative.
	 * @param DeltaSeconds - The elapsed time since last frame.
	 */
	UFUNCTION(BlueprintPure, Category = "ECamera|Utils", meta = (DisplayName = "ExactSpringDampVector"))
	static void ExactSpringDamperVector(FVector& CurrentVector, FVector& CurrentVelocity, const FVector& TargetVector, const FVector& TargetVelocity, FVector DampRatio, FVector HalfLife, const float& DeltaSeconds);

	/** An exact spring damper used to damp an input vector. Credit to: https://theorangeduck.com/page/spring-roll-call#dampingratio.
	 * @param CurrentValue - Input value representing current property, e.g., position.
	 * @param CurrentVelocity - Input value representing current velocity.
	 * @param TargetValue - Input value representing target property, e.g., position.
	 * @param TargetVelocity - Input value representing target velocity.
	 * @param DampRatio - Damp ratio used for the input vector. A value of 1 means a critically damped spring, a value <1 means an under-damped spring, and a value of >1 means a over-damped spring. Cannot be negative.
	 * @param HalfLife - Duration of time used to damp the input value. Cannot be negative.
	 * @param DeltaSeconds - The elapsed time since last frame.
	 */
	UFUNCTION(BlueprintPure, Category = "ECamera|Utils", meta = (DisplayName = "ExactSpringDampValue"))
	static void ExactSpringDamperValue(double& CurrentValue, double& CurrentVelocity, const float& TargetValue, const float& TargetVelocity, float DampRatio, float HalfLife, const float& DeltaSeconds);

	/** A fast version to compute atan. Credit to: https://theorangeduck.com/page/spring-roll-call#dampingratio. */
	UFUNCTION(BlueprintPure, Category = "ECamera|Utils", meta = (DisplayName = "FastAtan"))
	static float FastAtan(float x);

	/** Interpolate two quaternions according to damp time.
	 * @param Quat1 - Starting quaternion.
	 * @param Quat2 - Destination quaternion.
	 * @param DeltaSeconds - The elapsed time since last frame.
	 * @param DampTime - Time used to interpolate from Quat1 to Quat2.
	 * @param Output - Damped output quaternion.
	 */
	UFUNCTION(BlueprintPure, Category = "ECamera|Utils", meta = (DisplayName = "DampQuaternion"))
	static void DamperQuaternion(const FQuat& Quat1, const FQuat& Quat2, const float& DeltaSeconds, float DampTime, FQuat& Output);

	/** Return the camera local space coordinate of an input world space position.
	 * @param Camera - Camera.
	 * @param InputPosition - World space input position.
	 */
	UFUNCTION(BlueprintPure, Category = "ECamera|Utils", meta = (DisplayName = "GetCameraLocalSpaceCoordinateWithActor"))
	static FVector GetLocalSpacePosition(const AActor* Camera, const FVector& InputPosition);

	/** Return the camera local space coordinate of an input world space position.
	 * @param PivotPosition - Pivot position, for example, the camera's location.
	 * @param ForwardVector - Reference forward vector, for example, the camera's forward vector.
	 * @param RightVector - Reference right vector, for example, the camera's right vector.
	 * @param UpVector - Reference up vector, for example, the camera's up vector.
	 * @param InputPosition - World space input position.
	 */
	UFUNCTION(BlueprintPure, Category = "ECamera|Utils", meta = (DisplayName = "GetCameraLocalSpaceCoordinateWithVectors"))
	static FVector GetLocalSpacePositionWithVectors(const FVector& PivotPosition, const FVector& ForwardVector, const FVector& RightVector, const FVector& UpVector, const FVector& InputPosition);


	/** Call a TSubclassOf<ECameraBase> class type camera actor. If there exists one in the level, this node will use it. Otherwise it will instantiate a new one.
	 *  Highly recommending using this node rather than UE's vanilla SetViewTargetWithBlend node.
	 * @param CameraClass - The camera class type to instantiate.
	 * @param SpawnLocation - The location where the camera should be spawned. Will be (0,0,0) if not set.
	 * @param SpawnRotation - The rotation the camera should be initialized with. Will be (0,0,0) if not set.
	 * @param FollowTarget - The target actor passed into the follow component. Can be null if this camera does not have a follow component.
	 * @param AimTarget - The target actor passed into the aim component. Can be null if this camera does not have an aim component.
	 * @param BlendTime - Blend-in time used for transitioning from the current active camera to the new camera.
	 * @param BlendFunc - Which type of blend function to use.
	 * @param BlendExp - Blend exponential.
	 * @param bLockOutgoing - If true, lock outgoing viewtarget to last frame's camera position for the remainder of the blend.
	 * @param bIsTransitory - Whether the called camera is transitory. If true, it will be automatically terminated after LifeTime seconds.
	 * @param LifeTime - The life time of the called camera if it is transitory.
	 * @param bPreserveState - Whether the incoming camera tries to preserve outgoing camera's location and rotation. If you specified SpawnLocation and SpawnRotation, you should switch this off.
	 */
	UFUNCTION(BlueprintCallable, Category = "ECamera|Utils", meta = (DisplayName = "CallCamera", WorldContext = "WorldContextObject", DeterminesOutputType = "CameraClass", AdvancedDisplay = 6))
	static AECameraBase* CallCamera(const UObject* WorldContextObject, TSubclassOf<AECameraBase> CameraClass, FVector SpawnLocation, FRotator SpawnRotation, AActor* FollowTarget, AActor* AimTarget, float BlendTime, enum EViewTargetBlendFunction BlendFunc, float BlendExp, bool bLockOutgoing, bool bIsTransitory = false, float LifeTime = 0.0f, bool bPreserveState = false);

	/** Call an animated camera, i.e., driven by an animation sequence. This is usually used inside a skill.
	 * @param AnimToPlay - The animation sequence you want to play on camera.
	 * @param RefCoordinateActor - In which actor's local space you want to play the camera animation.
	 * @param RefCoordinate - In which reference frame you want to play the camera animation.
	 * @param PositionOffset - Position offset, in reference space.
	 * @param BlendTime - Blend-in time used for transitioning from the current active camera to the new camera.
	 * @param BlendFunc - Which type of blend function to use.
	 * @param BlendExp - Blend exponential.
	 * @param bLockOutgoing - If true, lock outgoing viewtarget to last frame's camera position for the remainder of the blend.
	 */
	UFUNCTION(BlueprintCallable, Category = "ECamera|Utils", meta = (DisplayName = "CallAnimatedCamera", WorldContext = "WorldContextObject"))
	static AECameraBase* CallAnimatedCamera(const UObject* WorldContextObject, UAnimSequence* AnimToPlay, AActor* RefCoordinateActor = nullptr, FTransform RefCoordinate = FTransform(), FVector PositionOffset = FVector(0, 0, 0), float BlendTime = 0.0f, enum EViewTargetBlendFunction BlendFunc = EViewTargetBlendFunction::VTBlend_Linear, float BlendExp = 2.0f, bool bLockOutgoing = false);
	
	/** Immediately terminate current active camera and gets back to previous active camera.
	 *  If you only want to call a new camera, use CallCamera node instead, NOT this node.
	 */
	UFUNCTION(BlueprintCallable, Category = "ECamera|Utils", meta = (DisplayName = "TerminateActiveCamera", WorldContext = "WorldContextObject"))
	static void TerminateActiveCamera(const UObject* WorldContextObject);

	/** Get the current active `ECameraBase` camera. */
	UFUNCTION(BlueprintPure, Category = "ECamera|Utils", meta = (DisplayName = "GetActiveCamera", WorldContext = "WorldContextObject"))
	static AECameraBase* GetActiveCamera(const UObject* WorldContextObject);

	/** Get EPlayerCameraManager. */
	UFUNCTION(BlueprintPure, Category = "ECamera|Utils", meta = (DisplayName = "GetEPlayerCameraManager", WorldContext = "WorldContextObject"))
	static AEPlayerCameraManager* GetEPlayerCameraManager(const UObject* WorldContextObject, int32 index);

	/** Get the position applied with local space offset. Input is actor.
	 * @param TargetActor - An input actor in whose local space offset is applied.
	 * @param Offset - Offset applied to the actor's local space.
	 */
	UFUNCTION(BlueprintPure, Category = "ECamera|Utils", meta = (DisplayName = "GetPositionWithLocalOffset(Actor)"))
	static FVector GetPositionWithLocalOffset(AActor* TargetActor, const FVector& Offset);

	/** Get the position applied with local space offset. Input is position and rotation.
	 * @param Position - Target position.
	 * @param Rotation - Target rotation.
	 * @param Offset - Offset applied to the actor's local space.
	 */
	UFUNCTION(BlueprintPure, Category = "ECamera|Utils", meta = (DisplayName = "GetPositionWithLocalOffset(Rotation)"))
	static FVector GetPositionWithLocalRotatedOffset(const FVector& Position, const FRotator& Rotation, const FVector& Offset);
};
