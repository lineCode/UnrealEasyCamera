// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/ECameraBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCameraComponent;
class UECameraComponentAim;
class UECameraComponentFollow;
#ifdef EASYCAMERA_ECameraBase_generated_h
#error "ECameraBase.generated.h already included, missing '#pragma once' in ECameraBase.h"
#endif
#define EASYCAMERA_ECameraBase_generated_h

#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_ECameraBase_h_21_SPARSE_DATA
#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_ECameraBase_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCameraComponent); \
	DECLARE_FUNCTION(execGetAimComponent); \
	DECLARE_FUNCTION(execGetFollowComponent);


#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_ECameraBase_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCameraComponent); \
	DECLARE_FUNCTION(execGetAimComponent); \
	DECLARE_FUNCTION(execGetFollowComponent);


#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_ECameraBase_h_21_ACCESSORS
#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_ECameraBase_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAECameraBase(); \
	friend struct Z_Construct_UClass_AECameraBase_Statics; \
public: \
	DECLARE_CLASS(AECameraBase, ACameraActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EasyCamera"), NO_API) \
	DECLARE_SERIALIZER(AECameraBase)


#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_ECameraBase_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAECameraBase(); \
	friend struct Z_Construct_UClass_AECameraBase_Statics; \
public: \
	DECLARE_CLASS(AECameraBase, ACameraActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EasyCamera"), NO_API) \
	DECLARE_SERIALIZER(AECameraBase)


#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_ECameraBase_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AECameraBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AECameraBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AECameraBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AECameraBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AECameraBase(AECameraBase&&); \
	NO_API AECameraBase(const AECameraBase&); \
public: \
	NO_API virtual ~AECameraBase();


#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_ECameraBase_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AECameraBase(AECameraBase&&); \
	NO_API AECameraBase(const AECameraBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AECameraBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AECameraBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AECameraBase) \
	NO_API virtual ~AECameraBase();


#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_ECameraBase_h_18_PROLOG
#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_ECameraBase_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_ECameraBase_h_21_SPARSE_DATA \
	FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_ECameraBase_h_21_RPC_WRAPPERS \
	FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_ECameraBase_h_21_ACCESSORS \
	FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_ECameraBase_h_21_INCLASS \
	FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_ECameraBase_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_ECameraBase_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_ECameraBase_h_21_SPARSE_DATA \
	FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_ECameraBase_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_ECameraBase_h_21_ACCESSORS \
	FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_ECameraBase_h_21_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_ECameraBase_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EASYCAMERA_API UClass* StaticClass<class AECameraBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_ECameraBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
