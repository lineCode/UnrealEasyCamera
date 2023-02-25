// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyCamera/Public/Components/OrbitFollow.h"
#include "EasyCamera/Public/Utils/ECameraTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOrbitFollow() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	EASYCAMERA_API UClass* Z_Construct_UClass_UECameraComponentFollow();
	EASYCAMERA_API UClass* Z_Construct_UClass_UOrbitFollow();
	EASYCAMERA_API UClass* Z_Construct_UClass_UOrbitFollow_NoRegister();
	EASYCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FDampParams();
	EASYCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FOrbit();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEasingFunc();
	UPackage* Z_Construct_UPackage__Script_EasyCamera();
// End Cross Module References
	void UOrbitFollow::StaticRegisterNativesUOrbitFollow()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOrbitFollow);
	UClass* Z_Construct_UClass_UOrbitFollow_NoRegister()
	{
		return UOrbitFollow::StaticClass();
	}
	struct Z_Construct_UClass_UOrbitFollow_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Orbits_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Orbits_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Orbits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendFunction_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlendFunction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DampParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DampParams;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowDamping_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FollowDamping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOrbitFollow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UECameraComponentFollow,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyCamera,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrbitFollow_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ECamera" },
		{ "Comment", "/**\n * OrbitFollow cameras tracks the target in orbit defined at different heights.\n * You can define multiple orbits so that camera will move along the surface formed by these orbits.\n * NOTE: When you use this component for follow, you are supposed to use ControlAim component for aim\n *\x09     so as to control the point of view around the orbits.\n *\x09\x09 If you are not using ControlAim, this component will do nothing but only follows the follow target.\n */" },
		{ "IncludePath", "Components/OrbitFollow.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/OrbitFollow.h" },
		{ "ToolTip", "OrbitFollow cameras tracks the target in orbit defined at different heights.\nYou can define multiple orbits so that camera will move along the surface formed by these orbits.\nNOTE: When you use this component for follow, you are supposed to use ControlAim component for aim\n         so as to control the point of view around the orbits.\n             If you are not using ControlAim, this component will do nothing but only follows the follow target." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOrbitFollow_Statics::NewProp_Orbits_Inner = { "Orbits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FOrbit, METADATA_PARAMS(nullptr, 0) }; // 3410102452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrbitFollow_Statics::NewProp_Orbits_MetaData[] = {
		{ "Category", "OrbitFollow" },
		{ "Comment", "/** Defined orbits. \n\x09 *  NOTE: orbits *MUST* be placed in a descending order of height.\n\x09 *  For example, if you have two orbits respectively with height 1.0 (Orbit A) and 2.0 (Orbit B), \n\x09 *  then you should place Orbit B at index 0 and Orbit A at index 1 in the array.\n\x09 *  Orbits should satisfy: Orbits[0].Height >= Orbits[1].Height >= Orbits[2].Height >= ...\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/OrbitFollow.h" },
		{ "ToolTip", "Defined orbits.\nNOTE: orbits *MUST* be placed in a descending order of height.\nFor example, if you have two orbits respectively with height 1.0 (Orbit A) and 2.0 (Orbit B),\nthen you should place Orbit B at index 0 and Orbit A at index 1 in the array.\nOrbits should satisfy: Orbits[0].Height >= Orbits[1].Height >= Orbits[2].Height >= ..." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOrbitFollow_Statics::NewProp_Orbits = { "Orbits", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOrbitFollow, Orbits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOrbitFollow_Statics::NewProp_Orbits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOrbitFollow_Statics::NewProp_Orbits_MetaData)) }; // 3410102452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrbitFollow_Statics::NewProp_BlendFunction_MetaData[] = {
		{ "Category", "OrbitFollow" },
		{ "Comment", "/** The function used to blend between orbits. Default is Linear. */" },
		{ "ModuleRelativePath", "Public/Components/OrbitFollow.h" },
		{ "ToolTip", "The function used to blend between orbits. Default is Linear." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOrbitFollow_Statics::NewProp_BlendFunction = { "BlendFunction", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOrbitFollow, BlendFunction), Z_Construct_UEnum_Engine_EEasingFunc, METADATA_PARAMS(Z_Construct_UClass_UOrbitFollow_Statics::NewProp_BlendFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOrbitFollow_Statics::NewProp_BlendFunction_MetaData)) }; // 36709713
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrbitFollow_Statics::NewProp_DampParams_MetaData[] = {
		{ "Category", "OrbitFollow" },
		{ "Comment", "/** Damp parameters you want to use for follow damping. */" },
		{ "ModuleRelativePath", "Public/Components/OrbitFollow.h" },
		{ "ToolTip", "Damp parameters you want to use for follow damping." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOrbitFollow_Statics::NewProp_DampParams = { "DampParams", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOrbitFollow, DampParams), Z_Construct_UScriptStruct_FDampParams, METADATA_PARAMS(Z_Construct_UClass_UOrbitFollow_Statics::NewProp_DampParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOrbitFollow_Statics::NewProp_DampParams_MetaData)) }; // 4182365953
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrbitFollow_Statics::NewProp_FollowDamping_MetaData[] = {
		{ "Category", "OrbitFollow" },
		{ "ClampMax", "5.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Damping for camera to track the follow target. */" },
		{ "ModuleRelativePath", "Public/Components/OrbitFollow.h" },
		{ "ToolTip", "Damping for camera to track the follow target." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOrbitFollow_Statics::NewProp_FollowDamping = { "FollowDamping", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOrbitFollow, FollowDamping), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UOrbitFollow_Statics::NewProp_FollowDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOrbitFollow_Statics::NewProp_FollowDamping_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrbitFollow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrbitFollow_Statics::NewProp_Orbits_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrbitFollow_Statics::NewProp_Orbits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrbitFollow_Statics::NewProp_BlendFunction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrbitFollow_Statics::NewProp_DampParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrbitFollow_Statics::NewProp_FollowDamping,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOrbitFollow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrbitFollow>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrbitFollow_Statics::ClassParams = {
		&UOrbitFollow::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOrbitFollow_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOrbitFollow_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOrbitFollow_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOrbitFollow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOrbitFollow()
	{
		if (!Z_Registration_Info_UClass_UOrbitFollow.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrbitFollow.OuterSingleton, Z_Construct_UClass_UOrbitFollow_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOrbitFollow.OuterSingleton;
	}
	template<> EASYCAMERA_API UClass* StaticClass<UOrbitFollow>()
	{
		return UOrbitFollow::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOrbitFollow);
	UOrbitFollow::~UOrbitFollow() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Components_OrbitFollow_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Components_OrbitFollow_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOrbitFollow, UOrbitFollow::StaticClass, TEXT("UOrbitFollow"), &Z_Registration_Info_UClass_UOrbitFollow, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrbitFollow), 1029489438U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Components_OrbitFollow_h_3957048329(TEXT("/Script/EasyCamera"),
		Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Components_OrbitFollow_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Components_OrbitFollow_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
