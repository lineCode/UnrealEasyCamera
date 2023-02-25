// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyCamera/Public/Extensions/ConfinerExtension.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConfinerExtension() {}
// Cross Module References
	EASYCAMERA_API UClass* Z_Construct_UClass_UConfinerExtension();
	EASYCAMERA_API UClass* Z_Construct_UClass_UConfinerExtension_NoRegister();
	EASYCAMERA_API UClass* Z_Construct_UClass_UECameraExtensionBase();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBox_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EasyCamera();
// End Cross Module References
	void UConfinerExtension::StaticRegisterNativesUConfinerExtension()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConfinerExtension);
	UClass* Z_Construct_UClass_UConfinerExtension_NoRegister()
	{
		return UConfinerExtension::StaticClass();
	}
	struct Z_Construct_UClass_UConfinerExtension_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Boxes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Boxes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Boxes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExitDamping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExitDamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnterDamping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EnterDamping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConfinerExtension_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UECameraExtensionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyCamera,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConfinerExtension_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ECamera" },
		{ "Comment", "/**\n * This extension confines camera within areas bounded by trigger boxes.\n * Ensure this component is executed after follow component and before aim component.\n * You can do this by altering the stages of these components.\n */" },
		{ "IncludePath", "Extensions/ConfinerExtension.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Extensions/ConfinerExtension.h" },
		{ "ToolTip", "This extension confines camera within areas bounded by trigger boxes.\nEnsure this component is executed after follow component and before aim component.\nYou can do this by altering the stages of these components." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UConfinerExtension_Statics::NewProp_Boxes_Inner = { "Boxes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ATriggerBox_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConfinerExtension_Statics::NewProp_Boxes_MetaData[] = {
		{ "Category", "ConfinerExtension" },
		{ "Comment", "/** Boxes used to define confine areas. */" },
		{ "ModuleRelativePath", "Public/Extensions/ConfinerExtension.h" },
		{ "ToolTip", "Boxes used to define confine areas." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UConfinerExtension_Statics::NewProp_Boxes = { "Boxes", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConfinerExtension, Boxes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UConfinerExtension_Statics::NewProp_Boxes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConfinerExtension_Statics::NewProp_Boxes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConfinerExtension_Statics::NewProp_ExitDamping_MetaData[] = {
		{ "Category", "ConfinerExtension" },
		{ "Comment", "/** Exit box damping time. You can set this relatively large, say, 1.0. */" },
		{ "ModuleRelativePath", "Public/Extensions/ConfinerExtension.h" },
		{ "ToolTip", "Exit box damping time. You can set this relatively large, say, 1.0." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UConfinerExtension_Statics::NewProp_ExitDamping = { "ExitDamping", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConfinerExtension, ExitDamping), METADATA_PARAMS(Z_Construct_UClass_UConfinerExtension_Statics::NewProp_ExitDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConfinerExtension_Statics::NewProp_ExitDamping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConfinerExtension_Statics::NewProp_EnterDamping_MetaData[] = {
		{ "Category", "ConfinerExtension" },
		{ "Comment", "/** Enter box damping time. You should set this relatively small, say, 0.2. */" },
		{ "ModuleRelativePath", "Public/Extensions/ConfinerExtension.h" },
		{ "ToolTip", "Enter box damping time. You should set this relatively small, say, 0.2." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UConfinerExtension_Statics::NewProp_EnterDamping = { "EnterDamping", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConfinerExtension, EnterDamping), METADATA_PARAMS(Z_Construct_UClass_UConfinerExtension_Statics::NewProp_EnterDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConfinerExtension_Statics::NewProp_EnterDamping_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConfinerExtension_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConfinerExtension_Statics::NewProp_Boxes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConfinerExtension_Statics::NewProp_Boxes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConfinerExtension_Statics::NewProp_ExitDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConfinerExtension_Statics::NewProp_EnterDamping,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConfinerExtension_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConfinerExtension>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConfinerExtension_Statics::ClassParams = {
		&UConfinerExtension::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UConfinerExtension_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UConfinerExtension_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UConfinerExtension_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConfinerExtension_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConfinerExtension()
	{
		if (!Z_Registration_Info_UClass_UConfinerExtension.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConfinerExtension.OuterSingleton, Z_Construct_UClass_UConfinerExtension_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConfinerExtension.OuterSingleton;
	}
	template<> EASYCAMERA_API UClass* StaticClass<UConfinerExtension>()
	{
		return UConfinerExtension::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConfinerExtension);
	UConfinerExtension::~UConfinerExtension() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Extensions_ConfinerExtension_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Extensions_ConfinerExtension_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UConfinerExtension, UConfinerExtension::StaticClass, TEXT("UConfinerExtension"), &Z_Registration_Info_UClass_UConfinerExtension, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConfinerExtension), 1752211277U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Extensions_ConfinerExtension_h_762440119(TEXT("/Script/EasyCamera"),
		Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Extensions_ConfinerExtension_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Extensions_ConfinerExtension_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
