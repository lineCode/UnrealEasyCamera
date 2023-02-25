// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyCamera/Public/Utils/ECameraGroupActorComponent.h"
#include "EasyCamera/Public/Utils/ECameraTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECameraGroupActorComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	EASYCAMERA_API UClass* Z_Construct_UClass_UECameraGroupActorComponent();
	EASYCAMERA_API UClass* Z_Construct_UClass_UECameraGroupActorComponent_NoRegister();
	EASYCAMERA_API UEnum* Z_Construct_UEnum_EasyCamera_EGroupLocationMethod();
	EASYCAMERA_API UEnum* Z_Construct_UEnum_EasyCamera_EGroupRotationMethod();
	EASYCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FBoundingWrappedActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_EasyCamera();
// End Cross Module References
	DEFINE_FUNCTION(UECameraGroupActorComponent::execAddTargetActor)
	{
		P_GET_STRUCT_REF(FBoundingWrappedActor,Z_Param_Out_InTargetActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddTargetActor(Z_Param_Out_InTargetActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UECameraGroupActorComponent::execSetBoundingActorExcludeBoundingBox)
	{
		P_GET_STRUCT_REF(FBoundingWrappedActor,Z_Param_Out_BoundingWrappedActor);
		P_GET_UBOOL(Z_Param_bInExcludeBoundingBox);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBoundingActorExcludeBoundingBox(Z_Param_Out_BoundingWrappedActor,Z_Param_bInExcludeBoundingBox);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UECameraGroupActorComponent::execSetBoundingActorHeight)
	{
		P_GET_STRUCT_REF(FBoundingWrappedActor,Z_Param_Out_BoundingWrappedActor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InHeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBoundingActorHeight(Z_Param_Out_BoundingWrappedActor,Z_Param_InHeight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UECameraGroupActorComponent::execSetBoundingActorWidth)
	{
		P_GET_STRUCT_REF(FBoundingWrappedActor,Z_Param_Out_BoundingWrappedActor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InWidth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBoundingActorWidth(Z_Param_Out_BoundingWrappedActor,Z_Param_InWidth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UECameraGroupActorComponent::execSetBoundingActorWeight)
	{
		P_GET_STRUCT_REF(FBoundingWrappedActor,Z_Param_Out_BoundingWrappedActor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InWeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBoundingActorWeight(Z_Param_Out_BoundingWrappedActor,Z_Param_InWeight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UECameraGroupActorComponent::execGetLocationBasedOnDistance)
	{
		P_GET_UBOOL(Z_Param_bIsWeighed);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetLocationBasedOnDistance(Z_Param_bIsWeighed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UECameraGroupActorComponent::execGetFarestOrClosestLocation)
	{
		P_GET_UBOOL(Z_Param_bIsFarest);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetFarestOrClosestLocation(Z_Param_bIsFarest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UECameraGroupActorComponent::execGetNormalizer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetNormalizer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UECameraGroupActorComponent::execCheckWeightAllZero)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckWeightAllZero();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UECameraGroupActorComponent::execGetAverageRotation)
	{
		P_GET_UBOOL(Z_Param_bIsArithmetic);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetAverageRotation(Z_Param_bIsArithmetic);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UECameraGroupActorComponent::execGetAverageLocation)
	{
		P_GET_UBOOL(Z_Param_bIsArithmetic);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetAverageLocation(Z_Param_bIsArithmetic);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UECameraGroupActorComponent::execGetGroupActorRotation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetGroupActorRotation_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UECameraGroupActorComponent::execGetGroupActorLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetGroupActorLocation_Implementation();
		P_NATIVE_END;
	}
	struct ECameraGroupActorComponent_eventGetGroupActorLocation_Parms
	{
		FVector ReturnValue;

		/** Constructor, initializes return property only **/
		ECameraGroupActorComponent_eventGetGroupActorLocation_Parms()
			: ReturnValue(ForceInit)
		{
		}
	};
	struct ECameraGroupActorComponent_eventGetGroupActorRotation_Parms
	{
		FRotator ReturnValue;

		/** Constructor, initializes return property only **/
		ECameraGroupActorComponent_eventGetGroupActorRotation_Parms()
			: ReturnValue(ForceInit)
		{
		}
	};
	static FName NAME_UECameraGroupActorComponent_GetGroupActorLocation = FName(TEXT("GetGroupActorLocation"));
	FVector UECameraGroupActorComponent::GetGroupActorLocation()
	{
		ECameraGroupActorComponent_eventGetGroupActorLocation_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UECameraGroupActorComponent_GetGroupActorLocation),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UECameraGroupActorComponent_GetGroupActorRotation = FName(TEXT("GetGroupActorRotation"));
	FRotator UECameraGroupActorComponent::GetGroupActorRotation()
	{
		ECameraGroupActorComponent_eventGetGroupActorRotation_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UECameraGroupActorComponent_GetGroupActorRotation),&Parms);
		return Parms.ReturnValue;
	}
	void UECameraGroupActorComponent::StaticRegisterNativesUECameraGroupActorComponent()
	{
		UClass* Class = UECameraGroupActorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddTargetActor", &UECameraGroupActorComponent::execAddTargetActor },
			{ "CheckWeightAllZero", &UECameraGroupActorComponent::execCheckWeightAllZero },
			{ "GetAverageLocation", &UECameraGroupActorComponent::execGetAverageLocation },
			{ "GetAverageRotation", &UECameraGroupActorComponent::execGetAverageRotation },
			{ "GetFarestOrClosestLocation", &UECameraGroupActorComponent::execGetFarestOrClosestLocation },
			{ "GetGroupActorLocation", &UECameraGroupActorComponent::execGetGroupActorLocation },
			{ "GetGroupActorRotation", &UECameraGroupActorComponent::execGetGroupActorRotation },
			{ "GetLocationBasedOnDistance", &UECameraGroupActorComponent::execGetLocationBasedOnDistance },
			{ "GetNormalizer", &UECameraGroupActorComponent::execGetNormalizer },
			{ "SetBoundingActorExcludeBoundingBox", &UECameraGroupActorComponent::execSetBoundingActorExcludeBoundingBox },
			{ "SetBoundingActorHeight", &UECameraGroupActorComponent::execSetBoundingActorHeight },
			{ "SetBoundingActorWeight", &UECameraGroupActorComponent::execSetBoundingActorWeight },
			{ "SetBoundingActorWidth", &UECameraGroupActorComponent::execSetBoundingActorWidth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UECameraGroupActorComponent_AddTargetActor_Statics
	{
		struct ECameraGroupActorComponent_eventAddTargetActor_Parms
		{
			FBoundingWrappedActor InTargetActor;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InTargetActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UECameraGroupActorComponent_AddTargetActor_Statics::NewProp_InTargetActor = { "InTargetActor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraGroupActorComponent_eventAddTargetActor_Parms, InTargetActor), Z_Construct_UScriptStruct_FBoundingWrappedActor, METADATA_PARAMS(nullptr, 0) }; // 3484375314
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UECameraGroupActorComponent_AddTargetActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraGroupActorComponent_AddTargetActor_Statics::NewProp_InTargetActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraGroupActorComponent_AddTargetActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "ECamera|GroupActor" },
		{ "Comment", "/** Add a target actor. */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraGroupActorComponent.h" },
		{ "ToolTip", "Add a target actor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UECameraGroupActorComponent_AddTargetActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UECameraGroupActorComponent, nullptr, "AddTargetActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UECameraGroupActorComponent_AddTargetActor_Statics::ECameraGroupActorComponent_eventAddTargetActor_Parms), Z_Construct_UFunction_UECameraGroupActorComponent_AddTargetActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraGroupActorComponent_AddTargetActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UECameraGroupActorComponent_AddTargetActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraGroupActorComponent_AddTargetActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UECameraGroupActorComponent_AddTargetActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UECameraGroupActorComponent_AddTargetActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UECameraGroupActorComponent_CheckWeightAllZero_Statics
	{
		struct ECameraGroupActorComponent_eventCheckWeightAllZero_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UECameraGroupActorComponent_CheckWeightAllZero_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ECameraGroupActorComponent_eventCheckWeightAllZero_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UECameraGroupActorComponent_CheckWeightAllZero_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ECameraGroupActorComponent_eventCheckWeightAllZero_Parms), &Z_Construct_UFunction_UECameraGroupActorComponent_CheckWeightAllZero_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UECameraGroupActorComponent_CheckWeightAllZero_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraGroupActorComponent_CheckWeightAllZero_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraGroupActorComponent_CheckWeightAllZero_Statics::Function_MetaDataParams[] = {
		{ "Category", "ECamera|GroupActor" },
		{ "Comment", "/** Check whether all weights are zero. */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraGroupActorComponent.h" },
		{ "ToolTip", "Check whether all weights are zero." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UECameraGroupActorComponent_CheckWeightAllZero_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UECameraGroupActorComponent, nullptr, "CheckWeightAllZero", nullptr, nullptr, sizeof(Z_Construct_UFunction_UECameraGroupActorComponent_CheckWeightAllZero_Statics::ECameraGroupActorComponent_eventCheckWeightAllZero_Parms), Z_Construct_UFunction_UECameraGroupActorComponent_CheckWeightAllZero_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraGroupActorComponent_CheckWeightAllZero_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UECameraGroupActorComponent_CheckWeightAllZero_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraGroupActorComponent_CheckWeightAllZero_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UECameraGroupActorComponent_CheckWeightAllZero()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UECameraGroupActorComponent_CheckWeightAllZero_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UECameraGroupActorComponent_GetAverageLocation_Statics
	{
		struct ECameraGroupActorComponent_eventGetAverageLocation_Parms
		{
			bool bIsArithmetic;
			FVector ReturnValue;
		};
		static void NewProp_bIsArithmetic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsArithmetic;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UECameraGroupActorComponent_GetAverageLocation_Statics::NewProp_bIsArithmetic_SetBit(void* Obj)
	{
		((ECameraGroupActorComponent_eventGetAverageLocation_Parms*)Obj)->bIsArithmetic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UECameraGroupActorComponent_GetAverageLocation_Statics::NewProp_bIsArithmetic = { "bIsArithmetic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ECameraGroupActorComponent_eventGetAverageLocation_Parms), &Z_Construct_UFunction_UECameraGroupActorComponent_GetAverageLocation_Statics::NewProp_bIsArithmetic_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UECameraGroupActorComponent_GetAverageLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraGroupActorComponent_eventGetAverageLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UECameraGroupActorComponent_GetAverageLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraGroupActorComponent_GetAverageLocation_Statics::NewProp_bIsArithmetic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraGroupActorComponent_GetAverageLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraGroupActorComponent_GetAverageLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "ECamera|GroupActor" },
		{ "Comment", "/** Calculate average location. If bIsArithemetic is true, this function will return arithmetic average. Otherwise it returns weighed average. Used for GroupLocationMethod::ArithmeticAverage and GroupLocationMethod::WeightedAverage. */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraGroupActorComponent.h" },
		{ "ToolTip", "Calculate average location. If bIsArithemetic is true, this function will return arithmetic average. Otherwise it returns weighed average. Used for GroupLocationMethod::ArithmeticAverage and GroupLocationMethod::WeightedAverage." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UECameraGroupActorComponent_GetAverageLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UECameraGroupActorComponent, nullptr, "GetAverageLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UECameraGroupActorComponent_GetAverageLocation_Statics::ECameraGroupActorComponent_eventGetAverageLocation_Parms), Z_Construct_UFunction_UECameraGroupActorComponent_GetAverageLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraGroupActorComponent_GetAverageLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UECameraGroupActorComponent_GetAverageLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraGroupActorComponent_GetAverageLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UECameraGroupActorComponent_GetAverageLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UECameraGroupActorComponent_GetAverageLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UECameraGroupActorComponent_GetAverageRotation_Statics
	{
		struct ECameraGroupActorComponent_eventGetAverageRotation_Parms
		{
			bool bIsArithmetic;
			FRotator ReturnValue;
		};
		static void NewProp_bIsArithmetic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsArithmetic;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UECameraGroupActorComponent_GetAverageRotation_Statics::NewProp_bIsArithmetic_SetBit(void* Obj)
	{
		((ECameraGroupActorComponent_eventGetAverageRotation_Parms*)Obj)->bIsArithmetic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UECameraGroupActorComponent_GetAverageRotation_Statics::NewProp_bIsArithmetic = { "bIsArithmetic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ECameraGroupActorComponent_eventGetAverageRotation_Parms), &Z_Construct_UFunction_UECameraGroupActorComponent_GetAverageRotation_Statics::NewProp_bIsArithmetic_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UECameraGroupActorComponent_GetAverageRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraGroupActorComponent_eventGetAverageRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UECameraGroupActorComponent_GetAverageRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraGroupActorComponent_GetAverageRotation_Statics::NewProp_bIsArithmetic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraGroupActorComponent_GetAverageRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraGroupActorComponent_GetAverageRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "ECamera|GroupActor" },
		{ "Comment", "/** Calculate average rotation. If bIsArithemetic is true, this function will return arithmetic average. Otherwise it returns weighed average. Used for EGroupRotationMethod::ArithmeticAverage and EGroupRotationMethod::WeightedAverage. */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraGroupActorComponent.h" },
		{ "ToolTip", "Calculate average rotation. If bIsArithemetic is true, this function will return arithmetic average. Otherwise it returns weighed average. Used for EGroupRotationMethod::ArithmeticAverage and EGroupRotationMethod::WeightedAverage." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UECameraGroupActorComponent_GetAverageRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UECameraGroupActorComponent, nullptr, "GetAverageRotation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UECameraGroupActorComponent_GetAverageRotation_Statics::ECameraGroupActorComponent_eventGetAverageRotation_Parms), Z_Construct_UFunction_UECameraGroupActorComponent_GetAverageRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraGroupActorComponent_GetAverageRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UECameraGroupActorComponent_GetAverageRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraGroupActorComponent_GetAverageRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UECameraGroupActorComponent_GetAverageRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UECameraGroupActorComponent_GetAverageRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UECameraGroupActorComponent_GetFarestOrClosestLocation_Statics
	{
		struct ECameraGroupActorComponent_eventGetFarestOrClosestLocation_Parms
		{
			bool bIsFarest;
			FVector ReturnValue;
		};
		static void NewProp_bIsFarest_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFarest;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UECameraGroupActorComponent_GetFarestOrClosestLocation_Statics::NewProp_bIsFarest_SetBit(void* Obj)
	{
		((ECameraGroupActorComponent_eventGetFarestOrClosestLocation_Parms*)Obj)->bIsFarest = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UECameraGroupActorComponent_GetFarestOrClosestLocation_Statics::NewProp_bIsFarest = { "bIsFarest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ECameraGroupActorComponent_eventGetFarestOrClosestLocation_Parms), &Z_Construct_UFunction_UECameraGroupActorComponent_GetFarestOrClosestLocation_Statics::NewProp_bIsFarest_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UECameraGroupActorComponent_GetFarestOrClosestLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraGroupActorComponent_eventGetFarestOrClosestLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UECameraGroupActorComponent_GetFarestOrClosestLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraGroupActorComponent_GetFarestOrClosestLocation_Statics::NewProp_bIsFarest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraGroupActorComponent_GetFarestOrClosestLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraGroupActorComponent_GetFarestOrClosestLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "ECamera|GroupActor" },
		{ "Comment", "/** Get farest or cloeset location among all target actors based on the anchor location. Used for EGroupLocationMethod::Closest and EGroupLocationMethod::Farest. */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraGroupActorComponent.h" },
		{ "ToolTip", "Get farest or cloeset location among all target actors based on the anchor location. Used for EGroupLocationMethod::Closest and EGroupLocationMethod::Farest." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UECameraGroupActorComponent_GetFarestOrClosestLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UECameraGroupActorComponent, nullptr, "GetFarestOrClosestLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UECameraGroupActorComponent_GetFarestOrClosestLocation_Statics::ECameraGroupActorComponent_eventGetFarestOrClosestLocation_Parms), Z_Construct_UFunction_UECameraGroupActorComponent_GetFarestOrClosestLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraGroupActorComponent_GetFarestOrClosestLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UECameraGroupActorComponent_GetFarestOrClosestLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraGroupActorComponent_GetFarestOrClosestLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UECameraGroupActorComponent_GetFarestOrClosestLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UECameraGroupActorComponent_GetFarestOrClosestLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UECameraGroupActorComponent_GetGroupActorLocation_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UECameraGroupActorComponent_GetGroupActorLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraGroupActorComponent_eventGetGroupActorLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UECameraGroupActorComponent_GetGroupActorLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraGroupActorComponent_GetGroupActorLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraGroupActorComponent_GetGroupActorLocation_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Calculate group actor location according to GroupLocationMethod. */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraGroupActorComponent.h" },
		{ "ToolTip", "Calculate group actor location according to GroupLocationMethod." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UECameraGroupActorComponent_GetGroupActorLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UECameraGroupActorComponent, nullptr, "GetGroupActorLocation", nullptr, nullptr, sizeof(ECameraGroupActorComponent_eventGetGroupActorLocation_Parms), Z_Construct_UFunction_UECameraGroupActorComponent_GetGroupActorLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraGroupActorComponent_GetGroupActorLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UECameraGroupActorComponent_GetGroupActorLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraGroupActorComponent_GetGroupActorLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UECameraGroupActorComponent_GetGroupActorLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UECameraGroupActorComponent_GetGroupActorLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UECameraGroupActorComponent_GetGroupActorRotation_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UECameraGroupActorComponent_GetGroupActorRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraGroupActorComponent_eventGetGroupActorRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UECameraGroupActorComponent_GetGroupActorRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraGroupActorComponent_GetGroupActorRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraGroupActorComponent_GetGroupActorRotation_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Calculate group actor rotation according to GroupRotationMethod. */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraGroupActorComponent.h" },
		{ "ToolTip", "Calculate group actor rotation according to GroupRotationMethod." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UECameraGroupActorComponent_GetGroupActorRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UECameraGroupActorComponent, nullptr, "GetGroupActorRotation", nullptr, nullptr, sizeof(ECameraGroupActorComponent_eventGetGroupActorRotation_Parms), Z_Construct_UFunction_UECameraGroupActorComponent_GetGroupActorRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraGroupActorComponent_GetGroupActorRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UECameraGroupActorComponent_GetGroupActorRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraGroupActorComponent_GetGroupActorRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UECameraGroupActorComponent_GetGroupActorRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UECameraGroupActorComponent_GetGroupActorRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UECameraGroupActorComponent_GetLocationBasedOnDistance_Statics
	{
		struct ECameraGroupActorComponent_eventGetLocationBasedOnDistance_Parms
		{
			bool bIsWeighed;
			FVector ReturnValue;
		};
		static void NewProp_bIsWeighed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWeighed;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UECameraGroupActorComponent_GetLocationBasedOnDistance_Statics::NewProp_bIsWeighed_SetBit(void* Obj)
	{
		((ECameraGroupActorComponent_eventGetLocationBasedOnDistance_Parms*)Obj)->bIsWeighed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UECameraGroupActorComponent_GetLocationBasedOnDistance_Statics::NewProp_bIsWeighed = { "bIsWeighed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ECameraGroupActorComponent_eventGetLocationBasedOnDistance_Parms), &Z_Construct_UFunction_UECameraGroupActorComponent_GetLocationBasedOnDistance_Statics::NewProp_bIsWeighed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UECameraGroupActorComponent_GetLocationBasedOnDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraGroupActorComponent_eventGetLocationBasedOnDistance_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UECameraGroupActorComponent_GetLocationBasedOnDistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraGroupActorComponent_GetLocationBasedOnDistance_Statics::NewProp_bIsWeighed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraGroupActorComponent_GetLocationBasedOnDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraGroupActorComponent_GetLocationBasedOnDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "ECamera|GroupActor" },
		{ "Comment", "/** Get location based on the distance between anchor location and each target actor's location. Used for EGroupLocationMethod::UnweightedDistanceBased and EGroupLocationMethod::WeightedDistanceBased. */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraGroupActorComponent.h" },
		{ "ToolTip", "Get location based on the distance between anchor location and each target actor's location. Used for EGroupLocationMethod::UnweightedDistanceBased and EGroupLocationMethod::WeightedDistanceBased." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UECameraGroupActorComponent_GetLocationBasedOnDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UECameraGroupActorComponent, nullptr, "GetLocationBasedOnDistance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UECameraGroupActorComponent_GetLocationBasedOnDistance_Statics::ECameraGroupActorComponent_eventGetLocationBasedOnDistance_Parms), Z_Construct_UFunction_UECameraGroupActorComponent_GetLocationBasedOnDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraGroupActorComponent_GetLocationBasedOnDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UECameraGroupActorComponent_GetLocationBasedOnDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraGroupActorComponent_GetLocationBasedOnDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UECameraGroupActorComponent_GetLocationBasedOnDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UECameraGroupActorComponent_GetLocationBasedOnDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UECameraGroupActorComponent_GetNormalizer_Statics
	{
		struct ECameraGroupActorComponent_eventGetNormalizer_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UECameraGroupActorComponent_GetNormalizer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraGroupActorComponent_eventGetNormalizer_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UECameraGroupActorComponent_GetNormalizer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraGroupActorComponent_GetNormalizer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraGroupActorComponent_GetNormalizer_Statics::Function_MetaDataParams[] = {
		{ "Category", "ECamera|GroupActor" },
		{ "Comment", "/** Get the sum of weights.  */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraGroupActorComponent.h" },
		{ "ToolTip", "Get the sum of weights." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UECameraGroupActorComponent_GetNormalizer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UECameraGroupActorComponent, nullptr, "GetNormalizer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UECameraGroupActorComponent_GetNormalizer_Statics::ECameraGroupActorComponent_eventGetNormalizer_Parms), Z_Construct_UFunction_UECameraGroupActorComponent_GetNormalizer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraGroupActorComponent_GetNormalizer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UECameraGroupActorComponent_GetNormalizer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraGroupActorComponent_GetNormalizer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UECameraGroupActorComponent_GetNormalizer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UECameraGroupActorComponent_GetNormalizer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorExcludeBoundingBox_Statics
	{
		struct ECameraGroupActorComponent_eventSetBoundingActorExcludeBoundingBox_Parms
		{
			FBoundingWrappedActor BoundingWrappedActor;
			bool bInExcludeBoundingBox;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoundingWrappedActor;
		static void NewProp_bInExcludeBoundingBox_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInExcludeBoundingBox;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorExcludeBoundingBox_Statics::NewProp_BoundingWrappedActor = { "BoundingWrappedActor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraGroupActorComponent_eventSetBoundingActorExcludeBoundingBox_Parms, BoundingWrappedActor), Z_Construct_UScriptStruct_FBoundingWrappedActor, METADATA_PARAMS(nullptr, 0) }; // 3484375314
	void Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorExcludeBoundingBox_Statics::NewProp_bInExcludeBoundingBox_SetBit(void* Obj)
	{
		((ECameraGroupActorComponent_eventSetBoundingActorExcludeBoundingBox_Parms*)Obj)->bInExcludeBoundingBox = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorExcludeBoundingBox_Statics::NewProp_bInExcludeBoundingBox = { "bInExcludeBoundingBox", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ECameraGroupActorComponent_eventSetBoundingActorExcludeBoundingBox_Parms), &Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorExcludeBoundingBox_Statics::NewProp_bInExcludeBoundingBox_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorExcludeBoundingBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorExcludeBoundingBox_Statics::NewProp_BoundingWrappedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorExcludeBoundingBox_Statics::NewProp_bInExcludeBoundingBox,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorExcludeBoundingBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "ECamera|GroupActor" },
		{ "Comment", "/** Set the bExcludeBoundingBox of a `FBoundingWrappedActor` actor. */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraGroupActorComponent.h" },
		{ "ToolTip", "Set the bExcludeBoundingBox of a `FBoundingWrappedActor` actor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorExcludeBoundingBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UECameraGroupActorComponent, nullptr, "SetBoundingActorExcludeBoundingBox", nullptr, nullptr, sizeof(Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorExcludeBoundingBox_Statics::ECameraGroupActorComponent_eventSetBoundingActorExcludeBoundingBox_Parms), Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorExcludeBoundingBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorExcludeBoundingBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorExcludeBoundingBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorExcludeBoundingBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorExcludeBoundingBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorExcludeBoundingBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorHeight_Statics
	{
		struct ECameraGroupActorComponent_eventSetBoundingActorHeight_Parms
		{
			FBoundingWrappedActor BoundingWrappedActor;
			float InHeight;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoundingWrappedActor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InHeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorHeight_Statics::NewProp_BoundingWrappedActor = { "BoundingWrappedActor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraGroupActorComponent_eventSetBoundingActorHeight_Parms, BoundingWrappedActor), Z_Construct_UScriptStruct_FBoundingWrappedActor, METADATA_PARAMS(nullptr, 0) }; // 3484375314
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorHeight_Statics::NewProp_InHeight = { "InHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraGroupActorComponent_eventSetBoundingActorHeight_Parms, InHeight), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorHeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorHeight_Statics::NewProp_BoundingWrappedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorHeight_Statics::NewProp_InHeight,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "ECamera|GroupActor" },
		{ "Comment", "/** Set the height of a `FBoundingWrappedActor` actor. */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraGroupActorComponent.h" },
		{ "ToolTip", "Set the height of a `FBoundingWrappedActor` actor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UECameraGroupActorComponent, nullptr, "SetBoundingActorHeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorHeight_Statics::ECameraGroupActorComponent_eventSetBoundingActorHeight_Parms), Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorWeight_Statics
	{
		struct ECameraGroupActorComponent_eventSetBoundingActorWeight_Parms
		{
			FBoundingWrappedActor BoundingWrappedActor;
			float InWeight;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoundingWrappedActor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InWeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorWeight_Statics::NewProp_BoundingWrappedActor = { "BoundingWrappedActor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraGroupActorComponent_eventSetBoundingActorWeight_Parms, BoundingWrappedActor), Z_Construct_UScriptStruct_FBoundingWrappedActor, METADATA_PARAMS(nullptr, 0) }; // 3484375314
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorWeight_Statics::NewProp_InWeight = { "InWeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraGroupActorComponent_eventSetBoundingActorWeight_Parms, InWeight), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorWeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorWeight_Statics::NewProp_BoundingWrappedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorWeight_Statics::NewProp_InWeight,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorWeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "ECamera|GroupActor" },
		{ "Comment", "/** Set the weight of a `FBoundingWrappedActor` actor. */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraGroupActorComponent.h" },
		{ "ToolTip", "Set the weight of a `FBoundingWrappedActor` actor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UECameraGroupActorComponent, nullptr, "SetBoundingActorWeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorWeight_Statics::ECameraGroupActorComponent_eventSetBoundingActorWeight_Parms), Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorWeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorWeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorWeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorWidth_Statics
	{
		struct ECameraGroupActorComponent_eventSetBoundingActorWidth_Parms
		{
			FBoundingWrappedActor BoundingWrappedActor;
			float InWidth;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoundingWrappedActor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InWidth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorWidth_Statics::NewProp_BoundingWrappedActor = { "BoundingWrappedActor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraGroupActorComponent_eventSetBoundingActorWidth_Parms, BoundingWrappedActor), Z_Construct_UScriptStruct_FBoundingWrappedActor, METADATA_PARAMS(nullptr, 0) }; // 3484375314
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorWidth_Statics::NewProp_InWidth = { "InWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraGroupActorComponent_eventSetBoundingActorWidth_Parms, InWidth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorWidth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorWidth_Statics::NewProp_BoundingWrappedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorWidth_Statics::NewProp_InWidth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorWidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "ECamera|GroupActor" },
		{ "Comment", "/** Set the width of a `FBoundingWrappedActor` actor. */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraGroupActorComponent.h" },
		{ "ToolTip", "Set the width of a `FBoundingWrappedActor` actor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UECameraGroupActorComponent, nullptr, "SetBoundingActorWidth", nullptr, nullptr, sizeof(Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorWidth_Statics::ECameraGroupActorComponent_eventSetBoundingActorWidth_Parms), Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UECameraGroupActorComponent);
	UClass* Z_Construct_UClass_UECameraGroupActorComponent_NoRegister()
	{
		return UECameraGroupActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UECameraGroupActorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetActors;
		static const UECodeGen_Private::FBytePropertyParams NewProp_GroupLocationMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupLocationMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GroupLocationMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnchorLocationActor_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_AnchorLocationActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnchorLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnchorLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpecifiedLocationActor_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SpecifiedLocationActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpecifiedLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpecifiedLocation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_GroupRotationMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupRotationMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GroupRotationMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpecifiedRotationActor_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SpecifiedRotationActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpecifiedRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpecifiedRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UECameraGroupActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyCamera,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UECameraGroupActorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UECameraGroupActorComponent_AddTargetActor, "AddTargetActor" }, // 3670630792
		{ &Z_Construct_UFunction_UECameraGroupActorComponent_CheckWeightAllZero, "CheckWeightAllZero" }, // 1169046552
		{ &Z_Construct_UFunction_UECameraGroupActorComponent_GetAverageLocation, "GetAverageLocation" }, // 3433349231
		{ &Z_Construct_UFunction_UECameraGroupActorComponent_GetAverageRotation, "GetAverageRotation" }, // 3128382716
		{ &Z_Construct_UFunction_UECameraGroupActorComponent_GetFarestOrClosestLocation, "GetFarestOrClosestLocation" }, // 202760553
		{ &Z_Construct_UFunction_UECameraGroupActorComponent_GetGroupActorLocation, "GetGroupActorLocation" }, // 1170254242
		{ &Z_Construct_UFunction_UECameraGroupActorComponent_GetGroupActorRotation, "GetGroupActorRotation" }, // 592098288
		{ &Z_Construct_UFunction_UECameraGroupActorComponent_GetLocationBasedOnDistance, "GetLocationBasedOnDistance" }, // 4210504450
		{ &Z_Construct_UFunction_UECameraGroupActorComponent_GetNormalizer, "GetNormalizer" }, // 1958451872
		{ &Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorExcludeBoundingBox, "SetBoundingActorExcludeBoundingBox" }, // 304801667
		{ &Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorHeight, "SetBoundingActorHeight" }, // 578592479
		{ &Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorWeight, "SetBoundingActorWeight" }, // 1535528741
		{ &Z_Construct_UFunction_UECameraGroupActorComponent_SetBoundingActorWidth, "SetBoundingActorWidth" }, // 3358729929
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UECameraGroupActorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ECamera" },
		{ "IncludePath", "Utils/ECameraGroupActorComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Utils/ECameraGroupActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UECameraGroupActorComponent_Statics::NewProp_TargetActors_Inner = { "TargetActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBoundingWrappedActor, METADATA_PARAMS(nullptr, 0) }; // 3484375314
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UECameraGroupActorComponent_Statics::NewProp_TargetActors_MetaData[] = {
		{ "Category", "ECamera|GroupActor" },
		{ "Comment", "/** A set of target actors. */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraGroupActorComponent.h" },
		{ "ToolTip", "A set of target actors." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UECameraGroupActorComponent_Statics::NewProp_TargetActors = { "TargetActors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UECameraGroupActorComponent, TargetActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UECameraGroupActorComponent_Statics::NewProp_TargetActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UECameraGroupActorComponent_Statics::NewProp_TargetActors_MetaData)) }; // 3484375314
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UECameraGroupActorComponent_Statics::NewProp_GroupLocationMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UECameraGroupActorComponent_Statics::NewProp_GroupLocationMethod_MetaData[] = {
		{ "Category", "ECamera|GroupActor" },
		{ "Comment", "/** Which method you want to use to calculte group actor's location. */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraGroupActorComponent.h" },
		{ "ToolTip", "Which method you want to use to calculte group actor's location." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UECameraGroupActorComponent_Statics::NewProp_GroupLocationMethod = { "GroupLocationMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UECameraGroupActorComponent, GroupLocationMethod), Z_Construct_UEnum_EasyCamera_EGroupLocationMethod, METADATA_PARAMS(Z_Construct_UClass_UECameraGroupActorComponent_Statics::NewProp_GroupLocationMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UECameraGroupActorComponent_Statics::NewProp_GroupLocationMethod_MetaData)) }; // 1544102701
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UECameraGroupActorComponent_Statics::NewProp_AnchorLocationActor_MetaData[] = {
		{ "Category", "ECamera|GroupActor" },
		{ "Comment", "/** Anchor actor whose location is used to get group actor location if using EGroupRotationMethod::DistanceBased|Cloeset|Farest. */" },
		{ "EditCondition", "GroupLocationMethod == EGroupLocationMethod::UnweightedDistanceBased || GroupLocationMethod == EGroupLocationMethod::WeightedDistanceBased || GroupLocationMethod == EGroupLocationMethod::Closest || GroupLocationMethod == EGroupLocationMethod::Farest" },
		{ "ModuleRelativePath", "Public/Utils/ECameraGroupActorComponent.h" },
		{ "ToolTip", "Anchor actor whose location is used to get group actor location if using EGroupRotationMethod::DistanceBased|Cloeset|Farest." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UECameraGroupActorComponent_Statics::NewProp_AnchorLocationActor = { "AnchorLocationActor", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UECameraGroupActorComponent, AnchorLocationActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UECameraGroupActorComponent_Statics::NewProp_AnchorLocationActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UECameraGroupActorComponent_Statics::NewProp_AnchorLocationActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UECameraGroupActorComponent_Statics::NewProp_AnchorLocation_MetaData[] = {
		{ "Category", "ECamera|GroupActor" },
		{ "Comment", "/** Anchor location used to get group actor location if using EGroupRotationMethod::DistanceBased|Cloeset|Farest and AnchorLocationActor is null. */" },
		{ "EditCondition", "(GroupLocationMethod == EGroupLocationMethod::UnweightedDistanceBased || GroupLocationMethod == EGroupLocationMethod::WeightedDistanceBased || GroupLocationMethod == EGroupLocationMethod::Closest || GroupLocationMethod == EGroupLocationMethod::Farest) && AnchorLocationActor == nullptr" },
		{ "ModuleRelativePath", "Public/Utils/ECameraGroupActorComponent.h" },
		{ "ToolTip", "Anchor location used to get group actor location if using EGroupRotationMethod::DistanceBased|Cloeset|Farest and AnchorLocationActor is null." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UECameraGroupActorComponent_Statics::NewProp_AnchorLocation = { "AnchorLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UECameraGroupActorComponent, AnchorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UECameraGroupActorComponent_Statics::NewProp_AnchorLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UECameraGroupActorComponent_Statics::NewProp_AnchorLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UECameraGroupActorComponent_Statics::NewProp_SpecifiedLocationActor_MetaData[] = {
		{ "Category", "ECamera|GroupActor" },
		{ "Comment", "/** Given actor whose realtime location used to get group actor location if using EGroupRotationMethod::Specified. */" },
		{ "EditCondition", "GroupLocationMethod == EGroupLocationMethod::Specified" },
		{ "ModuleRelativePath", "Public/Utils/ECameraGroupActorComponent.h" },
		{ "ToolTip", "Given actor whose realtime location used to get group actor location if using EGroupRotationMethod::Specified." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UECameraGroupActorComponent_Statics::NewProp_SpecifiedLocationActor = { "SpecifiedLocationActor", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UECameraGroupActorComponent, SpecifiedLocationActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UECameraGroupActorComponent_Statics::NewProp_SpecifiedLocationActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UECameraGroupActorComponent_Statics::NewProp_SpecifiedLocationActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UECameraGroupActorComponent_Statics::NewProp_SpecifiedLocation_MetaData[] = {
		{ "Category", "ECamera|GroupActor" },
		{ "Comment", "/** Given location used to get group actor location if using EGroupLocationMethod::Specified and SpecifiedLocationActor is null. */" },
		{ "EditCondition", "GroupLocationMethod == EGroupLocationMethod::Specified && SpecifiedLocationActor == nullptr" },
		{ "ModuleRelativePath", "Public/Utils/ECameraGroupActorComponent.h" },
		{ "ToolTip", "Given location used to get group actor location if using EGroupLocationMethod::Specified and SpecifiedLocationActor is null." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UECameraGroupActorComponent_Statics::NewProp_SpecifiedLocation = { "SpecifiedLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UECameraGroupActorComponent, SpecifiedLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UECameraGroupActorComponent_Statics::NewProp_SpecifiedLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UECameraGroupActorComponent_Statics::NewProp_SpecifiedLocation_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UECameraGroupActorComponent_Statics::NewProp_GroupRotationMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UECameraGroupActorComponent_Statics::NewProp_GroupRotationMethod_MetaData[] = {
		{ "Category", "ECamera|GroupActor" },
		{ "Comment", "/** Which method you want to use to calculte group actor's rotation. Strong recommending using Specified as other methods may cause unexpected results. */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraGroupActorComponent.h" },
		{ "ToolTip", "Which method you want to use to calculte group actor's rotation. Strong recommending using Specified as other methods may cause unexpected results." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UECameraGroupActorComponent_Statics::NewProp_GroupRotationMethod = { "GroupRotationMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UECameraGroupActorComponent, GroupRotationMethod), Z_Construct_UEnum_EasyCamera_EGroupRotationMethod, METADATA_PARAMS(Z_Construct_UClass_UECameraGroupActorComponent_Statics::NewProp_GroupRotationMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UECameraGroupActorComponent_Statics::NewProp_GroupRotationMethod_MetaData)) }; // 39848431
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UECameraGroupActorComponent_Statics::NewProp_SpecifiedRotationActor_MetaData[] = {
		{ "Category", "ECamera|GroupActor" },
		{ "Comment", "/** Given actor whose realtime rotation is used to get group actor rotation if using EGroupRotationMethod::Specified. */" },
		{ "EditCondition", "GroupRotationMethod == EGroupRotationMethod::Specified" },
		{ "ModuleRelativePath", "Public/Utils/ECameraGroupActorComponent.h" },
		{ "ToolTip", "Given actor whose realtime rotation is used to get group actor rotation if using EGroupRotationMethod::Specified." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UECameraGroupActorComponent_Statics::NewProp_SpecifiedRotationActor = { "SpecifiedRotationActor", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UECameraGroupActorComponent, SpecifiedRotationActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UECameraGroupActorComponent_Statics::NewProp_SpecifiedRotationActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UECameraGroupActorComponent_Statics::NewProp_SpecifiedRotationActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UECameraGroupActorComponent_Statics::NewProp_SpecifiedRotation_MetaData[] = {
		{ "Category", "ECamera|GroupActor" },
		{ "Comment", "/** Given rotation used to get group actor rotation if using EGroupRotationMethod::Specified and SpecifiedRotationActor is null. */" },
		{ "EditCondition", "GroupRotationMethod == EGroupRotationMethod::Specified && SpecifiedRotationActor == nullptr" },
		{ "ModuleRelativePath", "Public/Utils/ECameraGroupActorComponent.h" },
		{ "ToolTip", "Given rotation used to get group actor rotation if using EGroupRotationMethod::Specified and SpecifiedRotationActor is null." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UECameraGroupActorComponent_Statics::NewProp_SpecifiedRotation = { "SpecifiedRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UECameraGroupActorComponent, SpecifiedRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UECameraGroupActorComponent_Statics::NewProp_SpecifiedRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UECameraGroupActorComponent_Statics::NewProp_SpecifiedRotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UECameraGroupActorComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UECameraGroupActorComponent_Statics::NewProp_TargetActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UECameraGroupActorComponent_Statics::NewProp_TargetActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UECameraGroupActorComponent_Statics::NewProp_GroupLocationMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UECameraGroupActorComponent_Statics::NewProp_GroupLocationMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UECameraGroupActorComponent_Statics::NewProp_AnchorLocationActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UECameraGroupActorComponent_Statics::NewProp_AnchorLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UECameraGroupActorComponent_Statics::NewProp_SpecifiedLocationActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UECameraGroupActorComponent_Statics::NewProp_SpecifiedLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UECameraGroupActorComponent_Statics::NewProp_GroupRotationMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UECameraGroupActorComponent_Statics::NewProp_GroupRotationMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UECameraGroupActorComponent_Statics::NewProp_SpecifiedRotationActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UECameraGroupActorComponent_Statics::NewProp_SpecifiedRotation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UECameraGroupActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UECameraGroupActorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UECameraGroupActorComponent_Statics::ClassParams = {
		&UECameraGroupActorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UECameraGroupActorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UECameraGroupActorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UECameraGroupActorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UECameraGroupActorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UECameraGroupActorComponent()
	{
		if (!Z_Registration_Info_UClass_UECameraGroupActorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UECameraGroupActorComponent.OuterSingleton, Z_Construct_UClass_UECameraGroupActorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UECameraGroupActorComponent.OuterSingleton;
	}
	template<> EASYCAMERA_API UClass* StaticClass<UECameraGroupActorComponent>()
	{
		return UECameraGroupActorComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UECameraGroupActorComponent);
	UECameraGroupActorComponent::~UECameraGroupActorComponent() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraGroupActorComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraGroupActorComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UECameraGroupActorComponent, UECameraGroupActorComponent::StaticClass, TEXT("UECameraGroupActorComponent"), &Z_Registration_Info_UClass_UECameraGroupActorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UECameraGroupActorComponent), 1547651277U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraGroupActorComponent_h_3567160344(TEXT("/Script/EasyCamera"),
		Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraGroupActorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraGroupActorComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
