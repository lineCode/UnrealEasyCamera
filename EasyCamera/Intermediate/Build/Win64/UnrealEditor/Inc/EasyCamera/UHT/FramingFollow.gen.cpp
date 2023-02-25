// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyCamera/Public/Components/FramingFollow.h"
#include "EasyCamera/Public/Utils/ECameraTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFramingFollow() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2f();
	EASYCAMERA_API UClass* Z_Construct_UClass_UECameraComponentFollow();
	EASYCAMERA_API UClass* Z_Construct_UClass_UFramingFollow();
	EASYCAMERA_API UClass* Z_Construct_UClass_UFramingFollow_NoRegister();
	EASYCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FDampParams();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EasyCamera();
// End Cross Module References
	void UFramingFollow::StaticRegisterNativesUFramingFollow()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFramingFollow);
	UClass* Z_Construct_UClass_UFramingFollow_NoRegister()
	{
		return UFramingFollow::StaticClass();
	}
	struct Z_Construct_UClass_UFramingFollow_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchDistanceCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PitchDistanceCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FollowOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DampParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DampParams;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowDamping_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FollowDamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdaptiveScreenOffsetDistanceX_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AdaptiveScreenOffsetDistanceX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdaptiveScreenOffsetDistanceY_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AdaptiveScreenOffsetDistanceY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenOffsetWidth_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenOffsetWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenOffsetHeight_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenOffsetHeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFramingFollow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UECameraComponentFollow,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyCamera,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFramingFollow_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ECamera" },
		{ "Comment", "/**\n * FramingFollow keeps a fixed position of the follow target on screen space.\n */" },
		{ "IncludePath", "Components/FramingFollow.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/FramingFollow.h" },
		{ "ToolTip", "FramingFollow keeps a fixed position of the follow target on screen space." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFramingFollow_Statics::NewProp_CameraDistance_MetaData[] = {
		{ "Category", "FramingFollow" },
		{ "Comment", "/** Camera distance to the *real* follow target after applying FollowOffset. */" },
		{ "ModuleRelativePath", "Public/Components/FramingFollow.h" },
		{ "ToolTip", "Camera distance to the *real* follow target after applying FollowOffset." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFramingFollow_Statics::NewProp_CameraDistance = { "CameraDistance", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFramingFollow, CameraDistance), METADATA_PARAMS(Z_Construct_UClass_UFramingFollow_Statics::NewProp_CameraDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFramingFollow_Statics::NewProp_CameraDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFramingFollow_Statics::NewProp_PitchDistanceCurve_MetaData[] = {
		{ "Category", "FramingFollow" },
		{ "Comment", "/** A curve used to adjust camera distance according to camera pitch. The x-axis range should be within [-90, 90]. \n\x09 *  When camera looks down, pitch is negative; when camera looks up, pitch is positive.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/FramingFollow.h" },
		{ "ToolTip", "A curve used to adjust camera distance according to camera pitch. The x-axis range should be within [-90, 90].\nWhen camera looks down, pitch is negative; when camera looks up, pitch is positive." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFramingFollow_Statics::NewProp_PitchDistanceCurve = { "PitchDistanceCurve", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFramingFollow, PitchDistanceCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFramingFollow_Statics::NewProp_PitchDistanceCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFramingFollow_Statics::NewProp_PitchDistanceCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFramingFollow_Statics::NewProp_FollowOffset_MetaData[] = {
		{ "Category", "FramingFollow" },
		{ "Comment", "/** Follow target's local space offset applied to the follow target. */" },
		{ "ModuleRelativePath", "Public/Components/FramingFollow.h" },
		{ "ToolTip", "Follow target's local space offset applied to the follow target." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFramingFollow_Statics::NewProp_FollowOffset = { "FollowOffset", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFramingFollow, FollowOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFramingFollow_Statics::NewProp_FollowOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFramingFollow_Statics::NewProp_FollowOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFramingFollow_Statics::NewProp_DampParams_MetaData[] = {
		{ "Category", "FramingFollow" },
		{ "Comment", "/** Damp parameters you want to use for damping. */" },
		{ "ModuleRelativePath", "Public/Components/FramingFollow.h" },
		{ "ToolTip", "Damp parameters you want to use for damping." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFramingFollow_Statics::NewProp_DampParams = { "DampParams", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFramingFollow, DampParams), Z_Construct_UScriptStruct_FDampParams, METADATA_PARAMS(Z_Construct_UClass_UFramingFollow_Statics::NewProp_DampParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFramingFollow_Statics::NewProp_DampParams_MetaData)) }; // 4182365953
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFramingFollow_Statics::NewProp_FollowDamping_MetaData[] = {
		{ "Category", "FramingFollow" },
		{ "ClampMax", "5.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Damping for camera to track the follow target. */" },
		{ "ModuleRelativePath", "Public/Components/FramingFollow.h" },
		{ "ToolTip", "Damping for camera to track the follow target." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFramingFollow_Statics::NewProp_FollowDamping = { "FollowDamping", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFramingFollow, FollowDamping), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFramingFollow_Statics::NewProp_FollowDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFramingFollow_Statics::NewProp_FollowDamping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFramingFollow_Statics::NewProp_ScreenOffset_MetaData[] = {
		{ "Category", "FramingFollow" },
		{ "ClampMax", "0.5" },
		{ "ClampMin", "-0.5" },
		{ "Comment", "/** Screen space offset applied to the *real* follow target after applying FollowOffset. */" },
		{ "ModuleRelativePath", "Public/Components/FramingFollow.h" },
		{ "ToolTip", "Screen space offset applied to the *real* follow target after applying FollowOffset." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFramingFollow_Statics::NewProp_ScreenOffset = { "ScreenOffset", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFramingFollow, ScreenOffset), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(Z_Construct_UClass_UFramingFollow_Statics::NewProp_ScreenOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFramingFollow_Statics::NewProp_ScreenOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFramingFollow_Statics::NewProp_AdaptiveScreenOffsetDistanceX_MetaData[] = {
		{ "Category", "FramingFollow" },
		{ "Comment", "/** Start and end distance in which adaptive screen offset (X axis) is enable. */" },
		{ "ModuleRelativePath", "Public/Components/FramingFollow.h" },
		{ "ToolTip", "Start and end distance in which adaptive screen offset (X axis) is enable." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFramingFollow_Statics::NewProp_AdaptiveScreenOffsetDistanceX = { "AdaptiveScreenOffsetDistanceX", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFramingFollow, AdaptiveScreenOffsetDistanceX), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(Z_Construct_UClass_UFramingFollow_Statics::NewProp_AdaptiveScreenOffsetDistanceX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFramingFollow_Statics::NewProp_AdaptiveScreenOffsetDistanceX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFramingFollow_Statics::NewProp_AdaptiveScreenOffsetDistanceY_MetaData[] = {
		{ "Category", "FramingFollow" },
		{ "Comment", "/** Start and end distance in which adaptive screen offset (Y axis) is enable. */" },
		{ "ModuleRelativePath", "Public/Components/FramingFollow.h" },
		{ "ToolTip", "Start and end distance in which adaptive screen offset (Y axis) is enable." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFramingFollow_Statics::NewProp_AdaptiveScreenOffsetDistanceY = { "AdaptiveScreenOffsetDistanceY", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFramingFollow, AdaptiveScreenOffsetDistanceY), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(Z_Construct_UClass_UFramingFollow_Statics::NewProp_AdaptiveScreenOffsetDistanceY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFramingFollow_Statics::NewProp_AdaptiveScreenOffsetDistanceY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFramingFollow_Statics::NewProp_ScreenOffsetWidth_MetaData[] = {
		{ "Category", "FramingFollow" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "-1.0" },
		{ "Comment", "/** Width of the screen offset. Pivoted at the X axis position. */" },
		{ "ModuleRelativePath", "Public/Components/FramingFollow.h" },
		{ "ToolTip", "Width of the screen offset. Pivoted at the X axis position." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFramingFollow_Statics::NewProp_ScreenOffsetWidth = { "ScreenOffsetWidth", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFramingFollow, ScreenOffsetWidth), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(Z_Construct_UClass_UFramingFollow_Statics::NewProp_ScreenOffsetWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFramingFollow_Statics::NewProp_ScreenOffsetWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFramingFollow_Statics::NewProp_ScreenOffsetHeight_MetaData[] = {
		{ "Category", "FramingFollow" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "-1.0" },
		{ "Comment", "/** Height of the screen offset. Pivoted at the Y axis position. */" },
		{ "ModuleRelativePath", "Public/Components/FramingFollow.h" },
		{ "ToolTip", "Height of the screen offset. Pivoted at the Y axis position." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFramingFollow_Statics::NewProp_ScreenOffsetHeight = { "ScreenOffsetHeight", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFramingFollow, ScreenOffsetHeight), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(Z_Construct_UClass_UFramingFollow_Statics::NewProp_ScreenOffsetHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFramingFollow_Statics::NewProp_ScreenOffsetHeight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFramingFollow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFramingFollow_Statics::NewProp_CameraDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFramingFollow_Statics::NewProp_PitchDistanceCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFramingFollow_Statics::NewProp_FollowOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFramingFollow_Statics::NewProp_DampParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFramingFollow_Statics::NewProp_FollowDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFramingFollow_Statics::NewProp_ScreenOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFramingFollow_Statics::NewProp_AdaptiveScreenOffsetDistanceX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFramingFollow_Statics::NewProp_AdaptiveScreenOffsetDistanceY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFramingFollow_Statics::NewProp_ScreenOffsetWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFramingFollow_Statics::NewProp_ScreenOffsetHeight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFramingFollow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFramingFollow>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFramingFollow_Statics::ClassParams = {
		&UFramingFollow::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFramingFollow_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFramingFollow_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFramingFollow_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFramingFollow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFramingFollow()
	{
		if (!Z_Registration_Info_UClass_UFramingFollow.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFramingFollow.OuterSingleton, Z_Construct_UClass_UFramingFollow_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFramingFollow.OuterSingleton;
	}
	template<> EASYCAMERA_API UClass* StaticClass<UFramingFollow>()
	{
		return UFramingFollow::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFramingFollow);
	UFramingFollow::~UFramingFollow() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Components_FramingFollow_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Components_FramingFollow_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFramingFollow, UFramingFollow::StaticClass, TEXT("UFramingFollow"), &Z_Registration_Info_UClass_UFramingFollow, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFramingFollow), 2375291080U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Components_FramingFollow_h_2320782027(TEXT("/Script/EasyCamera"),
		Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Components_FramingFollow_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Components_FramingFollow_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
