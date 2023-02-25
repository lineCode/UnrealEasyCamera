// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyCamera/Public/Components/CraneFollow.h"
#include "EasyCamera/Public/Utils/ECameraTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCraneFollow() {}
// Cross Module References
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_ACameraRig_Crane_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	EASYCAMERA_API UClass* Z_Construct_UClass_UCraneFollow();
	EASYCAMERA_API UClass* Z_Construct_UClass_UCraneFollow_NoRegister();
	EASYCAMERA_API UClass* Z_Construct_UClass_UECameraComponentFollow();
	EASYCAMERA_API UEnum* Z_Construct_UEnum_EasyCamera_ECraneFollowType();
	EASYCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FCraneManualParams();
	UPackage* Z_Construct_UPackage__Script_EasyCamera();
// End Cross Module References
	void UCraneFollow::StaticRegisterNativesUCraneFollow()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCraneFollow);
	UClass* Z_Construct_UClass_UCraneFollow_NoRegister()
	{
		return UCraneFollow::StaticClass();
	}
	struct Z_Construct_UClass_UCraneFollow_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Crane_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Crane;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLockOrientationOutwards_MetaData[];
#endif
		static void NewProp_bLockOrientationOutwards_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockOrientationOutwards;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLockArmLength_MetaData[];
#endif
		static void NewProp_bLockArmLength_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockArmLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLockYaw_MetaData[];
#endif
		static void NewProp_bLockYaw_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockYaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLockPitch_MetaData[];
#endif
		static void NewProp_bLockPitch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockPitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManualKeyPoints_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ManualKeyPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResetOnResume_MetaData[];
