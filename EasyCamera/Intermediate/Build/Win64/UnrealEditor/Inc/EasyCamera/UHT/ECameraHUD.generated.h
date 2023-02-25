// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Utils/ECameraHUD.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EASYCAMERA_ECameraHUD_generated_h
#error "ECameraHUD.generated.h already included, missing '#pragma once' in ECameraHUD.h"
#endif
#define EASYCAMERA_ECameraHUD_generated_h

#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraHUD_h_16_SPARSE_DATA
#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraHUD_h_16_RPC_WRAPPERS
#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraHUD_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraHUD_h_16_ACCESSORS
#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraHUD_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAECameraHUD(); \
	friend struct Z_Construct_UClass_AECameraHUD_Statics; \
public: \
	DECLARE_CLASS(AECameraHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/EasyCamera"), NO_API) \
	DECLARE_SERIALIZER(AECameraHUD)


#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraHUD_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAECameraHUD(); \
	friend struct Z_Construct_UClass_AECameraHUD_Statics; \
public: \
	DECLARE_CLASS(AECameraHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/EasyCamera"), NO_API) \
	DECLARE_SERIALIZER(AECameraHUD)


#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraHUD_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AECameraHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AECameraHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AECameraHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AECameraHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AECameraHUD(AECameraHUD&&); \
	NO_API AECameraHUD(const AECameraHUD&); \
public: \
	NO_API virtual ~AECameraHUD();


#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraHUD_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AECameraHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AECameraHUD(AECameraHUD&&); \
	NO_API AECameraHUD(const AECameraHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AECameraHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AECameraHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AECameraHUD) \
	NO_API virtual ~AECameraHUD();


#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraHUD_h_13_PROLOG
#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraHUD_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraHUD_h_16_SPARSE_DATA \
	FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraHUD_h_16_RPC_WRAPPERS \
	FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraHUD_h_16_ACCESSORS \
	FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraHUD_h_16_INCLASS \
	FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraHUD_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraHUD_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraHUD_h_16_SPARSE_DATA \
	FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraHUD_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraHUD_h_16_ACCESSORS \
	FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraHUD_h_16_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraHUD_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EASYCAMERA_API UClass* StaticClass<class AECameraHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
