// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyCamera/Public/Extensions/ECameraExtensionBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECameraExtensionBase() {}
// Cross Module References
	EASYCAMERA_API UClass* Z_Construct_UClass_UECameraComponentBase();
	EASYCAMERA_API UClass* Z_Construct_UClass_UECameraExtensionBase();
	EASYCAMERA_API UClass* Z_Construct_UClass_UECameraExtensionBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EasyCamera();
// End Cross Module References
	void UECameraExtensionBase::StaticRegisterNativesUECameraExtensionBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UECameraExtensionBase);
	UClass* Z_Construct_UClass_UECameraExtensionBase_NoRegister()
	{
		return UECameraExtensionBase::StaticClass();
	}
	struct Z_Construct_UClass_UECameraExtensionBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UECameraExtensionBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UECameraComponentBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyCamera,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UECameraExtensionBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ECamera" },
		{ "Comment", "/**\n * Base class for all extensions.\n */" },
		{ "IncludePath", "Extensions/ECameraExtensionBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Extensions/ECameraExtensionBase.h" },
		{ "ToolTip", "Base class for all extensions." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UECameraExtensionBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UECameraExtensionBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UECameraExtensionBase_Statics::ClassParams = {
		&UECameraExtensionBase::StaticClass,
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
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UECameraExtensionBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UECameraExtensionBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UECameraExtensionBase()
	{
		if (!Z_Registration_Info_UClass_UECameraExtensionBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UECameraExtensionBase.OuterSingleton, Z_Construct_UClass_UECameraExtensionBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UECameraExtensionBase.OuterSingleton;
	}
	template<> EASYCAMERA_API UClass* StaticClass<UECameraExtensionBase>()
	{
		return UECameraExtensionBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UECameraExtensionBase);
	UECameraExtensionBase::~UECameraExtensionBase() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Extensions_ECameraExtensionBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Extensions_ECameraExtensionBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UECameraExtensionBase, UECameraExtensionBase::StaticClass, TEXT("UECameraExtensionBase"), &Z_Registration_Info_UClass_UECameraExtensionBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UECameraExtensionBase), 1764843156U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Extensions_ECameraExtensionBase_h_179138713(TEXT("/Script/EasyCamera"),
		Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Extensions_ECameraExtensionBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Extensions_ECameraExtensionBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
