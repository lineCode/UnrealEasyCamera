// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyCamera/Public/Components/ECameraComponentFollow.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECameraComponentFollow() {}
// Cross Module References
	EASYCAMERA_API UClass* Z_Construct_UClass_UECameraComponentBase();
	EASYCAMERA_API UClass* Z_Construct_UClass_UECameraComponentFollow();
	EASYCAMERA_API UClass* Z_Construct_UClass_UECameraComponentFollow_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EasyCamera();
// End Cross Module References
	void UECameraComponentFollow::StaticRegisterNativesUECameraComponentFollow()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UECameraComponentFollow);
	UClass* Z_Construct_UClass_UECameraComponentFollow_NoRegister()
	{
		return UECameraComponentFollow::StaticClass();
	}
	struct Z_Construct_UClass_UECameraComponentFollow_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowTarget_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_FollowTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UECameraComponentFollow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UECameraComponentBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyCamera,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UECameraComponentFollow_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ECamera" },
		{ "Comment", "/**\n * Base class for all follow components.\n */" },
		{ "IncludePath", "Components/ECameraComponentFollow.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/ECameraComponentFollow.h" },
		{ "ToolTip", "Base class for all follow components." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UECameraComponentFollow_Statics::NewProp_FollowTarget_MetaData[] = {
		{ "Category", "ECameraComponentFollow" },
		{ "Comment", "/** You MUST specify FollowTarget in the midst of calling CallCamera node. */" },
		{ "ModuleRelativePath", "Public/Components/ECameraComponentFollow.h" },
		{ "ToolTip", "You MUST specify FollowTarget in the midst of calling CallCamera node." },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UECameraComponentFollow_Statics::NewProp_FollowTarget = { "FollowTarget", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UECameraComponentFollow, FollowTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UECameraComponentFollow_Statics::NewProp_FollowTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UECameraComponentFollow_Statics::NewProp_FollowTarget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UECameraComponentFollow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UECameraComponentFollow_Statics::NewProp_FollowTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UECameraComponentFollow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UECameraComponentFollow>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UECameraComponentFollow_Statics::ClassParams = {
		&UECameraComponentFollow::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UECameraComponentFollow_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UECameraComponentFollow_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UECameraComponentFollow_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UECameraComponentFollow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UECameraComponentFollow()
	{
		if (!Z_Registration_Info_UClass_UECameraComponentFollow.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UECameraComponentFollow.OuterSingleton, Z_Construct_UClass_UECameraComponentFollow_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UECameraComponentFollow.OuterSingleton;
	}
	template<> EASYCAMERA_API UClass* StaticClass<UECameraComponentFollow>()
	{
		return UECameraComponentFollow::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UECameraComponentFollow);
	UECameraComponentFollow::~UECameraComponentFollow() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Components_ECameraComponentFollow_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Components_ECameraComponentFollow_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UECameraComponentFollow, UECameraComponentFollow::StaticClass, TEXT("UECameraComponentFollow"), &Z_Registration_Info_UClass_UECameraComponentFollow, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UECameraComponentFollow), 2922866464U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Components_ECameraComponentFollow_h_1679943534(TEXT("/Script/EasyCamera"),
		Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Components_ECameraComponentFollow_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Components_ECameraComponentFollow_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
