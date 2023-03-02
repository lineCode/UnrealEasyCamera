// Copyright 2023 by Sulley. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "HAL/Platform.h"
#include "Engine/EngineTypes.h"
#include "Kismet/KismetMathLibrary.h"
#include "WaveOscillatorCameraShakePattern.h"

#include "ECameraTypes.generated.h"

/**************************************************************************************/
/*************************************  Begin enums. **********************************/
/**************************************************************************************/

/**
* Define headings.
*/
UENUM()
enum class EHeading : uint8
{
	/** World space forward as heading, i.e., (1,0,0). */
	WorldForward,
	/** Target's local space forward as heading. 
	 *  Different components may interpret this differently.
	 *  For example, ControlAim component uses follow target's forward.
	 *  NOTE: this should be used very carefully as it may cause unexpected artifacts. 
	 */
	TargetForward,
	/** A hard specified forward. */
	HardForward,
	/** A soft specified forwad, determined by a source actor and a destination actor. */
	SoftForward
};

/**
* Stages in which camera components should be applied.
* Each camera component has a specific stage.
* Order: PreFollow -> Follow -> PostFollow -> PreAim -> Aim -> PostAim -> Noise -> Finalize.
*/
UENUM()
enum class EStage : uint8
{
	/** Executes at the PreFollow stage. */
	PreFollow,
	/** Executes at the Follow stage. */
	Follow,
	/** Executes at the PostFollow stage. */
	PostFollow,
	/** Executes at the PreAim stage. */
	PreAim,
	/** Executes at the Aim stage. */
	Aim,
	/** Executes at the PostAim stage. */
	PostAim,
	/** Executes at the Noise stage. */
	Noise,
	/** Executes at the Finalize stage. */
	Finalize
};
ENUM_RANGE_BY_FIRST_AND_LAST(EStage, EStage::PreFollow, EStage::Finalize)

UENUM()
enum class ESimpleFollowType : uint8
{
	/** Keep a fixed relationship at world space. */
	WorldSpace,
	/** Keep a fixed relationship at follow target's local space. */
	LocalSpace
};

/**
* Methods you can use for trace.
*/
UENUM()
enum class ETraceShape : uint8
{
	/** Uses a simple line trace emitted from camera. */
	Line,
	/** Use a sphere. */
	Sphere
};

/**
* Methods you can use for damping.
*/
UENUM()
enum class EDampMethod : uint8
{
	/** Uses a simple residual-based damping algorithm. */
	Naive,
	/** Splits the given deltaTime into several parts and simulates naive damping in order. */
	Simulate,
	/** Uses spring to damp. */
	Spring
};

/**
* Methods you want to use for calculate group actor location.
*/
UENUM()
enum class EGroupLocationMethod : uint8
{
	/** Group actor location will be the arithmetic average of all target locations. */
	ArithmeticAverage,
	/** Group actor location will be the weighed average of target locations. */
	WeighedAverage,
	/** Group actor location will be dynamically determined based on the distance between the given location and each target actor location.
	 *  This method does not take actor weight into consideration.
	 */
	UnweightedDistanceBased,
	/** Weighted version of UnweightedDistanceBased. */
	WeightedDistanceBased,
	/** The closest target location to the given location will be used as group actor location. */
	Closest,
	/** The farest target location to the given location will be used as group actor location. */
	Farest,
	/** Specified location. */
	Specified
};

/**
* Methods you want to use for calculate group actor rotation.
*/
UENUM()
enum class EGroupRotationMethod : uint8
{
	/** Group actor rotation will be the arithmetic average of all target rotations. */
	ArithmeticAverage,
	/** Group actor rotation will be the weighed average of target rotations. */
	WeighedAverage,
	/** Specified rotation. */
	Specified
};

/**
* Methods you want to use to resolve group actor in scren space.
* DistanceOnly and Mix are recommended.
*/
UENUM()
enum class EResolveGroupActorMethod : uint8
{
	/** Only adjust camera FOV. */
	ZoomOnly,
	/** Only adjust camera distance. */
	DistanceOnly,
	/** Mix-adjusting FOV and distance. */
	Mix
};

/** Methods you want to use for RailFollow component. */
UENUM()
enum class ERailFollowType : uint8
{
	/** Camera will get to the position on rail nearest to the follow target. */
	FollowTarget,
	/** Camera will move on rail at a fixed speed, starting at some place you specify. */
	FixedSpeed,
	/** Camera will move according to your manual setup. */
	Manual
};

