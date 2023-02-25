// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyCamera/Public/Components/HardLockAim.h"
#include "EasyCamera/Public/Utils/ECameraTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHardLockAim() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	EASYCAMERA_API UClass* Z_Construct_UClass_UECameraComponentAim();
	EASYCAMERA_API UClass* Z_Construct_UClass_UHardLockAim();
	EASYCAMERA_API UClass* Z_Construct_UClass_UHardLockAim_NoRegister();
	EASYCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FDampParams();
	UPackage* Z_Construct_UPackage__Script_EasyCamera();
// End Cross Module References
	void UHardLockAim::StaticRegisterNativesUHardLockAim()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHardLockAim);
	UClass* Z_Construct_UClass_UHardLockAim_NoRegister()
	{
		return UHardLockAim::StaticClass();
	}
	struct Z_Construct_UClass_UHardLockAim_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseQuatDamping_MetaData[];
#endif
		static void NewProp_bUseQuatDamping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseQuatDamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DampParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DampParams;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EulerDamping_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EulerDamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuatDamping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_QuatDamping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHardLockAim_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UECameraComponentAim,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyCamera,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHardLockAim_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ECamera" },
		{ "Comment", "/**\n * HardLockAim uses the rotation of aim target.\n */" },
		{ "IncludePath", "Components/HardLockAim.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/HardLockAim.h" },
		{ "ToolTip", "HardLockAim uses the rotation of aim target." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHardLockAim_Statics::NewProp_RotationOffset_MetaData[] = {
		{ "Category", "HardLockAim" },
		{ "Comment", "/** Rotation offset applied to aim target's rotation. In aim target's local space. In the order of roll, pitch and yaw. */" },
		{ "ModuleRelativePath", "Public/Components/HardLockAim.h" },
		{ "ToolTip", "Rotation offset applied to aim target's rotation. In aim target's local space. In the order of roll, pitch and yaw." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHardLockAim_Statics::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHardLockAim, RotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UHardLockAim_Statics::NewProp_RotationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHardLockAim_Statics::NewProp_RotationOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHardLockAim_Statics::NewProp_bUseQuatDamping_MetaData[] = {
		{ "Category", "HardLockAim" },
		{ "Comment", "/** Whether to use quaternion damping. If not, use Euler damping.\n\x09 *  If pitch can be steep, use this to avoid gimbal lock. \n\x09 *  This is strongly recommended to use.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/HardLockAim.h" },
		{ "ToolTip", "Whether to use quaternion damping. If not, use Euler damping.\nIf pitch can be steep, use this to avoid gimbal lock.\nThis is strongly recommended to use." },
	};
#endif
	void Z_Construct_UClass_UHardLockAim_Statics::NewProp_bUseQuatDamping_SetBit(void* Obj)
	{
		((UHardLockAim*)Obj)->bUseQuatDamping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHardLockAim_Statics::NewProp_bUseQuatDamping = { "bUseQuatDamping", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHardLockAim), &Z_Construct_UClass_UHardLockAim_Statics::NewProp_bUseQuatDamping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHardLockAim_Statics::NewProp_bUseQuatDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHardLockAim_Statics::NewProp_bUseQuatDamping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHardLockAim_Statics::NewProp_DampParams_MetaData[] = {
		{ "Category", "HardLockAim" },
		{ "Comment", "/** Damp parameters you want to use for damping. */" },
		{ "EditCondition", "bUseQuatDamping == false" },
		{ "ModuleRelativePath", "Public/Components/HardLockAim.h" },
		{ "ToolTip", "Damp parameters you want to use for damping." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHardLockAim_Statics::NewProp_DampParams = { "DampParams", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHardLockAim, DampParams), Z_Construct_UScriptStruct_FDampParams, METADATA_PARAMS(Z_Construct_UClass_UHardLockAim_Statics::NewProp_DampParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHardLockAim_Statics::NewProp_DampParams_MetaData)) }; // 4182365953
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHardLockAim_Statics::NewProp_EulerDamping_MetaData[] = {
		{ "Category", "HardLockAim" },
		{ "ClampMax", "20.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Euler damping for camera to track the aim target's rotation. Respectively for roll, pitch and yaw in order. */" },
		{ "EditCondition", "bUseQuatDamping == false" },
		{ "ModuleRelativePath", "Public/Components/HardLockAim.h" },
		{ "ToolTip", "Euler damping for camera to track the aim target's rotation. Respectively for roll, pitch and yaw in order." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHardLockAim_Statics::NewProp_EulerDamping = { "EulerDamping", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHardLockAim, EulerDamping), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UHardLockAim_Statics::NewProp_EulerDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHardLockAim_Statics::NewProp_EulerDamping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHardLockAim_Statics::NewProp_QuatDamping_MetaData[] = {
		{ "Category", "HardLockAim" },
		{ "ClampMax", "20.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Quaternion damping for camera to track the aim target's rotation. Small numbers indicate responsiveness. */" },
		{ "EditCondition", "bUseQuatDamping == true" },
		{ "ModuleRelativePath", "Public/Components/HardLockAim.h" },
		{ "ToolTip", "Quaternion damping for camera to track the aim target's rotation. Small numbers indicate responsiveness." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHardLockAim_Statics::NewProp_QuatDamping = { "QuatDamping", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHardLockAim, QuatDamping), METADATA_PARAMS(Z_Construct_UClass_UHardLockAim_Statics::NewProp_QuatDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHardLockAim_Statics::NewProp_QuatDamping_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHardLockAim_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHardLockAim_Statics::NewProp_RotationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHardLockAim_Statics::NewProp_bUseQuatDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHardLockAim_Statics::NewProp_DampParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHardLockAim_Statics::NewProp_EulerDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHardLockAim_Statics::NewProp_QuatDamping,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHardLockAim_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHardLockAim>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHardLockAim_Statics::ClassParams = {
		&UHardLockAim::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHardLockAim_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHardLockAim_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHardLockAim_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHardLockAim_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHardLockAim()
	{
		if (!Z_Registration_Info_UClass_UHardLockAim.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHardLockAim.OuterSingleton, Z_Construct_UClass_UHardLockAim_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHardLockAim.OuterSingleton;
	}
	template<> EASYCAMERA_API UClass* StaticClass<UHardLockAim>()
	{
		return UHardLockAim::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHardLockAim);
	UHardLockAim::~UHardLockAim() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Components_HardLockAim_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Components_HardLockAim_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHardLockAim, UHardLockAim::StaticClass, TEXT("UHardLockAim"), &Z_Registration_Info_UClass_UHardLockAim, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHardLockAim), 3968198493U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Components_HardLockAim_h_1042655870(TEXT("/Script/EasyCamera"),
		Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Components_HardLockAim_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Components_HardLockAim_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
