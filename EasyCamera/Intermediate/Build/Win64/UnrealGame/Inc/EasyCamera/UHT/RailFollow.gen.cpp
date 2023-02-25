// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyCamera/Public/Components/RailFollow.h"
#include "EasyCamera/Public/Utils/ECameraTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRailFollow() {}
// Cross Module References
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_ACameraRig_Rail_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	EASYCAMERA_API UClass* Z_Construct_UClass_UECameraComponentFollow();
	EASYCAMERA_API UClass* Z_Construct_UClass_URailFollow();
	EASYCAMERA_API UClass* Z_Construct_UClass_URailFollow_NoRegister();
	EASYCAMERA_API UEnum* Z_Construct_UEnum_EasyCamera_ERailFollowType();
	EASYCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FRailManualParams();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEasingFunc();
	UPackage* Z_Construct_UPackage__Script_EasyCamera();
// End Cross Module References
	DEFINE_FUNCTION(URailFollow::execSetPositionOnRailWithDamping)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Position);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BlendTime);
		P_GET_PROPERTY(FByteProperty,Z_Param_BlendFunc);
		P_GET_UBOOL(Z_Param_bIsForward);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPositionOnRailWithDamping(Z_Param_WorldContextObject,Z_Param_Position,Z_Param_BlendTime,EEasingFunc::Type(Z_Param_BlendFunc),Z_Param_bIsForward);
		P_NATIVE_END;
	}
	void URailFollow::StaticRegisterNativesURailFollow()
	{
		UClass* Class = URailFollow::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetPositionOnRailWithDamping", &URailFollow::execSetPositionOnRailWithDamping },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URailFollow_SetPositionOnRailWithDamping_Statics
	{
		struct RailFollow_eventSetPositionOnRailWithDamping_Parms
		{
			const UObject* WorldContextObject;
			float Position;
			float BlendTime;
			TEnumAsByte<EEasingFunc::Type> BlendFunc;
			bool bIsForward;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Position;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlendFunc;
		static void NewProp_bIsForward_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsForward;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URailFollow_SetPositionOnRailWithDamping_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URailFollow_SetPositionOnRailWithDamping_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RailFollow_eventSetPositionOnRailWithDamping_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URailFollow_SetPositionOnRailWithDamping_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URailFollow_SetPositionOnRailWithDamping_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URailFollow_SetPositionOnRailWithDamping_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RailFollow_eventSetPositionOnRailWithDamping_Parms, Position), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URailFollow_SetPositionOnRailWithDamping_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RailFollow_eventSetPositionOnRailWithDamping_Parms, BlendTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URailFollow_SetPositionOnRailWithDamping_Statics::NewProp_BlendFunc = { "BlendFunc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RailFollow_eventSetPositionOnRailWithDamping_Parms, BlendFunc), Z_Construct_UEnum_Engine_EEasingFunc, METADATA_PARAMS(nullptr, 0) }; // 36709713
	void Z_Construct_UFunction_URailFollow_SetPositionOnRailWithDamping_Statics::NewProp_bIsForward_SetBit(void* Obj)
	{
		((RailFollow_eventSetPositionOnRailWithDamping_Parms*)Obj)->bIsForward = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URailFollow_SetPositionOnRailWithDamping_Statics::NewProp_bIsForward = { "bIsForward", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RailFollow_eventSetPositionOnRailWithDamping_Parms), &Z_Construct_UFunction_URailFollow_SetPositionOnRailWithDamping_Statics::NewProp_bIsForward_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URailFollow_SetPositionOnRailWithDamping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URailFollow_SetPositionOnRailWithDamping_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URailFollow_SetPositionOnRailWithDamping_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URailFollow_SetPositionOnRailWithDamping_Statics::NewProp_BlendTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URailFollow_SetPositionOnRailWithDamping_Statics::NewProp_BlendFunc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URailFollow_SetPositionOnRailWithDamping_Statics::NewProp_bIsForward,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URailFollow_SetPositionOnRailWithDamping_Statics::Function_MetaDataParams[] = {
		{ "Category", "ECamera|RailFollow" },
		{ "Comment", "/** Hard set camera position on rail with damping.\n\x09 * @param Position - A floating number in [0,1] representing the position on rail.\n\x09 * @param BlendTime - A non-negative floating number representing the duration to get to Position.\n\x09 * @param BlendFunc - Blend function.\n\x09 * @param IsForward - Blending forward or backward from here to Position.\n\x09 */" },
		{ "DisplayName", "SetPositionOnRailWithDamping" },
		{ "ModuleRelativePath", "Public/Components/RailFollow.h" },
		{ "ToolTip", "Hard set camera position on rail with damping.\n@param Position - A floating number in [0,1] representing the position on rail.\n@param BlendTime - A non-negative floating number representing the duration to get to Position.\n@param BlendFunc - Blend function.\n@param IsForward - Blending forward or backward from here to Position." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URailFollow_SetPositionOnRailWithDamping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URailFollow, nullptr, "SetPositionOnRailWithDamping", nullptr, nullptr, sizeof(Z_Construct_UFunction_URailFollow_SetPositionOnRailWithDamping_Statics::RailFollow_eventSetPositionOnRailWithDamping_Parms), Z_Construct_UFunction_URailFollow_SetPositionOnRailWithDamping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URailFollow_SetPositionOnRailWithDamping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URailFollow_SetPositionOnRailWithDamping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URailFollow_SetPositionOnRailWithDamping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URailFollow_SetPositionOnRailWithDamping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URailFollow_SetPositionOnRailWithDamping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URailFollow);
	UClass* Z_Construct_UClass_URailFollow_NoRegister()
	{
		return URailFollow::StaticClass();
	}
	struct Z_Construct_UClass_URailFollow_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rail_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Rail;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLockOrientationToRail_MetaData[];
#endif
		static void NewProp_bLockOrientationToRail_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockOrientationToRail;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FollowType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FollowType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLoop_MetaData[];
#endif
		static void NewProp_bLoop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoop;
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
	UObject* (*const Z_Construct_UClass_URailFollow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UECameraComponentFollow,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyCamera,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URailFollow_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URailFollow_SetPositionOnRailWithDamping, "SetPositionOnRailWithDamping" }, // 1118945656
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URailFollow_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ECamera" },
		{ "Comment", "/**\n * RailFollow component enforces camera to move along a given rail trajectory.\n * Its position on the rail is computed to get closer to the follow target, or by a fixed speed.\n * If you find camera moves very fast at the beginning of play, check whether the BlendTime parameter \n * in the CallCamera node is non-zero.\n */" },
		{ "IncludePath", "Components/RailFollow.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/RailFollow.h" },
		{ "ToolTip", "RailFollow component enforces camera to move along a given rail trajectory.\nIts position on the rail is computed to get closer to the follow target, or by a fixed speed.\nIf you find camera moves very fast at the beginning of play, check whether the BlendTime parameter\nin the CallCamera node is non-zero." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URailFollow_Statics::NewProp_Rail_MetaData[] = {
		{ "Category", "RailFollow" },
		{ "Comment", "/** The rail along which camera moves. */" },
		{ "ModuleRelativePath", "Public/Components/RailFollow.h" },
		{ "ToolTip", "The rail along which camera moves." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_URailFollow_Statics::NewProp_Rail = { "Rail", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URailFollow, Rail), Z_Construct_UClass_ACameraRig_Rail_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URailFollow_Statics::NewProp_Rail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URailFollow_Statics::NewProp_Rail_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URailFollow_Statics::NewProp_bLockOrientationToRail_MetaData[] = {
		{ "Category", "RailFollow" },
		{ "Comment", "/** Determines whether the orientation of the camera should be in the direction of the rail. \n\x09 *  You should not specify AimComponent if you are enabling this.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/RailFollow.h" },
		{ "ToolTip", "Determines whether the orientation of the camera should be in the direction of the rail.\nYou should not specify AimComponent if you are enabling this." },
	};
#endif
	void Z_Construct_UClass_URailFollow_Statics::NewProp_bLockOrientationToRail_SetBit(void* Obj)
	{
		((URailFollow*)Obj)->bLockOrientationToRail = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URailFollow_Statics::NewProp_bLockOrientationToRail = { "bLockOrientationToRail", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URailFollow), &Z_Construct_UClass_URailFollow_Statics::NewProp_bLockOrientationToRail_SetBit, METADATA_PARAMS(Z_Construct_UClass_URailFollow_Statics::NewProp_bLockOrientationToRail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URailFollow_Statics::NewProp_bLockOrientationToRail_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URailFollow_Statics::NewProp_FollowType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URailFollow_Statics::NewProp_FollowType_MetaData[] = {
		{ "Category", "RailFollow" },
		{ "Comment", "/** How would you like the camera to move on rail. */" },
		{ "ModuleRelativePath", "Public/Components/RailFollow.h" },
		{ "ToolTip", "How would you like the camera to move on rail." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URailFollow_Statics::NewProp_FollowType = { "FollowType", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URailFollow, FollowType), Z_Construct_UEnum_EasyCamera_ERailFollowType, METADATA_PARAMS(Z_Construct_UClass_URailFollow_Statics::NewProp_FollowType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URailFollow_Statics::NewProp_FollowType_MetaData)) }; // 2653739046
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URailFollow_Statics::NewProp_Damping_MetaData[] = {
		{ "Category", "RailFollow" },
		{ "Comment", "/** Follow damping when FollowType is FollowTarget. */" },
		{ "EditCondition", "FollowType == ERailFollowType::FollowTarget" },
		{ "ModuleRelativePath", "Public/Components/RailFollow.h" },
		{ "ToolTip", "Follow damping when FollowType is FollowTarget." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URailFollow_Statics::NewProp_Damping = { "Damping", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URailFollow, Damping), METADATA_PARAMS(Z_Construct_UClass_URailFollow_Statics::NewProp_Damping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URailFollow_Statics::NewProp_Damping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URailFollow_Statics::NewProp_StartPosition_MetaData[] = {
		{ "Category", "RailFollow" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Start position when FollowType is FixedSpeed. */" },
		{ "EditCondition", "FollowType == ERailFollowType::FixedSpeed" },
		{ "ModuleRelativePath", "Public/Components/RailFollow.h" },
		{ "ToolTip", "Start position when FollowType is FixedSpeed." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URailFollow_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URailFollow, StartPosition), METADATA_PARAMS(Z_Construct_UClass_URailFollow_Statics::NewProp_StartPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URailFollow_Statics::NewProp_StartPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URailFollow_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "RailFollow" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Duration when FollowType is FixedSpeed. Set as 0 for infinite move. */" },
		{ "EditCondition", "FollowType == ERailFollowType::FixedSpeed" },
		{ "ModuleRelativePath", "Public/Components/RailFollow.h" },
		{ "ToolTip", "Duration when FollowType is FixedSpeed. Set as 0 for infinite move." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URailFollow_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URailFollow, Duration), METADATA_PARAMS(Z_Construct_UClass_URailFollow_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URailFollow_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URailFollow_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "RailFollow" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "-1.0" },
		{ "Comment", "/** Speed (per second) when FollowType is FixedSpeed, in percentage of the overall track length. Can be negative. */" },
		{ "EditCondition", "FollowType == ERailFollowType::FixedSpeed" },
		{ "ModuleRelativePath", "Public/Components/RailFollow.h" },
		{ "ToolTip", "Speed (per second) when FollowType is FixedSpeed, in percentage of the overall track length. Can be negative." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URailFollow_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URailFollow, Speed), METADATA_PARAMS(Z_Construct_UClass_URailFollow_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URailFollow_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URailFollow_Statics::NewProp_bLoop_MetaData[] = {
		{ "Category", "RailFollow" },
		{ "Comment", "/** Whether to loop when FollowType is FixedSpeed. */" },
		{ "EditCondition", "FollowType == ERailFollowType::FixedSpeed" },
		{ "ModuleRelativePath", "Public/Components/RailFollow.h" },
		{ "ToolTip", "Whether to loop when FollowType is FixedSpeed." },
	};
#endif
	void Z_Construct_UClass_URailFollow_Statics::NewProp_bLoop_SetBit(void* Obj)
	{
		((URailFollow*)Obj)->bLoop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URailFollow_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URailFollow), &Z_Construct_UClass_URailFollow_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(Z_Construct_UClass_URailFollow_Statics::NewProp_bLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URailFollow_Statics::NewProp_bLoop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URailFollow_Statics::NewProp_ManualKeyPoints_MetaData[] = {
		{ "Category", "RailFollow" },
		{ "Comment", "/** A set of key points on rail when FollowType is Manual.  */" },
		{ "EditCondition", "FollowType == ERailFollowType::Manual" },
		{ "ModuleRelativePath", "Public/Components/RailFollow.h" },
		{ "ToolTip", "A set of key points on rail when FollowType is Manual." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URailFollow_Statics::NewProp_ManualKeyPoints = { "ManualKeyPoints", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URailFollow, ManualKeyPoints), Z_Construct_UScriptStruct_FRailManualParams, METADATA_PARAMS(Z_Construct_UClass_URailFollow_Statics::NewProp_ManualKeyPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URailFollow_Statics::NewProp_ManualKeyPoints_MetaData)) }; // 1768044752
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URailFollow_Statics::NewProp_bResetOnResume_MetaData[] = {
		{ "Category", "RailFollow" },
		{ "Comment", "/** Whether to restart from scratch when resuming this component. Default is true. */" },
		{ "ModuleRelativePath", "Public/Components/RailFollow.h" },
		{ "ToolTip", "Whether to restart from scratch when resuming this component. Default is true." },
	};
#endif
	void Z_Construct_UClass_URailFollow_Statics::NewProp_bResetOnResume_SetBit(void* Obj)
	{
		((URailFollow*)Obj)->bResetOnResume = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URailFollow_Statics::NewProp_bResetOnResume = { "bResetOnResume", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URailFollow), &Z_Construct_UClass_URailFollow_Statics::NewProp_bResetOnResume_SetBit, METADATA_PARAMS(Z_Construct_UClass_URailFollow_Statics::NewProp_bResetOnResume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URailFollow_Statics::NewProp_bResetOnResume_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URailFollow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URailFollow_Statics::NewProp_Rail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URailFollow_Statics::NewProp_bLockOrientationToRail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URailFollow_Statics::NewProp_FollowType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URailFollow_Statics::NewProp_FollowType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URailFollow_Statics::NewProp_Damping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URailFollow_Statics::NewProp_StartPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URailFollow_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URailFollow_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URailFollow_Statics::NewProp_bLoop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URailFollow_Statics::NewProp_ManualKeyPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URailFollow_Statics::NewProp_bResetOnResume,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URailFollow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URailFollow>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URailFollow_Statics::ClassParams = {
		&URailFollow::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URailFollow_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URailFollow_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_URailFollow_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URailFollow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URailFollow()
	{
		if (!Z_Registration_Info_UClass_URailFollow.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URailFollow.OuterSingleton, Z_Construct_UClass_URailFollow_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URailFollow.OuterSingleton;
	}
	template<> EASYCAMERA_API UClass* StaticClass<URailFollow>()
	{
		return URailFollow::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URailFollow);
	URailFollow::~URailFollow() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Components_RailFollow_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Components_RailFollow_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URailFollow, URailFollow::StaticClass, TEXT("URailFollow"), &Z_Registration_Info_UClass_URailFollow, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URailFollow), 400903937U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Components_RailFollow_h_182194630(TEXT("/Script/EasyCamera"),
		Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Components_RailFollow_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Components_RailFollow_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
