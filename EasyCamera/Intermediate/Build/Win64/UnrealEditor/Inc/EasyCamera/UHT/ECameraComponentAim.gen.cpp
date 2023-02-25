// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyCamera/Public/Components/ECameraComponentAim.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECameraComponentAim() {}
// Cross Module References
	EASYCAMERA_API UClass* Z_Construct_UClass_UECameraComponentAim();
	EASYCAMERA_API UClass* Z_Construct_UClass_UECameraComponentAim_NoRegister();
	EASYCAMERA_API UClass* Z_Construct_UClass_UECameraComponentBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EasyCamera();
// End Cross Module References
	void UECameraComponentAim::StaticRegisterNativesUECameraComponentAim()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UECameraComponentAim);
	UClass* Z_Construct_UClass_UECameraComponentAim_NoRegister()
	{
		return UECameraComponentAim::StaticClass();
	}
	struct Z_Construct_UClass_UECameraComponentAim_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimTarget_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_AimTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UECameraComponentAim_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UECameraComponentBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyCamera,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UECameraComponentAim_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ECamera" },
		{ "Comment", "/**\n * Base class for all aim components.\n */" },
		{ "IncludePath", "Components/ECameraComponentAim.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/ECameraComponentAim.h" },
		{ "ToolTip", "Base class for all aim components." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UECameraComponentAim_Statics::NewProp_AimTarget_MetaData[] = {
		{ "Category", "ECameraComponentAim" },
		{ "Comment", "/** You MUST specify AimTarget in the midst of calling CallCamera node. */" },
		{ "ModuleRelativePath", "Public/Components/ECameraComponentAim.h" },
		{ "ToolTip", "You MUST specify AimTarget in the midst of calling CallCamera node." },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UECameraComponentAim_Statics::NewProp_AimTarget = { "AimTarget", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UECameraComponentAim, AimTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UECameraComponentAim_Statics::NewProp_AimTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UECameraComponentAim_Statics::NewProp_AimTarget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UECameraComponentAim_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UECameraComponentAim_Statics::NewProp_AimTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UECameraComponentAim_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UECameraComponentAim>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UECameraComponentAim_Statics::ClassParams = {
		&UECameraComponentAim::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UECameraComponentAim_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UECameraComponentAim_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UECameraComponentAim_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UECameraComponentAim_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UECameraComponentAim()
	{
		if (!Z_Registration_Info_UClass_UECameraComponentAim.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UECameraComponentAim.OuterSingleton, Z_Construct_UClass_UECameraComponentAim_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UECameraComponentAim.OuterSingleton;
	}
	template<> EASYCAMERA_API UClass* StaticClass<UECameraComponentAim>()
	{
		return UECameraComponentAim::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UECameraComponentAim);
	UECameraComponentAim::~UECameraComponentAim() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Components_ECameraComponentAim_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Components_ECameraComponentAim_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UECameraComponentAim, UECameraComponentAim::StaticClass, TEXT("UECameraComponentAim"), &Z_Registration_Info_UClass_UECameraComponentAim, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UECameraComponentAim), 914052853U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Components_ECameraComponentAim_h_664796537(TEXT("/Script/EasyCamera"),
		Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Components_ECameraComponentAim_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Components_ECameraComponentAim_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
