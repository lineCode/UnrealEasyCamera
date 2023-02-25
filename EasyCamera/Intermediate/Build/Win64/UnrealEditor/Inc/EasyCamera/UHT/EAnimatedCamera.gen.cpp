// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyCamera/Public/Utils/EAnimatedCamera.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAnimatedCamera() {}
// Cross Module References
	EASYCAMERA_API UClass* Z_Construct_UClass_AEAnimatedCamera();
	EASYCAMERA_API UClass* Z_Construct_UClass_AEAnimatedCamera_NoRegister();
	EASYCAMERA_API UClass* Z_Construct_UClass_AECameraBase();
	UPackage* Z_Construct_UPackage__Script_EasyCamera();
// End Cross Module References
	void AEAnimatedCamera::StaticRegisterNativesAEAnimatedCamera()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEAnimatedCamera);
	UClass* Z_Construct_UClass_AEAnimatedCamera_NoRegister()
	{
		return AEAnimatedCamera::StaticClass();
	}
	struct Z_Construct_UClass_AEAnimatedCamera_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEAnimatedCamera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AECameraBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyCamera,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEAnimatedCamera_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "ECamera" },
		{ "Comment", "/**\n * This is a special camera used to be animated. It does nothing but contains a EAnimatedCameraExtension component by default.\n * When you use the CallAnimatedCamera node, an instance of this camera will be invoked and drive camera transform and FOV.\n * DO NOT change its properties!\n */" },
		{ "HideCategories", "Input Rendering" },
		{ "IncludePath", "Utils/EAnimatedCamera.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Utils/EAnimatedCamera.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "This is a special camera used to be animated. It does nothing but contains a EAnimatedCameraExtension component by default.\nWhen you use the CallAnimatedCamera node, an instance of this camera will be invoked and drive camera transform and FOV.\nDO NOT change its properties!" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEAnimatedCamera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEAnimatedCamera>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEAnimatedCamera_Statics::ClassParams = {
		&AEAnimatedCamera::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEAnimatedCamera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEAnimatedCamera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEAnimatedCamera()
	{
		if (!Z_Registration_Info_UClass_AEAnimatedCamera.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEAnimatedCamera.OuterSingleton, Z_Construct_UClass_AEAnimatedCamera_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEAnimatedCamera.OuterSingleton;
	}
	template<> EASYCAMERA_API UClass* StaticClass<AEAnimatedCamera>()
	{
		return AEAnimatedCamera::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEAnimatedCamera);
	AEAnimatedCamera::~AEAnimatedCamera() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_EAnimatedCamera_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_EAnimatedCamera_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEAnimatedCamera, AEAnimatedCamera::StaticClass, TEXT("AEAnimatedCamera"), &Z_Registration_Info_UClass_AEAnimatedCamera, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEAnimatedCamera), 18458824U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_EAnimatedCamera_h_4216428317(TEXT("/Script/EasyCamera"),
		Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_EAnimatedCamera_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_EAnimatedCamera_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
