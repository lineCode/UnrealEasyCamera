// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyCamera/Public/Utils/ECameraLibrary.h"
#include "EasyCamera/Public/Utils/ECameraTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECameraLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	EASYCAMERA_API UClass* Z_Construct_UClass_AECameraBase_NoRegister();
	EASYCAMERA_API UClass* Z_Construct_UClass_UECameraLibrary();
	EASYCAMERA_API UClass* Z_Construct_UClass_UECameraLibrary_NoRegister();
	EASYCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FDampParams();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EViewTargetBlendFunction();
	UPackage* Z_Construct_UPackage__Script_EasyCamera();
// End Cross Module References
	DEFINE_FUNCTION(UECameraLibrary::execGetActiveCamera)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AECameraBase**)Z_Param__Result=UECameraLibrary::GetActiveCamera(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UECameraLibrary::execTerminateActiveCamera)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UECameraLibrary::TerminateActiveCamera(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UECameraLibrary::execCallCamera)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UClass,Z_Param_CameraClass);
		P_GET_STRUCT(FVector,Z_Param_SpawnLocation);
		P_GET_STRUCT(FRotator,Z_Param_SpawnRotation);
		P_GET_OBJECT(AActor,Z_Param_FollowTarget);
		P_GET_OBJECT(AActor,Z_Param_AimTarget);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BlendTime);
		P_GET_PROPERTY(FByteProperty,Z_Param_BlendFunc);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BlendExp);
		P_GET_UBOOL(Z_Param_bLockOutgoing);
		P_GET_UBOOL(Z_Param_bIsTransitory);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LifeTime);
		P_GET_UBOOL(Z_Param_bPreserveState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AECameraBase**)Z_Param__Result=UECameraLibrary::CallCamera(Z_Param_WorldContextObject,Z_Param_CameraClass,Z_Param_SpawnLocation,Z_Param_SpawnRotation,Z_Param_FollowTarget,Z_Param_AimTarget,Z_Param_BlendTime,EViewTargetBlendFunction(Z_Param_BlendFunc),Z_Param_BlendExp,Z_Param_bLockOutgoing,Z_Param_bIsTransitory,Z_Param_LifeTime,Z_Param_bPreserveState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UECameraLibrary::execGetLocalSpacePositionWithVectors)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PivotPosition);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ForwardVector);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_RightVector);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_UpVector);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InputPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UECameraLibrary::GetLocalSpacePositionWithVectors(Z_Param_Out_PivotPosition,Z_Param_Out_ForwardVector,Z_Param_Out_RightVector,Z_Param_Out_UpVector,Z_Param_Out_InputPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UECameraLibrary::execGetLocalSpacePosition)
	{
		P_GET_OBJECT(AActor,Z_Param_Camera);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InputPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UECameraLibrary::GetLocalSpacePosition(Z_Param_Camera,Z_Param_Out_InputPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UECameraLibrary::execDamperQuaternion)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Quat1);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Quat2);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_DeltaSeconds);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DampTime);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Output);
		P_FINISH;
		P_NATIVE_BEGIN;
		UECameraLibrary::DamperQuaternion(Z_Param_Out_Quat1,Z_Param_Out_Quat2,Z_Param_Out_DeltaSeconds,Z_Param_DampTime,Z_Param_Out_Output);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UECameraLibrary::execSpringDampVector)
	{
		P_GET_STRUCT_REF(FDampParams,Z_Param_Out_DampParams);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_DeltaSeconds);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TemporalInput);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_SpatialInput);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Output);
		P_FINISH;
		P_NATIVE_BEGIN;
		UECameraLibrary::SpringDampVector(Z_Param_Out_DampParams,Z_Param_Out_DeltaSeconds,Z_Param_Out_TemporalInput,Z_Param_Out_SpatialInput,Z_Param_Out_Output);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UECameraLibrary::execDamperRotatorWithDifferentDampTime)
	{
		P_GET_STRUCT_REF(FDampParams,Z_Param_Out_DampParams);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_DeltaSeconds);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Input);
		P_GET_STRUCT(FVector,Z_Param_DampTime);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Output);
		P_FINISH;
		P_NATIVE_BEGIN;
		UECameraLibrary::DamperRotatorWithDifferentDampTime(Z_Param_Out_DampParams,Z_Param_Out_DeltaSeconds,Z_Param_Out_Input,Z_Param_DampTime,Z_Param_Out_Output);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UECameraLibrary::execDamperRotatorWithSameDampTime)
	{
		P_GET_STRUCT_REF(FDampParams,Z_Param_Out_DampParams);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_DeltaSeconds);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Input);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DampTime);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Output);
		P_FINISH;
		P_NATIVE_BEGIN;
		UECameraLibrary::DamperRotatorWithSameDampTime(Z_Param_Out_DampParams,Z_Param_Out_DeltaSeconds,Z_Param_Out_Input,Z_Param_DampTime,Z_Param_Out_Output);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UECameraLibrary::execDamperVectorWithDifferentDampTime)
	{
		P_GET_STRUCT_REF(FDampParams,Z_Param_Out_DampParams);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_DeltaSeconds);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Input);
		P_GET_STRUCT(FVector,Z_Param_DampTime);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Output);
		P_FINISH;
		P_NATIVE_BEGIN;
		UECameraLibrary::DamperVectorWithDifferentDampTime(Z_Param_Out_DampParams,Z_Param_Out_DeltaSeconds,Z_Param_Out_Input,Z_Param_DampTime,Z_Param_Out_Output);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UECameraLibrary::execDamperVectorWithSameDampTime)
	{
		P_GET_STRUCT_REF(FDampParams,Z_Param_Out_DampParams);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_DeltaSeconds);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Input);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DampTime);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Output);
		P_FINISH;
		P_NATIVE_BEGIN;
		UECameraLibrary::DamperVectorWithSameDampTime(Z_Param_Out_DampParams,Z_Param_Out_DeltaSeconds,Z_Param_Out_Input,Z_Param_DampTime,Z_Param_Out_Output);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UECameraLibrary::execDamperValue)
	{
		P_GET_STRUCT_REF(FDampParams,Z_Param_Out_DampParams);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_DeltaSeconds);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Input);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DampTime);
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_Output);
		P_FINISH;
		P_NATIVE_BEGIN;
		UECameraLibrary::DamperValue(Z_Param_Out_DampParams,Z_Param_Out_DeltaSeconds,Z_Param_Out_Input,Z_Param_DampTime,Z_Param_Out_Output);
		P_NATIVE_END;
	}
	void UECameraLibrary::StaticRegisterNativesUECameraLibrary()
	{
		UClass* Class = UECameraLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CallCamera", &UECameraLibrary::execCallCamera },
			{ "DamperQuaternion", &UECameraLibrary::execDamperQuaternion },
			{ "DamperRotatorWithDifferentDampTime", &UECameraLibrary::execDamperRotatorWithDifferentDampTime },
			{ "DamperRotatorWithSameDampTime", &UECameraLibrary::execDamperRotatorWithSameDampTime },
			{ "DamperValue", &UECameraLibrary::execDamperValue },
			{ "DamperVectorWithDifferentDampTime", &UECameraLibrary::execDamperVectorWithDifferentDampTime },
			{ "DamperVectorWithSameDampTime", &UECameraLibrary::execDamperVectorWithSameDampTime },
			{ "GetActiveCamera", &UECameraLibrary::execGetActiveCamera },
			{ "GetLocalSpacePosition", &UECameraLibrary::execGetLocalSpacePosition },
			{ "GetLocalSpacePositionWithVectors", &UECameraLibrary::execGetLocalSpacePositionWithVectors },
			{ "SpringDampVector", &UECameraLibrary::execSpringDampVector },
			{ "TerminateActiveCamera", &UECameraLibrary::execTerminateActiveCamera },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UECameraLibrary_CallCamera_Statics
	{
		struct ECameraLibrary_eventCallCamera_Parms
		{
			const UObject* WorldContextObject;
			TSubclassOf<AECameraBase>  CameraClass;
			FVector SpawnLocation;
			FRotator SpawnRotation;
			AActor* FollowTarget;
			AActor* AimTarget;
			float BlendTime;
			TEnumAsByte<EViewTargetBlendFunction> BlendFunc;
			float BlendExp;
			bool bLockOutgoing;
			bool bIsTransitory;
			float LifeTime;
			bool bPreserveState;
			AECameraBase* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FClassPropertyParams NewProp_CameraClass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnRotation;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowTarget;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AimTarget;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlendFunc;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendExp;
		static void NewProp_bLockOutgoing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockOutgoing;
		static void NewProp_bIsTransitory_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTransitory;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LifeTime;
		static void NewProp_bPreserveState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreserveState;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraLibrary_CallCamera_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UECameraLibrary_CallCamera_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraLibrary_eventCallCamera_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UECameraLibrary_CallCamera_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraLibrary_CallCamera_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UECameraLibrary_CallCamera_Statics::NewProp_CameraClass = { "CameraClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraLibrary_eventCallCamera_Parms, CameraClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AECameraBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UECameraLibrary_CallCamera_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraLibrary_eventCallCamera_Parms, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UECameraLibrary_CallCamera_Statics::NewProp_SpawnRotation = { "SpawnRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraLibrary_eventCallCamera_Parms, SpawnRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UECameraLibrary_CallCamera_Statics::NewProp_FollowTarget = { "FollowTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraLibrary_eventCallCamera_Parms, FollowTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UECameraLibrary_CallCamera_Statics::NewProp_AimTarget = { "AimTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraLibrary_eventCallCamera_Parms, AimTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UECameraLibrary_CallCamera_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraLibrary_eventCallCamera_Parms, BlendTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UECameraLibrary_CallCamera_Statics::NewProp_BlendFunc = { "BlendFunc", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraLibrary_eventCallCamera_Parms, BlendFunc), Z_Construct_UEnum_Engine_EViewTargetBlendFunction, METADATA_PARAMS(nullptr, 0) }; // 3430533364
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UECameraLibrary_CallCamera_Statics::NewProp_BlendExp = { "BlendExp", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraLibrary_eventCallCamera_Parms, BlendExp), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UECameraLibrary_CallCamera_Statics::NewProp_bLockOutgoing_SetBit(void* Obj)
	{
		((ECameraLibrary_eventCallCamera_Parms*)Obj)->bLockOutgoing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UECameraLibrary_CallCamera_Statics::NewProp_bLockOutgoing = { "bLockOutgoing", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ECameraLibrary_eventCallCamera_Parms), &Z_Construct_UFunction_UECameraLibrary_CallCamera_Statics::NewProp_bLockOutgoing_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UECameraLibrary_CallCamera_Statics::NewProp_bIsTransitory_SetBit(void* Obj)
	{
		((ECameraLibrary_eventCallCamera_Parms*)Obj)->bIsTransitory = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UECameraLibrary_CallCamera_Statics::NewProp_bIsTransitory = { "bIsTransitory", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ECameraLibrary_eventCallCamera_Parms), &Z_Construct_UFunction_UECameraLibrary_CallCamera_Statics::NewProp_bIsTransitory_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UECameraLibrary_CallCamera_Statics::NewProp_LifeTime = { "LifeTime", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraLibrary_eventCallCamera_Parms, LifeTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UECameraLibrary_CallCamera_Statics::NewProp_bPreserveState_SetBit(void* Obj)
	{
		((ECameraLibrary_eventCallCamera_Parms*)Obj)->bPreserveState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UECameraLibrary_CallCamera_Statics::NewProp_bPreserveState = { "bPreserveState", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ECameraLibrary_eventCallCamera_Parms), &Z_Construct_UFunction_UECameraLibrary_CallCamera_Statics::NewProp_bPreserveState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UECameraLibrary_CallCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraLibrary_eventCallCamera_Parms, ReturnValue), Z_Construct_UClass_AECameraBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UECameraLibrary_CallCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraLibrary_CallCamera_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraLibrary_CallCamera_Statics::NewProp_CameraClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraLibrary_CallCamera_Statics::NewProp_SpawnLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraLibrary_CallCamera_Statics::NewProp_SpawnRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraLibrary_CallCamera_Statics::NewProp_FollowTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraLibrary_CallCamera_Statics::NewProp_AimTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraLibrary_CallCamera_Statics::NewProp_BlendTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraLibrary_CallCamera_Statics::NewProp_BlendFunc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraLibrary_CallCamera_Statics::NewProp_BlendExp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraLibrary_CallCamera_Statics::NewProp_bLockOutgoing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraLibrary_CallCamera_Statics::NewProp_bIsTransitory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraLibrary_CallCamera_Statics::NewProp_LifeTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraLibrary_CallCamera_Statics::NewProp_bPreserveState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraLibrary_CallCamera_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraLibrary_CallCamera_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "6" },
		{ "Category", "ECamera|Utils" },
		{ "Comment", "/** Call a TSubclassOf<ECameraBase> class type camera actor. If there exists one in the level, this node will use it. Otherwise it will instantiate a new one.\n\x09 *  Highly recommending using this node rather than UE's vanilla SetViewTargetWithBlend node.\n\x09 * @param CameraClass - The camera class type to instantiate.\n\x09 * @param SpawnLocation - The location where the camera should be spawned. Will be (0,0,0) if not set.\n\x09 * @param SpawnRotation - The rotation the camera should be initialized with. Will be (0,0,0) if not set.\n\x09 * @param FollowTarget - The target actor passed into the follow component. Can be null if this camera does not have a follow component.\n\x09 * @param AimTarget - The target actor passed into the aim component. Can be null if this camera does not have an aim component.\n\x09 * @param BlendTime - Blend-in time used for transitioning from the current active camera to the new camera.\n\x09 * @param BlendFunc - Which type of blend function to use.\n\x09 * @param BlendExp - Blend exponential.\n\x09 * @param bLockOutgoing - If true, lock outgoing viewtarget to last frame's camera position for the remainder of the blend.\n\x09 * @param bIsTransitory - Whether the called camera is transitory. If true, it will be automatically terminated after LifeTime seconds.\n\x09 * @param LifeTime - The life time of the called camera if it is transitory.\n\x09 * @param bPreserveState - Whether the incoming camera tries to preserve outgoing camera's location and rotation. If you specified SpawnLocation and SpawnRotation, you should switch this off.\n\x09 */" },
		{ "CPP_Default_bIsTransitory", "false" },
		{ "CPP_Default_bPreserveState", "false" },
		{ "CPP_Default_LifeTime", "0.000000" },
		{ "DeterminesOutputType", "CameraClass" },
		{ "DisplayName", "CallCamera" },
		{ "ModuleRelativePath", "Public/Utils/ECameraLibrary.h" },
		{ "ToolTip", "Call a TSubclassOf<ECameraBase> class type camera actor. If there exists one in the level, this node will use it. Otherwise it will instantiate a new one.\nHighly recommending using this node rather than UE's vanilla SetViewTargetWithBlend node.\n@param CameraClass - The camera class type to instantiate.\n@param SpawnLocation - The location where the camera should be spawned. Will be (0,0,0) if not set.\n@param SpawnRotation - The rotation the camera should be initialized with. Will be (0,0,0) if not set.\n@param FollowTarget - The target actor passed into the follow component. Can be null if this camera does not have a follow component.\n@param AimTarget - The target actor passed into the aim component. Can be null if this camera does not have an aim component.\n@param BlendTime - Blend-in time used for transitioning from the current active camera to the new camera.\n@param BlendFunc - Which type of blend function to use.\n@param BlendExp - Blend exponential.\n@param bLockOutgoing - If true, lock outgoing viewtarget to last frame's camera position for the remainder of the blend.\n@param bIsTransitory - Whether the called camera is transitory. If true, it will be automatically terminated after LifeTime seconds.\n@param LifeTime - The life time of the called camera if it is transitory.\n@param bPreserveState - Whether the incoming camera tries to preserve outgoing camera's location and rotation. If you specified SpawnLocation and SpawnRotation, you should switch this off." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UECameraLibrary_CallCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UECameraLibrary, nullptr, "CallCamera", nullptr, nullptr, sizeof(Z_Construct_UFunction_UECameraLibrary_CallCamera_Statics::ECameraLibrary_eventCallCamera_Parms), Z_Construct_UFunction_UECameraLibrary_CallCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraLibrary_CallCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UECameraLibrary_CallCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraLibrary_CallCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UECameraLibrary_CallCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UECameraLibrary_CallCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UECameraLibrary_DamperQuaternion_Statics
	{
		struct ECameraLibrary_eventDamperQuaternion_Parms
		{
			FQuat Quat1;
			FQuat Quat2;
			float DeltaSeconds;
			float DampTime;
			FQuat Output;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quat1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Quat1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quat2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Quat2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DampTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraLibrary_DamperQuaternion_Statics::NewProp_Quat1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UECameraLibrary_DamperQuaternion_Statics::NewProp_Quat1 = { "Quat1", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraLibrary_eventDamperQuaternion_Parms, Quat1), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UECameraLibrary_DamperQuaternion_Statics::NewProp_Quat1_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraLibrary_DamperQuaternion_Statics::NewProp_Quat1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraLibrary_DamperQuaternion_Statics::NewProp_Quat2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UECameraLibrary_DamperQuaternion_Statics::NewProp_Quat2 = { "Quat2", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraLibrary_eventDamperQuaternion_Parms, Quat2), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UECameraLibrary_DamperQuaternion_Statics::NewProp_Quat2_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraLibrary_DamperQuaternion_Statics::NewProp_Quat2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraLibrary_DamperQuaternion_Statics::NewProp_DeltaSeconds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UECameraLibrary_DamperQuaternion_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraLibrary_eventDamperQuaternion_Parms, DeltaSeconds), METADATA_PARAMS(Z_Construct_UFunction_UECameraLibrary_DamperQuaternion_Statics::NewProp_DeltaSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraLibrary_DamperQuaternion_Statics::NewProp_DeltaSeconds_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UECameraLibrary_DamperQuaternion_Statics::NewProp_DampTime = { "DampTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraLibrary_eventDamperQuaternion_Parms, DampTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UECameraLibrary_DamperQuaternion_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraLibrary_eventDamperQuaternion_Parms, Output), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UECameraLibrary_DamperQuaternion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraLibrary_DamperQuaternion_Statics::NewProp_Quat1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraLibrary_DamperQuaternion_Statics::NewProp_Quat2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraLibrary_DamperQuaternion_Statics::NewProp_DeltaSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraLibrary_DamperQuaternion_Statics::NewProp_DampTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraLibrary_DamperQuaternion_Statics::NewProp_Output,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraLibrary_DamperQuaternion_Statics::Function_MetaDataParams[] = {
		{ "Category", "ECamera|Utils" },
		{ "Comment", "/** Interpolate two quaternions according to damp time.\n\x09 * @param Quat1 - Starting quaternion.\n\x09 * @param Quat2 - Destination quaternion.\n\x09 * @param DeltaSeconds - The elapsed time since last frame.\n\x09 * @param DampTime - Time used to interpolate from Quat1 to Quat2.\n\x09 * @param Output - Damped output quaternion.\n\x09 */" },
		{ "DisplayName", "DampQuaternion" },
		{ "ModuleRelativePath", "Public/Utils/ECameraLibrary.h" },
		{ "ToolTip", "Interpolate two quaternions according to damp time.\n@param Quat1 - Starting quaternion.\n@param Quat2 - Destination quaternion.\n@param DeltaSeconds - The elapsed time since last frame.\n@param DampTime - Time used to interpolate from Quat1 to Quat2.\n@param Output - Damped output quaternion." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UECameraLibrary_DamperQuaternion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UECameraLibrary, nullptr, "DamperQuaternion", nullptr, nullptr, sizeof(Z_Construct_UFunction_UECameraLibrary_DamperQuaternion_Statics::ECameraLibrary_eventDamperQuaternion_Parms), Z_Construct_UFunction_UECameraLibrary_DamperQuaternion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraLibrary_DamperQuaternion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UECameraLibrary_DamperQuaternion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraLibrary_DamperQuaternion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UECameraLibrary_DamperQuaternion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UECameraLibrary_DamperQuaternion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UECameraLibrary_DamperRotatorWithDifferentDampTime_Statics
	{
		struct ECameraLibrary_eventDamperRotatorWithDifferentDampTime_Parms
		{
			FDampParams DampParams;
			float DeltaSeconds;
			FRotator Input;
			FVector DampTime;
			FRotator Output;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DampParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DampParams;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DampTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraLibrary_DamperRotatorWithDifferentDampTime_Statics::NewProp_DampParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UECameraLibrary_DamperRotatorWithDifferentDampTime_Statics::NewProp_DampParams = { "DampParams", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraLibrary_eventDamperRotatorWithDifferentDampTime_Parms, DampParams), Z_Construct_UScriptStruct_FDampParams, METADATA_PARAMS(Z_Construct_UFunction_UECameraLibrary_DamperRotatorWithDifferentDampTime_Statics::NewProp_DampParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraLibrary_DamperRotatorWithDifferentDampTime_Statics::NewProp_DampParams_MetaData)) }; // 4182365953
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraLibrary_DamperRotatorWithDifferentDampTime_Statics::NewProp_DeltaSeconds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UECameraLibrary_DamperRotatorWithDifferentDampTime_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraLibrary_eventDamperRotatorWithDifferentDampTime_Parms, DeltaSeconds), METADATA_PARAMS(Z_Construct_UFunction_UECameraLibrary_DamperRotatorWithDifferentDampTime_Statics::NewProp_DeltaSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraLibrary_DamperRotatorWithDifferentDampTime_Statics::NewProp_DeltaSeconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraLibrary_DamperRotatorWithDifferentDampTime_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UECameraLibrary_DamperRotatorWithDifferentDampTime_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraLibrary_eventDamperRotatorWithDifferentDampTime_Parms, Input), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UECameraLibrary_DamperRotatorWithDifferentDampTime_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraLibrary_DamperRotatorWithDifferentDampTime_Statics::NewProp_Input_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UECameraLibrary_DamperRotatorWithDifferentDampTime_Statics::NewProp_DampTime = { "DampTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraLibrary_eventDamperRotatorWithDifferentDampTime_Parms, DampTime), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UECameraLibrary_DamperRotatorWithDifferentDampTime_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraLibrary_eventDamperRotatorWithDifferentDampTime_Parms, Output), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UECameraLibrary_DamperRotatorWithDifferentDampTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraLibrary_DamperRotatorWithDifferentDampTime_Statics::NewProp_DampParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraLibrary_DamperRotatorWithDifferentDampTime_Statics::NewProp_DeltaSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraLibrary_DamperRotatorWithDifferentDampTime_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraLibrary_DamperRotatorWithDifferentDampTime_Statics::NewProp_DampTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraLibrary_DamperRotatorWithDifferentDampTime_Statics::NewProp_Output,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraLibrary_DamperRotatorWithDifferentDampTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "ECamera|Utils" },
		{ "Comment", "/** Damp a rotator with different damp times for different elements in the rotator.\n\x09 * @param DampParams - A set of damp parameters.\n\x09 * @param DeltaSeconds - The elapsed time since last frame.\n\x09 * @param Input - Input rotator to damp.\n\x09 * @param DampTime - Damp time (vector).\n\x09 * @param Output - Resulting damped output rotator.\n\x09 */" },
		{ "DisplayName", "DampRotatorWithDifferentDampTimes" },
		{ "ModuleRelativePath", "Public/Utils/ECameraLibrary.h" },
		{ "ToolTip", "Damp a rotator with different damp times for different elements in the rotator.\n@param DampParams - A set of damp parameters.\n@param DeltaSeconds - The elapsed time since last frame.\n@param Input - Input rotator to damp.\n@param DampTime - Damp time (vector).\n@param Output - Resulting damped output rotator." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UECameraLibrary_DamperRotatorWithDifferentDampTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UECameraLibrary, nullptr, "DamperRotatorWithDifferentDampTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UECameraLibrary_DamperRotatorWithDifferentDampTime_Statics::ECameraLibrary_eventDamperRotatorWithDifferentDampTime_Parms), Z_Construct_UFunction_UECameraLibrary_DamperRotatorWithDifferentDampTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraLibrary_DamperRotatorWithDifferentDampTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UECameraLibrary_DamperRotatorWithDifferentDampTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraLibrary_DamperRotatorWithDifferentDampTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UECameraLibrary_DamperRotatorWithDifferentDampTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UECameraLibrary_DamperRotatorWithDifferentDampTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UECameraLibrary_DamperRotatorWithSameDampTime_Statics
	{
		struct ECameraLibrary_eventDamperRotatorWithSameDampTime_Parms
		{
			FDampParams DampParams;
			float DeltaSeconds;
			FRotator Input;
			float DampTime;
			FRotator Output;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DampParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DampParams;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DampTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraLibrary_DamperRotatorWithSameDampTime_Statics::NewProp_DampParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UECameraLibrary_DamperRotatorWithSameDampTime_Statics::NewProp_DampParams = { "DampParams", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraLibrary_eventDamperRotatorWithSameDampTime_Parms, DampParams), Z_Construct_UScriptStruct_FDampParams, METADATA_PARAMS(Z_Construct_UFunction_UECameraLibrary_DamperRotatorWithSameDampTime_Statics::NewProp_DampParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraLibrary_DamperRotatorWithSameDampTime_Statics::NewProp_DampParams_MetaData)) }; // 4182365953
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraLibrary_DamperRotatorWithSameDampTime_Statics::NewProp_DeltaSeconds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UECameraLibrary_DamperRotatorWithSameDampTime_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraLibrary_eventDamperRotatorWithSameDampTime_Parms, DeltaSeconds), METADATA_PARAMS(Z_Construct_UFunction_UECameraLibrary_DamperRotatorWithSameDampTime_Statics::NewProp_DeltaSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraLibrary_DamperRotatorWithSameDampTime_Statics::NewProp_DeltaSeconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraLibrary_DamperRotatorWithSameDampTime_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UECameraLibrary_DamperRotatorWithSameDampTime_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraLibrary_eventDamperRotatorWithSameDampTime_Parms, Input), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UECameraLibrary_DamperRotatorWithSameDampTime_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraLibrary_DamperRotatorWithSameDampTime_Statics::NewProp_Input_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UECameraLibrary_DamperRotatorWithSameDampTime_Statics::NewProp_DampTime = { "DampTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraLibrary_eventDamperRotatorWithSameDampTime_Parms, DampTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UECameraLibrary_DamperRotatorWithSameDampTime_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraLibrary_eventDamperRotatorWithSameDampTime_Parms, Output), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UECameraLibrary_DamperRotatorWithSameDampTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraLibrary_DamperRotatorWithSameDampTime_Statics::NewProp_DampParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraLibrary_DamperRotatorWithSameDampTime_Statics::NewProp_DeltaSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraLibrary_DamperRotatorWithSameDampTime_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraLibrary_DamperRotatorWithSameDampTime_Statics::NewProp_DampTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraLibrary_DamperRotatorWithSameDampTime_Statics::NewProp_Output,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraLibrary_DamperRotatorWithSameDampTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "ECamera|Utils" },
		{ "Comment", "/** Damp a rotator with the same damp time for all elements in the vector.\n\x09 * @param DampParams - A set of damp parameters.\n\x09 * @param DeltaSeconds - The elapsed time since last frame.\n\x09 * @param Input - Input rotator to damp.\n\x09 * @param DampTime - Damp time (float).\n\x09 * @param Output - Resulting damped output rotator.\n\x09 */" },
		{ "DisplayName", "DampRotatorWithSameDampTime" },
		{ "ModuleRelativePath", "Public/Utils/ECameraLibrary.h" },
		{ "ToolTip", "Damp a rotator with the same damp time for all elements in the vector.\n@param DampParams - A set of damp parameters.\n@param DeltaSeconds - The elapsed time since last frame.\n@param Input - Input rotator to damp.\n@param DampTime - Damp time (float).\n@param Output - Resulting damped output rotator." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UECameraLibrary_DamperRotatorWithSameDampTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UECameraLibrary, nullptr, "DamperRotatorWithSameDampTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UECameraLibrary_DamperRotatorWithSameDampTime_Statics::ECameraLibrary_eventDamperRotatorWithSameDampTime_Parms), Z_Construct_UFunction_UECameraLibrary_DamperRotatorWithSameDampTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraLibrary_DamperRotatorWithSameDampTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UECameraLibrary_DamperRotatorWithSameDampTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraLibrary_DamperRotatorWithSameDampTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UECameraLibrary_DamperRotatorWithSameDampTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UECameraLibrary_DamperRotatorWithSameDampTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UECameraLibrary_DamperValue_Statics
	{
		struct ECameraLibrary_eventDamperValue_Parms
		{
			FDampParams DampParams;
			float DeltaSeconds;
			float Input;
			float DampTime;
			double Output;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DampParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DampParams;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Input;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DampTime;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Output;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraLibrary_DamperValue_Statics::NewProp_DampParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UECameraLibrary_DamperValue_Statics::NewProp_DampParams = { "DampParams", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraLibrary_eventDamperValue_Parms, DampParams), Z_Construct_UScriptStruct_FDampParams, METADATA_PARAMS(Z_Construct_UFunction_UECameraLibrary_DamperValue_Statics::NewProp_DampParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraLibrary_DamperValue_Statics::NewProp_DampParams_MetaData)) }; // 4182365953
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraLibrary_DamperValue_Statics::NewProp_DeltaSeconds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UECameraLibrary_DamperValue_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraLibrary_eventDamperValue_Parms, DeltaSeconds), METADATA_PARAMS(Z_Construct_UFunction_UECameraLibrary_DamperValue_Statics::NewProp_DeltaSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraLibrary_DamperValue_Statics::NewProp_DeltaSeconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraLibrary_DamperValue_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UECameraLibrary_DamperValue_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraLibrary_eventDamperValue_Parms, Input), METADATA_PARAMS(Z_Construct_UFunction_UECameraLibrary_DamperValue_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraLibrary_DamperValue_Statics::NewProp_Input_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UECameraLibrary_DamperValue_Statics::NewProp_DampTime = { "DampTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraLibrary_eventDamperValue_Parms, DampTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UECameraLibrary_DamperValue_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraLibrary_eventDamperValue_Parms, Output), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UECameraLibrary_DamperValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraLibrary_DamperValue_Statics::NewProp_DampParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraLibrary_DamperValue_Statics::NewProp_DeltaSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraLibrary_DamperValue_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraLibrary_DamperValue_Statics::NewProp_DampTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraLibrary_DamperValue_Statics::NewProp_Output,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraLibrary_DamperValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "ECamera|Utils" },
		{ "Comment", "/** Damp a float with a given damp time. \n\x09 * @param DampParams - A set of damp parameters.\n\x09 * @param DeltaSeconds - The elapsed time since last frame.\n\x09 * @param Input - Input float to damp.\n\x09 * @param DampTime - Damp time.\n\x09 * @param Output - Resulting damped output float.\n\x09 */" },
		{ "DisplayName", "DampSingleValue" },
		{ "ModuleRelativePath", "Public/Utils/ECameraLibrary.h" },
		{ "ToolTip", "Damp a float with a given damp time.\n@param DampParams - A set of damp parameters.\n@param DeltaSeconds - The elapsed time since last frame.\n@param Input - Input float to damp.\n@param DampTime - Damp time.\n@param Output - Resulting damped output float." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UECameraLibrary_DamperValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UECameraLibrary, nullptr, "DamperValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UECameraLibrary_DamperValue_Statics::ECameraLibrary_eventDamperValue_Parms), Z_Construct_UFunction_UECameraLibrary_DamperValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraLibrary_DamperValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UECameraLibrary_DamperValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraLibrary_DamperValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UECameraLibrary_DamperValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UECameraLibrary_DamperValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UECameraLibrary_DamperVectorWithDifferentDampTime_Statics
	{
		struct ECameraLibrary_eventDamperVectorWithDifferentDampTime_Parms
		{
			FDampParams DampParams;
			float DeltaSeconds;
			FVector Input;
			FVector DampTime;
			FVector Output;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DampParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DampParams;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DampTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraLibrary_DamperVectorWithDifferentDampTime_Statics::NewProp_DampParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UECameraLibrary_DamperVectorWithDifferentDampTime_Statics::NewProp_DampParams = { "DampParams", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraLibrary_eventDamperVectorWithDifferentDampTime_Parms, DampParams), Z_Construct_UScriptStruct_FDampParams, METADATA_PARAMS(Z_Construct_UFunction_UECameraLibrary_DamperVectorWithDifferentDampTime_Statics::NewProp_DampParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraLibrary_DamperVectorWithDifferentDampTime_Statics::NewProp_DampParams_MetaData)) }; // 4182365953
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraLibrary_DamperVectorWithDifferentDampTime_Statics::NewProp_DeltaSeconds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UECameraLibrary_DamperVectorWithDifferentDampTime_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraLibrary_eventDamperVectorWithDifferentDampTime_Parms, DeltaSeconds), METADATA_PARAMS(Z_Construct_UFunction_UECameraLibrary_DamperVectorWithDifferentDampTime_Statics::NewProp_DeltaSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraLibrary_DamperVectorWithDifferentDampTime_Statics::NewProp_DeltaSeconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraLibrary_DamperVectorWithDifferentDampTime_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UECameraLibrary_DamperVectorWithDifferentDampTime_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraLibrary_eventDamperVectorWithDifferentDampTime_Parms, Input), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UECameraLibrary_DamperVectorWithDifferentDampTime_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraLibrary_DamperVectorWithDifferentDampTime_Statics::NewProp_Input_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UECameraLibrary_DamperVectorWithDifferentDampTime_Statics::NewProp_DampTime = { "DampTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraLibrary_eventDamperVectorWithDifferentDampTime_Parms, DampTime), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UECameraLibrary_DamperVectorWithDifferentDampTime_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraLibrary_eventDamperVectorWithDifferentDampTime_Parms, Output), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UECameraLibrary_DamperVectorWithDifferentDampTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraLibrary_DamperVectorWithDifferentDampTime_Statics::NewProp_DampParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraLibrary_DamperVectorWithDifferentDampTime_Statics::NewProp_DeltaSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraLibrary_DamperVectorWithDifferentDampTime_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraLibrary_DamperVectorWithDifferentDampTime_Statics::NewProp_DampTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraLibrary_DamperVectorWithDifferentDampTime_Statics::NewProp_Output,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraLibrary_DamperVectorWithDifferentDampTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "ECamera|Utils" },
		{ "Comment", "/** Damp a vector with different damp times for different elements in the vector.\n\x09 * @param DampParams - A set of damp parameters.\n\x09 * @param DeltaSeconds - The elapsed time since last frame.\n\x09 * @param Input - Input vector to damp.\n\x09 * @param DampTime - Damp time (vector).\n\x09 * @param Output - Resulting damped output vector.\n\x09 */" },
		{ "DisplayName", "DampVectorWithDifferentDampTimes" },
		{ "ModuleRelativePath", "Public/Utils/ECameraLibrary.h" },
		{ "ToolTip", "Damp a vector with different damp times for different elements in the vector.\n@param DampParams - A set of damp parameters.\n@param DeltaSeconds - The elapsed time since last frame.\n@param Input - Input vector to damp.\n@param DampTime - Damp time (vector).\n@param Output - Resulting damped output vector." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UECameraLibrary_DamperVectorWithDifferentDampTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UECameraLibrary, nullptr, "DamperVectorWithDifferentDampTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UECameraLibrary_DamperVectorWithDifferentDampTime_Statics::ECameraLibrary_eventDamperVectorWithDifferentDampTime_Parms), Z_Construct_UFunction_UECameraLibrary_DamperVectorWithDifferentDampTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraLibrary_DamperVectorWithDifferentDampTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UECameraLibrary_DamperVectorWithDifferentDampTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraLibrary_DamperVectorWithDifferentDampTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UECameraLibrary_DamperVectorWithDifferentDampTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UECameraLibrary_DamperVectorWithDifferentDampTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UECameraLibrary_DamperVectorWithSameDampTime_Statics
	{
		struct ECameraLibrary_eventDamperVectorWithSameDampTime_Parms
		{
			FDampParams DampParams;
			float DeltaSeconds;
			FVector Input;
			float DampTime;
			FVector Output;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DampParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DampParams;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DampTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraLibrary_DamperVectorWithSameDampTime_Statics::NewProp_DampParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UECameraLibrary_DamperVectorWithSameDampTime_Statics::NewProp_DampParams = { "DampParams", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraLibrary_eventDamperVectorWithSameDampTime_Parms, DampParams), Z_Construct_UScriptStruct_FDampParams, METADATA_PARAMS(Z_Construct_UFunction_UECameraLibrary_DamperVectorWithSameDampTime_Statics::NewProp_DampParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraLibrary_DamperVectorWithSameDampTime_Statics::NewProp_DampParams_MetaData)) }; // 4182365953
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraLibrary_DamperVectorWithSameDampTime_Statics::NewProp_DeltaSeconds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UECameraLibrary_DamperVectorWithSameDampTime_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraLibrary_eventDamperVectorWithSameDampTime_Parms, DeltaSeconds), METADATA_PARAMS(Z_Construct_UFunction_UECameraLibrary_DamperVectorWithSameDampTime_Statics::NewProp_DeltaSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraLibrary_DamperVectorWithSameDampTime_Statics::NewProp_DeltaSeconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraLibrary_DamperVectorWithSameDampTime_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UECameraLibrary_DamperVectorWithSameDampTime_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraLibrary_eventDamperVectorWithSameDampTime_Parms, Input), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UECameraLibrary_DamperVectorWithSameDampTime_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraLibrary_DamperVectorWithSameDampTime_Statics::NewProp_Input_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UECameraLibrary_DamperVectorWithSameDampTime_Statics::NewProp_DampTime = { "DampTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraLibrary_eventDamperVectorWithSameDampTime_Parms, DampTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UECameraLibrary_DamperVectorWithSameDampTime_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraLibrary_eventDamperVectorWithSameDampTime_Parms, Output), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UECameraLibrary_DamperVectorWithSameDampTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraLibrary_DamperVectorWithSameDampTime_Statics::NewProp_DampParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraLibrary_DamperVectorWithSameDampTime_Statics::NewProp_DeltaSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraLibrary_DamperVectorWithSameDampTime_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraLibrary_DamperVectorWithSameDampTime_Statics::NewProp_DampTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraLibrary_DamperVectorWithSameDampTime_Statics::NewProp_Output,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraLibrary_DamperVectorWithSameDampTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "ECamera|Utils" },
		{ "Comment", "/** Damp a vector with the same damp time for all elements in the vector.\n\x09 * @param DampParams - A set of damp parameters.\n\x09 * @param DeltaSeconds - The elapsed time since last frame.\n\x09 * @param Input - Input vector to damp.\n\x09 * @param DampTime - Damp time (float).\n\x09 * @param Output - Resulting damped output vector.\n\x09 */" },
		{ "DisplayName", "DampVectorWithSameDampTime" },
		{ "ModuleRelativePath", "Public/Utils/ECameraLibrary.h" },
		{ "ToolTip", "Damp a vector with the same damp time for all elements in the vector.\n@param DampParams - A set of damp parameters.\n@param DeltaSeconds - The elapsed time since last frame.\n@param Input - Input vector to damp.\n@param DampTime - Damp time (float).\n@param Output - Resulting damped output vector." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UECameraLibrary_DamperVectorWithSameDampTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UECameraLibrary, nullptr, "DamperVectorWithSameDampTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UECameraLibrary_DamperVectorWithSameDampTime_Statics::ECameraLibrary_eventDamperVectorWithSameDampTime_Parms), Z_Construct_UFunction_UECameraLibrary_DamperVectorWithSameDampTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraLibrary_DamperVectorWithSameDampTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UECameraLibrary_DamperVectorWithSameDampTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraLibrary_DamperVectorWithSameDampTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UECameraLibrary_DamperVectorWithSameDampTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UECameraLibrary_DamperVectorWithSameDampTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UECameraLibrary_GetActiveCamera_Statics
	{
		struct ECameraLibrary_eventGetActiveCamera_Parms
		{
			const UObject* WorldContextObject;
			AECameraBase* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraLibrary_GetActiveCamera_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UECameraLibrary_GetActiveCamera_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraLibrary_eventGetActiveCamera_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UECameraLibrary_GetActiveCamera_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraLibrary_GetActiveCamera_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UECameraLibrary_GetActiveCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraLibrary_eventGetActiveCamera_Parms, ReturnValue), Z_Construct_UClass_AECameraBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UECameraLibrary_GetActiveCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraLibrary_GetActiveCamera_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraLibrary_GetActiveCamera_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraLibrary_GetActiveCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "ECamera|Utils" },
		{ "Comment", "/** Get the current active `ECameraBase` camera. */" },
		{ "DisplayName", "GetActiveCamera" },
		{ "ModuleRelativePath", "Public/Utils/ECameraLibrary.h" },
		{ "ToolTip", "Get the current active `ECameraBase` camera." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UECameraLibrary_GetActiveCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UECameraLibrary, nullptr, "GetActiveCamera", nullptr, nullptr, sizeof(Z_Construct_UFunction_UECameraLibrary_GetActiveCamera_Statics::ECameraLibrary_eventGetActiveCamera_Parms), Z_Construct_UFunction_UECameraLibrary_GetActiveCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraLibrary_GetActiveCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UECameraLibrary_GetActiveCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraLibrary_GetActiveCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UECameraLibrary_GetActiveCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UECameraLibrary_GetActiveCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UECameraLibrary_GetLocalSpacePosition_Statics
	{
		struct ECameraLibrary_eventGetLocalSpacePosition_Parms
		{
			const AActor* Camera;
			FVector InputPosition;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputPosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraLibrary_GetLocalSpacePosition_Statics::NewProp_Camera_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UECameraLibrary_GetLocalSpacePosition_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraLibrary_eventGetLocalSpacePosition_Parms, Camera), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UECameraLibrary_GetLocalSpacePosition_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraLibrary_GetLocalSpacePosition_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraLibrary_GetLocalSpacePosition_Statics::NewProp_InputPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UECameraLibrary_GetLocalSpacePosition_Statics::NewProp_InputPosition = { "InputPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraLibrary_eventGetLocalSpacePosition_Parms, InputPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UECameraLibrary_GetLocalSpacePosition_Statics::NewProp_InputPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraLibrary_GetLocalSpacePosition_Statics::NewProp_InputPosition_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UECameraLibrary_GetLocalSpacePosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraLibrary_eventGetLocalSpacePosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UECameraLibrary_GetLocalSpacePosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraLibrary_GetLocalSpacePosition_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraLibrary_GetLocalSpacePosition_Statics::NewProp_InputPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraLibrary_GetLocalSpacePosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraLibrary_GetLocalSpacePosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "ECamera|Utils" },
		{ "Comment", "/** Return the camera local space coordinate of an input world space position.\n\x09 * @param Camera - Camera.\n\x09 * @param InputPosition - World space input position.\n\x09 */" },
		{ "DisplayName", "GetCameraLocalSpaceCoordinateWithActor" },
		{ "ModuleRelativePath", "Public/Utils/ECameraLibrary.h" },
		{ "ToolTip", "Return the camera local space coordinate of an input world space position.\n@param Camera - Camera.\n@param InputPosition - World space input position." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UECameraLibrary_GetLocalSpacePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UECameraLibrary, nullptr, "GetLocalSpacePosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UECameraLibrary_GetLocalSpacePosition_Statics::ECameraLibrary_eventGetLocalSpacePosition_Parms), Z_Construct_UFunction_UECameraLibrary_GetLocalSpacePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraLibrary_GetLocalSpacePosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UECameraLibrary_GetLocalSpacePosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraLibrary_GetLocalSpacePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UECameraLibrary_GetLocalSpacePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UECameraLibrary_GetLocalSpacePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UECameraLibrary_GetLocalSpacePositionWithVectors_Statics
	{
		struct ECameraLibrary_eventGetLocalSpacePositionWithVectors_Parms
		{
			FVector PivotPosition;
			FVector ForwardVector;
			FVector RightVector;
			FVector UpVector;
			FVector InputPosition;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PivotPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForwardVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ForwardVector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RightVector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UpVector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputPosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraLibrary_GetLocalSpacePositionWithVectors_Statics::NewProp_PivotPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UECameraLibrary_GetLocalSpacePositionWithVectors_Statics::NewProp_PivotPosition = { "PivotPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraLibrary_eventGetLocalSpacePositionWithVectors_Parms, PivotPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UECameraLibrary_GetLocalSpacePositionWithVectors_Statics::NewProp_PivotPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraLibrary_GetLocalSpacePositionWithVectors_Statics::NewProp_PivotPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraLibrary_GetLocalSpacePositionWithVectors_Statics::NewProp_ForwardVector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UECameraLibrary_GetLocalSpacePositionWithVectors_Statics::NewProp_ForwardVector = { "ForwardVector", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraLibrary_eventGetLocalSpacePositionWithVectors_Parms, ForwardVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UECameraLibrary_GetLocalSpacePositionWithVectors_Statics::NewProp_ForwardVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraLibrary_GetLocalSpacePositionWithVectors_Statics::NewProp_ForwardVector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraLibrary_GetLocalSpacePositionWithVectors_Statics::NewProp_RightVector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UECameraLibrary_GetLocalSpacePositionWithVectors_Statics::NewProp_RightVector = { "RightVector", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraLibrary_eventGetLocalSpacePositionWithVectors_Parms, RightVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UECameraLibrary_GetLocalSpacePositionWithVectors_Statics::NewProp_RightVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraLibrary_GetLocalSpacePositionWithVectors_Statics::NewProp_RightVector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraLibrary_GetLocalSpacePositionWithVectors_Statics::NewProp_UpVector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UECameraLibrary_GetLocalSpacePositionWithVectors_Statics::NewProp_UpVector = { "UpVector", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraLibrary_eventGetLocalSpacePositionWithVectors_Parms, UpVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UECameraLibrary_GetLocalSpacePositionWithVectors_Statics::NewProp_UpVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraLibrary_GetLocalSpacePositionWithVectors_Statics::NewProp_UpVector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraLibrary_GetLocalSpacePositionWithVectors_Statics::NewProp_InputPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UECameraLibrary_GetLocalSpacePositionWithVectors_Statics::NewProp_InputPosition = { "InputPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraLibrary_eventGetLocalSpacePositionWithVectors_Parms, InputPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UECameraLibrary_GetLocalSpacePositionWithVectors_Statics::NewProp_InputPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraLibrary_GetLocalSpacePositionWithVectors_Statics::NewProp_InputPosition_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UECameraLibrary_GetLocalSpacePositionWithVectors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraLibrary_eventGetLocalSpacePositionWithVectors_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UECameraLibrary_GetLocalSpacePositionWithVectors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraLibrary_GetLocalSpacePositionWithVectors_Statics::NewProp_PivotPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraLibrary_GetLocalSpacePositionWithVectors_Statics::NewProp_ForwardVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraLibrary_GetLocalSpacePositionWithVectors_Statics::NewProp_RightVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraLibrary_GetLocalSpacePositionWithVectors_Statics::NewProp_UpVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraLibrary_GetLocalSpacePositionWithVectors_Statics::NewProp_InputPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraLibrary_GetLocalSpacePositionWithVectors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraLibrary_GetLocalSpacePositionWithVectors_Statics::Function_MetaDataParams[] = {
		{ "Category", "ECamera|Utils" },
		{ "Comment", "/** Return the camera local space coordinate of an input world space position.\n\x09 * @param PivotPosition - Pivot position, for example, the camera's location.\n\x09 * @param ForwardVector - Reference forward vector, for example, the camera's forward vector.\n\x09 * @param RightVector - Reference right vector, for example, the camera's right vector.\n\x09 * @param UpVector - Reference up vector, for example, the camera's up vector.\n\x09 * @param InputPosition - World space input position.\n\x09 */" },
		{ "DisplayName", "GetCameraLocalSpaceCoordinateWithVectors" },
		{ "ModuleRelativePath", "Public/Utils/ECameraLibrary.h" },
		{ "ToolTip", "Return the camera local space coordinate of an input world space position.\n@param PivotPosition - Pivot position, for example, the camera's location.\n@param ForwardVector - Reference forward vector, for example, the camera's forward vector.\n@param RightVector - Reference right vector, for example, the camera's right vector.\n@param UpVector - Reference up vector, for example, the camera's up vector.\n@param InputPosition - World space input position." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UECameraLibrary_GetLocalSpacePositionWithVectors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UECameraLibrary, nullptr, "GetLocalSpacePositionWithVectors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UECameraLibrary_GetLocalSpacePositionWithVectors_Statics::ECameraLibrary_eventGetLocalSpacePositionWithVectors_Parms), Z_Construct_UFunction_UECameraLibrary_GetLocalSpacePositionWithVectors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraLibrary_GetLocalSpacePositionWithVectors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UECameraLibrary_GetLocalSpacePositionWithVectors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraLibrary_GetLocalSpacePositionWithVectors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UECameraLibrary_GetLocalSpacePositionWithVectors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UECameraLibrary_GetLocalSpacePositionWithVectors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UECameraLibrary_SpringDampVector_Statics
	{
		struct ECameraLibrary_eventSpringDampVector_Parms
		{
			FDampParams DampParams;
			float DeltaSeconds;
			FVector TemporalInput;
			FVector SpatialInput;
			FVector Output;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DampParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DampParams;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemporalInput_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TemporalInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpatialInput_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpatialInput;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraLibrary_SpringDampVector_Statics::NewProp_DampParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UECameraLibrary_SpringDampVector_Statics::NewProp_DampParams = { "DampParams", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraLibrary_eventSpringDampVector_Parms, DampParams), Z_Construct_UScriptStruct_FDampParams, METADATA_PARAMS(Z_Construct_UFunction_UECameraLibrary_SpringDampVector_Statics::NewProp_DampParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraLibrary_SpringDampVector_Statics::NewProp_DampParams_MetaData)) }; // 4182365953
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraLibrary_SpringDampVector_Statics::NewProp_DeltaSeconds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UECameraLibrary_SpringDampVector_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraLibrary_eventSpringDampVector_Parms, DeltaSeconds), METADATA_PARAMS(Z_Construct_UFunction_UECameraLibrary_SpringDampVector_Statics::NewProp_DeltaSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraLibrary_SpringDampVector_Statics::NewProp_DeltaSeconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraLibrary_SpringDampVector_Statics::NewProp_TemporalInput_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UECameraLibrary_SpringDampVector_Statics::NewProp_TemporalInput = { "TemporalInput", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraLibrary_eventSpringDampVector_Parms, TemporalInput), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UECameraLibrary_SpringDampVector_Statics::NewProp_TemporalInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraLibrary_SpringDampVector_Statics::NewProp_TemporalInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraLibrary_SpringDampVector_Statics::NewProp_SpatialInput_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UECameraLibrary_SpringDampVector_Statics::NewProp_SpatialInput = { "SpatialInput", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraLibrary_eventSpringDampVector_Parms, SpatialInput), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UECameraLibrary_SpringDampVector_Statics::NewProp_SpatialInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraLibrary_SpringDampVector_Statics::NewProp_SpatialInput_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UECameraLibrary_SpringDampVector_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraLibrary_eventSpringDampVector_Parms, Output), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UECameraLibrary_SpringDampVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraLibrary_SpringDampVector_Statics::NewProp_DampParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraLibrary_SpringDampVector_Statics::NewProp_DeltaSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraLibrary_SpringDampVector_Statics::NewProp_TemporalInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraLibrary_SpringDampVector_Statics::NewProp_SpatialInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraLibrary_SpringDampVector_Statics::NewProp_Output,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraLibrary_SpringDampVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "ECamera|Utils" },
		{ "Comment", "/** Use a simple spring mass system to damp a vector. Note that spring damping may cause unstable camera behavior.\n\x09 *  If it is not what you really want, you are supposed to use other damping methods. \n\x09 * @param DampParams - A set of damp parameters.\n\x09 * @param DeltaSeconds - The elapsed time since last frame.\n\x09 * @param TemporalInput - Camera `current position` - `previous position`\n\x09 * @param SpatialInput - Camera `desired position` - `current position` \n\x09 * @param Output - Resulting damped output vector.\n\x09 */" },
		{ "DisplayName", "SpringDampVector" },
		{ "ModuleRelativePath", "Public/Utils/ECameraLibrary.h" },
		{ "ToolTip", "Use a simple spring mass system to damp a vector. Note that spring damping may cause unstable camera behavior.\nIf it is not what you really want, you are supposed to use other damping methods.\n@param DampParams - A set of damp parameters.\n@param DeltaSeconds - The elapsed time since last frame.\n@param TemporalInput - Camera `current position` - `previous position`\n@param SpatialInput - Camera `desired position` - `current position`\n@param Output - Resulting damped output vector." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UECameraLibrary_SpringDampVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UECameraLibrary, nullptr, "SpringDampVector", nullptr, nullptr, sizeof(Z_Construct_UFunction_UECameraLibrary_SpringDampVector_Statics::ECameraLibrary_eventSpringDampVector_Parms), Z_Construct_UFunction_UECameraLibrary_SpringDampVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraLibrary_SpringDampVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UECameraLibrary_SpringDampVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraLibrary_SpringDampVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UECameraLibrary_SpringDampVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UECameraLibrary_SpringDampVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UECameraLibrary_TerminateActiveCamera_Statics
	{
		struct ECameraLibrary_eventTerminateActiveCamera_Parms
		{
			const UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraLibrary_TerminateActiveCamera_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UECameraLibrary_TerminateActiveCamera_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraLibrary_eventTerminateActiveCamera_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UECameraLibrary_TerminateActiveCamera_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraLibrary_TerminateActiveCamera_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UECameraLibrary_TerminateActiveCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraLibrary_TerminateActiveCamera_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraLibrary_TerminateActiveCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "ECamera|Utils" },
		{ "Comment", "/** Immediately terminate current active camera and gets back to previous active camera.\n\x09 *  If you only want to call a new camera, use CallCamera node instead, NOT this node.\n\x09 */" },
		{ "DisplayName", "TerminateActiveCamera" },
		{ "ModuleRelativePath", "Public/Utils/ECameraLibrary.h" },
		{ "ToolTip", "Immediately terminate current active camera and gets back to previous active camera.\nIf you only want to call a new camera, use CallCamera node instead, NOT this node." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UECameraLibrary_TerminateActiveCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UECameraLibrary, nullptr, "TerminateActiveCamera", nullptr, nullptr, sizeof(Z_Construct_UFunction_UECameraLibrary_TerminateActiveCamera_Statics::ECameraLibrary_eventTerminateActiveCamera_Parms), Z_Construct_UFunction_UECameraLibrary_TerminateActiveCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraLibrary_TerminateActiveCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UECameraLibrary_TerminateActiveCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraLibrary_TerminateActiveCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UECameraLibrary_TerminateActiveCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UECameraLibrary_TerminateActiveCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UECameraLibrary);
	UClass* Z_Construct_UClass_UECameraLibrary_NoRegister()
	{
		return UECameraLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UECameraLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UECameraLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyCamera,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UECameraLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UECameraLibrary_CallCamera, "CallCamera" }, // 3501800046
		{ &Z_Construct_UFunction_UECameraLibrary_DamperQuaternion, "DamperQuaternion" }, // 2128419836
		{ &Z_Construct_UFunction_UECameraLibrary_DamperRotatorWithDifferentDampTime, "DamperRotatorWithDifferentDampTime" }, // 333729499
		{ &Z_Construct_UFunction_UECameraLibrary_DamperRotatorWithSameDampTime, "DamperRotatorWithSameDampTime" }, // 2685516747
		{ &Z_Construct_UFunction_UECameraLibrary_DamperValue, "DamperValue" }, // 406666889
		{ &Z_Construct_UFunction_UECameraLibrary_DamperVectorWithDifferentDampTime, "DamperVectorWithDifferentDampTime" }, // 3000028789
		{ &Z_Construct_UFunction_UECameraLibrary_DamperVectorWithSameDampTime, "DamperVectorWithSameDampTime" }, // 543018113
		{ &Z_Construct_UFunction_UECameraLibrary_GetActiveCamera, "GetActiveCamera" }, // 4222838299
		{ &Z_Construct_UFunction_UECameraLibrary_GetLocalSpacePosition, "GetLocalSpacePosition" }, // 2047166676
		{ &Z_Construct_UFunction_UECameraLibrary_GetLocalSpacePositionWithVectors, "GetLocalSpacePositionWithVectors" }, // 2024133041
		{ &Z_Construct_UFunction_UECameraLibrary_SpringDampVector, "SpringDampVector" }, // 1324523585
		{ &Z_Construct_UFunction_UECameraLibrary_TerminateActiveCamera, "TerminateActiveCamera" }, // 1492414648
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UECameraLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UCameraLibrary contains functions for blueprint callable nodes.\n */" },
		{ "IncludePath", "Utils/ECameraLibrary.h" },
		{ "ModuleRelativePath", "Public/Utils/ECameraLibrary.h" },
		{ "ToolTip", "UCameraLibrary contains functions for blueprint callable nodes." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UECameraLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UECameraLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UECameraLibrary_Statics::ClassParams = {
		&UECameraLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UECameraLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UECameraLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UECameraLibrary()
	{
		if (!Z_Registration_Info_UClass_UECameraLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UECameraLibrary.OuterSingleton, Z_Construct_UClass_UECameraLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UECameraLibrary.OuterSingleton;
	}
	template<> EASYCAMERA_API UClass* StaticClass<UECameraLibrary>()
	{
		return UECameraLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UECameraLibrary);
	UECameraLibrary::~UECameraLibrary() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UECameraLibrary, UECameraLibrary::StaticClass, TEXT("UECameraLibrary"), &Z_Registration_Info_UClass_UECameraLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UECameraLibrary), 1339356528U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraLibrary_h_985019739(TEXT("/Script/EasyCamera"),
		Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
