// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/ECameraSettingsComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AECameraBase;
class APawn;
class APlayerCameraManager;
class APlayerController;
#ifdef EASYCAMERA_ECameraSettingsComponent_generated_h
#error "ECameraSettingsComponent.generated.h already included, missing '#pragma once' in ECameraSettingsComponent.h"
#endif
#define EASYCAMERA_ECameraSettingsComponent_generated_h

#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_ECameraSettingsComponent_h_21_SPARSE_DATA
#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_ECameraSettingsComponent_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEndViewTarget); \
	DECLARE_FUNCTION(execBecomeViewTarget); \
	DECLARE_FUNCTION(execSetAimTarget); \
	DECLARE_FUNCTION(execSetFollowTarget); \
	DECLARE_FUNCTION(execGetPlayerCameraManager); \
	DECLARE_FUNCTION(execGetOwningCamera); \
	DECLARE_FUNCTION(execGetOwningPawn); \
	DECLARE_FUNCTION(execGetPlayerController);


#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_ECameraSettingsComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndViewTarget); \
	DECLARE_FUNCTION(execBecomeViewTarget); \
	DECLARE_FUNCTION(execSetAimTarget); \
	DECLARE_FUNCTION(execSetFollowTarget); \
	DECLARE_FUNCTION(execGetPlayerCameraManager); \
	DECLARE_FUNCTION(execGetOwningCamera); \
	DECLARE_FUNCTION(execGetOwningPawn); \
	DECLARE_FUNCTION(execGetPlayerController);


#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_ECameraSettingsComponent_h_21_ACCESSORS
#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_ECameraSettingsComponent_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUECameraSettingsComponent(); \
	friend struct Z_Construct_UClass_UECameraSettingsComponent_Statics; \
public: \
	DECLARE_CLASS(UECameraSettingsComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EasyCamera"), NO_API) \
	DECLARE_SERIALIZER(UECameraSettingsComponent)


#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_ECameraSettingsComponent_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUECameraSettingsComponent(); \
	friend struct Z_Construct_UClass_UECameraSettingsComponent_Statics; \
public: \
	DECLARE_CLASS(UECameraSettingsComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EasyCamera"), NO_API) \
	DECLARE_SERIALIZER(UECameraSettingsComponent)


#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_ECameraSettingsComponent_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UECameraSettingsComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UECameraSettingsComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UECameraSettingsComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UECameraSettingsComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UECameraSettingsComponent(UECameraSettingsComponent&&); \
	NO_API UECameraSettingsComponent(const UECameraSettingsComponent&); \
public: \
	NO_API virtual ~UECameraSettingsComponent();


#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_ECameraSettingsComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UECameraSettingsComponent(UECameraSettingsComponent&&); \
	NO_API UECameraSettingsComponent(const UECameraSettingsComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UECameraSettingsComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UECameraSettingsComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UECameraSettingsComponent) \
	NO_API virtual ~UECameraSettingsComponent();


#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_ECameraSettingsComponent_h_18_PROLOG
#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_ECameraSettingsComponent_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_ECameraSettingsComponent_h_21_SPARSE_DATA \
	FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_ECameraSettingsComponent_h_21_RPC_WRAPPERS \
	FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_ECameraSettingsComponent_h_21_ACCESSORS \
	FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_ECameraSettingsComponent_h_21_INCLASS \
	FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_ECameraSettingsComponent_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_ECameraSettingsComponent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_ECameraSettingsComponent_h_21_SPARSE_DATA \
	FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_ECameraSettingsComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_ECameraSettingsComponent_h_21_ACCESSORS \
	FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_ECameraSettingsComponent_h_21_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_ECameraSettingsComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EASYCAMERA_API UClass* StaticClass<class UECameraSettingsComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_ECameraSettingsComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