/** Methods you want to use for CraneFollow component. */
UENUM()
enum class ECraneFollowType : uint8
{
	/** Camera will get to the position on crane nearest to the follow target. */
	FollowTarget,
	/** Camera will move on crane at a fixed speed, starting at some place you specify. */
	FixedSpeed,
	/** Camera will move according to your manual setup. */
	Manual
};

/** Camera shake types. */
UENUM()
enum class ECameraShakeType : uint8
{
	Wave,
	Perlin
};

/** How do you want to preserve keyframes in the actor sequence component.  */
UENUM()
enum class EKeyframePreservationType : uint8
{
	None,
	FirstOnly,
	LastOnly,
	FirstAndLast,
	All
};

/**************************************************************************************/
/********************************* Begin structs.**************************************/
/**************************************************************************************/

/** A set of parameters describing an orbit. */
USTRUCT(BlueprintType)
struct FOrbit
{
	GENERATED_USTRUCT_BODY()

public:
	/** Height relative to follow target. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Height;

	/** Orbit radius. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Radius;

	FOrbit()
		: Height(10.0f)
		, Radius(30.0f)
	{ }
};

/** A set of parameters describing recentering setting. */
USTRUCT(BlueprintType)
struct FRecenteringParams
{
	GENERATED_USTRUCT_BODY()

public:
	/** Whether to enable recentering. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bRecentering;

	/** Whether to reset pitch to zero when recentering. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bResetPitch;

	/** Heading for recentering. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EHeading Heading;

	/** How long will it take to start recentering since input is not given. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (EditCondition = "bRecentering ==  true"))
	float WaitTime;

	/** Time to finish recentering. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (EditCondition = "bRecentering ==  true"))
	float RecenteringTime;

	/** Hard specified forward. Will ignore its pitch angle. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (EditCondition = "bRecentering ==  true && Heading == EHeading::HardForward"))
	FVector HardForward;

	/** Source actor for soft forward. Its position is used as the start position. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (EditCondition = "bRecentering ==  true && Heading == EHeading::SoftForward"))
	AActor* Source;

	/** Destination actor for soft forward. Its position is used as the end position. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (EditCondition = "bRecentering ==  true && Heading == EHeading::SoftForward"))
	AActor* Destination;


	FRecenteringParams()
		: bRecentering(false)
		, bResetPitch(false)
		, Heading(EHeading::WorldForward)
		, WaitTime(2.0f)
		, RecenteringTime(2.0f)
		, HardForward(FVector(1, 0, 0))
	{ }
};

/** A set of parameters describing occlusion detection. */
USTRUCT(BlueprintType)
struct FOccluderParams
{
	GENERATED_USTRUCT_BODY()

public:
	/** Shape you use for tracing. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ETraceShape TraceShape;

	/** If on, only returns the first hit encountered. This can be toggled on to improve performance.
	 *  This should be turned on in most cases.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bTraceSingle;

	/** Array of object types to trace occlusion. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;

	/** Actors ignored for trace. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<AActor*> ActorsToIgnore;

	/** Maximum length of the ray used to trace occlusion along the sight line of camera. Set as 0 to use the actual line length. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "0.0"))
	float MaximumTraceLength;

	/** Do not take any action until occlusion has lasted this long. Set as 0 to immediately avoid occlusion.  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "0.0"))
	float MinimumOcclusionTime;

	/** If use Sphere trace type, define its radius. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (EditCondition = "TraceShape == ETraceShape::Sphere", ClampMin = "0.01"))
	float SphereRadius;

	/** Whether to show debug line. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowDebug;

	FOccluderParams()
		: TraceShape(ETraceShape::Line)
		, bTraceSingle(true)
		, MaximumTraceLength(0.0f)
		, MinimumOcclusionTime(0.0f)
		, SphereRadius(0.01f)
		, bShowDebug(false)
	{ }
};


/** A set of parameters describing damping. 
 *  You should always add damping, even though you don't really need it.
 *  If this is the case, set damping as a very small number, such as 0.005.
 */
USTRUCT(BlueprintType)
struct FDampParams
{
	GENERATED_USTRUCT_BODY()
public:
	/** Which damp method you want to use. Select from Naive, Simulate and Spring. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EDampMethod DampMethod;

	/** Used for Naive and Simulate. Damp residual after damp time (in percent). */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (EditCondition = "DampMethod != EDampMethod::Spring"))
	float Residual;

