// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyCamera/Public/Utils/ECameraModifier_CameraShake.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECameraModifier_CameraShake() {}
// Cross Module References
	EASYCAMERA_API UClass* Z_Construct_UClass_UECameraModifier_CameraShake();
	EASYCAMERA_API UClass* Z_Construct_UClass_UECameraModifier_CameraShake_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraModifier_CameraShake();
	UPackage* Z_Construct_UPackage__Script_EasyCamera();
// End Cross Module References
	void UECameraModifier_CameraShake::StaticRegisterNativesUECameraModifier_CameraShake()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UECameraModifier_CameraShake);
	UClass* Z_Construct_UClass_UECameraModifier_CameraShake_NoRegister()
	{
		return UECameraModifier_CameraShake::StaticClass();
	}
	struct Z_Construct_UClass_UECameraModifier_CameraShake_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UECameraModifier_CameraShake_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraModifier_CameraShake,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyCamera,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UECameraModifier_CameraShake_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "ECamera" },
		{ "Comment", "/**\n * Utility class to help simplify starting camera shakes.\n */" },
		{ "IncludePath", "Utils/ECameraModifier_CameraShake.h" },
		{ "ModuleRelativePath", "Public/Utils/ECameraModifier_CameraShake.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Utility class to help simplify starting camera shakes." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UECameraModifier_CameraShake_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UECameraModifier_CameraShake>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UECameraModifier_CameraShake_Statics::ClassParams = {
		&UECameraModifier_CameraShake::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UECameraModifier_CameraShake_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UECameraModifier_CameraShake_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UECameraModifier_CameraShake()
	{
		if (!Z_Registration_Info_UClass_UECameraModifier_CameraShake.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UECameraModifier_CameraShake.OuterSingleton, Z_Construct_UClass_UECameraModifier_CameraShake_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UECameraModifier_CameraShake.OuterSingleton;
	}
	template<> EASYCAMERA_API UClass* StaticClass<UECameraModifier_CameraShake>()
	{
		return UECameraModifier_CameraShake::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UECameraModifier_CameraShake);
	UECameraModifier_CameraShake::~UECameraModifier_CameraShake() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraModifier_CameraShake_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraModifier_CameraShake_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UECameraModifier_CameraShake, UECameraModifier_CameraShake::StaticClass, TEXT("UECameraModifier_CameraShake"), &Z_Registration_Info_UClass_UECameraModifier_CameraShake, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UECameraModifier_CameraShake), 4249417716U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraModifier_CameraShake_h_2722394070(TEXT("/Script/EasyCamera"),
		Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraModifier_CameraShake_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraModifier_CameraShake_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
