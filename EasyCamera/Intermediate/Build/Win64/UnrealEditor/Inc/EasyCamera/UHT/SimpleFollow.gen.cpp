// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyCamera/Public/Components/SimpleFollow.h"
#include "EasyCamera/Public/Utils/ECameraTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleFollow() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	EASYCAMERA_API UClass* Z_Construct_UClass_UECameraComponentFollow();
	EASYCAMERA_API UClass* Z_Construct_UClass_USimpleFollow();
	EASYCAMERA_API UClass* Z_Construct_UClass_USimpleFollow_NoRegister();
	EASYCAMERA_API UEnum* Z_Construct_UEnum_EasyCamera_ESimpleFollowType();
	EASYCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FDampParams();
	UPackage* Z_Construct_UPackage__Script_EasyCamera();
// End Cross Module References
	void USimpleFollow::StaticRegisterNativesUSimpleFollow()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleFollow);
	UClass* Z_Construct_UClass_USimpleFollow_NoRegister()
	{
		return USimpleFollow::StaticClass();
	}
	struct Z_Construct_UClass_USimpleFollow_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SocketName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FollowType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FollowType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FollowOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisMasks_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AxisMasks;
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
	UObject* (*const Z_Construct_UClass_USimpleFollow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UECameraComponentFollow,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyCamera,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleFollow_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ECamera" },
		{ "Comment", "/**\n * SimpleFollow keeps a fixed offset of the camera relative to follow target.\n */" },
		{ "IncludePath", "Components/SimpleFollow.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/SimpleFollow.h" },
		{ "ToolTip", "SimpleFollow keeps a fixed offset of the camera relative to follow target." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleFollow_Statics::NewProp_SocketName_MetaData[] = {
		{ "Category", "SimpleFollow" },
		{ "Comment", "/** Follow target's socket you want the camera to follow. \n\x09 *  If this field is empty, the camera will still track the follow target's root transform. \n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/SimpleFollow.h" },
		{ "ToolTip", "Follow target's socket you want the camera to follow.\nIf this field is empty, the camera will still track the follow target's root transform." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USimpleFollow_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USimpleFollow, SocketName), METADATA_PARAMS(Z_Construct_UClass_USimpleFollow_Statics::NewProp_SocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleFollow_Statics::NewProp_SocketName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USimpleFollow_Statics::NewProp_FollowType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleFollow_Statics::NewProp_FollowType_MetaData[] = {
		{ "Category", "SimpleFollow" },
		{ "Comment", "/** How do you want to follow the target. */" },
		{ "ModuleRelativePath", "Public/Components/SimpleFollow.h" },
		{ "ToolTip", "How do you want to follow the target." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USimpleFollow_Statics::NewProp_FollowType = { "FollowType", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USimpleFollow, FollowType), Z_Construct_UEnum_EasyCamera_ESimpleFollowType, METADATA_PARAMS(Z_Construct_UClass_USimpleFollow_Statics::NewProp_FollowType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleFollow_Statics::NewProp_FollowType_MetaData)) }; // 2865816498
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleFollow_Statics::NewProp_FollowOffset_MetaData[] = {
		{ "Category", "SimpleFollow" },
		{ "Comment", "/** Camera offset relative to the follow target. */" },
		{ "ModuleRelativePath", "Public/Components/SimpleFollow.h" },
		{ "ToolTip", "Camera offset relative to the follow target." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USimpleFollow_Statics::NewProp_FollowOffset = { "FollowOffset", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USimpleFollow, FollowOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USimpleFollow_Statics::NewProp_FollowOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleFollow_Statics::NewProp_FollowOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleFollow_Statics::NewProp_AxisMasks_MetaData[] = {
		{ "Category", "SimpleFollow" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Masks determining which axis is ignored to track the target actor. In world space.\n\x09 *  If mask is 0, this axis is ignored. If mask is non-zero, this axis will be tracked.  \n\x09 *\x09If you set any element of this property as zero, you should:\n\x09 *  (1) Keep FollowType as WorldSpace,\n\x09 *  (2) Pass in the sum of the follow target's location and the FollowOffset to SpawnLocation in CallCamera as an initializer.\n\x09 */" },
		{ "EditCondition", "FollowType == ESimpleFollowType::WorldSpace" },
		{ "ModuleRelativePath", "Public/Components/SimpleFollow.h" },
		{ "ToolTip", "Masks determining which axis is ignored to track the target actor. In world space.\nIf mask is 0, this axis is ignored. If mask is non-zero, this axis will be tracked.\n    If you set any element of this property as zero, you should:\n(1) Keep FollowType as WorldSpace,\n(2) Pass in the sum of the follow target's location and the FollowOffset to SpawnLocation in CallCamera as an initializer." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USimpleFollow_Statics::NewProp_AxisMasks = { "AxisMasks", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USimpleFollow, AxisMasks), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USimpleFollow_Statics::NewProp_AxisMasks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleFollow_Statics::NewProp_AxisMasks_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleFollow_Statics::NewProp_DampParams_MetaData[] = {
		{ "Category", "SimpleFollow" },
		{ "Comment", "/** Damp parameters you want to use for damping. */" },
		{ "ModuleRelativePath", "Public/Components/SimpleFollow.h" },
		{ "ToolTip", "Damp parameters you want to use for damping." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USimpleFollow_Statics::NewProp_DampParams = { "DampParams", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USimpleFollow, DampParams), Z_Construct_UScriptStruct_FDampParams, METADATA_PARAMS(Z_Construct_UClass_USimpleFollow_Statics::NewProp_DampParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleFollow_Statics::NewProp_DampParams_MetaData)) }; // 4182365953
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleFollow_Statics::NewProp_FollowDamping_MetaData[] = {
		{ "Category", "SimpleFollow" },
		{ "ClampMax", "5.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Damping for camera to track the follow target. */" },
		{ "ModuleRelativePath", "Public/Components/SimpleFollow.h" },
		{ "ToolTip", "Damping for camera to track the follow target." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USimpleFollow_Statics::NewProp_FollowDamping = { "FollowDamping", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USimpleFollow, FollowDamping), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USimpleFollow_Statics::NewProp_FollowDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleFollow_Statics::NewProp_FollowDamping_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimpleFollow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleFollow_Statics::NewProp_SocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleFollow_Statics::NewProp_FollowType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleFollow_Statics::NewProp_FollowType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleFollow_Statics::NewProp_FollowOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleFollow_Statics::NewProp_AxisMasks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleFollow_Statics::NewProp_DampParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleFollow_Statics::NewProp_FollowDamping,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleFollow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleFollow>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleFollow_Statics::ClassParams = {
		&USimpleFollow::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USimpleFollow_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USimpleFollow_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USimpleFollow_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleFollow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USimpleFollow()
	{
		if (!Z_Registration_Info_UClass_USimpleFollow.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleFollow.OuterSingleton, Z_Construct_UClass_USimpleFollow_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleFollow.OuterSingleton;
	}
	template<> EASYCAMERA_API UClass* StaticClass<USimpleFollow>()
	{
		return USimpleFollow::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleFollow);
	USimpleFollow::~USimpleFollow() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Components_SimpleFollow_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Components_SimpleFollow_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USimpleFollow, USimpleFollow::StaticClass, TEXT("USimpleFollow"), &Z_Registration_Info_UClass_USimpleFollow, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleFollow), 4014311744U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Components_SimpleFollow_h_1010716749(TEXT("/Script/EasyCamera"),
		Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Components_SimpleFollow_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Components_SimpleFollow_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
