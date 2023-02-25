// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyCamera/Public/Components/ControlAim.h"
#include "EasyCamera/Public/Utils/ECameraTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlAim() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2f();
	EASYCAMERA_API UClass* Z_Construct_UClass_UControlAim();
	EASYCAMERA_API UClass* Z_Construct_UClass_UControlAim_NoRegister();
	EASYCAMERA_API UClass* Z_Construct_UClass_UECameraComponentAim();
	EASYCAMERA_API UEnum* Z_Construct_UEnum_EasyCamera_EHeading();
	EASYCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FRecenteringParams();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EasyCamera();
// End Cross Module References
	DEFINE_FUNCTION(UControlAim::execGetMouseDeltaY)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMouseDeltaY();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlAim::execGetMouseDeltaX)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMouseDeltaX();
		P_NATIVE_END;
	}
	void UControlAim::StaticRegisterNativesUControlAim()
	{
		UClass* Class = UControlAim::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMouseDeltaX", &UControlAim::execGetMouseDeltaX },
			{ "GetMouseDeltaY", &UControlAim::execGetMouseDeltaY },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UControlAim_GetMouseDeltaX_Statics
	{
		struct ControlAim_eventGetMouseDeltaX_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UControlAim_GetMouseDeltaX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlAim_eventGetMouseDeltaX_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlAim_GetMouseDeltaX_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlAim_GetMouseDeltaX_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlAim_GetMouseDeltaX_Statics::Function_MetaDataParams[] = {
		{ "Category", "ECamera|ControlAim" },
		{ "Comment", "/** Get the multiplication of raw input mouse delta X and HorizontalSpeed. */" },
		{ "ModuleRelativePath", "Public/Components/ControlAim.h" },
		{ "ToolTip", "Get the multiplication of raw input mouse delta X and HorizontalSpeed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlAim_GetMouseDeltaX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlAim, nullptr, "GetMouseDeltaX", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlAim_GetMouseDeltaX_Statics::ControlAim_eventGetMouseDeltaX_Parms), Z_Construct_UFunction_UControlAim_GetMouseDeltaX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlAim_GetMouseDeltaX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlAim_GetMouseDeltaX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlAim_GetMouseDeltaX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlAim_GetMouseDeltaX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlAim_GetMouseDeltaX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlAim_GetMouseDeltaY_Statics
	{
		struct ControlAim_eventGetMouseDeltaY_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UControlAim_GetMouseDeltaY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlAim_eventGetMouseDeltaY_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlAim_GetMouseDeltaY_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlAim_GetMouseDeltaY_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlAim_GetMouseDeltaY_Statics::Function_MetaDataParams[] = {
		{ "Category", "ECamera|ControlAim" },
		{ "Comment", "/** Get the multiplication of raw input mouse delta Y and VerticalSpeed. */" },
		{ "ModuleRelativePath", "Public/Components/ControlAim.h" },
		{ "ToolTip", "Get the multiplication of raw input mouse delta Y and VerticalSpeed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlAim_GetMouseDeltaY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlAim, nullptr, "GetMouseDeltaY", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlAim_GetMouseDeltaY_Statics::ControlAim_eventGetMouseDeltaY_Parms), Z_Construct_UFunction_UControlAim_GetMouseDeltaY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlAim_GetMouseDeltaY_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlAim_GetMouseDeltaY_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlAim_GetMouseDeltaY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlAim_GetMouseDeltaY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlAim_GetMouseDeltaY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlAim);
	UClass* Z_Construct_UClass_UControlAim_NoRegister()
	{
		return UControlAim::StaticClass();
	}
	struct Z_Construct_UClass_UControlAim_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecenteringParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RecenteringParams;
		static const UECodeGen_Private::FBytePropertyParams NewProp_HorizontalHeading_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalHeading_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HorizontalHeading;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalHardForward_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HorizontalHardForward;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HorizontalSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalDestination_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HorizontalDestination;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HorizontalRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWrap_MetaData[];
#endif
		static void NewProp_bWrap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWrap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerticalRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VerticalRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HorizontalSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerticalSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VerticalSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalDamping_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HorizontalDamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerticalDamping_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VerticalDamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSyncToController_MetaData[];
#endif
		static void NewProp_bSyncToController_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSyncToController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UControlAim_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UECameraComponentAim,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyCamera,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UControlAim_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UControlAim_GetMouseDeltaX, "GetMouseDeltaX" }, // 4205443521
		{ &Z_Construct_UFunction_UControlAim_GetMouseDeltaY, "GetMouseDeltaY" }, // 581157169
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlAim_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ECamera" },
		{ "Comment", "/**\n * Player input camera rotation. You do not need to, and should not specify an AimTarget.\n */" },
		{ "IncludePath", "Components/ControlAim.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/ControlAim.h" },
		{ "ToolTip", "Player input camera rotation. You do not need to, and should not specify an AimTarget." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlAim_Statics::NewProp_RecenteringParams_MetaData[] = {
		{ "Category", "ControlAim" },
		{ "Comment", "/** Recentering parameters. */" },
		{ "ModuleRelativePath", "Public/Components/ControlAim.h" },
		{ "ToolTip", "Recentering parameters." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlAim_Statics::NewProp_RecenteringParams = { "RecenteringParams", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlAim, RecenteringParams), Z_Construct_UScriptStruct_FRecenteringParams, METADATA_PARAMS(Z_Construct_UClass_UControlAim_Statics::NewProp_RecenteringParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlAim_Statics::NewProp_RecenteringParams_MetaData)) }; // 3094948852
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UControlAim_Statics::NewProp_HorizontalHeading_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlAim_Statics::NewProp_HorizontalHeading_MetaData[] = {
		{ "Category", "ControlAim" },
		{ "Comment", "/** Horizontal heading to which horizontal range is applied. */" },
		{ "ModuleRelativePath", "Public/Components/ControlAim.h" },
		{ "ToolTip", "Horizontal heading to which horizontal range is applied." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UControlAim_Statics::NewProp_HorizontalHeading = { "HorizontalHeading", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlAim, HorizontalHeading), Z_Construct_UEnum_EasyCamera_EHeading, METADATA_PARAMS(Z_Construct_UClass_UControlAim_Statics::NewProp_HorizontalHeading_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlAim_Statics::NewProp_HorizontalHeading_MetaData)) }; // 503929634
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlAim_Statics::NewProp_HorizontalHardForward_MetaData[] = {
		{ "Category", "ControlAim" },
		{ "Comment", "/** Hard specified horizontal forward. Will ignore its pitch angle. */" },
		{ "EditCondition", "HorizontalHeading == EHeading::HardForward" },
		{ "ModuleRelativePath", "Public/Components/ControlAim.h" },
		{ "ToolTip", "Hard specified horizontal forward. Will ignore its pitch angle." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlAim_Statics::NewProp_HorizontalHardForward = { "HorizontalHardForward", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlAim, HorizontalHardForward), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UControlAim_Statics::NewProp_HorizontalHardForward_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlAim_Statics::NewProp_HorizontalHardForward_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlAim_Statics::NewProp_HorizontalSource_MetaData[] = {
		{ "Category", "ControlAim" },
		{ "Comment", "/** Source actor for horizontal soft forward. Its position is used as the start position. */" },
		{ "EditCondition", "HorizontalHeading == EHeading::SoftForward" },
		{ "ModuleRelativePath", "Public/Components/ControlAim.h" },
		{ "ToolTip", "Source actor for horizontal soft forward. Its position is used as the start position." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UControlAim_Statics::NewProp_HorizontalSource = { "HorizontalSource", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlAim, HorizontalSource), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UControlAim_Statics::NewProp_HorizontalSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlAim_Statics::NewProp_HorizontalSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlAim_Statics::NewProp_HorizontalDestination_MetaData[] = {
		{ "Category", "ControlAim" },
		{ "Comment", "/** Destination actor horizontal for soft forward. Its position is used as the end position. */" },
		{ "EditCondition", "HorizontalHeading == EHeading::SoftForward" },
		{ "ModuleRelativePath", "Public/Components/ControlAim.h" },
		{ "ToolTip", "Destination actor horizontal for soft forward. Its position is used as the end position." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UControlAim_Statics::NewProp_HorizontalDestination = { "HorizontalDestination", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlAim, HorizontalDestination), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UControlAim_Statics::NewProp_HorizontalDestination_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlAim_Statics::NewProp_HorizontalDestination_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlAim_Statics::NewProp_HorizontalRange_MetaData[] = {
		{ "Category", "ControlAim" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "-180.0" },
		{ "Comment", "/** Camera yaw bounding range, within [-180,180]. */" },
		{ "ModuleRelativePath", "Public/Components/ControlAim.h" },
		{ "ToolTip", "Camera yaw bounding range, within [-180,180]." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlAim_Statics::NewProp_HorizontalRange = { "HorizontalRange", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlAim, HorizontalRange), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(Z_Construct_UClass_UControlAim_Statics::NewProp_HorizontalRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlAim_Statics::NewProp_HorizontalRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlAim_Statics::NewProp_bWrap_MetaData[] = {
		{ "Category", "ControlAim" },
		{ "Comment", "/** Whether to wrap camera horizontal rotation. Default is true. */" },
		{ "ModuleRelativePath", "Public/Components/ControlAim.h" },
		{ "ToolTip", "Whether to wrap camera horizontal rotation. Default is true." },
	};
#endif
	void Z_Construct_UClass_UControlAim_Statics::NewProp_bWrap_SetBit(void* Obj)
	{
		((UControlAim*)Obj)->bWrap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlAim_Statics::NewProp_bWrap = { "bWrap", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UControlAim), &Z_Construct_UClass_UControlAim_Statics::NewProp_bWrap_SetBit, METADATA_PARAMS(Z_Construct_UClass_UControlAim_Statics::NewProp_bWrap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlAim_Statics::NewProp_bWrap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlAim_Statics::NewProp_VerticalRange_MetaData[] = {
		{ "Category", "ControlAim" },
		{ "ClampMax", "90.0" },
		{ "ClampMin", "-90.0" },
		{ "Comment", "/** Camera pitch bounding range, within (-90, 90). Will be overridden if using OrbitFollow.  */" },
		{ "ModuleRelativePath", "Public/Components/ControlAim.h" },
		{ "ToolTip", "Camera pitch bounding range, within (-90, 90). Will be overridden if using OrbitFollow." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlAim_Statics::NewProp_VerticalRange = { "VerticalRange", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlAim, VerticalRange), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(Z_Construct_UClass_UControlAim_Statics::NewProp_VerticalRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlAim_Statics::NewProp_VerticalRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlAim_Statics::NewProp_HorizontalSpeed_MetaData[] = {
		{ "Category", "ControlAim" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Yaw move speed multiplier. */" },
		{ "ModuleRelativePath", "Public/Components/ControlAim.h" },
		{ "ToolTip", "Yaw move speed multiplier." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UControlAim_Statics::NewProp_HorizontalSpeed = { "HorizontalSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlAim, HorizontalSpeed), METADATA_PARAMS(Z_Construct_UClass_UControlAim_Statics::NewProp_HorizontalSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlAim_Statics::NewProp_HorizontalSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlAim_Statics::NewProp_VerticalSpeed_MetaData[] = {
		{ "Category", "ControlAim" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Pitch move speed multiplier. */" },
		{ "ModuleRelativePath", "Public/Components/ControlAim.h" },
		{ "ToolTip", "Pitch move speed multiplier." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UControlAim_Statics::NewProp_VerticalSpeed = { "VerticalSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlAim, VerticalSpeed), METADATA_PARAMS(Z_Construct_UClass_UControlAim_Statics::NewProp_VerticalSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlAim_Statics::NewProp_VerticalSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlAim_Statics::NewProp_HorizontalDamping_MetaData[] = {
		{ "Category", "ControlAim" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Acceleration and deceleration time when changing yaw. First element is acceleration, second is deceleration. */" },
		{ "ModuleRelativePath", "Public/Components/ControlAim.h" },
		{ "ToolTip", "Acceleration and deceleration time when changing yaw. First element is acceleration, second is deceleration." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlAim_Statics::NewProp_HorizontalDamping = { "HorizontalDamping", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlAim, HorizontalDamping), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(Z_Construct_UClass_UControlAim_Statics::NewProp_HorizontalDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlAim_Statics::NewProp_HorizontalDamping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlAim_Statics::NewProp_VerticalDamping_MetaData[] = {
		{ "Category", "ControlAim" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Acceleration and deceleration time when changing pitch. First element is acceleration, second is deceleration. */" },
		{ "ModuleRelativePath", "Public/Components/ControlAim.h" },
		{ "ToolTip", "Acceleration and deceleration time when changing pitch. First element is acceleration, second is deceleration." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlAim_Statics::NewProp_VerticalDamping = { "VerticalDamping", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlAim, VerticalDamping), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(Z_Construct_UClass_UControlAim_Statics::NewProp_VerticalDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlAim_Statics::NewProp_VerticalDamping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlAim_Statics::NewProp_bSyncToController_MetaData[] = {
		{ "Category", "ControlAim" },
		{ "Comment", "/** Whether to replicate camera's rotation to Controller. This is useful when you want to set character's rotation in synchronization with this camera. */" },
		{ "ModuleRelativePath", "Public/Components/ControlAim.h" },
		{ "ToolTip", "Whether to replicate camera's rotation to Controller. This is useful when you want to set character's rotation in synchronization with this camera." },
	};
#endif
	void Z_Construct_UClass_UControlAim_Statics::NewProp_bSyncToController_SetBit(void* Obj)
	{
		((UControlAim*)Obj)->bSyncToController = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlAim_Statics::NewProp_bSyncToController = { "bSyncToController", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UControlAim), &Z_Construct_UClass_UControlAim_Statics::NewProp_bSyncToController_SetBit, METADATA_PARAMS(Z_Construct_UClass_UControlAim_Statics::NewProp_bSyncToController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlAim_Statics::NewProp_bSyncToController_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UControlAim_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlAim_Statics::NewProp_RecenteringParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlAim_Statics::NewProp_HorizontalHeading_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlAim_Statics::NewProp_HorizontalHeading,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlAim_Statics::NewProp_HorizontalHardForward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlAim_Statics::NewProp_HorizontalSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlAim_Statics::NewProp_HorizontalDestination,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlAim_Statics::NewProp_HorizontalRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlAim_Statics::NewProp_bWrap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlAim_Statics::NewProp_VerticalRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlAim_Statics::NewProp_HorizontalSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlAim_Statics::NewProp_VerticalSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlAim_Statics::NewProp_HorizontalDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlAim_Statics::NewProp_VerticalDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlAim_Statics::NewProp_bSyncToController,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UControlAim_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlAim>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlAim_Statics::ClassParams = {
		&UControlAim::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UControlAim_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UControlAim_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UControlAim_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UControlAim_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UControlAim()
	{
		if (!Z_Registration_Info_UClass_UControlAim.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlAim.OuterSingleton, Z_Construct_UClass_UControlAim_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UControlAim.OuterSingleton;
	}
	template<> EASYCAMERA_API UClass* StaticClass<UControlAim>()
	{
		return UControlAim::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControlAim);
	UControlAim::~UControlAim() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Components_ControlAim_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Components_ControlAim_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UControlAim, UControlAim::StaticClass, TEXT("UControlAim"), &Z_Registration_Info_UClass_UControlAim, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlAim), 979622379U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Components_ControlAim_h_946995190(TEXT("/Script/EasyCamera"),
		Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Components_ControlAim_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Components_ControlAim_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
