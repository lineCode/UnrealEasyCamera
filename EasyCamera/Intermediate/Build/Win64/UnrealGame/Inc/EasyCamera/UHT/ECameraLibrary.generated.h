// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Utils/ECameraLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AECameraBase;
class UObject;
struct FDampParams;
#ifdef EASYCAMERA_ECameraLibrary_generated_h
#error "ECameraLibrary.generated.h already included, missing '#pragma once' in ECameraLibrary.h"
#endif
#define EASYCAMERA_ECameraLibrary_generated_h

#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraLibrary_h_16_SPARSE_DATA
#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraLibrary_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetActiveCamera); \
	DECLARE_FUNCTION(execTerminateActiveCamera); \
	DECLARE_FUNCTION(execCallCamera); \
	DECLARE_FUNCTION(execGetLocalSpacePositionWithVectors); \
	DECLARE_FUNCTION(execGetLocalSpacePosition); \
	DECLARE_FUNCTION(execDamperQuaternion); \
	DECLARE_FUNCTION(execSpringDampVector); \
	DECLARE_FUNCTION(execDamperRotatorWithDifferentDampTime); \
	DECLARE_FUNCTION(execDamperRotatorWithSameDampTime); \
	DECLARE_FUNCTION(execDamperVectorWithDifferentDampTime); \
	DECLARE_FUNCTION(execDamperVectorWithSameDampTime); \
	DECLARE_FUNCTION(execDamperValue);


#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetActiveCamera); \
	DECLARE_FUNCTION(execTerminateActiveCamera); \
	DECLARE_FUNCTION(execCallCamera); \
	DECLARE_FUNCTION(execGetLocalSpacePositionWithVectors); \
	DECLARE_FUNCTION(execGetLocalSpacePosition); \
	DECLARE_FUNCTION(execDamperQuaternion); \
	DECLARE_FUNCTION(execSpringDampVector); \
	DECLARE_FUNCTION(execDamperRotatorWithDifferentDampTime); \
	DECLARE_FUNCTION(execDamperRotatorWithSameDampTime); \
	DECLARE_FUNCTION(execDamperVectorWithDifferentDampTime); \
	DECLARE_FUNCTION(execDamperVectorWithSameDampTime); \
	DECLARE_FUNCTION(execDamperValue);


#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraLibrary_h_16_ACCESSORS
#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUECameraLibrary(); \
	friend struct Z_Construct_UClass_UECameraLibrary_Statics; \
public: \
	DECLARE_CLASS(UECameraLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EasyCamera"), NO_API) \
	DECLARE_SERIALIZER(UECameraLibrary)


#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraLibrary_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUECameraLibrary(); \
	friend struct Z_Construct_UClass_UECameraLibrary_Statics; \
public: \
	DECLARE_CLASS(UECameraLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EasyCamera"), NO_API) \
	DECLARE_SERIALIZER(UECameraLibrary)


#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraLibrary_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UECameraLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UECameraLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UECameraLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UECameraLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UECameraLibrary(UECameraLibrary&&); \
	NO_API UECameraLibrary(const UECameraLibrary&); \
public: \
	NO_API virtual ~UECameraLibrary();


#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UECameraLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UECameraLibrary(UECameraLibrary&&); \
	NO_API UECameraLibrary(const UECameraLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UECameraLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UECameraLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UECameraLibrary) \
	NO_API virtual ~UECameraLibrary();


#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraLibrary_h_13_PROLOG
#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraLibrary_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraLibrary_h_16_SPARSE_DATA \
	FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraLibrary_h_16_RPC_WRAPPERS \
	FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraLibrary_h_16_ACCESSORS \
	FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraLibrary_h_16_INCLASS \
	FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraLibrary_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraLibrary_h_16_SPARSE_DATA \
	FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraLibrary_h_16_ACCESSORS \
	FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraLibrary_h_16_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EASYCAMERA_API UClass* StaticClass<class UECameraLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