	/** Used for Spring. The spring coefficient controlling how responsive the actor gets back to its rest place.In the order of X, Y and Z axis. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (EditCondition = "DampMethod == EDampMethod::Spring", ClampMin = "0.0"))
	FVector SpringCoefficient;

	/** Used for Spring. Damp residual after damp time. Keep it large (>0.5) for more stable camera movement. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (EditCondition = "DampMethod == EDampMethod::Spring", ClampMin = "0.0", ClampMax = "1.0"))
	float SpringResidual;

	float MaxDeltaSeconds;

	FDampParams()
		: DampMethod(EDampMethod::Naive)
		, Residual(0.01f)
		, SpringCoefficient(FVector(300.0f, 250.0f, 250.0f))
		, SpringResidual(0.5f)
		, MaxDeltaSeconds(1 / 60.0f)
	{ }

	FDampParams(EDampMethod DampMethod, float Residual)
		: DampMethod(DampMethod)
		, Residual(Residual)
		, SpringCoefficient(FVector(300.0f, 250.0f, 250.0f))
		, SpringResidual(0.5f)
		, MaxDeltaSeconds(1 / 60.0f)
	{ }
};

/** A set of parameters describing an actor wrapped by a bounding box. */
USTRUCT(BlueprintType)
struct FBoundingWrappedActor
{
	GENERATED_USTRUCT_BODY()

public:
	/** Target actor. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<AActor> Target;

	/** Weight. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "0.0"))
	float Weight;

	/** (Half) Width of the bounding box on screen space. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "0.0"))
	float Width;

	/** (Half) Height of the bounding box on screen space. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "0.0"))
	float Height;

	/** Whether to exclude this actor (ignore this bounding box) during the resolving stage. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bExcludeBoundingBox;

	FBoundingWrappedActor()
		: Weight(1.0f)
		, Width(0.0f)
		, Height(0.0f)
		, bExcludeBoundingBox(false)
	{ }

	/** Set weight. */
	void SetWeight(float InWeight) { Weight = InWeight; }

	/** Set width. */
	void SetWidth(float InWidth) { Width = InWidth; }

	/** Set height. */
	void SetHeight(float InHeight) { Height = InHeight; }

	/** Set bExcludeBoundingBox. */
	void SetExcludeBoundingBox(bool bInExcludeBoundingBox) { bExcludeBoundingBox = bInExcludeBoundingBox; }
};

/** A set of parameters defining one key point for ERailFollowType::Manual. */
USTRUCT(BlueprintType)
struct FRailManualPointParams
{
	GENERATED_USTRUCT_BODY()

public:
	/** Position on rail, within [0,1]. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Position;

	/** Blend time used from previous key point to this one. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BlendTime;

	/** Blend function used from previous key point to this one. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EEasingFunc::Type> BlendFunc;

	/** How long will this key point stay at this position. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Duration;

	/** Is this key point going forward from previous key point or backward?
	 *  For example, if previous key point position is 0.5, and this is 0.8,
	 *  forward direction 0.5->0.6->0.7->0.8, and backward is 0.5->0.4->...->1.0->0.9->0.8.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bForward;

	FRailManualPointParams()
		: Position(0.0f)
		, BlendTime(1.0f)
		, BlendFunc(EViewTargetBlendFunction::VTBlend_Linear)
		, Duration(1.0f)
		, bForward(true)
	{ }
};

/** A set of parameters for ERailFollowType::Manual. */
USTRUCT(BlueprintType)
struct FRailManualParams
{
	GENERATED_USTRUCT_BODY()

public:
	/** Start position on rail, within [0,1]. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StartPosition;

	/** A list of key points on rail. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FRailManualPointParams> KeyPoints;

	FRailManualParams()
		: StartPosition(0.0f)
	{ }
};

/** A set of parameters defining one key point for ECraneFollowType::Manual. */
USTRUCT(BlueprintType)
struct FCraneManualPointParams
{
	GENERATED_USTRUCT_BODY()

public:
	/** Position on crane, respectively for arm length, crane yaw and crane pitch, in world space. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector Position;

	/** Blend time used from previous key point to this one. Consistent for arm length, yaw and pitch. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BlendTime;

	/** Blend function used from previous key point to this one. Consistent for arm length, yaw and pitch. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EEasingFunc::Type> BlendFunc;

	/** How long will this key point stay at this position. Consistent for arm length, yaw and pitch. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Duration;

	/** Is yaw going forward from previous key point or backward? In degree.
	 *  For example, if previous key point position is 30, and this is 50,
	 *  forward direction 30->40->50, and backward is 30->20->...->360->350->...->50.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bForwardYaw;

	/** Is pitch going forward from previous key point or backward? In degree.
	 *  For example, if previous key point position is 30, and this is 50,
	 *  forward direction 30->40->50, and backward is 30->20->...->360->350->...->50.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bForwardPitch;

	FCraneManualPointParams()
		: Position(FVector(100, 0, 0))
		, BlendTime(1.0f)
		, BlendFunc(EViewTargetBlendFunction::VTBlend_Linear)
		, Duration(1.0f)
		, bForwardYaw(true)
		, bForwardPitch(true)
	{ }
};

/** A set of parameters for ECraneFollowType::Manual. */
USTRUCT(BlueprintType)
struct FCraneManualParams
{
	GENERATED_USTRUCT_BODY()

public:
	/** Start position on crane, respectively for arm length, crane yaw and crane pitch, in world space. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector StartPosition;

	/** A list of key points on crane. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FCraneManualPointParams> KeyPoints;

	FCraneManualParams()
		: StartPosition(FVector(100, 0, 0))
	{ }
};

/** A struct consisting of PostProcessSettings and its corresponding weight. */
USTRUCT(BlueprintType)
struct FWeightedPostProcess
{
	GENERATED_USTRUCT_BODY()

public:
	/** Post process settings. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FPostProcessSettings PPSetting;

	/** Weight. The amount of influence the volume's properties have. A value of 1 has full effect, while a value of 0 has no effect. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Weight;

	/** Time used to blend into this post process effect. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BlendInTime;

	/** Duration for this post process effect. O means endlessness. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Duration;

	/** Time used to blend out of this post process effect. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BlendOutTime;

	float ElapsedBlendInTime;
	float ElapsedDurationTime;
	float ElapsedBlendOutTime;
	bool bHasCompleted;

	FWeightedPostProcess()
		: PPSetting(FPostProcessSettings())
		, Weight(1.f)
		, BlendInTime(0.5f)
		, Duration(0.f)
		, BlendOutTime(0.5f)
	{
		ElapsedBlendInTime = 0.f;
		ElapsedDurationTime = 0.f;
		ElapsedBlendOutTime = 0.f;
		bHasCompleted = false;
	}

	FWeightedPostProcess(const FPostProcessSettings& InPPSettings, const float& InWeight, const float& InBlendInTime, const float& InDuration, const float& InBlendOutTime)
		: PPSetting(InPPSettings)
		, Weight(InWeight)
		, BlendInTime(InBlendInTime)
		, Duration(InDuration)
		, BlendOutTime(InBlendOutTime)
	{
		ElapsedBlendInTime = 0.f;
		ElapsedDurationTime = 0.f;
		ElapsedBlendOutTime = 0.f;
		bHasCompleted = false;
	}
};

/** A struct packing some oscillation parameters.  */
USTRUCT(BlueprintType)
struct FPackedOscillationParams
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECameraShakeType ShakeType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LocationAmplitudeMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LocationFrequencyMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FWaveOscillator X;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FWaveOscillator Y;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FWaveOscillator Z;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RotationAmplitudeMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RotationFrequencyMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FWaveOscillator Pitch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FWaveOscillator Yaw;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FWaveOscillator Roll;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FWaveOscillator FOV;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Duration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BlendInTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BlendOutTime;

