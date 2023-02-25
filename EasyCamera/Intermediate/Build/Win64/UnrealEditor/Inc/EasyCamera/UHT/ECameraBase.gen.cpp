// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyCamera/Public/Core/ECameraBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECameraBase() {}
// Cross Module References
	EASYCAMERA_API UClass* Z_Construct_UClass_AECameraBase();
	EASYCAMERA_API UClass* Z_Construct_UClass_AECameraBase_NoRegister();
	EASYCAMERA_API UClass* Z_Construct_UClass_UECameraComponentAim_NoRegister();
	EASYCAMERA_API UClass* Z_Construct_UClass_UECameraComponentFollow_NoRegister();
	EASYCAMERA_API UClass* Z_Construct_UClass_UECameraSettingsComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACameraActor();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EViewTargetBlendFunction();
	UPackage* Z_Construct_UPackage__Script_EasyCamera();
// End Cross Module References
	DEFINE_FUNCTION(AECameraBase::execGetCameraComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCameraComponent**)Z_Param__Result=P_THIS->GetCameraComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AECameraBase::execGetAimComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UECameraComponentAim**)Z_Param__Result=P_THIS->GetAimComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AECameraBase::execGetFollowComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UECameraComponentFollow**)Z_Param__Result=P_THIS->GetFollowComponent();
		P_NATIVE_END;
	}
	void AECameraBase::StaticRegisterNativesAECameraBase()
	{
		UClass* Class = AECameraBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAimComponent", &AECameraBase::execGetAimComponent },
			{ "GetCameraComponent", &AECameraBase::execGetCameraComponent },
			{ "GetFollowComponent", &AECameraBase::execGetFollowComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AECameraBase_GetAimComponent_Statics
	{
		struct ECameraBase_eventGetAimComponent_Parms
		{
			UECameraComponentAim* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AECameraBase_GetAimComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AECameraBase_GetAimComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraBase_eventGetAimComponent_Parms, ReturnValue), Z_Construct_UClass_UECameraComponentAim_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AECameraBase_GetAimComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AECameraBase_GetAimComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AECameraBase_GetAimComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AECameraBase_GetAimComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AECameraBase_GetAimComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "ECamera|CameraBase" },
		{ "Comment", "/** Get AimComponent owned by this camera. */" },
		{ "ModuleRelativePath", "Public/Core/ECameraBase.h" },
		{ "ToolTip", "Get AimComponent owned by this camera." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AECameraBase_GetAimComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AECameraBase, nullptr, "GetAimComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_AECameraBase_GetAimComponent_Statics::ECameraBase_eventGetAimComponent_Parms), Z_Construct_UFunction_AECameraBase_GetAimComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AECameraBase_GetAimComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AECameraBase_GetAimComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AECameraBase_GetAimComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AECameraBase_GetAimComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AECameraBase_GetAimComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AECameraBase_GetCameraComponent_Statics
	{
		struct ECameraBase_eventGetCameraComponent_Parms
		{
			UCameraComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AECameraBase_GetCameraComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AECameraBase_GetCameraComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraBase_eventGetCameraComponent_Parms, ReturnValue), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AECameraBase_GetCameraComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AECameraBase_GetCameraComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AECameraBase_GetCameraComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AECameraBase_GetCameraComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AECameraBase_GetCameraComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "ECamera|CameraBase" },
		{ "Comment", "/** Get the CameraComponent owned by this camera. */" },
		{ "ModuleRelativePath", "Public/Core/ECameraBase.h" },
		{ "ToolTip", "Get the CameraComponent owned by this camera." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AECameraBase_GetCameraComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AECameraBase, nullptr, "GetCameraComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_AECameraBase_GetCameraComponent_Statics::ECameraBase_eventGetCameraComponent_Parms), Z_Construct_UFunction_AECameraBase_GetCameraComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AECameraBase_GetCameraComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AECameraBase_GetCameraComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AECameraBase_GetCameraComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AECameraBase_GetCameraComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AECameraBase_GetCameraComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AECameraBase_GetFollowComponent_Statics
	{
		struct ECameraBase_eventGetFollowComponent_Parms
		{
			UECameraComponentFollow* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AECameraBase_GetFollowComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AECameraBase_GetFollowComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraBase_eventGetFollowComponent_Parms, ReturnValue), Z_Construct_UClass_UECameraComponentFollow_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AECameraBase_GetFollowComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AECameraBase_GetFollowComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AECameraBase_GetFollowComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AECameraBase_GetFollowComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AECameraBase_GetFollowComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "ECamera|CameraBase" },
		{ "Comment", "/** Get FollowComponent owned by this camera. */" },
		{ "ModuleRelativePath", "Public/Core/ECameraBase.h" },
		{ "ToolTip", "Get FollowComponent owned by this camera." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AECameraBase_GetFollowComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AECameraBase, nullptr, "GetFollowComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_AECameraBase_GetFollowComponent_Statics::ECameraBase_eventGetFollowComponent_Parms), Z_Construct_UFunction_AECameraBase_GetFollowComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AECameraBase_GetFollowComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AECameraBase_GetFollowComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AECameraBase_GetFollowComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AECameraBase_GetFollowComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AECameraBase_GetFollowComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AECameraBase);
	UClass* Z_Construct_UClass_AECameraBase_NoRegister()
	{
		return AECameraBase::StaticClass();
	}
	struct Z_Construct_UClass_AECameraBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraSettingsComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraSettingsComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFOV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultFOV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBlendTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultBlendTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBlendFunc_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultBlendFunc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBlendExp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultBlendExp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultLockOutgoing_MetaData[];
#endif
		static void NewProp_bDefaultLockOutgoing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultLockOutgoing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultPreserveState_MetaData[];
#endif
		static void NewProp_bDefaultPreserveState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultPreserveState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AECameraBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACameraActor,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyCamera,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AECameraBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AECameraBase_GetAimComponent, "GetAimComponent" }, // 2522343025
		{ &Z_Construct_UFunction_AECameraBase_GetCameraComponent, "GetCameraComponent" }, // 3267262202
		{ &Z_Construct_UFunction_AECameraBase_GetFollowComponent, "GetFollowComponent" }, // 1502177646
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AECameraBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ECamera" },
		{ "Comment", "/**\n* All cameras should inherit from this class ECameraBase.\n*/" },
		{ "HideCategories", "Input Rendering" },
		{ "IncludePath", "Core/ECameraBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/ECameraBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "All cameras should inherit from this class ECameraBase." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AECameraBase_Statics::NewProp_CameraSettingsComponent_MetaData[] = {
		{ "Category", "ECamera|CameraBase" },
		{ "Comment", "/** Default camera settings component. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/ECameraBase.h" },
		{ "ToolTip", "Default camera settings component." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AECameraBase_Statics::NewProp_CameraSettingsComponent = { "CameraSettingsComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AECameraBase, CameraSettingsComponent), Z_Construct_UClass_UECameraSettingsComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AECameraBase_Statics::NewProp_CameraSettingsComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AECameraBase_Statics::NewProp_CameraSettingsComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AECameraBase_Statics::NewProp_DefaultFOV_MetaData[] = {
		{ "Category", "ECamera|CameraBase" },
		{ "Comment", "/** Default FOV. */" },
		{ "ModuleRelativePath", "Public/Core/ECameraBase.h" },
		{ "ToolTip", "Default FOV." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AECameraBase_Statics::NewProp_DefaultFOV = { "DefaultFOV", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AECameraBase, DefaultFOV), METADATA_PARAMS(Z_Construct_UClass_AECameraBase_Statics::NewProp_DefaultFOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AECameraBase_Statics::NewProp_DefaultFOV_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AECameraBase_Statics::NewProp_DefaultBlendTime_MetaData[] = {
		{ "Category", "ECamera|CameraBase" },
		{ "Comment", "/** Default blend time. Used for automatic call. */" },
		{ "ModuleRelativePath", "Public/Core/ECameraBase.h" },
		{ "ToolTip", "Default blend time. Used for automatic call." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AECameraBase_Statics::NewProp_DefaultBlendTime = { "DefaultBlendTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AECameraBase, DefaultBlendTime), METADATA_PARAMS(Z_Construct_UClass_AECameraBase_Statics::NewProp_DefaultBlendTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AECameraBase_Statics::NewProp_DefaultBlendTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AECameraBase_Statics::NewProp_DefaultBlendFunc_MetaData[] = {
		{ "Category", "ECamera|CameraBase" },
		{ "Comment", "/** Default blend function. Used for automatic call. */" },
		{ "ModuleRelativePath", "Public/Core/ECameraBase.h" },
		{ "ToolTip", "Default blend function. Used for automatic call." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AECameraBase_Statics::NewProp_DefaultBlendFunc = { "DefaultBlendFunc", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AECameraBase, DefaultBlendFunc), Z_Construct_UEnum_Engine_EViewTargetBlendFunction, METADATA_PARAMS(Z_Construct_UClass_AECameraBase_Statics::NewProp_DefaultBlendFunc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AECameraBase_Statics::NewProp_DefaultBlendFunc_MetaData)) }; // 3430533364
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AECameraBase_Statics::NewProp_DefaultBlendExp_MetaData[] = {
		{ "Category", "ECamera|CameraBase" },
		{ "Comment", "/** Default blend exponential. Used for automatic call. */" },
		{ "ModuleRelativePath", "Public/Core/ECameraBase.h" },
		{ "ToolTip", "Default blend exponential. Used for automatic call." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AECameraBase_Statics::NewProp_DefaultBlendExp = { "DefaultBlendExp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AECameraBase, DefaultBlendExp), METADATA_PARAMS(Z_Construct_UClass_AECameraBase_Statics::NewProp_DefaultBlendExp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AECameraBase_Statics::NewProp_DefaultBlendExp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AECameraBase_Statics::NewProp_bDefaultLockOutgoing_MetaData[] = {
		{ "Category", "ECamera|CameraBase" },
		{ "Comment", "/** Default lock outgoing. Used for automatic call. */" },
		{ "ModuleRelativePath", "Public/Core/ECameraBase.h" },
		{ "ToolTip", "Default lock outgoing. Used for automatic call." },
	};
#endif
	void Z_Construct_UClass_AECameraBase_Statics::NewProp_bDefaultLockOutgoing_SetBit(void* Obj)
	{
		((AECameraBase*)Obj)->bDefaultLockOutgoing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AECameraBase_Statics::NewProp_bDefaultLockOutgoing = { "bDefaultLockOutgoing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AECameraBase), &Z_Construct_UClass_AECameraBase_Statics::NewProp_bDefaultLockOutgoing_SetBit, METADATA_PARAMS(Z_Construct_UClass_AECameraBase_Statics::NewProp_bDefaultLockOutgoing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AECameraBase_Statics::NewProp_bDefaultLockOutgoing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AECameraBase_Statics::NewProp_bDefaultPreserveState_MetaData[] = {
		{ "Category", "ECamera|CameraBase" },
		{ "Comment", "/** Default preserve camera state. Used for automatic call (prior camera is expired). */" },
		{ "ModuleRelativePath", "Public/Core/ECameraBase.h" },
		{ "ToolTip", "Default preserve camera state. Used for automatic call (prior camera is expired)." },
	};
#endif
	void Z_Construct_UClass_AECameraBase_Statics::NewProp_bDefaultPreserveState_SetBit(void* Obj)
	{
		((AECameraBase*)Obj)->bDefaultPreserveState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AECameraBase_Statics::NewProp_bDefaultPreserveState = { "bDefaultPreserveState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AECameraBase), &Z_Construct_UClass_AECameraBase_Statics::NewProp_bDefaultPreserveState_SetBit, METADATA_PARAMS(Z_Construct_UClass_AECameraBase_Statics::NewProp_bDefaultPreserveState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AECameraBase_Statics::NewProp_bDefaultPreserveState_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AECameraBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AECameraBase_Statics::NewProp_CameraSettingsComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AECameraBase_Statics::NewProp_DefaultFOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AECameraBase_Statics::NewProp_DefaultBlendTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AECameraBase_Statics::NewProp_DefaultBlendFunc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AECameraBase_Statics::NewProp_DefaultBlendExp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AECameraBase_Statics::NewProp_bDefaultLockOutgoing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AECameraBase_Statics::NewProp_bDefaultPreserveState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AECameraBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AECameraBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AECameraBase_Statics::ClassParams = {
		&AECameraBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AECameraBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AECameraBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AECameraBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AECameraBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AECameraBase()
	{
		if (!Z_Registration_Info_UClass_AECameraBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AECameraBase.OuterSingleton, Z_Construct_UClass_AECameraBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AECameraBase.OuterSingleton;
	}
	template<> EASYCAMERA_API UClass* StaticClass<AECameraBase>()
	{
		return AECameraBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AECameraBase);
	AECameraBase::~AECameraBase() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_ECameraBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_ECameraBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AECameraBase, AECameraBase::StaticClass, TEXT("AECameraBase"), &Z_Registration_Info_UClass_AECameraBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AECameraBase), 1528711216U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_ECameraBase_h_2723096976(TEXT("/Script/EasyCamera"),
		Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_ECameraBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_ECameraBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
