// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Utils/ECameraGroupActorComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBoundingWrappedActor;
#ifdef EASYCAMERA_ECameraGroupActorComponent_generated_h
#error "ECameraGroupActorComponent.generated.h already included, missing '#pragma once' in ECameraGroupActorComponent.h"
#endif
#define EASYCAMERA_ECameraGroupActorComponent_generated_h

#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraGroupActorComponent_h_13_SPARSE_DATA
#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraGroupActorComponent_h_13_RPC_WRAPPERS \
	virtual FRotator GetGroupActorRotation_Implementation(); \
	virtual FVector GetGroupActorLocation_Implementation(); \
 \
	DECLARE_FUNCTION(execAddTargetActor); \
	DECLARE_FUNCTION(execSetBoundingActorExcludeBoundingBox); \
	DECLARE_FUNCTION(execSetBoundingActorHeight); \
	DECLARE_FUNCTION(execSetBoundingActorWidth); \
	DECLARE_FUNCTION(execSetBoundingActorWeight); \
	DECLARE_FUNCTION(execGetLocationBasedOnDistance); \
	DECLARE_FUNCTION(execGetFarestOrClosestLocation); \
	DECLARE_FUNCTION(execGetNormalizer); \
	DECLARE_FUNCTION(execCheckWeightAllZero); \
	DECLARE_FUNCTION(execGetAverageRotation); \
	DECLARE_FUNCTION(execGetAverageLocation); \
	DECLARE_FUNCTION(execGetGroupActorRotation); \
	DECLARE_FUNCTION(execGetGroupActorLocation);


#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraGroupActorComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddTargetActor); \
	DECLARE_FUNCTION(execSetBoundingActorExcludeBoundingBox); \
	DECLARE_FUNCTION(execSetBoundingActorHeight); \
	DECLARE_FUNCTION(execSetBoundingActorWidth); \
	DECLARE_FUNCTION(execSetBoundingActorWeight); \
	DECLARE_FUNCTION(execGetLocationBasedOnDistance); \
	DECLARE_FUNCTION(execGetFarestOrClosestLocation); \
	DECLARE_FUNCTION(execGetNormalizer); \
	DECLARE_FUNCTION(execCheckWeightAllZero); \
	DECLARE_FUNCTION(execGetAverageRotation); \
	DECLARE_FUNCTION(execGetAverageLocation); \
	DECLARE_FUNCTION(execGetGroupActorRotation); \
	DECLARE_FUNCTION(execGetGroupActorLocation);


#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraGroupActorComponent_h_13_ACCESSORS
#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraGroupActorComponent_h_13_CALLBACK_WRAPPERS
#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraGroupActorComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUECameraGroupActorComponent(); \
	friend struct Z_Construct_UClass_UECameraGroupActorComponent_Statics; \
public: \
	DECLARE_CLASS(UECameraGroupActorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EasyCamera"), NO_API) \
	DECLARE_SERIALIZER(UECameraGroupActorComponent)


#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraGroupActorComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUECameraGroupActorComponent(); \
	friend struct Z_Construct_UClass_UECameraGroupActorComponent_Statics; \
public: \
	DECLARE_CLASS(UECameraGroupActorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EasyCamera"), NO_API) \
	DECLARE_SERIALIZER(UECameraGroupActorComponent)


#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraGroupActorComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UECameraGroupActorComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UECameraGroupActorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UECameraGroupActorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UECameraGroupActorComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UECameraGroupActorComponent(UECameraGroupActorComponent&&); \
	NO_API UECameraGroupActorComponent(const UECameraGroupActorComponent&); \
public: \
	NO_API virtual ~UECameraGroupActorComponent();


#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraGroupActorComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UECameraGroupActorComponent(UECameraGroupActorComponent&&); \
	NO_API UECameraGroupActorComponent(const UECameraGroupActorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UECameraGroupActorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UECameraGroupActorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UECameraGroupActorComponent) \
	NO_API virtual ~UECameraGroupActorComponent();


#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraGroupActorComponent_h_10_PROLOG
#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraGroupActorComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraGroupActorComponent_h_13_SPARSE_DATA \
	FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraGroupActorComponent_h_13_RPC_WRAPPERS \
	FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraGroupActorComponent_h_13_ACCESSORS \
	FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraGroupActorComponent_h_13_CALLBACK_WRAPPERS \
	FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraGroupActorComponent_h_13_INCLASS \
	FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraGroupActorComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraGroupActorComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraGroupActorComponent_h_13_SPARSE_DATA \
	FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraGroupActorComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraGroupActorComponent_h_13_ACCESSORS \
	FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraGroupActorComponent_h_13_CALLBACK_WRAPPERS \
	FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraGroupActorComponent_h_13_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraGroupActorComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EASYCAMERA_API UClass* StaticClass<class UECameraGroupActorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraGroupActorComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