	FPackedOscillationParams()
		: ShakeType(ECameraShakeType::Wave)
		, LocationAmplitudeMultiplier(1.f)
		, LocationFrequencyMultiplier(1.f)
		, X(FWaveOscillator())
		, Y(FWaveOscillator())
		, Z(FWaveOscillator())
		, RotationAmplitudeMultiplier(1.f)
		, RotationFrequencyMultiplier(1.f)
		, Pitch(FWaveOscillator())
		, Yaw(FWaveOscillator())
		, Roll(FWaveOscillator())
		, FOV(FWaveOscillator())
		, Duration(1.f)
		, BlendInTime(0.2f)
		, BlendOutTime(0.2f) { }
};

/** A struct composed of an actor type and an offset vector. */
USTRUCT(BlueprintType)
struct FOffsetActorType
{
	GENERATED_USTRUCT_BODY()

public:
	/** Actor type. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AActor> ActorType;

	/** Local space offset applied to actors of this type. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector Offset;

	FOffsetActorType()
		: Offset(FVector()) { }
};

/** A struct used to define aim assist. */
USTRUCT(BlueprintType)
struct FAimAssist
{
	GENERATED_USTRUCT_BODY()

public:
	/** Whether to enable aim assist. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEnableAimAssist;

	/** Types of actors that are taken for aim assist. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FOffsetActorType> TargetTypes;

	/** Magnetic radius, in screen space. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MagneticRadius;

	/** Magnetic coefficient defining the strength of magnetic force. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MagneticCoefficient;

	/** If the target actor has a larger distance to camera than this value, it will be ignored. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxDistance;

	FAimAssist()
		: bEnableAimAssist(false)
		, MagneticRadius(50)
		, MagneticCoefficient(1)
		, MaxDistance(800)
	{ }
}; 