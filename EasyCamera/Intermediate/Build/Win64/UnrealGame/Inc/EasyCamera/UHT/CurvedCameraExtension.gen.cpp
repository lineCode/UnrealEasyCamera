// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyCamera/Public/Extensions/CurvedCameraExtension.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurvedCameraExtension() {}
// Cross Module References
	EASYCAMERA_API UClass* Z_Construct_UClass_UCurvedCameraExtension();
	EASYCAMERA_API UClass* Z_Construct_UClass_UCurvedCameraExtension_NoRegister();
	EASYCAMERA_API UClass* Z_Construct_UClass_UECameraExtensionBase();
	UPackage* Z_Construct_UPackage__Script_EasyCamera();
// End Cross Module References
	void UCurvedCameraExtension::StaticRegisterNativesUCurvedCameraExtension()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCurvedCameraExtension);
	UClass* Z_Construct_UClass_UCurvedCameraExtension_NoRegister()
	{
		return UCurvedCameraExtension::StaticClass();
	}
	struct Z_Construct_UClass_UCurvedCameraExtension_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCurvedCameraExtension_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UECameraExtensionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyCamera,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurvedCameraExtension_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ECamera" },
		{ "Comment", "/**\n * This extension drives camera based on a a curved animation clip.\n * This animation clip should be short and is of high re-usability.\n */" },
		{ "IncludePath", "Extensions/CurvedCameraExtension.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Extensions/CurvedCameraExtension.h" },
		{ "ToolTip", "This extension drives camera based on a a curved animation clip.\nThis animation clip should be short and is of high re-usability." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCurvedCameraExtension_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurvedCameraExtension>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCurvedCameraExtension_Statics::ClassParams = {
		&UCurvedCameraExtension::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCurvedCameraExtension_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCurvedCameraExtension_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCurvedCameraExtension()
	{
		if (!Z_Registration_Info_UClass_UCurvedCameraExtension.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCurvedCameraExtension.OuterSingleton, Z_Construct_UClass_UCurvedCameraExtension_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCurvedCameraExtension.OuterSingleton;
	}
	template<> EASYCAMERA_API UClass* StaticClass<UCurvedCameraExtension>()
	{
		return UCurvedCameraExtension::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCurvedCameraExtension);
	UCurvedCameraExtension::~UCurvedCameraExtension() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Extensions_CurvedCameraExtension_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Extensions_CurvedCameraExtension_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCurvedCameraExtension, UCurvedCameraExtension::StaticClass, TEXT("UCurvedCameraExtension"), &Z_Registration_Info_UClass_UCurvedCameraExtension, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCurvedCameraExtension), 2778961759U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Extensions_CurvedCameraExtension_h_4167038206(TEXT("/Script/EasyCamera"),
		Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Extensions_CurvedCameraExtension_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Extensions_CurvedCameraExtension_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
