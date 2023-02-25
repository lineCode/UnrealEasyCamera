// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyCamera/Public/Components/TargetingAim.h"
#include "EasyCamera/Public/Utils/ECameraTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetingAim() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2f();
	EASYCAMERA_API UClass* Z_Construct_UClass_UECameraComponentAim();
	EASYCAMERA_API UClass* Z_Construct_UClass_UTargetingAim();
	EASYCAMERA_API UClass* Z_Construct_UClass_UTargetingAim_NoRegister();
	EASYCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FDampParams();
	UPackage* Z_Construct_UPackage__Script_EasyCamera();
// End Cross Module References
	void UTargetingAim::StaticRegisterNativesUTargetingAim()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTargetingAim);
	UClass* Z_Construct_UClass_UTargetingAim_NoRegister()
	{
		return UTargetingAim::StaticClass();
	}
	struct Z_Construct_UClass_UTargetingAim_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLocalRotation_MetaData[];
#endif
		static void NewProp_bLocalRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocalRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AimOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DampParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DampParams;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimDamping_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AimDamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenOffsetWidth_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenOffsetWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenOffsetHeight_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenOffsetHeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTargetingAim_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UECameraComponentAim,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyCamera,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetingAim_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ECamera" },
		{ "Comment", "/**\n * TargetingAim makes camera aim at a target, with offset and damping.\n */" },
		{ "IncludePath", "Components/TargetingAim.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/TargetingAim.h" },
		{ "ToolTip", "TargetingAim makes camera aim at a target, with offset and damping." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetingAim_Statics::NewProp_bLocalRotation_MetaData[] = {
		{ "Category", "TargetingAim" },
		{ "Comment", "/** Whether to use local space rotation. This is currently experimental, do not use it. */" },
		{ "ModuleRelativePath", "Public/Components/TargetingAim.h" },
		{ "ToolTip", "Whether to use local space rotation. This is currently experimental, do not use it." },
	};
#endif
	void Z_Construct_UClass_UTargetingAim_Statics::NewProp_bLocalRotation_SetBit(void* Obj)
	{
		((UTargetingAim*)Obj)->bLocalRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTargetingAim_Statics::NewProp_bLocalRotation = { "bLocalRotation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTargetingAim), &Z_Construct_UClass_UTargetingAim_Statics::NewProp_bLocalRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTargetingAim_Statics::NewProp_bLocalRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingAim_Statics::NewProp_bLocalRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetingAim_Statics::NewProp_AimOffset_MetaData[] = {
		{ "Category", "TargetingAim" },
		{ "Comment", "/** World space position offset applied to the aim target. */" },
		{ "ModuleRelativePath", "Public/Components/TargetingAim.h" },
		{ "ToolTip", "World space position offset applied to the aim target." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTargetingAim_Statics::NewProp_AimOffset = { "AimOffset", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTargetingAim, AimOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UTargetingAim_Statics::NewProp_AimOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingAim_Statics::NewProp_AimOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetingAim_Statics::NewProp_DampParams_MetaData[] = {
		{ "Category", "TargetingAim" },
		{ "Comment", "/** Damp parameters you want to use for damping. */" },
		{ "ModuleRelativePath", "Public/Components/TargetingAim.h" },
		{ "ToolTip", "Damp parameters you want to use for damping." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTargetingAim_Statics::NewProp_DampParams = { "DampParams", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTargetingAim, DampParams), Z_Construct_UScriptStruct_FDampParams, METADATA_PARAMS(Z_Construct_UClass_UTargetingAim_Statics::NewProp_DampParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingAim_Statics::NewProp_DampParams_MetaData)) }; // 4182365953
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetingAim_Statics::NewProp_AimDamping_MetaData[] = {
		{ "Category", "TargetingAim" },
		{ "ClampMax", "5.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Damping for camera to track the aim target. Respectively for roll, pitch and yaw in order. \n\x09*   Roll will be ignored.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Components/TargetingAim.h" },
		{ "ToolTip", "Damping for camera to track the aim target. Respectively for roll, pitch and yaw in order.\n Roll will be ignored." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTargetingAim_Statics::NewProp_AimDamping = { "AimDamping", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTargetingAim, AimDamping), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UTargetingAim_Statics::NewProp_AimDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingAim_Statics::NewProp_AimDamping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetingAim_Statics::NewProp_ScreenOffset_MetaData[] = {
		{ "Category", "TargetingAim" },
		{ "ClampMax", "0.5" },
		{ "ClampMin", "-0.5" },
		{ "Comment", "/** Screen space offset applied to the *real* aim target after applying AimOffset. */" },
		{ "ModuleRelativePath", "Public/Components/TargetingAim.h" },
		{ "ToolTip", "Screen space offset applied to the *real* aim target after applying AimOffset." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTargetingAim_Statics::NewProp_ScreenOffset = { "ScreenOffset", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTargetingAim, ScreenOffset), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(Z_Construct_UClass_UTargetingAim_Statics::NewProp_ScreenOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingAim_Statics::NewProp_ScreenOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetingAim_Statics::NewProp_ScreenOffsetWidth_MetaData[] = {
		{ "Category", "TargetingAim" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "-1.0" },
		{ "Comment", "/** Width of the screen offset. Pivoted at the X axis position. */" },
		{ "ModuleRelativePath", "Public/Components/TargetingAim.h" },
		{ "ToolTip", "Width of the screen offset. Pivoted at the X axis position." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTargetingAim_Statics::NewProp_ScreenOffsetWidth = { "ScreenOffsetWidth", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTargetingAim, ScreenOffsetWidth), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(Z_Construct_UClass_UTargetingAim_Statics::NewProp_ScreenOffsetWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingAim_Statics::NewProp_ScreenOffsetWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetingAim_Statics::NewProp_ScreenOffsetHeight_MetaData[] = {
		{ "Category", "TargetingAim" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "-1.0" },
		{ "Comment", "/** Height of the screen offset. Pivoted at the Y axis position. */" },
		{ "ModuleRelativePath", "Public/Components/TargetingAim.h" },
		{ "ToolTip", "Height of the screen offset. Pivoted at the Y axis position." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTargetingAim_Statics::NewProp_ScreenOffsetHeight = { "ScreenOffsetHeight", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTargetingAim, ScreenOffsetHeight), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(Z_Construct_UClass_UTargetingAim_Statics::NewProp_ScreenOffsetHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingAim_Statics::NewProp_ScreenOffsetHeight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTargetingAim_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingAim_Statics::NewProp_bLocalRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingAim_Statics::NewProp_AimOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingAim_Statics::NewProp_DampParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingAim_Statics::NewProp_AimDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingAim_Statics::NewProp_ScreenOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingAim_Statics::NewProp_ScreenOffsetWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingAim_Statics::NewProp_ScreenOffsetHeight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTargetingAim_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTargetingAim>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTargetingAim_Statics::ClassParams = {
		&UTargetingAim::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTargetingAim_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingAim_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTargetingAim_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingAim_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTargetingAim()
	{
		if (!Z_Registration_Info_UClass_UTargetingAim.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTargetingAim.OuterSingleton, Z_Construct_UClass_UTargetingAim_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTargetingAim.OuterSingleton;
	}
	template<> EASYCAMERA_API UClass* StaticClass<UTargetingAim>()
	{
		return UTargetingAim::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTargetingAim);
	UTargetingAim::~UTargetingAim() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Components_TargetingAim_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Components_TargetingAim_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTargetingAim, UTargetingAim::StaticClass, TEXT("UTargetingAim"), &Z_Registration_Info_UClass_UTargetingAim, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTargetingAim), 1076633149U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Components_TargetingAim_h_3847563465(TEXT("/Script/EasyCamera"),
		Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Components_TargetingAim_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Components_TargetingAim_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
