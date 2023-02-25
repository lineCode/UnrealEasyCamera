// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyCamera/Public/Extensions/DeoccluderExtension.h"
#include "EasyCamera/Public/Utils/ECameraTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeoccluderExtension() {}
// Cross Module References
	EASYCAMERA_API UClass* Z_Construct_UClass_UDeoccluderExtension();
	EASYCAMERA_API UClass* Z_Construct_UClass_UDeoccluderExtension_NoRegister();
	EASYCAMERA_API UClass* Z_Construct_UClass_UECameraExtensionBase();
	EASYCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FOccluderParams();
	UPackage* Z_Construct_UPackage__Script_EasyCamera();
// End Cross Module References
	void UDeoccluderExtension::StaticRegisterNativesUDeoccluderExtension()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDeoccluderExtension);
	UClass* Z_Construct_UClass_UDeoccluderExtension_NoRegister()
	{
		return UDeoccluderExtension::StaticClass();
	}
	struct Z_Construct_UClass_UDeoccluderExtension_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OccluderParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OccluderParams;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumDistanceFromTarget_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumDistanceFromTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraDistanceFromOcclusion_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraDistanceFromOcclusion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionDamping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OcclusionDamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RestoreDamping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RestoreDamping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDeoccluderExtension_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UECameraExtensionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyCamera,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeoccluderExtension_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ECamera" },
		{ "Comment", "/**\n * DeoccluderExtension is used for camera occlusion detection along the direction from camera to aim target.\n */" },
		{ "IncludePath", "Extensions/DeoccluderExtension.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Extensions/DeoccluderExtension.h" },
		{ "ToolTip", "DeoccluderExtension is used for camera occlusion detection along the direction from camera to aim target." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeoccluderExtension_Statics::NewProp_OccluderParams_MetaData[] = {
		{ "Category", "DeoccluderExtension" },
		{ "Comment", "/** A set of parameters describing how to avoid occlusion. */" },
		{ "ModuleRelativePath", "Public/Extensions/DeoccluderExtension.h" },
		{ "ToolTip", "A set of parameters describing how to avoid occlusion." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDeoccluderExtension_Statics::NewProp_OccluderParams = { "OccluderParams", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDeoccluderExtension, OccluderParams), Z_Construct_UScriptStruct_FOccluderParams, METADATA_PARAMS(Z_Construct_UClass_UDeoccluderExtension_Statics::NewProp_OccluderParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeoccluderExtension_Statics::NewProp_OccluderParams_MetaData)) }; // 3639929556
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeoccluderExtension_Statics::NewProp_MinimumDistanceFromTarget_MetaData[] = {
		{ "Category", "DeoccluderExtension" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Ignore obstacles that are less than this distance from target. Set this value as small as possible. */" },
		{ "ModuleRelativePath", "Public/Extensions/DeoccluderExtension.h" },
		{ "ToolTip", "Ignore obstacles that are less than this distance from target. Set this value as small as possible." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDeoccluderExtension_Statics::NewProp_MinimumDistanceFromTarget = { "MinimumDistanceFromTarget", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDeoccluderExtension, MinimumDistanceFromTarget), METADATA_PARAMS(Z_Construct_UClass_UDeoccluderExtension_Statics::NewProp_MinimumDistanceFromTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeoccluderExtension_Statics::NewProp_MinimumDistanceFromTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeoccluderExtension_Statics::NewProp_CameraDistanceFromOcclusion_MetaData[] = {
		{ "Category", "DeoccluderExtension" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Preserve a fixed camera distance to occlusion. Zero is recommended. */" },
		{ "ModuleRelativePath", "Public/Extensions/DeoccluderExtension.h" },
		{ "ToolTip", "Preserve a fixed camera distance to occlusion. Zero is recommended." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDeoccluderExtension_Statics::NewProp_CameraDistanceFromOcclusion = { "CameraDistanceFromOcclusion", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDeoccluderExtension, CameraDistanceFromOcclusion), METADATA_PARAMS(Z_Construct_UClass_UDeoccluderExtension_Statics::NewProp_CameraDistanceFromOcclusion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeoccluderExtension_Statics::NewProp_CameraDistanceFromOcclusion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeoccluderExtension_Statics::NewProp_OcclusionDamping_MetaData[] = {
		{ "Category", "DeoccluderExtension" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Damping when avoiding occlusion. Small values indicate more responsiveness. */" },
		{ "ModuleRelativePath", "Public/Extensions/DeoccluderExtension.h" },
		{ "ToolTip", "Damping when avoiding occlusion. Small values indicate more responsiveness." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDeoccluderExtension_Statics::NewProp_OcclusionDamping = { "OcclusionDamping", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDeoccluderExtension, OcclusionDamping), METADATA_PARAMS(Z_Construct_UClass_UDeoccluderExtension_Statics::NewProp_OcclusionDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeoccluderExtension_Statics::NewProp_OcclusionDamping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeoccluderExtension_Statics::NewProp_RestoreDamping_MetaData[] = {
		{ "Category", "DeoccluderExtension" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Damping when restoring from occlusion. Small values indicate more responsiveness. */" },
		{ "ModuleRelativePath", "Public/Extensions/DeoccluderExtension.h" },
		{ "ToolTip", "Damping when restoring from occlusion. Small values indicate more responsiveness." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDeoccluderExtension_Statics::NewProp_RestoreDamping = { "RestoreDamping", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDeoccluderExtension, RestoreDamping), METADATA_PARAMS(Z_Construct_UClass_UDeoccluderExtension_Statics::NewProp_RestoreDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeoccluderExtension_Statics::NewProp_RestoreDamping_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDeoccluderExtension_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeoccluderExtension_Statics::NewProp_OccluderParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeoccluderExtension_Statics::NewProp_MinimumDistanceFromTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeoccluderExtension_Statics::NewProp_CameraDistanceFromOcclusion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeoccluderExtension_Statics::NewProp_OcclusionDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeoccluderExtension_Statics::NewProp_RestoreDamping,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDeoccluderExtension_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeoccluderExtension>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDeoccluderExtension_Statics::ClassParams = {
		&UDeoccluderExtension::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDeoccluderExtension_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDeoccluderExtension_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDeoccluderExtension_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDeoccluderExtension_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDeoccluderExtension()
	{
		if (!Z_Registration_Info_UClass_UDeoccluderExtension.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDeoccluderExtension.OuterSingleton, Z_Construct_UClass_UDeoccluderExtension_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDeoccluderExtension.OuterSingleton;
	}
	template<> EASYCAMERA_API UClass* StaticClass<UDeoccluderExtension>()
	{
		return UDeoccluderExtension::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDeoccluderExtension);
	UDeoccluderExtension::~UDeoccluderExtension() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Extensions_DeoccluderExtension_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Extensions_DeoccluderExtension_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDeoccluderExtension, UDeoccluderExtension::StaticClass, TEXT("UDeoccluderExtension"), &Z_Registration_Info_UClass_UDeoccluderExtension, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDeoccluderExtension), 747254102U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Extensions_DeoccluderExtension_h_294381752(TEXT("/Script/EasyCamera"),
		Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Extensions_DeoccluderExtension_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Extensions_DeoccluderExtension_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
