// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Utils/ECameraTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EASYCAMERA_ECameraTypes_generated_h
#error "ECameraTypes.generated.h already included, missing '#pragma once' in ECameraTypes.h"
#endif
#define EASYCAMERA_ECameraTypes_generated_h

#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraTypes_h_192_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOrbit_Statics; \
	EASYCAMERA_API static class UScriptStruct* StaticStruct();


template<> EASYCAMERA_API UScriptStruct* StaticStruct<struct FOrbit>();

#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraTypes_h_213_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRecenteringParams_Statics; \
	EASYCAMERA_API static class UScriptStruct* StaticStruct();


template<> EASYCAMERA_API UScriptStruct* StaticStruct<struct FRecenteringParams>();

#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraTypes_h_263_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOccluderParams_Statics; \
	EASYCAMERA_API static class UScriptStruct* StaticStruct();


template<> EASYCAMERA_API UScriptStruct* StaticStruct<struct FOccluderParams>();

#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraTypes_h_318_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDampParams_Statics; \
	EASYCAMERA_API static class UScriptStruct* StaticStruct();


template<> EASYCAMERA_API UScriptStruct* StaticStruct<struct FDampParams>();

#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraTypes_h_359_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBoundingWrappedActor_Statics; \
	EASYCAMERA_API static class UScriptStruct* StaticStruct();


template<> EASYCAMERA_API UScriptStruct* StaticStruct<struct FBoundingWrappedActor>();

#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraTypes_h_406_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRailManualPointParams_Statics; \
	EASYCAMERA_API static class UScriptStruct* StaticStruct();


template<> EASYCAMERA_API UScriptStruct* StaticStruct<struct FRailManualPointParams>();

#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraTypes_h_445_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRailManualParams_Statics; \
	EASYCAMERA_API static class UScriptStruct* StaticStruct();


template<> EASYCAMERA_API UScriptStruct* StaticStruct<struct FRailManualParams>();

#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraTypes_h_465_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCraneManualPointParams_Statics; \
	EASYCAMERA_API static class UScriptStruct* StaticStruct();


template<> EASYCAMERA_API UScriptStruct* StaticStruct<struct FCraneManualPointParams>();

#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraTypes_h_512_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCraneManualParams_Statics; \
	EASYCAMERA_API static class UScriptStruct* StaticStruct();


template<> EASYCAMERA_API UScriptStruct* StaticStruct<struct FCraneManualParams>();

#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraTypes_h_532_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWeightedPostProcess_Statics; \
	EASYCAMERA_API static class UScriptStruct* StaticStruct();


template<> EASYCAMERA_API UScriptStruct* StaticStruct<struct FWeightedPostProcess>();

#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraTypes_h_591_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPackedOscillationParams_Statics; \
	EASYCAMERA_API static class UScriptStruct* StaticStruct();


template<> EASYCAMERA_API UScriptStruct* StaticStruct<struct FPackedOscillationParams>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraTypes_h


#define FOREACH_ENUM_EHEADING(op) \
	op(EHeading::WorldForward) \
	op(EHeading::TargetForward) \
	op(EHeading::HardForward) \
	op(EHeading::SoftForward) 

enum class EHeading : uint8;
template<> struct TIsUEnumClass<EHeading> { enum { Value = true }; };
template<> EASYCAMERA_API UEnum* StaticEnum<EHeading>();

#define FOREACH_ENUM_ESTAGE(op) \
	op(EStage::PreFollow) \
	op(EStage::Follow) \
	op(EStage::PostFollow) \
	op(EStage::PreAim) \
	op(EStage::Aim) \
	op(EStage::PostAim) \
	op(EStage::Noise) \
	op(EStage::Finalize) 

enum class EStage : uint8;
template<> struct TIsUEnumClass<EStage> { enum { Value = true }; };
template<> EASYCAMERA_API UEnum* StaticEnum<EStage>();

#define FOREACH_ENUM_ESIMPLEFOLLOWTYPE(op) \
	op(ESimpleFollowType::WorldSpace) \
	op(ESimpleFollowType::LocalSpace) 

