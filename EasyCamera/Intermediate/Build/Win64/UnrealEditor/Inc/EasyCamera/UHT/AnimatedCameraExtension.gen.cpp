// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyCamera/Public/Extensions/AnimatedCameraExtension.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimatedCameraExtension() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	EASYCAMERA_API UClass* Z_Construct_UClass_UAnimatedCameraExtension();
	EASYCAMERA_API UClass* Z_Construct_UClass_UAnimatedCameraExtension_NoRegister();
	EASYCAMERA_API UClass* Z_Construct_UClass_UECameraExtensionBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EasyCamera();
// End Cross Module References
	void UAnimatedCameraExtension::StaticRegisterNativesUAnimatedCameraExtension()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimatedCameraExtension);
	UClass* Z_Construct_UClass_UAnimatedCameraExtension_NoRegister()
	{
		return UAnimatedCameraExtension::StaticClass();
	}
	struct Z_Construct_UClass_UAnimatedCameraExtension_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimToPlay_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimToPlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RefCoordinateActor_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_RefCoordinateActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RefCoordinate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RefCoordinate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PositionOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimatedCameraExtension_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UECameraExtensionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyCamera,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimatedCameraExtension_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ECamera" },
		{ "Comment", "/**\n * This extension drives camera based on a a curved animation sequence. It will automatically terminates when animation finishes.\n * The animation sequence is only  used to drive cameras, so it should contain and only contain four tracks: position, rotation, scale and FOV.\n * You must ensure the input animation is valid in this regard.\n */" },
		{ "IncludePath", "Extensions/AnimatedCameraExtension.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Extensions/AnimatedCameraExtension.h" },
		{ "ToolTip", "This extension drives camera based on a a curved animation sequence. It will automatically terminates when animation finishes.\nThe animation sequence is only  used to drive cameras, so it should contain and only contain four tracks: position, rotation, scale and FOV.\nYou must ensure the input animation is valid in this regard." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimatedCameraExtension_Statics::NewProp_AnimToPlay_MetaData[] = {
		{ "Category", "AnimatedCameraExtension" },
		{ "Comment", "/** The animation sequence you want to play on camera. */" },
		{ "ModuleRelativePath", "Public/Extensions/AnimatedCameraExtension.h" },
		{ "ToolTip", "The animation sequence you want to play on camera." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimatedCameraExtension_Statics::NewProp_AnimToPlay = { "AnimToPlay", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimatedCameraExtension, AnimToPlay), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimatedCameraExtension_Statics::NewProp_AnimToPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedCameraExtension_Statics::NewProp_AnimToPlay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimatedCameraExtension_Statics::NewProp_RefCoordinateActor_MetaData[] = {
		{ "Category", "AnimatedCameraExtension" },
		{ "Comment", "/** In which actor's local space you want to play the camera animation. */" },
		{ "ModuleRelativePath", "Public/Extensions/AnimatedCameraExtension.h" },
		{ "ToolTip", "In which actor's local space you want to play the camera animation." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UAnimatedCameraExtension_Statics::NewProp_RefCoordinateActor = { "RefCoordinateActor", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimatedCameraExtension, RefCoordinateActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimatedCameraExtension_Statics::NewProp_RefCoordinateActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedCameraExtension_Statics::NewProp_RefCoordinateActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimatedCameraExtension_Statics::NewProp_RefCoordinate_MetaData[] = {
		{ "Category", "AnimatedCameraExtension" },
		{ "Comment", "/** In which reference frame you want to play the camera animation. */" },
		{ "EditCondition", "RefCoordinateActor == nullptr" },
		{ "ModuleRelativePath", "Public/Extensions/AnimatedCameraExtension.h" },
		{ "ToolTip", "In which reference frame you want to play the camera animation." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimatedCameraExtension_Statics::NewProp_RefCoordinate = { "RefCoordinate", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimatedCameraExtension, RefCoordinate), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UAnimatedCameraExtension_Statics::NewProp_RefCoordinate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedCameraExtension_Statics::NewProp_RefCoordinate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimatedCameraExtension_Statics::NewProp_PositionOffset_MetaData[] = {
		{ "Category", "AnimatedCameraExtension" },
		{ "Comment", "/** Position offset, in reference space. */" },
		{ "ModuleRelativePath", "Public/Extensions/AnimatedCameraExtension.h" },
		{ "ToolTip", "Position offset, in reference space." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimatedCameraExtension_Statics::NewProp_PositionOffset = { "PositionOffset", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimatedCameraExtension, PositionOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAnimatedCameraExtension_Statics::NewProp_PositionOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedCameraExtension_Statics::NewProp_PositionOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimatedCameraExtension_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimatedCameraExtension_Statics::NewProp_AnimToPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimatedCameraExtension_Statics::NewProp_RefCoordinateActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimatedCameraExtension_Statics::NewProp_RefCoordinate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimatedCameraExtension_Statics::NewProp_PositionOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimatedCameraExtension_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimatedCameraExtension>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimatedCameraExtension_Statics::ClassParams = {
		&UAnimatedCameraExtension::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimatedCameraExtension_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedCameraExtension_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimatedCameraExtension_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedCameraExtension_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimatedCameraExtension()
	{
		if (!Z_Registration_Info_UClass_UAnimatedCameraExtension.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimatedCameraExtension.OuterSingleton, Z_Construct_UClass_UAnimatedCameraExtension_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimatedCameraExtension.OuterSingleton;
	}
	template<> EASYCAMERA_API UClass* StaticClass<UAnimatedCameraExtension>()
	{
		return UAnimatedCameraExtension::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimatedCameraExtension);
	UAnimatedCameraExtension::~UAnimatedCameraExtension() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Extensions_AnimatedCameraExtension_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Extensions_AnimatedCameraExtension_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimatedCameraExtension, UAnimatedCameraExtension::StaticClass, TEXT("UAnimatedCameraExtension"), &Z_Registration_Info_UClass_UAnimatedCameraExtension, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimatedCameraExtension), 533756552U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Extensions_AnimatedCameraExtension_h_3577701005(TEXT("/Script/EasyCamera"),
		Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Extensions_AnimatedCameraExtension_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Extensions_AnimatedCameraExtension_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
