// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyCamera/Public/Utils/ECameraGroupActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECameraGroupActor() {}
// Cross Module References
	EASYCAMERA_API UClass* Z_Construct_UClass_AECameraGroupActor();
	EASYCAMERA_API UClass* Z_Construct_UClass_AECameraGroupActor_NoRegister();
	EASYCAMERA_API UClass* Z_Construct_UClass_UECameraGroupActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EasyCamera();
// End Cross Module References
	void AECameraGroupActor::StaticRegisterNativesAECameraGroupActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AECameraGroupActor);
	UClass* Z_Construct_UClass_AECameraGroupActor_NoRegister()
	{
		return AECameraGroupActor::StaticClass();
	}
	struct Z_Construct_UClass_AECameraGroupActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SceneComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraGroupActorComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CameraGroupActorComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AECameraGroupActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyCamera,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AECameraGroupActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ECamera" },
		{ "Comment", "/** Default group actor, only contains a CameraGroupActorComponent.\n *  If you want to define your own group actor behaviour, you should \n *  inherit from ECameraGroupActorComponent and override corresponding methods,\n *  and then use your customized component in place of the default component in blueprint.\n */" },
		{ "IncludePath", "Utils/ECameraGroupActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Utils/ECameraGroupActor.h" },
		{ "ToolTip", "Default group actor, only contains a CameraGroupActorComponent.\nIf you want to define your own group actor behaviour, you should\ninherit from ECameraGroupActorComponent and override corresponding methods,\nand then use your customized component in place of the default component in blueprint." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AECameraGroupActor_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "Category", "ECameraGroupActor" },
		{ "Comment", "/** Default group actor component. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Utils/ECameraGroupActor.h" },
		{ "ToolTip", "Default group actor component." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AECameraGroupActor_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x00140000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AECameraGroupActor, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AECameraGroupActor_Statics::NewProp_SceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AECameraGroupActor_Statics::NewProp_SceneComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AECameraGroupActor_Statics::NewProp_CameraGroupActorComponent_MetaData[] = {
		{ "Category", "ECamera|GroupActor" },
		{ "Comment", "/** Default group actor component. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Utils/ECameraGroupActor.h" },
		{ "ToolTip", "Default group actor component." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AECameraGroupActor_Statics::NewProp_CameraGroupActorComponent = { "CameraGroupActorComponent", nullptr, (EPropertyFlags)0x00140000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AECameraGroupActor, CameraGroupActorComponent), Z_Construct_UClass_UECameraGroupActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AECameraGroupActor_Statics::NewProp_CameraGroupActorComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AECameraGroupActor_Statics::NewProp_CameraGroupActorComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AECameraGroupActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AECameraGroupActor_Statics::NewProp_SceneComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AECameraGroupActor_Statics::NewProp_CameraGroupActorComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AECameraGroupActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AECameraGroupActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AECameraGroupActor_Statics::ClassParams = {
		&AECameraGroupActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AECameraGroupActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AECameraGroupActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AECameraGroupActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AECameraGroupActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AECameraGroupActor()
	{
		if (!Z_Registration_Info_UClass_AECameraGroupActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AECameraGroupActor.OuterSingleton, Z_Construct_UClass_AECameraGroupActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AECameraGroupActor.OuterSingleton;
	}
	template<> EASYCAMERA_API UClass* StaticClass<AECameraGroupActor>()
	{
		return AECameraGroupActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AECameraGroupActor);
	AECameraGroupActor::~AECameraGroupActor() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraGroupActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraGroupActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AECameraGroupActor, AECameraGroupActor::StaticClass, TEXT("AECameraGroupActor"), &Z_Registration_Info_UClass_AECameraGroupActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AECameraGroupActor), 2687110514U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraGroupActor_h_2553106224(TEXT("/Script/EasyCamera"),
		Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraGroupActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraGroupActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