enum class ESimpleFollowType : uint8;
template<> struct TIsUEnumClass<ESimpleFollowType> { enum { Value = true }; };
template<> EASYCAMERA_API UEnum* StaticEnum<ESimpleFollowType>();

#define FOREACH_ENUM_ETRACESHAPE(op) \
	op(ETraceShape::Line) \
	op(ETraceShape::Sphere) 

enum class ETraceShape : uint8;
template<> struct TIsUEnumClass<ETraceShape> { enum { Value = true }; };
template<> EASYCAMERA_API UEnum* StaticEnum<ETraceShape>();

#define FOREACH_ENUM_EDAMPMETHOD(op) \
	op(EDampMethod::Naive) \
	op(EDampMethod::Simulate) \
	op(EDampMethod::Spring) 

enum class EDampMethod : uint8;
template<> struct TIsUEnumClass<EDampMethod> { enum { Value = true }; };
template<> EASYCAMERA_API UEnum* StaticEnum<EDampMethod>();

#define FOREACH_ENUM_EGROUPLOCATIONMETHOD(op) \
	op(EGroupLocationMethod::ArithmeticAverage) \
	op(EGroupLocationMethod::WeighedAverage) \
	op(EGroupLocationMethod::UnweightedDistanceBased) \
	op(EGroupLocationMethod::WeightedDistanceBased) \
	op(EGroupLocationMethod::Closest) \
	op(EGroupLocationMethod::Farest) \
	op(EGroupLocationMethod::Specified) 

enum class EGroupLocationMethod : uint8;
template<> struct TIsUEnumClass<EGroupLocationMethod> { enum { Value = true }; };
template<> EASYCAMERA_API UEnum* StaticEnum<EGroupLocationMethod>();

#define FOREACH_ENUM_EGROUPROTATIONMETHOD(op) \
	op(EGroupRotationMethod::ArithmeticAverage) \
	op(EGroupRotationMethod::WeighedAverage) \
	op(EGroupRotationMethod::Specified) 

enum class EGroupRotationMethod : uint8;
template<> struct TIsUEnumClass<EGroupRotationMethod> { enum { Value = true }; };
template<> EASYCAMERA_API UEnum* StaticEnum<EGroupRotationMethod>();

#define FOREACH_ENUM_ERESOLVEGROUPACTORMETHOD(op) \
	op(EResolveGroupActorMethod::ZoomOnly) \
	op(EResolveGroupActorMethod::DistanceOnly) \
	op(EResolveGroupActorMethod::Mix) 

enum class EResolveGroupActorMethod : uint8;
template<> struct TIsUEnumClass<EResolveGroupActorMethod> { enum { Value = true }; };
template<> EASYCAMERA_API UEnum* StaticEnum<EResolveGroupActorMethod>();

#define FOREACH_ENUM_ERAILFOLLOWTYPE(op) \
	op(ERailFollowType::FollowTarget) \
	op(ERailFollowType::FixedSpeed) \
	op(ERailFollowType::Manual) 

enum class ERailFollowType : uint8;
template<> struct TIsUEnumClass<ERailFollowType> { enum { Value = true }; };
template<> EASYCAMERA_API UEnum* StaticEnum<ERailFollowType>();

#define FOREACH_ENUM_ECRANEFOLLOWTYPE(op) \
	op(ECraneFollowType::FollowTarget) \
	op(ECraneFollowType::FixedSpeed) \
	op(ECraneFollowType::Manual) 

enum class ECraneFollowType : uint8;
template<> struct TIsUEnumClass<ECraneFollowType> { enum { Value = true }; };
template<> EASYCAMERA_API UEnum* StaticEnum<ECraneFollowType>();

#define FOREACH_ENUM_ECAMERASHAKETYPE(op) \
	op(ECameraShakeType::Wave) \
	op(ECameraShakeType::Perlin) 

enum class ECameraShakeType : uint8;
template<> struct TIsUEnumClass<ECameraShakeType> { enum { Value = true }; };
template<> EASYCAMERA_API UEnum* StaticEnum<ECameraShakeType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
