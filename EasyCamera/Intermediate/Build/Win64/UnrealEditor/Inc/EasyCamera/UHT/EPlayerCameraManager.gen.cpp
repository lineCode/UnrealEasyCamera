// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyCamera/Public/Core/EPlayerCameraManager.h"
#include "EasyCamera/Public/Utils/ECameraTypes.h"
#include "Engine/Classes/Engine/Scene.h"
#include "GameplayCameras/Public/PerlinNoiseCameraShakePattern.h"
#include "GameplayCameras/Public/WaveOscillatorCameraShakePattern.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPlayerCameraManager() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	EASYCAMERA_API UClass* Z_Construct_UClass_AEPlayerCameraManager();
	EASYCAMERA_API UClass* Z_Construct_UClass_AEPlayerCameraManager_NoRegister();
	EASYCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FPackedOscillationParams();
	ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
	ENGINE_API UClass* Z_Construct_UClass_UBlendableInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECameraShakePlaySpace();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEasingFunc();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
	GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FPerlinNoiseShaker();
	GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FWaveOscillator();
	UPackage* Z_Construct_UPackage__Script_EasyCamera();
// End Cross Module References
	DEFINE_FUNCTION(AEPlayerCameraManager::execEasyStartCameraShake)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_GET_ENUM(ECameraShakePlaySpace,Z_Param_PlaySpace);
		P_GET_STRUCT(FRotator,Z_Param_UserPlaySpaceRot);
		P_GET_UBOOL(Z_Param_bSingleInstance);
		P_GET_STRUCT(FPackedOscillationParams,Z_Param_ShakeParams);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCameraShakeBase**)Z_Param__Result=P_THIS->EasyStartCameraShake(Z_Param_Scale,ECameraShakePlaySpace(Z_Param_PlaySpace),Z_Param_UserPlaySpaceRot,Z_Param_bSingleInstance,Z_Param_ShakeParams);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEPlayerCameraManager::execStartCameraShakePerlin)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_GET_ENUM(ECameraShakePlaySpace,Z_Param_PlaySpace);
		P_GET_STRUCT(FRotator,Z_Param_UserPlaySpaceRot);
		P_GET_UBOOL(Z_Param_bSingleInstance);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LocationAmplitudeMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LocationFrequencyMultiplier);
		P_GET_STRUCT(FPerlinNoiseShaker,Z_Param_X);
		P_GET_STRUCT(FPerlinNoiseShaker,Z_Param_Y);
		P_GET_STRUCT(FPerlinNoiseShaker,Z_Param_Z);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RotationAmplitudeMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RotationFrequencyMultiplier);
		P_GET_STRUCT(FPerlinNoiseShaker,Z_Param_Pitch);
		P_GET_STRUCT(FPerlinNoiseShaker,Z_Param_Yaw);
		P_GET_STRUCT(FPerlinNoiseShaker,Z_Param_Roll);
		P_GET_STRUCT(FPerlinNoiseShaker,Z_Param_FOV);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BlendInTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BlendOutTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCameraShakeBase**)Z_Param__Result=P_THIS->StartCameraShakePerlin(Z_Param_Scale,ECameraShakePlaySpace(Z_Param_PlaySpace),Z_Param_UserPlaySpaceRot,Z_Param_bSingleInstance,Z_Param_LocationAmplitudeMultiplier,Z_Param_LocationFrequencyMultiplier,Z_Param_X,Z_Param_Y,Z_Param_Z,Z_Param_RotationAmplitudeMultiplier,Z_Param_RotationFrequencyMultiplier,Z_Param_Pitch,Z_Param_Yaw,Z_Param_Roll,Z_Param_FOV,Z_Param_Duration,Z_Param_BlendInTime,Z_Param_BlendOutTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEPlayerCameraManager::execStartCameraShakeWave)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_GET_ENUM(ECameraShakePlaySpace,Z_Param_PlaySpace);
		P_GET_STRUCT(FRotator,Z_Param_UserPlaySpaceRot);
		P_GET_UBOOL(Z_Param_bSingleInstance);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LocationAmplitudeMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LocationFrequencyMultiplier);
		P_GET_STRUCT(FWaveOscillator,Z_Param_X);
		P_GET_STRUCT(FWaveOscillator,Z_Param_Y);
		P_GET_STRUCT(FWaveOscillator,Z_Param_Z);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RotationAmplitudeMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RotationFrequencyMultiplier);
		P_GET_STRUCT(FWaveOscillator,Z_Param_Pitch);
		P_GET_STRUCT(FWaveOscillator,Z_Param_Yaw);
		P_GET_STRUCT(FWaveOscillator,Z_Param_Roll);
		P_GET_STRUCT(FWaveOscillator,Z_Param_FOV);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BlendInTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BlendOutTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCameraShakeBase**)Z_Param__Result=P_THIS->StartCameraShakeWave(Z_Param_Scale,ECameraShakePlaySpace(Z_Param_PlaySpace),Z_Param_UserPlaySpaceRot,Z_Param_bSingleInstance,Z_Param_LocationAmplitudeMultiplier,Z_Param_LocationFrequencyMultiplier,Z_Param_X,Z_Param_Y,Z_Param_Z,Z_Param_RotationAmplitudeMultiplier,Z_Param_RotationFrequencyMultiplier,Z_Param_Pitch,Z_Param_Yaw,Z_Param_Roll,Z_Param_FOV,Z_Param_Duration,Z_Param_BlendInTime,Z_Param_BlendOutTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEPlayerCameraManager::execEasyStopCameraFade)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_StopAlpha);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EasyStopCameraFade(Z_Param_StopAlpha);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEPlayerCameraManager::execEasyStartCameraFade)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_FromAlpha);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ToAlpha);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FadeInTime);
		P_GET_PROPERTY(FByteProperty,Z_Param_FadeInFunc);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FadeOutTime);
		P_GET_PROPERTY(FByteProperty,Z_Param_FadeOutFunc);
		P_GET_STRUCT(FLinearColor,Z_Param_Color);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EasyStartCameraFade(Z_Param_FromAlpha,Z_Param_ToAlpha,Z_Param_FadeInTime,EEasingFunc::Type(Z_Param_FadeInFunc),Z_Param_Duration,Z_Param_FadeOutTime,EEasingFunc::Type(Z_Param_FadeOutFunc),Z_Param_Color);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEPlayerCameraManager::execRemoveAllPostProcesses)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAllPostProcesses();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEPlayerCameraManager::execRemoveCompletedPostProcesses)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveCompletedPostProcesses();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEPlayerCameraManager::execAddPostProcess)
	{
		P_GET_STRUCT_REF(FPostProcessSettings,Z_Param_Out_InPostProcess);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InWeight);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InBlendInTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDuration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InBlendOutTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddPostProcess(Z_Param_Out_InPostProcess,Z_Param_InWeight,Z_Param_InBlendInTime,Z_Param_InDuration,Z_Param_InBlendOutTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEPlayerCameraManager::execRemoveBlendable)
	{
		P_GET_TINTERFACE_REF(IBlendableInterface,Z_Param_Out_InBlendableObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveBlendable(Z_Param_Out_InBlendableObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEPlayerCameraManager::execAddBlendable)
	{
		P_GET_TINTERFACE_REF(IBlendableInterface,Z_Param_Out_InBlendableObject);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InWeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddBlendable(Z_Param_Out_InBlendableObject,Z_Param_InWeight);
		P_NATIVE_END;
	}
	void AEPlayerCameraManager::StaticRegisterNativesAEPlayerCameraManager()
	{
		UClass* Class = AEPlayerCameraManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddBlendable", &AEPlayerCameraManager::execAddBlendable },
			{ "AddPostProcess", &AEPlayerCameraManager::execAddPostProcess },
			{ "EasyStartCameraFade", &AEPlayerCameraManager::execEasyStartCameraFade },
			{ "EasyStartCameraShake", &AEPlayerCameraManager::execEasyStartCameraShake },
			{ "EasyStopCameraFade", &AEPlayerCameraManager::execEasyStopCameraFade },
			{ "RemoveAllPostProcesses", &AEPlayerCameraManager::execRemoveAllPostProcesses },
			{ "RemoveBlendable", &AEPlayerCameraManager::execRemoveBlendable },
			{ "RemoveCompletedPostProcesses", &AEPlayerCameraManager::execRemoveCompletedPostProcesses },
			{ "StartCameraShakePerlin", &AEPlayerCameraManager::execStartCameraShakePerlin },
			{ "StartCameraShakeWave", &AEPlayerCameraManager::execStartCameraShakeWave },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEPlayerCameraManager_AddBlendable_Statics
	{
		struct EPlayerCameraManager_eventAddBlendable_Parms
		{
			TScriptInterface<IBlendableInterface> InBlendableObject;
			float InWeight;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBlendableObject_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_InBlendableObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InWeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEPlayerCameraManager_AddBlendable_Statics::NewProp_InBlendableObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_AEPlayerCameraManager_AddBlendable_Statics::NewProp_InBlendableObject = { "InBlendableObject", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EPlayerCameraManager_eventAddBlendable_Parms, InBlendableObject), Z_Construct_UClass_UBlendableInterface_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AEPlayerCameraManager_AddBlendable_Statics::NewProp_InBlendableObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEPlayerCameraManager_AddBlendable_Statics::NewProp_InBlendableObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEPlayerCameraManager_AddBlendable_Statics::NewProp_InWeight_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEPlayerCameraManager_AddBlendable_Statics::NewProp_InWeight = { "InWeight", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EPlayerCameraManager_eventAddBlendable_Parms, InWeight), METADATA_PARAMS(Z_Construct_UFunction_AEPlayerCameraManager_AddBlendable_Statics::NewProp_InWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEPlayerCameraManager_AddBlendable_Statics::NewProp_InWeight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEPlayerCameraManager_AddBlendable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEPlayerCameraManager_AddBlendable_Statics::NewProp_InBlendableObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEPlayerCameraManager_AddBlendable_Statics::NewProp_InWeight,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEPlayerCameraManager_AddBlendable_Statics::Function_MetaDataParams[] = {
		{ "Category", "ECamera|PostProcess" },
		{ "Comment", "/** Applies a post process material to the player camera manager. \n\x09 *  @param InBlendableObject - The post process material to add.\n\x09 *  @param InWeight - Amount of influence the post process effect will have. 1 means full effect, while 0 means no effect.\n\x09 *  @TODO: removing reference will crash engine. I do not know why, but there might be a workaround. \n\x09 */" },
		{ "CPP_Default_InWeight", "1.000000" },
		{ "ModuleRelativePath", "Public/Core/EPlayerCameraManager.h" },
		{ "ToolTip", "Applies a post process material to the player camera manager.\n@param InBlendableObject - The post process material to add.\n@param InWeight - Amount of influence the post process effect will have. 1 means full effect, while 0 means no effect.\n@TODO: removing reference will crash engine. I do not know why, but there might be a workaround." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEPlayerCameraManager_AddBlendable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEPlayerCameraManager, nullptr, "AddBlendable", nullptr, nullptr, sizeof(Z_Construct_UFunction_AEPlayerCameraManager_AddBlendable_Statics::EPlayerCameraManager_eventAddBlendable_Parms), Z_Construct_UFunction_AEPlayerCameraManager_AddBlendable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEPlayerCameraManager_AddBlendable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEPlayerCameraManager_AddBlendable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEPlayerCameraManager_AddBlendable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEPlayerCameraManager_AddBlendable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEPlayerCameraManager_AddBlendable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEPlayerCameraManager_AddPostProcess_Statics
	{
		struct EPlayerCameraManager_eventAddPostProcess_Parms
		{
			FPostProcessSettings InPostProcess;
			float InWeight;
			float InBlendInTime;
			float InDuration;
			float InBlendOutTime;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPostProcess_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPostProcess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBlendInTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InBlendInTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBlendOutTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InBlendOutTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEPlayerCameraManager_AddPostProcess_Statics::NewProp_InPostProcess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEPlayerCameraManager_AddPostProcess_Statics::NewProp_InPostProcess = { "InPostProcess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EPlayerCameraManager_eventAddPostProcess_Parms, InPostProcess), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(Z_Construct_UFunction_AEPlayerCameraManager_AddPostProcess_Statics::NewProp_InPostProcess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEPlayerCameraManager_AddPostProcess_Statics::NewProp_InPostProcess_MetaData)) }; // 617129618
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEPlayerCameraManager_AddPostProcess_Statics::NewProp_InWeight_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEPlayerCameraManager_AddPostProcess_Statics::NewProp_InWeight = { "InWeight", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EPlayerCameraManager_eventAddPostProcess_Parms, InWeight), METADATA_PARAMS(Z_Construct_UFunction_AEPlayerCameraManager_AddPostProcess_Statics::NewProp_InWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEPlayerCameraManager_AddPostProcess_Statics::NewProp_InWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEPlayerCameraManager_AddPostProcess_Statics::NewProp_InBlendInTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEPlayerCameraManager_AddPostProcess_Statics::NewProp_InBlendInTime = { "InBlendInTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EPlayerCameraManager_eventAddPostProcess_Parms, InBlendInTime), METADATA_PARAMS(Z_Construct_UFunction_AEPlayerCameraManager_AddPostProcess_Statics::NewProp_InBlendInTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEPlayerCameraManager_AddPostProcess_Statics::NewProp_InBlendInTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEPlayerCameraManager_AddPostProcess_Statics::NewProp_InDuration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEPlayerCameraManager_AddPostProcess_Statics::NewProp_InDuration = { "InDuration", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EPlayerCameraManager_eventAddPostProcess_Parms, InDuration), METADATA_PARAMS(Z_Construct_UFunction_AEPlayerCameraManager_AddPostProcess_Statics::NewProp_InDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEPlayerCameraManager_AddPostProcess_Statics::NewProp_InDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEPlayerCameraManager_AddPostProcess_Statics::NewProp_InBlendOutTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEPlayerCameraManager_AddPostProcess_Statics::NewProp_InBlendOutTime = { "InBlendOutTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EPlayerCameraManager_eventAddPostProcess_Parms, InBlendOutTime), METADATA_PARAMS(Z_Construct_UFunction_AEPlayerCameraManager_AddPostProcess_Statics::NewProp_InBlendOutTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEPlayerCameraManager_AddPostProcess_Statics::NewProp_InBlendOutTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEPlayerCameraManager_AddPostProcess_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEPlayerCameraManager_AddPostProcess_Statics::NewProp_InPostProcess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEPlayerCameraManager_AddPostProcess_Statics::NewProp_InWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEPlayerCameraManager_AddPostProcess_Statics::NewProp_InBlendInTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEPlayerCameraManager_AddPostProcess_Statics::NewProp_InDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEPlayerCameraManager_AddPostProcess_Statics::NewProp_InBlendOutTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEPlayerCameraManager_AddPostProcess_Statics::Function_MetaDataParams[] = {
		{ "Category", "ECamera|PostProcess" },
		{ "Comment", "/** Add a post process to the player camera manager.\n\x09 *  @param InPostProcess - The post process setting to add.\n\x09 *  @param InWeight - Amount of influence the post process effect will have. 1 means full effect, while 0 means no effect.\n\x09 *  @param InBlendInTime - Time used to blend into this post process.\n\x09 *\x09@param InDuration - Duration for this post process. Set as 0 to keep it infinite.\n\x09 *  @param InBlendOutTime - Time used to blend out of this post process.\n  \x09 */" },
		{ "CPP_Default_InBlendInTime", "0.500000" },
		{ "CPP_Default_InBlendOutTime", "0.500000" },
		{ "CPP_Default_InDuration", "0.000000" },
		{ "CPP_Default_InWeight", "1.000000" },
		{ "ModuleRelativePath", "Public/Core/EPlayerCameraManager.h" },
		{ "ToolTip", "Add a post process to the player camera manager.\n@param InPostProcess - The post process setting to add.\n@param InWeight - Amount of influence the post process effect will have. 1 means full effect, while 0 means no effect.\n@param InBlendInTime - Time used to blend into this post process.\n    @param InDuration - Duration for this post process. Set as 0 to keep it infinite.\n@param InBlendOutTime - Time used to blend out of this post process." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEPlayerCameraManager_AddPostProcess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEPlayerCameraManager, nullptr, "AddPostProcess", nullptr, nullptr, sizeof(Z_Construct_UFunction_AEPlayerCameraManager_AddPostProcess_Statics::EPlayerCameraManager_eventAddPostProcess_Parms), Z_Construct_UFunction_AEPlayerCameraManager_AddPostProcess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEPlayerCameraManager_AddPostProcess_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEPlayerCameraManager_AddPostProcess_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEPlayerCameraManager_AddPostProcess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEPlayerCameraManager_AddPostProcess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEPlayerCameraManager_AddPostProcess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEPlayerCameraManager_EasyStartCameraFade_Statics
	{
		struct EPlayerCameraManager_eventEasyStartCameraFade_Parms
		{
			float FromAlpha;
			float ToAlpha;
			float FadeInTime;
			TEnumAsByte<EEasingFunc::Type> FadeInFunc;
			float Duration;
			float FadeOutTime;
			TEnumAsByte<EEasingFunc::Type> FadeOutFunc;
			FLinearColor Color;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FromAlpha;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ToAlpha;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeInTime;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FadeInFunc;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeOutTime;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FadeOutFunc;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEPlayerCameraManager_EasyStartCameraFade_Statics::NewProp_FromAlpha = { "FromAlpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EPlayerCameraManager_eventEasyStartCameraFade_Parms, FromAlpha), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEPlayerCameraManager_EasyStartCameraFade_Statics::NewProp_ToAlpha = { "ToAlpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EPlayerCameraManager_eventEasyStartCameraFade_Parms, ToAlpha), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEPlayerCameraManager_EasyStartCameraFade_Statics::NewProp_FadeInTime = { "FadeInTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EPlayerCameraManager_eventEasyStartCameraFade_Parms, FadeInTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AEPlayerCameraManager_EasyStartCameraFade_Statics::NewProp_FadeInFunc = { "FadeInFunc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EPlayerCameraManager_eventEasyStartCameraFade_Parms, FadeInFunc), Z_Construct_UEnum_Engine_EEasingFunc, METADATA_PARAMS(nullptr, 0) }; // 36709713
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEPlayerCameraManager_EasyStartCameraFade_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EPlayerCameraManager_eventEasyStartCameraFade_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEPlayerCameraManager_EasyStartCameraFade_Statics::NewProp_FadeOutTime = { "FadeOutTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EPlayerCameraManager_eventEasyStartCameraFade_Parms, FadeOutTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AEPlayerCameraManager_EasyStartCameraFade_Statics::NewProp_FadeOutFunc = { "FadeOutFunc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EPlayerCameraManager_eventEasyStartCameraFade_Parms, FadeOutFunc), Z_Construct_UEnum_Engine_EEasingFunc, METADATA_PARAMS(nullptr, 0) }; // 36709713
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEPlayerCameraManager_EasyStartCameraFade_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EPlayerCameraManager_eventEasyStartCameraFade_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEPlayerCameraManager_EasyStartCameraFade_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEPlayerCameraManager_EasyStartCameraFade_Statics::NewProp_FromAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEPlayerCameraManager_EasyStartCameraFade_Statics::NewProp_ToAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEPlayerCameraManager_EasyStartCameraFade_Statics::NewProp_FadeInTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEPlayerCameraManager_EasyStartCameraFade_Statics::NewProp_FadeInFunc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEPlayerCameraManager_EasyStartCameraFade_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEPlayerCameraManager_EasyStartCameraFade_Statics::NewProp_FadeOutTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEPlayerCameraManager_EasyStartCameraFade_Statics::NewProp_FadeOutFunc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEPlayerCameraManager_EasyStartCameraFade_Statics::NewProp_Color,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEPlayerCameraManager_EasyStartCameraFade_Statics::Function_MetaDataParams[] = {
		{ "Category", "ECamera|CameraFade" },
		{ "Comment", "/**\n\x09 * Does a camera fade to a solid color and then fades back.  Animates automatically.\n\x09 * @param FromAlpha - Alpha at which to begin the fade. Range [0..1], where 0 is fully transparent and 1 is fully opaque solid color.\n\x09 * @param ToAlpha - Alpha at which to finish in-fade.\n\x09 * @param FadeInTime - How long the in-fade should take, in seconds.\n\x09 * @param FadeInFunc - Blend function for in-fade.\n\x09 * @param Duration - How long ToAlpha remains after finishing in-fase, in seconds.\n\x09 * @param FadeOutTime - How long the out-fade should take, in seconds.\n\x09 * @param FadeOutFunc - Blend function for out-fade.\n\x09 * @param Color - Color to fade to/from.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Core/EPlayerCameraManager.h" },
		{ "ToolTip", "Does a camera fade to a solid color and then fades back.  Animates automatically.\n@param FromAlpha - Alpha at which to begin the fade. Range [0..1], where 0 is fully transparent and 1 is fully opaque solid color.\n@param ToAlpha - Alpha at which to finish in-fade.\n@param FadeInTime - How long the in-fade should take, in seconds.\n@param FadeInFunc - Blend function for in-fade.\n@param Duration - How long ToAlpha remains after finishing in-fase, in seconds.\n@param FadeOutTime - How long the out-fade should take, in seconds.\n@param FadeOutFunc - Blend function for out-fade.\n@param Color - Color to fade to/from." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEPlayerCameraManager_EasyStartCameraFade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEPlayerCameraManager, nullptr, "EasyStartCameraFade", nullptr, nullptr, sizeof(Z_Construct_UFunction_AEPlayerCameraManager_EasyStartCameraFade_Statics::EPlayerCameraManager_eventEasyStartCameraFade_Parms), Z_Construct_UFunction_AEPlayerCameraManager_EasyStartCameraFade_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEPlayerCameraManager_EasyStartCameraFade_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEPlayerCameraManager_EasyStartCameraFade_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEPlayerCameraManager_EasyStartCameraFade_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEPlayerCameraManager_EasyStartCameraFade()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEPlayerCameraManager_EasyStartCameraFade_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEPlayerCameraManager_EasyStartCameraShake_Statics
	{
		struct EPlayerCameraManager_eventEasyStartCameraShake_Parms
		{
			float Scale;
			ECameraShakePlaySpace PlaySpace;
			FRotator UserPlaySpaceRot;
			bool bSingleInstance;
			FPackedOscillationParams ShakeParams;
			UCameraShakeBase* ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PlaySpace_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PlaySpace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserPlaySpaceRot;
		static void NewProp_bSingleInstance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSingleInstance;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShakeParams;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEPlayerCameraManager_EasyStartCameraShake_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EPlayerCameraManager_eventEasyStartCameraShake_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AEPlayerCameraManager_EasyStartCameraShake_Statics::NewProp_PlaySpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AEPlayerCameraManager_EasyStartCameraShake_Statics::NewProp_PlaySpace = { "PlaySpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EPlayerCameraManager_eventEasyStartCameraShake_Parms, PlaySpace), Z_Construct_UEnum_Engine_ECameraShakePlaySpace, METADATA_PARAMS(nullptr, 0) }; // 1413967709
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEPlayerCameraManager_EasyStartCameraShake_Statics::NewProp_UserPlaySpaceRot = { "UserPlaySpaceRot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EPlayerCameraManager_eventEasyStartCameraShake_Parms, UserPlaySpaceRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AEPlayerCameraManager_EasyStartCameraShake_Statics::NewProp_bSingleInstance_SetBit(void* Obj)
	{
		((EPlayerCameraManager_eventEasyStartCameraShake_Parms*)Obj)->bSingleInstance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AEPlayerCameraManager_EasyStartCameraShake_Statics::NewProp_bSingleInstance = { "bSingleInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EPlayerCameraManager_eventEasyStartCameraShake_Parms), &Z_Construct_UFunction_AEPlayerCameraManager_EasyStartCameraShake_Statics::NewProp_bSingleInstance_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEPlayerCameraManager_EasyStartCameraShake_Statics::NewProp_ShakeParams = { "ShakeParams", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EPlayerCameraManager_eventEasyStartCameraShake_Parms, ShakeParams), Z_Construct_UScriptStruct_FPackedOscillationParams, METADATA_PARAMS(nullptr, 0) }; // 727348018
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEPlayerCameraManager_EasyStartCameraShake_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EPlayerCameraManager_eventEasyStartCameraShake_Parms, ReturnValue), Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEPlayerCameraManager_EasyStartCameraShake_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEPlayerCameraManager_EasyStartCameraShake_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEPlayerCameraManager_EasyStartCameraShake_Statics::NewProp_PlaySpace_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEPlayerCameraManager_EasyStartCameraShake_Statics::NewProp_PlaySpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEPlayerCameraManager_EasyStartCameraShake_Statics::NewProp_UserPlaySpaceRot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEPlayerCameraManager_EasyStartCameraShake_Statics::NewProp_bSingleInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEPlayerCameraManager_EasyStartCameraShake_Statics::NewProp_ShakeParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEPlayerCameraManager_EasyStartCameraShake_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEPlayerCameraManager_EasyStartCameraShake_Statics::Function_MetaDataParams[] = {
		{ "Category", "ECamera|CameraShake" },
		{ "Comment", "/** Start camera shake with packed oscillation parameters.\n\x09 * @param Scale - Scalar defining how intense to play the shake. 1.0 is normal.\n\x09 * @param PlaySpace - Which coordinate system to play the shake in (affects oscillations and camera anims).\n\x09 * @param UserPlaySpaceRot - Coordinate system to play shake when PlaySpace == UserDefined.\n\x09 * @param bSingleInstance - If true, only allow a single instance of this shake class to play at each time. Subsequent attempts to play this shake will simply restart the timer.\n\x09 * @param ShakeParams - Packed oscillation parameters.\n\x09 */" },
		{ "CPP_Default_bSingleInstance", "false" },
		{ "CPP_Default_ShakeParams", "()" },
		{ "DisplayName", "EasyStartCameraShake" },
		{ "ModuleRelativePath", "Public/Core/EPlayerCameraManager.h" },
		{ "ToolTip", "Start camera shake with packed oscillation parameters.\n@param Scale - Scalar defining how intense to play the shake. 1.0 is normal.\n@param PlaySpace - Which coordinate system to play the shake in (affects oscillations and camera anims).\n@param UserPlaySpaceRot - Coordinate system to play shake when PlaySpace == UserDefined.\n@param bSingleInstance - If true, only allow a single instance of this shake class to play at each time. Subsequent attempts to play this shake will simply restart the timer.\n@param ShakeParams - Packed oscillation parameters." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEPlayerCameraManager_EasyStartCameraShake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEPlayerCameraManager, nullptr, "EasyStartCameraShake", nullptr, nullptr, sizeof(Z_Construct_UFunction_AEPlayerCameraManager_EasyStartCameraShake_Statics::EPlayerCameraManager_eventEasyStartCameraShake_Parms), Z_Construct_UFunction_AEPlayerCameraManager_EasyStartCameraShake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEPlayerCameraManager_EasyStartCameraShake_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEPlayerCameraManager_EasyStartCameraShake_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEPlayerCameraManager_EasyStartCameraShake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEPlayerCameraManager_EasyStartCameraShake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEPlayerCameraManager_EasyStartCameraShake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEPlayerCameraManager_EasyStopCameraFade_Statics
	{
		struct EPlayerCameraManager_eventEasyStopCameraFade_Parms
		{
			float StopAlpha;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StopAlpha;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEPlayerCameraManager_EasyStopCameraFade_Statics::NewProp_StopAlpha = { "StopAlpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EPlayerCameraManager_eventEasyStopCameraFade_Parms, StopAlpha), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEPlayerCameraManager_EasyStopCameraFade_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEPlayerCameraManager_EasyStopCameraFade_Statics::NewProp_StopAlpha,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEPlayerCameraManager_EasyStopCameraFade_Statics::Function_MetaDataParams[] = {
		{ "Category", "ECamera|CameraFade" },
		{ "Comment", "/**\n\x09 * Stops camera fading.\n\x09 * @param StopAlpha - Alpha at which fade stops.\n\x09 */" },
		{ "CPP_Default_StopAlpha", "0.000000" },
		{ "ModuleRelativePath", "Public/Core/EPlayerCameraManager.h" },
		{ "ToolTip", "Stops camera fading.\n@param StopAlpha - Alpha at which fade stops." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEPlayerCameraManager_EasyStopCameraFade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEPlayerCameraManager, nullptr, "EasyStopCameraFade", nullptr, nullptr, sizeof(Z_Construct_UFunction_AEPlayerCameraManager_EasyStopCameraFade_Statics::EPlayerCameraManager_eventEasyStopCameraFade_Parms), Z_Construct_UFunction_AEPlayerCameraManager_EasyStopCameraFade_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEPlayerCameraManager_EasyStopCameraFade_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEPlayerCameraManager_EasyStopCameraFade_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEPlayerCameraManager_EasyStopCameraFade_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEPlayerCameraManager_EasyStopCameraFade()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEPlayerCameraManager_EasyStopCameraFade_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEPlayerCameraManager_RemoveAllPostProcesses_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEPlayerCameraManager_RemoveAllPostProcesses_Statics::Function_MetaDataParams[] = {
		{ "Category", "ECamera|PostProcess" },
		{ "Comment", "/** Clears all post processes. */" },
		{ "ModuleRelativePath", "Public/Core/EPlayerCameraManager.h" },
		{ "ToolTip", "Clears all post processes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEPlayerCameraManager_RemoveAllPostProcesses_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEPlayerCameraManager, nullptr, "RemoveAllPostProcesses", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEPlayerCameraManager_RemoveAllPostProcesses_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEPlayerCameraManager_RemoveAllPostProcesses_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEPlayerCameraManager_RemoveAllPostProcesses()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEPlayerCameraManager_RemoveAllPostProcesses_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEPlayerCameraManager_RemoveBlendable_Statics
	{
		struct EPlayerCameraManager_eventRemoveBlendable_Parms
		{
			TScriptInterface<IBlendableInterface> InBlendableObject;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBlendableObject_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_InBlendableObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEPlayerCameraManager_RemoveBlendable_Statics::NewProp_InBlendableObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_AEPlayerCameraManager_RemoveBlendable_Statics::NewProp_InBlendableObject = { "InBlendableObject", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EPlayerCameraManager_eventRemoveBlendable_Parms, InBlendableObject), Z_Construct_UClass_UBlendableInterface_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AEPlayerCameraManager_RemoveBlendable_Statics::NewProp_InBlendableObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEPlayerCameraManager_RemoveBlendable_Statics::NewProp_InBlendableObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEPlayerCameraManager_RemoveBlendable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEPlayerCameraManager_RemoveBlendable_Statics::NewProp_InBlendableObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEPlayerCameraManager_RemoveBlendable_Statics::Function_MetaDataParams[] = {
		{ "Category", "ECamera|PostProcess" },
		{ "Comment", "/** Removes a post process material added to the player camera manager.\n\x09 *  @param InBlendableObject - The post process material to remove.\n\x09 *  @TODO: removing reference will crash engine. I do not know why, but there might be a workaround. \n\x09 */" },
		{ "ModuleRelativePath", "Public/Core/EPlayerCameraManager.h" },
		{ "ToolTip", "Removes a post process material added to the player camera manager.\n@param InBlendableObject - The post process material to remove.\n@TODO: removing reference will crash engine. I do not know why, but there might be a workaround." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEPlayerCameraManager_RemoveBlendable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEPlayerCameraManager, nullptr, "RemoveBlendable", nullptr, nullptr, sizeof(Z_Construct_UFunction_AEPlayerCameraManager_RemoveBlendable_Statics::EPlayerCameraManager_eventRemoveBlendable_Parms), Z_Construct_UFunction_AEPlayerCameraManager_RemoveBlendable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEPlayerCameraManager_RemoveBlendable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEPlayerCameraManager_RemoveBlendable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEPlayerCameraManager_RemoveBlendable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEPlayerCameraManager_RemoveBlendable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEPlayerCameraManager_RemoveBlendable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEPlayerCameraManager_RemoveCompletedPostProcesses_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEPlayerCameraManager_RemoveCompletedPostProcesses_Statics::Function_MetaDataParams[] = {
		{ "Category", "ECamera|PostProcess" },
		{ "Comment", "/** Removes all completed post processes. */" },
		{ "ModuleRelativePath", "Public/Core/EPlayerCameraManager.h" },
		{ "ToolTip", "Removes all completed post processes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEPlayerCameraManager_RemoveCompletedPostProcesses_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEPlayerCameraManager, nullptr, "RemoveCompletedPostProcesses", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEPlayerCameraManager_RemoveCompletedPostProcesses_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEPlayerCameraManager_RemoveCompletedPostProcesses_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEPlayerCameraManager_RemoveCompletedPostProcesses()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEPlayerCameraManager_RemoveCompletedPostProcesses_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakePerlin_Statics
	{
		struct EPlayerCameraManager_eventStartCameraShakePerlin_Parms
		{
			float Scale;
			ECameraShakePlaySpace PlaySpace;
			FRotator UserPlaySpaceRot;
			bool bSingleInstance;
			float LocationAmplitudeMultiplier;
			float LocationFrequencyMultiplier;
			FPerlinNoiseShaker X;
			FPerlinNoiseShaker Y;
			FPerlinNoiseShaker Z;
			float RotationAmplitudeMultiplier;
			float RotationFrequencyMultiplier;
			FPerlinNoiseShaker Pitch;
			FPerlinNoiseShaker Yaw;
			FPerlinNoiseShaker Roll;
			FPerlinNoiseShaker FOV;
			float Duration;
			float BlendInTime;
			float BlendOutTime;
			UCameraShakeBase* ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PlaySpace_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PlaySpace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserPlaySpaceRot;
		static void NewProp_bSingleInstance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSingleInstance;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LocationAmplitudeMultiplier;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LocationFrequencyMultiplier;
		static const UECodeGen_Private::FStructPropertyParams NewProp_X;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Y;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Z;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationAmplitudeMultiplier;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationFrequencyMultiplier;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pitch;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Yaw;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Roll;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FOV;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendInTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendOutTime;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakePerlin_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EPlayerCameraManager_eventStartCameraShakePerlin_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakePerlin_Statics::NewProp_PlaySpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakePerlin_Statics::NewProp_PlaySpace = { "PlaySpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EPlayerCameraManager_eventStartCameraShakePerlin_Parms, PlaySpace), Z_Construct_UEnum_Engine_ECameraShakePlaySpace, METADATA_PARAMS(nullptr, 0) }; // 1413967709
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakePerlin_Statics::NewProp_UserPlaySpaceRot = { "UserPlaySpaceRot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EPlayerCameraManager_eventStartCameraShakePerlin_Parms, UserPlaySpaceRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakePerlin_Statics::NewProp_bSingleInstance_SetBit(void* Obj)
	{
		((EPlayerCameraManager_eventStartCameraShakePerlin_Parms*)Obj)->bSingleInstance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakePerlin_Statics::NewProp_bSingleInstance = { "bSingleInstance", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EPlayerCameraManager_eventStartCameraShakePerlin_Parms), &Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakePerlin_Statics::NewProp_bSingleInstance_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakePerlin_Statics::NewProp_LocationAmplitudeMultiplier = { "LocationAmplitudeMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EPlayerCameraManager_eventStartCameraShakePerlin_Parms, LocationAmplitudeMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakePerlin_Statics::NewProp_LocationFrequencyMultiplier = { "LocationFrequencyMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EPlayerCameraManager_eventStartCameraShakePerlin_Parms, LocationFrequencyMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakePerlin_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EPlayerCameraManager_eventStartCameraShakePerlin_Parms, X), Z_Construct_UScriptStruct_FPerlinNoiseShaker, METADATA_PARAMS(nullptr, 0) }; // 4278322993
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakePerlin_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EPlayerCameraManager_eventStartCameraShakePerlin_Parms, Y), Z_Construct_UScriptStruct_FPerlinNoiseShaker, METADATA_PARAMS(nullptr, 0) }; // 4278322993
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakePerlin_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EPlayerCameraManager_eventStartCameraShakePerlin_Parms, Z), Z_Construct_UScriptStruct_FPerlinNoiseShaker, METADATA_PARAMS(nullptr, 0) }; // 4278322993
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakePerlin_Statics::NewProp_RotationAmplitudeMultiplier = { "RotationAmplitudeMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EPlayerCameraManager_eventStartCameraShakePerlin_Parms, RotationAmplitudeMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakePerlin_Statics::NewProp_RotationFrequencyMultiplier = { "RotationFrequencyMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EPlayerCameraManager_eventStartCameraShakePerlin_Parms, RotationFrequencyMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakePerlin_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EPlayerCameraManager_eventStartCameraShakePerlin_Parms, Pitch), Z_Construct_UScriptStruct_FPerlinNoiseShaker, METADATA_PARAMS(nullptr, 0) }; // 4278322993
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakePerlin_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EPlayerCameraManager_eventStartCameraShakePerlin_Parms, Yaw), Z_Construct_UScriptStruct_FPerlinNoiseShaker, METADATA_PARAMS(nullptr, 0) }; // 4278322993
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakePerlin_Statics::NewProp_Roll = { "Roll", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EPlayerCameraManager_eventStartCameraShakePerlin_Parms, Roll), Z_Construct_UScriptStruct_FPerlinNoiseShaker, METADATA_PARAMS(nullptr, 0) }; // 4278322993
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakePerlin_Statics::NewProp_FOV = { "FOV", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EPlayerCameraManager_eventStartCameraShakePerlin_Parms, FOV), Z_Construct_UScriptStruct_FPerlinNoiseShaker, METADATA_PARAMS(nullptr, 0) }; // 4278322993
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakePerlin_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EPlayerCameraManager_eventStartCameraShakePerlin_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakePerlin_Statics::NewProp_BlendInTime = { "BlendInTime", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EPlayerCameraManager_eventStartCameraShakePerlin_Parms, BlendInTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakePerlin_Statics::NewProp_BlendOutTime = { "BlendOutTime", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EPlayerCameraManager_eventStartCameraShakePerlin_Parms, BlendOutTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakePerlin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EPlayerCameraManager_eventStartCameraShakePerlin_Parms, ReturnValue), Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakePerlin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakePerlin_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakePerlin_Statics::NewProp_PlaySpace_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakePerlin_Statics::NewProp_PlaySpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakePerlin_Statics::NewProp_UserPlaySpaceRot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakePerlin_Statics::NewProp_bSingleInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakePerlin_Statics::NewProp_LocationAmplitudeMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakePerlin_Statics::NewProp_LocationFrequencyMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakePerlin_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakePerlin_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakePerlin_Statics::NewProp_Z,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakePerlin_Statics::NewProp_RotationAmplitudeMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakePerlin_Statics::NewProp_RotationFrequencyMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakePerlin_Statics::NewProp_Pitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakePerlin_Statics::NewProp_Yaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakePerlin_Statics::NewProp_Roll,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakePerlin_Statics::NewProp_FOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakePerlin_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakePerlin_Statics::NewProp_BlendInTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakePerlin_Statics::NewProp_BlendOutTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakePerlin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakePerlin_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "Category", "ECamera|CameraShake" },
		{ "Comment", "/** Start camera shake using Perlin Noise pattern. \n\x09 * @param Scale - Scalar defining how intense to play the shake. 1.0 is normal.\n\x09 * @param PlaySpace - Which coordinate system to play the shake in (affects oscillations and camera anims).\n\x09 * @param UserPlaySpaceRot - Coordinate system to play shake when PlaySpace == UserDefined.\n\x09 * @param bSingleInstance - If true, only allow a single instance of this shake class to play at each time. Subsequent attempts to play this shake will simply restart the timer.\n\x09 * @param LocationAmplitudeMultiplier - Amplitude multiplier for all location shake.\n\x09 * @param LocationFrequencyMultiplier - Frequency multiplier for all location shake.\n\x09 * @param X - Shake in the X axis.\n\x09 * @param Y - Shake in the Y axis.\n\x09 * @param Z - Shake in the Z axis.\n\x09 * @param RotationAmplitudeMultiplier - Amplitude multiplier for all rotation shake.\n\x09 * @param RotationFrequencyMultiplier - Frequency multiplier for all rotation shake.\n\x09 * @param Pitch - Pitch shake.\n\x09 * @param Yaw - Yaw shake.\n\x09 * @param Roll - Roll shake.\n\x09 * @param FOV - FOV shake.\n\x09 * @param Duration - Duration in seconds of this shake. Zero or less means infinity.\n\x09 * @param BlendInTime - Blend-in time for this shake. Zero or less means no blend-in.\n\x09 * @param BlendOutTime - Blend-out time for this shake. Zero or less means no blend-out.\n\x09 */" },
		{ "CPP_Default_BlendInTime", "0.200000" },
		{ "CPP_Default_BlendOutTime", "0.200000" },
		{ "CPP_Default_bSingleInstance", "false" },
		{ "CPP_Default_Duration", "1.000000" },
		{ "CPP_Default_FOV", "()" },
		{ "CPP_Default_LocationAmplitudeMultiplier", "1.000000" },
		{ "CPP_Default_LocationFrequencyMultiplier", "1.000000" },
		{ "CPP_Default_Pitch", "()" },
		{ "CPP_Default_Roll", "()" },
		{ "CPP_Default_RotationAmplitudeMultiplier", "1.000000" },
		{ "CPP_Default_RotationFrequencyMultiplier", "1.000000" },
		{ "CPP_Default_X", "()" },
		{ "CPP_Default_Y", "()" },
		{ "CPP_Default_Yaw", "()" },
		{ "CPP_Default_Z", "()" },
		{ "DisplayName", "StartCameraShake(Perlin)" },
		{ "ModuleRelativePath", "Public/Core/EPlayerCameraManager.h" },
		{ "ToolTip", "Start camera shake using Perlin Noise pattern.\n@param Scale - Scalar defining how intense to play the shake. 1.0 is normal.\n@param PlaySpace - Which coordinate system to play the shake in (affects oscillations and camera anims).\n@param UserPlaySpaceRot - Coordinate system to play shake when PlaySpace == UserDefined.\n@param bSingleInstance - If true, only allow a single instance of this shake class to play at each time. Subsequent attempts to play this shake will simply restart the timer.\n@param LocationAmplitudeMultiplier - Amplitude multiplier for all location shake.\n@param LocationFrequencyMultiplier - Frequency multiplier for all location shake.\n@param X - Shake in the X axis.\n@param Y - Shake in the Y axis.\n@param Z - Shake in the Z axis.\n@param RotationAmplitudeMultiplier - Amplitude multiplier for all rotation shake.\n@param RotationFrequencyMultiplier - Frequency multiplier for all rotation shake.\n@param Pitch - Pitch shake.\n@param Yaw - Yaw shake.\n@param Roll - Roll shake.\n@param FOV - FOV shake.\n@param Duration - Duration in seconds of this shake. Zero or less means infinity.\n@param BlendInTime - Blend-in time for this shake. Zero or less means no blend-in.\n@param BlendOutTime - Blend-out time for this shake. Zero or less means no blend-out." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakePerlin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEPlayerCameraManager, nullptr, "StartCameraShakePerlin", nullptr, nullptr, sizeof(Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakePerlin_Statics::EPlayerCameraManager_eventStartCameraShakePerlin_Parms), Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakePerlin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakePerlin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakePerlin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakePerlin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakePerlin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakePerlin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakeWave_Statics
	{
		struct EPlayerCameraManager_eventStartCameraShakeWave_Parms
		{
			float Scale;
			ECameraShakePlaySpace PlaySpace;
			FRotator UserPlaySpaceRot;
			bool bSingleInstance;
			float LocationAmplitudeMultiplier;
			float LocationFrequencyMultiplier;
			FWaveOscillator X;
			FWaveOscillator Y;
			FWaveOscillator Z;
			float RotationAmplitudeMultiplier;
			float RotationFrequencyMultiplier;
			FWaveOscillator Pitch;
			FWaveOscillator Yaw;
			FWaveOscillator Roll;
			FWaveOscillator FOV;
			float Duration;
			float BlendInTime;
			float BlendOutTime;
			UCameraShakeBase* ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PlaySpace_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PlaySpace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserPlaySpaceRot;
		static void NewProp_bSingleInstance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSingleInstance;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LocationAmplitudeMultiplier;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LocationFrequencyMultiplier;
		static const UECodeGen_Private::FStructPropertyParams NewProp_X;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Y;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Z;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationAmplitudeMultiplier;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationFrequencyMultiplier;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pitch;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Yaw;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Roll;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FOV;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendInTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendOutTime;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakeWave_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EPlayerCameraManager_eventStartCameraShakeWave_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakeWave_Statics::NewProp_PlaySpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakeWave_Statics::NewProp_PlaySpace = { "PlaySpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EPlayerCameraManager_eventStartCameraShakeWave_Parms, PlaySpace), Z_Construct_UEnum_Engine_ECameraShakePlaySpace, METADATA_PARAMS(nullptr, 0) }; // 1413967709
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakeWave_Statics::NewProp_UserPlaySpaceRot = { "UserPlaySpaceRot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EPlayerCameraManager_eventStartCameraShakeWave_Parms, UserPlaySpaceRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakeWave_Statics::NewProp_bSingleInstance_SetBit(void* Obj)
	{
		((EPlayerCameraManager_eventStartCameraShakeWave_Parms*)Obj)->bSingleInstance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakeWave_Statics::NewProp_bSingleInstance = { "bSingleInstance", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EPlayerCameraManager_eventStartCameraShakeWave_Parms), &Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakeWave_Statics::NewProp_bSingleInstance_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakeWave_Statics::NewProp_LocationAmplitudeMultiplier = { "LocationAmplitudeMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EPlayerCameraManager_eventStartCameraShakeWave_Parms, LocationAmplitudeMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakeWave_Statics::NewProp_LocationFrequencyMultiplier = { "LocationFrequencyMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EPlayerCameraManager_eventStartCameraShakeWave_Parms, LocationFrequencyMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakeWave_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EPlayerCameraManager_eventStartCameraShakeWave_Parms, X), Z_Construct_UScriptStruct_FWaveOscillator, METADATA_PARAMS(nullptr, 0) }; // 2877888459
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakeWave_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EPlayerCameraManager_eventStartCameraShakeWave_Parms, Y), Z_Construct_UScriptStruct_FWaveOscillator, METADATA_PARAMS(nullptr, 0) }; // 2877888459
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakeWave_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EPlayerCameraManager_eventStartCameraShakeWave_Parms, Z), Z_Construct_UScriptStruct_FWaveOscillator, METADATA_PARAMS(nullptr, 0) }; // 2877888459
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakeWave_Statics::NewProp_RotationAmplitudeMultiplier = { "RotationAmplitudeMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EPlayerCameraManager_eventStartCameraShakeWave_Parms, RotationAmplitudeMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakeWave_Statics::NewProp_RotationFrequencyMultiplier = { "RotationFrequencyMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EPlayerCameraManager_eventStartCameraShakeWave_Parms, RotationFrequencyMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakeWave_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EPlayerCameraManager_eventStartCameraShakeWave_Parms, Pitch), Z_Construct_UScriptStruct_FWaveOscillator, METADATA_PARAMS(nullptr, 0) }; // 2877888459
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakeWave_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EPlayerCameraManager_eventStartCameraShakeWave_Parms, Yaw), Z_Construct_UScriptStruct_FWaveOscillator, METADATA_PARAMS(nullptr, 0) }; // 2877888459
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakeWave_Statics::NewProp_Roll = { "Roll", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EPlayerCameraManager_eventStartCameraShakeWave_Parms, Roll), Z_Construct_UScriptStruct_FWaveOscillator, METADATA_PARAMS(nullptr, 0) }; // 2877888459
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakeWave_Statics::NewProp_FOV = { "FOV", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EPlayerCameraManager_eventStartCameraShakeWave_Parms, FOV), Z_Construct_UScriptStruct_FWaveOscillator, METADATA_PARAMS(nullptr, 0) }; // 2877888459
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakeWave_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EPlayerCameraManager_eventStartCameraShakeWave_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakeWave_Statics::NewProp_BlendInTime = { "BlendInTime", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EPlayerCameraManager_eventStartCameraShakeWave_Parms, BlendInTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakeWave_Statics::NewProp_BlendOutTime = { "BlendOutTime", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EPlayerCameraManager_eventStartCameraShakeWave_Parms, BlendOutTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakeWave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EPlayerCameraManager_eventStartCameraShakeWave_Parms, ReturnValue), Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakeWave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakeWave_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakeWave_Statics::NewProp_PlaySpace_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakeWave_Statics::NewProp_PlaySpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakeWave_Statics::NewProp_UserPlaySpaceRot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakeWave_Statics::NewProp_bSingleInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakeWave_Statics::NewProp_LocationAmplitudeMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakeWave_Statics::NewProp_LocationFrequencyMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakeWave_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakeWave_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakeWave_Statics::NewProp_Z,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakeWave_Statics::NewProp_RotationAmplitudeMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakeWave_Statics::NewProp_RotationFrequencyMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakeWave_Statics::NewProp_Pitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakeWave_Statics::NewProp_Yaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakeWave_Statics::NewProp_Roll,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakeWave_Statics::NewProp_FOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakeWave_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakeWave_Statics::NewProp_BlendInTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakeWave_Statics::NewProp_BlendOutTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakeWave_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakeWave_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "Category", "ECamera|CameraShake" },
		{ "Comment", "/** Start camera shake using Wave Oscillator pattern. \n\x09 * @param Scale - Scalar defining how intense to play the shake. 1.0 is normal.\n\x09 * @param PlaySpace - Which coordinate system to play the shake in (affects oscillations and camera anims).\n\x09 * @param UserPlaySpaceRot - Coordinate system to play shake when PlaySpace == UserDefined.\n\x09 * @param bSingleInstance - If true, only allow a single instance of this shake class to play at each time. Subsequent attempts to play this shake will simply restart the timer.\n\x09 * @param LocationAmplitudeMultiplier - Amplitude multiplier for all location shake.\n\x09 * @param LocationFrequencyMultiplier - Frequency multiplier for all location shake.\n\x09 * @param X - Shake in the X axis.\n\x09 * @param Y - Shake in the Y axis.\n\x09 * @param Z - Shake in the Z axis.\n\x09 * @param RotationAmplitudeMultiplier - Amplitude multiplier for all rotation shake.\n\x09 * @param RotationFrequencyMultiplier - Frequency multiplier for all rotation shake.\n\x09 * @param Pitch - Pitch shake.\n\x09 * @param Yaw - Yaw shake.\n\x09 * @param Roll - Roll shake.\n\x09 * @param FOV - FOV shake.\n\x09 * @param Duration - Duration in seconds of this shake. Zero or less means infinity.\n\x09 * @param BlendInTime - Blend-in time for this shake. Zero or less means no blend-in.\n\x09 * @param BlendOutTime - Blend-out time for this shake. Zero or less means no blend-out.\n\x09 */" },
		{ "CPP_Default_BlendInTime", "0.200000" },
		{ "CPP_Default_BlendOutTime", "0.200000" },
		{ "CPP_Default_bSingleInstance", "false" },
		{ "CPP_Default_Duration", "1.000000" },
		{ "CPP_Default_FOV", "()" },
		{ "CPP_Default_LocationAmplitudeMultiplier", "1.000000" },
		{ "CPP_Default_LocationFrequencyMultiplier", "1.000000" },
		{ "CPP_Default_Pitch", "()" },
		{ "CPP_Default_Roll", "()" },
		{ "CPP_Default_RotationAmplitudeMultiplier", "1.000000" },
		{ "CPP_Default_RotationFrequencyMultiplier", "1.000000" },
		{ "CPP_Default_X", "()" },
		{ "CPP_Default_Y", "()" },
		{ "CPP_Default_Yaw", "()" },
		{ "CPP_Default_Z", "()" },
		{ "DisplayName", "StartCameraShake(Wave)" },
		{ "ModuleRelativePath", "Public/Core/EPlayerCameraManager.h" },
		{ "ToolTip", "Start camera shake using Wave Oscillator pattern.\n@param Scale - Scalar defining how intense to play the shake. 1.0 is normal.\n@param PlaySpace - Which coordinate system to play the shake in (affects oscillations and camera anims).\n@param UserPlaySpaceRot - Coordinate system to play shake when PlaySpace == UserDefined.\n@param bSingleInstance - If true, only allow a single instance of this shake class to play at each time. Subsequent attempts to play this shake will simply restart the timer.\n@param LocationAmplitudeMultiplier - Amplitude multiplier for all location shake.\n@param LocationFrequencyMultiplier - Frequency multiplier for all location shake.\n@param X - Shake in the X axis.\n@param Y - Shake in the Y axis.\n@param Z - Shake in the Z axis.\n@param RotationAmplitudeMultiplier - Amplitude multiplier for all rotation shake.\n@param RotationFrequencyMultiplier - Frequency multiplier for all rotation shake.\n@param Pitch - Pitch shake.\n@param Yaw - Yaw shake.\n@param Roll - Roll shake.\n@param FOV - FOV shake.\n@param Duration - Duration in seconds of this shake. Zero or less means infinity.\n@param BlendInTime - Blend-in time for this shake. Zero or less means no blend-in.\n@param BlendOutTime - Blend-out time for this shake. Zero or less means no blend-out." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakeWave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEPlayerCameraManager, nullptr, "StartCameraShakeWave", nullptr, nullptr, sizeof(Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakeWave_Statics::EPlayerCameraManager_eventStartCameraShakeWave_Parms), Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakeWave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakeWave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakeWave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakeWave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakeWave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakeWave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEPlayerCameraManager);
	UClass* Z_Construct_UClass_AEPlayerCameraManager_NoRegister()
	{
		return AEPlayerCameraManager::StaticClass();
	}
	struct Z_Construct_UClass_AEPlayerCameraManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaterialWeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEPlayerCameraManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyCamera,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AEPlayerCameraManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEPlayerCameraManager_AddBlendable, "AddBlendable" }, // 3107028072
		{ &Z_Construct_UFunction_AEPlayerCameraManager_AddPostProcess, "AddPostProcess" }, // 296387784
		{ &Z_Construct_UFunction_AEPlayerCameraManager_EasyStartCameraFade, "EasyStartCameraFade" }, // 1266137790
		{ &Z_Construct_UFunction_AEPlayerCameraManager_EasyStartCameraShake, "EasyStartCameraShake" }, // 2633111078
		{ &Z_Construct_UFunction_AEPlayerCameraManager_EasyStopCameraFade, "EasyStopCameraFade" }, // 154711654
		{ &Z_Construct_UFunction_AEPlayerCameraManager_RemoveAllPostProcesses, "RemoveAllPostProcesses" }, // 2941825830
		{ &Z_Construct_UFunction_AEPlayerCameraManager_RemoveBlendable, "RemoveBlendable" }, // 905807321
		{ &Z_Construct_UFunction_AEPlayerCameraManager_RemoveCompletedPostProcesses, "RemoveCompletedPostProcesses" }, // 1964195158
		{ &Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakePerlin, "StartCameraShakePerlin" }, // 1682954474
		{ &Z_Construct_UFunction_AEPlayerCameraManager_StartCameraShakeWave, "StartCameraShakeWave" }, // 2750137589
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEPlayerCameraManager_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "ECamera" },
		{ "Comment", "/**\n * This is the customized player camera manager. The main goal is to enable adding and clearing camera post processing effects,\n * such as depth of field, bloom, exposure, color grading, etc. Later uses, if necessary, will further extend this class.\n */" },
		{ "IncludePath", "Core/EPlayerCameraManager.h" },
		{ "ModuleRelativePath", "Public/Core/EPlayerCameraManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "This is the customized player camera manager. The main goal is to enable adding and clearing camera post processing effects,\nsuch as depth of field, bloom, exposure, color grading, etc. Later uses, if necessary, will further extend this class." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEPlayerCameraManager_Statics::NewProp_MaterialWeight_MetaData[] = {
		{ "Category", "EPlayerCameraManager" },
		{ "ModuleRelativePath", "Public/Core/EPlayerCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEPlayerCameraManager_Statics::NewProp_MaterialWeight = { "MaterialWeight", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEPlayerCameraManager, MaterialWeight), METADATA_PARAMS(Z_Construct_UClass_AEPlayerCameraManager_Statics::NewProp_MaterialWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEPlayerCameraManager_Statics::NewProp_MaterialWeight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEPlayerCameraManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEPlayerCameraManager_Statics::NewProp_MaterialWeight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEPlayerCameraManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEPlayerCameraManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEPlayerCameraManager_Statics::ClassParams = {
		&AEPlayerCameraManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEPlayerCameraManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AEPlayerCameraManager_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AEPlayerCameraManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEPlayerCameraManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEPlayerCameraManager()
	{
		if (!Z_Registration_Info_UClass_AEPlayerCameraManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEPlayerCameraManager.OuterSingleton, Z_Construct_UClass_AEPlayerCameraManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEPlayerCameraManager.OuterSingleton;
	}
	template<> EASYCAMERA_API UClass* StaticClass<AEPlayerCameraManager>()
	{
		return AEPlayerCameraManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEPlayerCameraManager);
	AEPlayerCameraManager::~AEPlayerCameraManager() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_EPlayerCameraManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_EPlayerCameraManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEPlayerCameraManager, AEPlayerCameraManager::StaticClass, TEXT("AEPlayerCameraManager"), &Z_Registration_Info_UClass_AEPlayerCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEPlayerCameraManager), 2236139053U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_EPlayerCameraManager_h_2304252013(TEXT("/Script/EasyCamera"),
		Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_EPlayerCameraManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_EPlayerCameraManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