#endif
		static void NewProp_bResetOnResume_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetOnResume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCraneFollow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UECameraComponentFollow,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyCamera,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCraneFollow_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ECamera" },
		{ "Comment", "/**\n * RailFollow component enforces camera to move along a given crane.\n * You can adjust the crane arm length, crane yaw and crane pitch to control camera movement.\n */" },
		{ "IncludePath", "Components/CraneFollow.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/CraneFollow.h" },
		{ "ToolTip", "RailFollow component enforces camera to move along a given crane.\nYou can adjust the crane arm length, crane yaw and crane pitch to control camera movement." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCraneFollow_Statics::NewProp_Crane_MetaData[] = {
		{ "Category", "CraneFollow" },
		{ "Comment", "/** The crane along which camera moves. */" },
		{ "ModuleRelativePath", "Public/Components/CraneFollow.h" },
		{ "ToolTip", "The crane along which camera moves." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UCraneFollow_Statics::NewProp_Crane = { "Crane", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCraneFollow, Crane), Z_Construct_UClass_ACameraRig_Crane_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCraneFollow_Statics::NewProp_Crane_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCraneFollow_Statics::NewProp_Crane_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCraneFollow_Statics::NewProp_bLockOrientationOutwards_MetaData[] = {
		{ "Category", "CraneFollow" },
		{ "Comment", "/** Determines whether the camera should be oriented outwards in the direction from crane origin to camera position.\n\x09 *  You should not specify AimComponent if you are enabling this.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/CraneFollow.h" },
		{ "ToolTip", "Determines whether the camera should be oriented outwards in the direction from crane origin to camera position.\nYou should not specify AimComponent if you are enabling this." },
	};
#endif
	void Z_Construct_UClass_UCraneFollow_Statics::NewProp_bLockOrientationOutwards_SetBit(void* Obj)
	{
		((UCraneFollow*)Obj)->bLockOrientationOutwards = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCraneFollow_Statics::NewProp_bLockOrientationOutwards = { "bLockOrientationOutwards", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCraneFollow), &Z_Construct_UClass_UCraneFollow_Statics::NewProp_bLockOrientationOutwards_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCraneFollow_Statics::NewProp_bLockOrientationOutwards_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCraneFollow_Statics::NewProp_bLockOrientationOutwards_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCraneFollow_Statics::NewProp_FollowType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCraneFollow_Statics::NewProp_FollowType_MetaData[] = {
		{ "Category", "CraneFollow" },
		{ "Comment", "/** How would you like the camera to move on crane. */" },
		{ "ModuleRelativePath", "Public/Components/CraneFollow.h" },
		{ "ToolTip", "How would you like the camera to move on crane." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCraneFollow_Statics::NewProp_FollowType = { "FollowType", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCraneFollow, FollowType), Z_Construct_UEnum_EasyCamera_ECraneFollowType, METADATA_PARAMS(Z_Construct_UClass_UCraneFollow_Statics::NewProp_FollowType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCraneFollow_Statics::NewProp_FollowType_MetaData)) }; // 1906596626
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCraneFollow_Statics::NewProp_FollowOffset_MetaData[] = {
		{ "Category", "CraneFollow" },
		{ "Comment", "/** Follow offset, in world space. */" },
		{ "EditCondition", "FollowType == ECraneFollowType::FollowTarget" },
		{ "ModuleRelativePath", "Public/Components/CraneFollow.h" },
		{ "ToolTip", "Follow offset, in world space." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCraneFollow_Statics::NewProp_FollowOffset = { "FollowOffset", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCraneFollow, FollowOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UCraneFollow_Statics::NewProp_FollowOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCraneFollow_Statics::NewProp_FollowOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCraneFollow_Statics::NewProp_bLockArmLength_MetaData[] = {
		{ "Category", "CraneFollow" },
		{ "Comment", "/** Whether to lock arm length when FollowType is FollowTarget. You should be careful of the start arm length when enabling this. */" },
		{ "EditCondition", "FollowType == ECraneFollowType::FollowTarget" },
		{ "ModuleRelativePath", "Public/Components/CraneFollow.h" },
		{ "ToolTip", "Whether to lock arm length when FollowType is FollowTarget. You should be careful of the start arm length when enabling this." },
	};
#endif
	void Z_Construct_UClass_UCraneFollow_Statics::NewProp_bLockArmLength_SetBit(void* Obj)
	{
		((UCraneFollow*)Obj)->bLockArmLength = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCraneFollow_Statics::NewProp_bLockArmLength = { "bLockArmLength", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCraneFollow), &Z_Construct_UClass_UCraneFollow_Statics::NewProp_bLockArmLength_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCraneFollow_Statics::NewProp_bLockArmLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCraneFollow_Statics::NewProp_bLockArmLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCraneFollow_Statics::NewProp_bLockYaw_MetaData[] = {
		{ "Category", "CraneFollow" },
		{ "Comment", "/** Whether to lock crane yaw when FollowType is FollowTarget. You should be careful of the start yaw when enabling this. */" },
		{ "EditCondition", "FollowType == ECraneFollowType::FollowTarget" },
		{ "ModuleRelativePath", "Public/Components/CraneFollow.h" },
		{ "ToolTip", "Whether to lock crane yaw when FollowType is FollowTarget. You should be careful of the start yaw when enabling this." },
	};
#endif
	void Z_Construct_UClass_UCraneFollow_Statics::NewProp_bLockYaw_SetBit(void* Obj)
	{
		((UCraneFollow*)Obj)->bLockYaw = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCraneFollow_Statics::NewProp_bLockYaw = { "bLockYaw", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCraneFollow), &Z_Construct_UClass_UCraneFollow_Statics::NewProp_bLockYaw_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCraneFollow_Statics::NewProp_bLockYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCraneFollow_Statics::NewProp_bLockYaw_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCraneFollow_Statics::NewProp_bLockPitch_MetaData[] = {
		{ "Category", "CraneFollow" },
		{ "Comment", "/** Whether to lock crane pitch when FollowType is FollowTarget. You should be careful of the start pitch when enabling this. */" },
		{ "EditCondition", "FollowType == ECraneFollowType::FollowTarget" },
		{ "ModuleRelativePath", "Public/Components/CraneFollow.h" },
		{ "ToolTip", "Whether to lock crane pitch when FollowType is FollowTarget. You should be careful of the start pitch when enabling this." },
	};
#endif
	void Z_Construct_UClass_UCraneFollow_Statics::NewProp_bLockPitch_SetBit(void* Obj)
	{
		((UCraneFollow*)Obj)->bLockPitch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCraneFollow_Statics::NewProp_bLockPitch = { "bLockPitch", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCraneFollow), &Z_Construct_UClass_UCraneFollow_Statics::NewProp_bLockPitch_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCraneFollow_Statics::NewProp_bLockPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCraneFollow_Statics::NewProp_bLockPitch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCraneFollow_Statics::NewProp_StartPosition_MetaData[] = {
		{ "Category", "CraneFollow" },
		{ "Comment", "/** Start position when FollowType is FixedSpeed or FollowTarget. Respectively for arm length, crane yaw and crane pitch, in world space. */" },
		{ "EditCondition", "FollowType == ECraneFollowType::FixedSpeed || FollowType == ECraneFollowType::FollowTarget" },
		{ "ModuleRelativePath", "Public/Components/CraneFollow.h" },
		{ "ToolTip", "Start position when FollowType is FixedSpeed or FollowTarget. Respectively for arm length, crane yaw and crane pitch, in world space." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCraneFollow_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCraneFollow, StartPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UCraneFollow_Statics::NewProp_StartPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCraneFollow_Statics::NewProp_StartPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCraneFollow_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "CraneFollow" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Duration when FollowType is FixedSpeed. Set as 0 for infinite move. Respectively for arm length, crane yaw and crane pitch, in world space. */" },
		{ "EditCondition", "FollowType == ECraneFollowType::FixedSpeed" },
		{ "ModuleRelativePath", "Public/Components/CraneFollow.h" },
		{ "ToolTip", "Duration when FollowType is FixedSpeed. Set as 0 for infinite move. Respectively for arm length, crane yaw and crane pitch, in world space." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCraneFollow_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCraneFollow, Duration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UCraneFollow_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCraneFollow_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCraneFollow_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "CraneFollow" },
		{ "Comment", "/** Speed (per second) when FollowType is FixedSpeed. Respectively for arm length, crane yaw and crane pitch, in world space. */" },
		{ "EditCondition", "FollowType == ECraneFollowType::FixedSpeed" },
		{ "ModuleRelativePath", "Public/Components/CraneFollow.h" },
		{ "ToolTip", "Speed (per second) when FollowType is FixedSpeed. Respectively for arm length, crane yaw and crane pitch, in world space." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCraneFollow_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCraneFollow, Speed), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UCraneFollow_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCraneFollow_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCraneFollow_Statics::NewProp_ManualKeyPoints_MetaData[] = {
		{ "Category", "CraneFollow" },
		{ "Comment", "/** A set of key points on crane when FollowType is Manual.  */" },
		{ "EditCondition", "FollowType == ECraneFollowType::Manual" },
		{ "ModuleRelativePath", "Public/Components/CraneFollow.h" },
		{ "ToolTip", "A set of key points on crane when FollowType is Manual." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCraneFollow_Statics::NewProp_ManualKeyPoints = { "ManualKeyPoints", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCraneFollow, ManualKeyPoints), Z_Construct_UScriptStruct_FCraneManualParams, METADATA_PARAMS(Z_Construct_UClass_UCraneFollow_Statics::NewProp_ManualKeyPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCraneFollow_Statics::NewProp_ManualKeyPoints_MetaData)) }; // 2381028218
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCraneFollow_Statics::NewProp_bResetOnResume_MetaData[] = {
		{ "Category", "CraneFollow" },
		{ "Comment", "/** Whether to restart from scratch when resuming this component. Default is true. */" },
		{ "ModuleRelativePath", "Public/Components/CraneFollow.h" },
		{ "ToolTip", "Whether to restart from scratch when resuming this component. Default is true." },
	};
#endif
	void Z_Construct_UClass_UCraneFollow_Statics::NewProp_bResetOnResume_SetBit(void* Obj)
	{
		((UCraneFollow*)Obj)->bResetOnResume = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCraneFollow_Statics::NewProp_bResetOnResume = { "bResetOnResume", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCraneFollow), &Z_Construct_UClass_UCraneFollow_Statics::NewProp_bResetOnResume_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCraneFollow_Statics::NewProp_bResetOnResume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCraneFollow_Statics::NewProp_bResetOnResume_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCraneFollow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCraneFollow_Statics::NewProp_Crane,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCraneFollow_Statics::NewProp_bLockOrientationOutwards,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCraneFollow_Statics::NewProp_FollowType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCraneFollow_Statics::NewProp_FollowType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCraneFollow_Statics::NewProp_FollowOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCraneFollow_Statics::NewProp_bLockArmLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCraneFollow_Statics::NewProp_bLockYaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCraneFollow_Statics::NewProp_bLockPitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCraneFollow_Statics::NewProp_StartPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCraneFollow_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCraneFollow_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCraneFollow_Statics::NewProp_ManualKeyPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCraneFollow_Statics::NewProp_bResetOnResume,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCraneFollow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCraneFollow>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCraneFollow_Statics::ClassParams = {
		&UCraneFollow::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCraneFollow_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCraneFollow_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCraneFollow_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCraneFollow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCraneFollow()
	{
		if (!Z_Registration_Info_UClass_UCraneFollow.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCraneFollow.OuterSingleton, Z_Construct_UClass_UCraneFollow_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCraneFollow.OuterSingleton;
	}
	template<> EASYCAMERA_API UClass* StaticClass<UCraneFollow>()
	{
		return UCraneFollow::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCraneFollow);
	UCraneFollow::~UCraneFollow() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Components_CraneFollow_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Components_CraneFollow_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCraneFollow, UCraneFollow::StaticClass, TEXT("UCraneFollow"), &Z_Registration_Info_UClass_UCraneFollow, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCraneFollow), 1618329689U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Components_CraneFollow_h_872753978(TEXT("/Script/EasyCamera"),
		Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Components_CraneFollow_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Components_CraneFollow_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
