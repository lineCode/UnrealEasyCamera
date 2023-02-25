// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyCamera/Public/Core/EPlayerCameraManager.h"
#include "Engine/Classes/Engine/Scene.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPlayerCameraManager() {}
// Cross Module References
	EASYCAMERA_API UClass* Z_Construct_UClass_AEPlayerCameraManager();
	EASYCAMERA_API UClass* Z_Construct_UClass_AEPlayerCameraManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
	ENGINE_API UClass* Z_Construct_UClass_UBlendableInterface_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
	UPackage* Z_Construct_UPackage__Script_EasyCamera();
// End Cross Module References
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
			{ "RemoveAllPostProcesses", &AEPlayerCameraManager::execRemoveAllPostProcesses },
			{ "RemoveBlendable", &AEPlayerCameraManager::execRemoveBlendable },
			{ "RemoveCompletedPostProcesses", &AEPlayerCameraManager::execRemoveCompletedPostProcesses },
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
		{ &Z_Construct_UFunction_AEPlayerCameraManager_RemoveAllPostProcesses, "RemoveAllPostProcesses" }, // 2941825830
		{ &Z_Construct_UFunction_AEPlayerCameraManager_RemoveBlendable, "RemoveBlendable" }, // 905807321
		{ &Z_Construct_UFunction_AEPlayerCameraManager_RemoveCompletedPostProcesses, "RemoveCompletedPostProcesses" }, // 1964195158
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEPlayerCameraManager_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "ECamera" },
		{ "Comment", "/**\n * This is the customized player camera manager. The main goal is to enable adding and clearing camera post processing effects,\n * such as depth of field, bloom, exposure, color grading, etc. Later uses, if necessary, will further extend this class.\n */" },
		{ "IncludePath", "Core/EPlayerCameraManager.h" },
		{ "ModuleRelativePath", "Public/Core/EPlayerCameraManager.h" },
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
		{ Z_Construct_UClass_AEPlayerCameraManager, AEPlayerCameraManager::StaticClass, TEXT("AEPlayerCameraManager"), &Z_Registration_Info_UClass_AEPlayerCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEPlayerCameraManager), 285305964U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_EPlayerCameraManager_h_766887949(TEXT("/Script/EasyCamera"),
		Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_EPlayerCameraManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_EPlayerCameraManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
