// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/EPlayerCameraManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IBlendableInterface;
class UCameraShakeBase;
enum class ECameraShakePlaySpace : uint8;
struct FLinearColor;
struct FPackedOscillationParams;
struct FPerlinNoiseShaker;
struct FPostProcessSettings;
struct FWaveOscillator;
#ifdef EASYCAMERA_EPlayerCameraManager_generated_h
#error "EPlayerCameraManager.generated.h already included, missing '#pragma once' in EPlayerCameraManager.h"
#endif
#define EASYCAMERA_EPlayerCameraManager_generated_h

#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_EPlayerCameraManager_h_24_SPARSE_DATA
#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_EPlayerCameraManager_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEasyStartCameraShake); \
	DECLARE_FUNCTION(execStartCameraShakePerlin); \
	DECLARE_FUNCTION(execStartCameraShakeWave); \
	DECLARE_FUNCTION(execEasyStopCameraFade); \
	DECLARE_FUNCTION(execEasyStartCameraFade); \
	DECLARE_FUNCTION(execRemoveAllPostProcesses); \
	DECLARE_FUNCTION(execRemoveCompletedPostProcesses); \
	DECLARE_FUNCTION(execAddPostProcess); \
	DECLARE_FUNCTION(execRemoveBlendable); \
	DECLARE_FUNCTION(execAddBlendable);


#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_EPlayerCameraManager_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEasyStartCameraShake); \
	DECLARE_FUNCTION(execStartCameraShakePerlin); \
	DECLARE_FUNCTION(execStartCameraShakeWave); \
	DECLARE_FUNCTION(execEasyStopCameraFade); \
	DECLARE_FUNCTION(execEasyStartCameraFade); \
	DECLARE_FUNCTION(execRemoveAllPostProcesses); \
	DECLARE_FUNCTION(execRemoveCompletedPostProcesses); \
	DECLARE_FUNCTION(execAddPostProcess); \
	DECLARE_FUNCTION(execRemoveBlendable); \
	DECLARE_FUNCTION(execAddBlendable);


#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_EPlayerCameraManager_h_24_ACCESSORS
#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_EPlayerCameraManager_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEPlayerCameraManager(); \
	friend struct Z_Construct_UClass_AEPlayerCameraManager_Statics; \
public: \
	DECLARE_CLASS(AEPlayerCameraManager, APlayerCameraManager, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/EasyCamera"), NO_API) \
	DECLARE_SERIALIZER(AEPlayerCameraManager)


#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_EPlayerCameraManager_h_24_INCLASS \
private: \
	static void StaticRegisterNativesAEPlayerCameraManager(); \
	friend struct Z_Construct_UClass_AEPlayerCameraManager_Statics; \
public: \
	DECLARE_CLASS(AEPlayerCameraManager, APlayerCameraManager, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/EasyCamera"), NO_API) \
	DECLARE_SERIALIZER(AEPlayerCameraManager)


#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_EPlayerCameraManager_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEPlayerCameraManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEPlayerCameraManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEPlayerCameraManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEPlayerCameraManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEPlayerCameraManager(AEPlayerCameraManager&&); \
	NO_API AEPlayerCameraManager(const AEPlayerCameraManager&); \
public: \
	NO_API virtual ~AEPlayerCameraManager();


#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_EPlayerCameraManager_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEPlayerCameraManager(AEPlayerCameraManager&&); \
	NO_API AEPlayerCameraManager(const AEPlayerCameraManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEPlayerCameraManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEPlayerCameraManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEPlayerCameraManager) \
	NO_API virtual ~AEPlayerCameraManager();


#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_EPlayerCameraManager_h_21_PROLOG
#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_EPlayerCameraManager_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_EPlayerCameraManager_h_24_SPARSE_DATA \
	FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_EPlayerCameraManager_h_24_RPC_WRAPPERS \
	FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_EPlayerCameraManager_h_24_ACCESSORS \
	FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_EPlayerCameraManager_h_24_INCLASS \
	FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_EPlayerCameraManager_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_EPlayerCameraManager_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_EPlayerCameraManager_h_24_SPARSE_DATA \
	FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_EPlayerCameraManager_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_EPlayerCameraManager_h_24_ACCESSORS \
	FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_EPlayerCameraManager_h_24_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_EPlayerCameraManager_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EASYCAMERA_API UClass* StaticClass<class AEPlayerCameraManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_EPlayerCameraManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
