// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyCamera/Public/Utils/ECameraHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECameraHUD() {}
// Cross Module References
	EASYCAMERA_API UClass* Z_Construct_UClass_AECameraHUD();
	EASYCAMERA_API UClass* Z_Construct_UClass_AECameraHUD_NoRegister();
	EASYCAMERA_API UClass* Z_Construct_UClass_AECameraManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_EasyCamera();
// End Cross Module References
	void AECameraHUD::StaticRegisterNativesAECameraHUD()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AECameraHUD);
	UClass* Z_Construct_UClass_AECameraHUD_NoRegister()
	{
		return AECameraHUD::StaticClass();
	}
	struct Z_Construct_UClass_AECameraHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowCameraDebug_MetaData[];
#endif
		static void NewProp_bShowCameraDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowCameraDebug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ECameraManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ECameraManager;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AECameraHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyCamera,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AECameraHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *  This HUD class is used to show camera debug info on screen.\n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "Utils/ECameraHUD.h" },
		{ "ModuleRelativePath", "Public/Utils/ECameraHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "This HUD class is used to show camera debug info on screen." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AECameraHUD_Statics::NewProp_bShowCameraDebug_MetaData[] = {
		{ "Category", "ECameraHUD" },
		{ "ModuleRelativePath", "Public/Utils/ECameraHUD.h" },
	};
#endif
	void Z_Construct_UClass_AECameraHUD_Statics::NewProp_bShowCameraDebug_SetBit(void* Obj)
	{
		((AECameraHUD*)Obj)->bShowCameraDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AECameraHUD_Statics::NewProp_bShowCameraDebug = { "bShowCameraDebug", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AECameraHUD), &Z_Construct_UClass_AECameraHUD_Statics::NewProp_bShowCameraDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_AECameraHUD_Statics::NewProp_bShowCameraDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AECameraHUD_Statics::NewProp_bShowCameraDebug_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AECameraHUD_Statics::NewProp_ECameraManager_MetaData[] = {
		{ "Category", "ECameraHUD" },
		{ "ModuleRelativePath", "Public/Utils/ECameraHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AECameraHUD_Statics::NewProp_ECameraManager = { "ECameraManager", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AECameraHUD, ECameraManager), Z_Construct_UClass_AECameraManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AECameraHUD_Statics::NewProp_ECameraManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AECameraHUD_Statics::NewProp_ECameraManager_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AECameraHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AECameraHUD_Statics::NewProp_bShowCameraDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AECameraHUD_Statics::NewProp_ECameraManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AECameraHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AECameraHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AECameraHUD_Statics::ClassParams = {
		&AECameraHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AECameraHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AECameraHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AECameraHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AECameraHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AECameraHUD()
	{
		if (!Z_Registration_Info_UClass_AECameraHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AECameraHUD.OuterSingleton, Z_Construct_UClass_AECameraHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AECameraHUD.OuterSingleton;
	}
	template<> EASYCAMERA_API UClass* StaticClass<AECameraHUD>()
	{
		return AECameraHUD::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AECameraHUD);
	AECameraHUD::~AECameraHUD() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AECameraHUD, AECameraHUD::StaticClass, TEXT("AECameraHUD"), &Z_Registration_Info_UClass_AECameraHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AECameraHUD), 180009134U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraHUD_h_891236292(TEXT("/Script/EasyCamera"),
		Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
