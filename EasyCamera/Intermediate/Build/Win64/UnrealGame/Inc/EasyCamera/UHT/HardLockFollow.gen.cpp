// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyCamera/Public/Components/HardLockFollow.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHardLockFollow() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	EASYCAMERA_API UClass* Z_Construct_UClass_UECameraComponentFollow();
	EASYCAMERA_API UClass* Z_Construct_UClass_UHardLockFollow();
	EASYCAMERA_API UClass* Z_Construct_UClass_UHardLockFollow_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EasyCamera();
// End Cross Module References
	void UHardLockFollow::StaticRegisterNativesUHardLockFollow()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHardLockFollow);
	UClass* Z_Construct_UClass_UHardLockFollow_NoRegister()
	{
		return UHardLockFollow::StaticClass();
	}
	struct Z_Construct_UClass_UHardLockFollow_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FollowOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHardLockFollow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UECameraComponentFollow,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyCamera,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHardLockFollow_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ECamera" },
		{ "Comment", "/**\n * HardLockFollow uses the location of the follow target.\n */" },
		{ "IncludePath", "Components/HardLockFollow.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/HardLockFollow.h" },
		{ "ToolTip", "HardLockFollow uses the location of the follow target." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHardLockFollow_Statics::NewProp_FollowOffset_MetaData[] = {
		{ "Category", "HardLockFollow" },
		{ "Comment", "/** Camera offset in follow target's local space. */" },
		{ "ModuleRelativePath", "Public/Components/HardLockFollow.h" },
		{ "ToolTip", "Camera offset in follow target's local space." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHardLockFollow_Statics::NewProp_FollowOffset = { "FollowOffset", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHardLockFollow, FollowOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UHardLockFollow_Statics::NewProp_FollowOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHardLockFollow_Statics::NewProp_FollowOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHardLockFollow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHardLockFollow_Statics::NewProp_FollowOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHardLockFollow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHardLockFollow>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHardLockFollow_Statics::ClassParams = {
		&UHardLockFollow::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHardLockFollow_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHardLockFollow_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHardLockFollow_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHardLockFollow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHardLockFollow()
	{
		if (!Z_Registration_Info_UClass_UHardLockFollow.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHardLockFollow.OuterSingleton, Z_Construct_UClass_UHardLockFollow_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHardLockFollow.OuterSingleton;
	}
	template<> EASYCAMERA_API UClass* StaticClass<UHardLockFollow>()
	{
		return UHardLockFollow::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHardLockFollow);
	UHardLockFollow::~UHardLockFollow() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Components_HardLockFollow_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Components_HardLockFollow_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHardLockFollow, UHardLockFollow::StaticClass, TEXT("UHardLockFollow"), &Z_Registration_Info_UClass_UHardLockFollow, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHardLockFollow), 2284696187U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Components_HardLockFollow_h_2135816984(TEXT("/Script/EasyCamera"),
		Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Components_HardLockFollow_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Components_HardLockFollow_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
