// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyCamera/Public/Core/ECameraManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECameraManager() {}
// Cross Module References
	EASYCAMERA_API UClass* Z_Construct_UClass_AECameraBase_NoRegister();
	EASYCAMERA_API UClass* Z_Construct_UClass_AECameraManager();
	EASYCAMERA_API UClass* Z_Construct_UClass_AECameraManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_EasyCamera();
// End Cross Module References
	void AECameraManager::StaticRegisterNativesAECameraManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AECameraManager);
	UClass* Z_Construct_UClass_AECameraManager_NoRegister()
	{
		return AECameraManager::StaticClass();
	}
	struct Z_Construct_UClass_AECameraManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActiveCamera;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AECameraManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyCamera,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AECameraManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ECamera" },
		{ "IncludePath", "Core/ECameraManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/ECameraManager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AECameraManager_Statics::NewProp_ActiveCamera_MetaData[] = {
		{ "Category", "ECameraManager" },
		{ "Comment", "/** Current active setting component. */" },
		{ "ModuleRelativePath", "Public/Core/ECameraManager.h" },
		{ "ToolTip", "Current active setting component." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AECameraManager_Statics::NewProp_ActiveCamera = { "ActiveCamera", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AECameraManager, ActiveCamera), Z_Construct_UClass_AECameraBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AECameraManager_Statics::NewProp_ActiveCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AECameraManager_Statics::NewProp_ActiveCamera_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AECameraManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AECameraManager_Statics::NewProp_ActiveCamera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AECameraManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AECameraManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AECameraManager_Statics::ClassParams = {
		&AECameraManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AECameraManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AECameraManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AECameraManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AECameraManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AECameraManager()
	{
		if (!Z_Registration_Info_UClass_AECameraManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AECameraManager.OuterSingleton, Z_Construct_UClass_AECameraManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AECameraManager.OuterSingleton;
	}
	template<> EASYCAMERA_API UClass* StaticClass<AECameraManager>()
	{
		return AECameraManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AECameraManager);
	AECameraManager::~AECameraManager() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_ECameraManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_ECameraManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AECameraManager, AECameraManager::StaticClass, TEXT("AECameraManager"), &Z_Registration_Info_UClass_AECameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AECameraManager), 779730379U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_ECameraManager_h_3483085061(TEXT("/Script/EasyCamera"),
		Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_ECameraManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_ECameraManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
