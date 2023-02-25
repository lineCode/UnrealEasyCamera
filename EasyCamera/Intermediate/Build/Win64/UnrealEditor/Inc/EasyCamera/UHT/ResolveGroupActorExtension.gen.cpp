// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyCamera/Public/Extensions/ResolveGroupActorExtension.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResolveGroupActorExtension() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2f();
	EASYCAMERA_API UClass* Z_Construct_UClass_UECameraExtensionBase();
	EASYCAMERA_API UClass* Z_Construct_UClass_UResolveGroupActorExtension();
	EASYCAMERA_API UClass* Z_Construct_UClass_UResolveGroupActorExtension_NoRegister();
	EASYCAMERA_API UEnum* Z_Construct_UEnum_EasyCamera_EResolveGroupActorMethod();
	UPackage* Z_Construct_UPackage__Script_EasyCamera();
// End Cross Module References
	void UResolveGroupActorExtension::StaticRegisterNativesUResolveGroupActorExtension()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UResolveGroupActorExtension);
	UClass* Z_Construct_UClass_UResolveGroupActorExtension_NoRegister()
	{
		return UResolveGroupActorExtension::StaticClass();
	}
	struct Z_Construct_UClass_UResolveGroupActorExtension_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ResolveMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResolveMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ResolveMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FOVRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FOVRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FOVDampTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FOVDampTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DistanceRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceDampTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceDampTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UResolveGroupActorExtension_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UECameraExtensionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyCamera,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResolveGroupActorExtension_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This extension will adjust camera FOV or (and) distance to encapsulate a bounding box formed by\n * the group actor, if any in follow component or aim component. This bounding box is the union of\n * several sub bounding boxes defined by the widths and heights of target actors composing the group actor.\n * You must be careful of the Stage property of this extension, as this property may vary in terms of \n * the stage at which the group actor is applied. In general case, you should use PostAim.\n */" },
		{ "IncludePath", "Extensions/ResolveGroupActorExtension.h" },
		{ "ModuleRelativePath", "Public/Extensions/ResolveGroupActorExtension.h" },
		{ "ToolTip", "This extension will adjust camera FOV or (and) distance to encapsulate a bounding box formed by\nthe group actor, if any in follow component or aim component. This bounding box is the union of\nseveral sub bounding boxes defined by the widths and heights of target actors composing the group actor.\nYou must be careful of the Stage property of this extension, as this property may vary in terms of\nthe stage at which the group actor is applied. In general case, you should use PostAim." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UResolveGroupActorExtension_Statics::NewProp_ResolveMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResolveGroupActorExtension_Statics::NewProp_ResolveMethod_MetaData[] = {
		{ "Category", "ResolveGroupActorExtension" },
		{ "Comment", "/** The method you want to use to resolve group actor in screen space. */" },
		{ "ModuleRelativePath", "Public/Extensions/ResolveGroupActorExtension.h" },
		{ "ToolTip", "The method you want to use to resolve group actor in screen space." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UResolveGroupActorExtension_Statics::NewProp_ResolveMethod = { "ResolveMethod", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UResolveGroupActorExtension, ResolveMethod), Z_Construct_UEnum_EasyCamera_EResolveGroupActorMethod, METADATA_PARAMS(Z_Construct_UClass_UResolveGroupActorExtension_Statics::NewProp_ResolveMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UResolveGroupActorExtension_Statics::NewProp_ResolveMethod_MetaData)) }; // 2252597265
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResolveGroupActorExtension_Statics::NewProp_FOVRange_MetaData[] = {
		{ "Category", "ResolveGroupActorExtension" },
		{ "Comment", "/** The minimum and maximum FOV. Minimum should generally be the default FOV, in most cases it is 90. */" },
		{ "EditCondition", "ResolveMethod != EResolveGroupActorMethod::DistanceOnly" },
		{ "ModuleRelativePath", "Public/Extensions/ResolveGroupActorExtension.h" },
		{ "ToolTip", "The minimum and maximum FOV. Minimum should generally be the default FOV, in most cases it is 90." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UResolveGroupActorExtension_Statics::NewProp_FOVRange = { "FOVRange", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UResolveGroupActorExtension, FOVRange), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(Z_Construct_UClass_UResolveGroupActorExtension_Statics::NewProp_FOVRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UResolveGroupActorExtension_Statics::NewProp_FOVRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResolveGroupActorExtension_Statics::NewProp_FOVDampTime_MetaData[] = {
		{ "Category", "ResolveGroupActorExtension" },
		{ "Comment", "/** Time used to damp FOV. */" },
		{ "EditCondition", "ResolveMethod != EResolveGroupActorMethod::DistanceOnly" },
		{ "ModuleRelativePath", "Public/Extensions/ResolveGroupActorExtension.h" },
		{ "ToolTip", "Time used to damp FOV." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UResolveGroupActorExtension_Statics::NewProp_FOVDampTime = { "FOVDampTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UResolveGroupActorExtension, FOVDampTime), METADATA_PARAMS(Z_Construct_UClass_UResolveGroupActorExtension_Statics::NewProp_FOVDampTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UResolveGroupActorExtension_Statics::NewProp_FOVDampTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResolveGroupActorExtension_Statics::NewProp_DistanceRange_MetaData[] = {
		{ "Category", "ResolveGroupActorExtension" },
		{ "Comment", "/** The minimum and maximum displaceable camera distance. Distance is the Z-axis distance in camera's local space. */" },
		{ "EditCondition", "ResolveMethod != EResolveGroupActorMethod::ZoomOnly" },
		{ "ModuleRelativePath", "Public/Extensions/ResolveGroupActorExtension.h" },
		{ "ToolTip", "The minimum and maximum displaceable camera distance. Distance is the Z-axis distance in camera's local space." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UResolveGroupActorExtension_Statics::NewProp_DistanceRange = { "DistanceRange", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UResolveGroupActorExtension, DistanceRange), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(Z_Construct_UClass_UResolveGroupActorExtension_Statics::NewProp_DistanceRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UResolveGroupActorExtension_Statics::NewProp_DistanceRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResolveGroupActorExtension_Statics::NewProp_DistanceDampTime_MetaData[] = {
		{ "Category", "ResolveGroupActorExtension" },
		{ "Comment", "/** Time used to damp distance. */" },
		{ "EditCondition", "ResolveMethod != EResolveGroupActorMethod::ZoomOnly" },
		{ "ModuleRelativePath", "Public/Extensions/ResolveGroupActorExtension.h" },
		{ "ToolTip", "Time used to damp distance." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UResolveGroupActorExtension_Statics::NewProp_DistanceDampTime = { "DistanceDampTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UResolveGroupActorExtension, DistanceDampTime), METADATA_PARAMS(Z_Construct_UClass_UResolveGroupActorExtension_Statics::NewProp_DistanceDampTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UResolveGroupActorExtension_Statics::NewProp_DistanceDampTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResolveGroupActorExtension_Statics::NewProp_Tolerance_MetaData[] = {
		{ "Category", "ResolveGroupActorExtension" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Which percent of the overall bounding box will be tolerated. \n\x09 *  0 means totally conforming to the bounding box.\n\x09 *  1 means the bounding box will be fully ignored, in which case FOV and distance will never be adjusted.\n\x09 *  0.5 means the bounding box will shrink by 50% at its size.\n\x09 *  Increasing this value may make the target actors move beyond screen.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Extensions/ResolveGroupActorExtension.h" },
		{ "ToolTip", "Which percent of the overall bounding box will be tolerated.\n0 means totally conforming to the bounding box.\n1 means the bounding box will be fully ignored, in which case FOV and distance will never be adjusted.\n0.5 means the bounding box will shrink by 50% at its size.\nIncreasing this value may make the target actors move beyond screen." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UResolveGroupActorExtension_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UResolveGroupActorExtension, Tolerance), METADATA_PARAMS(Z_Construct_UClass_UResolveGroupActorExtension_Statics::NewProp_Tolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UResolveGroupActorExtension_Statics::NewProp_Tolerance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UResolveGroupActorExtension_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResolveGroupActorExtension_Statics::NewProp_ResolveMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResolveGroupActorExtension_Statics::NewProp_ResolveMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResolveGroupActorExtension_Statics::NewProp_FOVRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResolveGroupActorExtension_Statics::NewProp_FOVDampTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResolveGroupActorExtension_Statics::NewProp_DistanceRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResolveGroupActorExtension_Statics::NewProp_DistanceDampTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResolveGroupActorExtension_Statics::NewProp_Tolerance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UResolveGroupActorExtension_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UResolveGroupActorExtension>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UResolveGroupActorExtension_Statics::ClassParams = {
		&UResolveGroupActorExtension::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UResolveGroupActorExtension_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UResolveGroupActorExtension_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UResolveGroupActorExtension_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UResolveGroupActorExtension_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UResolveGroupActorExtension()
	{
		if (!Z_Registration_Info_UClass_UResolveGroupActorExtension.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UResolveGroupActorExtension.OuterSingleton, Z_Construct_UClass_UResolveGroupActorExtension_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UResolveGroupActorExtension.OuterSingleton;
	}
	template<> EASYCAMERA_API UClass* StaticClass<UResolveGroupActorExtension>()
	{
		return UResolveGroupActorExtension::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UResolveGroupActorExtension);
	UResolveGroupActorExtension::~UResolveGroupActorExtension() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Extensions_ResolveGroupActorExtension_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Extensions_ResolveGroupActorExtension_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UResolveGroupActorExtension, UResolveGroupActorExtension::StaticClass, TEXT("UResolveGroupActorExtension"), &Z_Registration_Info_UClass_UResolveGroupActorExtension, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UResolveGroupActorExtension), 580051007U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Extensions_ResolveGroupActorExtension_h_1064726223(TEXT("/Script/EasyCamera"),
		Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Extensions_ResolveGroupActorExtension_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Extensions_ResolveGroupActorExtension_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
