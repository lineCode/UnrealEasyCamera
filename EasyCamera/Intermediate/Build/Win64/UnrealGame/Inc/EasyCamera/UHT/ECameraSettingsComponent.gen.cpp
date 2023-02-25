// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyCamera/Public/Core/ECameraSettingsComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECameraSettingsComponent() {}
// Cross Module References
	EASYCAMERA_API UClass* Z_Construct_UClass_AECameraBase_NoRegister();
	EASYCAMERA_API UClass* Z_Construct_UClass_AECameraManager_NoRegister();
	EASYCAMERA_API UClass* Z_Construct_UClass_UECameraComponentAim_NoRegister();
	EASYCAMERA_API UClass* Z_Construct_UClass_UECameraComponentFollow_NoRegister();
	EASYCAMERA_API UClass* Z_Construct_UClass_UECameraExtensionBase_NoRegister();
	EASYCAMERA_API UClass* Z_Construct_UClass_UECameraSettingsComponent();
	EASYCAMERA_API UClass* Z_Construct_UClass_UECameraSettingsComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_EasyCamera();
// End Cross Module References
	DEFINE_FUNCTION(UECameraSettingsComponent::execEndViewTarget)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PC);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndViewTarget(Z_Param_PC);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UECameraSettingsComponent::execBecomeViewTarget)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PC);
		P_GET_UBOOL(Z_Param_bPreserveState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BecomeViewTarget(Z_Param_PC,Z_Param_bPreserveState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UECameraSettingsComponent::execSetAimTarget)
	{
		P_GET_OBJECT(AActor,Z_Param_NewAimTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->SetAimTarget(Z_Param_NewAimTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UECameraSettingsComponent::execSetFollowTarget)
	{
		P_GET_OBJECT(AActor,Z_Param_NewFollowTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->SetFollowTarget(Z_Param_NewFollowTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UECameraSettingsComponent::execGetPlayerCameraManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APlayerCameraManager**)Z_Param__Result=P_THIS->GetPlayerCameraManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UECameraSettingsComponent::execGetOwningCamera)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AECameraBase**)Z_Param__Result=P_THIS->GetOwningCamera();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UECameraSettingsComponent::execGetOwningPawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APawn**)Z_Param__Result=P_THIS->GetOwningPawn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UECameraSettingsComponent::execGetPlayerController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APlayerController**)Z_Param__Result=P_THIS->GetPlayerController();
		P_NATIVE_END;
	}
	void UECameraSettingsComponent::StaticRegisterNativesUECameraSettingsComponent()
	{
		UClass* Class = UECameraSettingsComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BecomeViewTarget", &UECameraSettingsComponent::execBecomeViewTarget },
			{ "EndViewTarget", &UECameraSettingsComponent::execEndViewTarget },
			{ "GetOwningCamera", &UECameraSettingsComponent::execGetOwningCamera },
			{ "GetOwningPawn", &UECameraSettingsComponent::execGetOwningPawn },
			{ "GetPlayerCameraManager", &UECameraSettingsComponent::execGetPlayerCameraManager },
			{ "GetPlayerController", &UECameraSettingsComponent::execGetPlayerController },
			{ "SetAimTarget", &UECameraSettingsComponent::execSetAimTarget },
			{ "SetFollowTarget", &UECameraSettingsComponent::execSetFollowTarget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UECameraSettingsComponent_BecomeViewTarget_Statics
	{
		struct ECameraSettingsComponent_eventBecomeViewTarget_Parms
		{
			APlayerController* PC;
			bool bPreserveState;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PC;
		static void NewProp_bPreserveState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreserveState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UECameraSettingsComponent_BecomeViewTarget_Statics::NewProp_PC = { "PC", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraSettingsComponent_eventBecomeViewTarget_Parms, PC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UECameraSettingsComponent_BecomeViewTarget_Statics::NewProp_bPreserveState_SetBit(void* Obj)
	{
		((ECameraSettingsComponent_eventBecomeViewTarget_Parms*)Obj)->bPreserveState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UECameraSettingsComponent_BecomeViewTarget_Statics::NewProp_bPreserveState = { "bPreserveState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ECameraSettingsComponent_eventBecomeViewTarget_Parms), &Z_Construct_UFunction_UECameraSettingsComponent_BecomeViewTarget_Statics::NewProp_bPreserveState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UECameraSettingsComponent_BecomeViewTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraSettingsComponent_BecomeViewTarget_Statics::NewProp_PC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraSettingsComponent_BecomeViewTarget_Statics::NewProp_bPreserveState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraSettingsComponent_BecomeViewTarget_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** What will camera do as soon as it becomes view target. */" },
		{ "ModuleRelativePath", "Public/Core/ECameraSettingsComponent.h" },
		{ "ToolTip", "What will camera do as soon as it becomes view target." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UECameraSettingsComponent_BecomeViewTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UECameraSettingsComponent, nullptr, "BecomeViewTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UECameraSettingsComponent_BecomeViewTarget_Statics::ECameraSettingsComponent_eventBecomeViewTarget_Parms), Z_Construct_UFunction_UECameraSettingsComponent_BecomeViewTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraSettingsComponent_BecomeViewTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UECameraSettingsComponent_BecomeViewTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraSettingsComponent_BecomeViewTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UECameraSettingsComponent_BecomeViewTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UECameraSettingsComponent_BecomeViewTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UECameraSettingsComponent_EndViewTarget_Statics
	{
		struct ECameraSettingsComponent_eventEndViewTarget_Parms
		{
			APlayerController* PC;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PC;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UECameraSettingsComponent_EndViewTarget_Statics::NewProp_PC = { "PC", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraSettingsComponent_eventEndViewTarget_Parms, PC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UECameraSettingsComponent_EndViewTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraSettingsComponent_EndViewTarget_Statics::NewProp_PC,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraSettingsComponent_EndViewTarget_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** What will camera do as soon as it exits view target. */" },
		{ "ModuleRelativePath", "Public/Core/ECameraSettingsComponent.h" },
		{ "ToolTip", "What will camera do as soon as it exits view target." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UECameraSettingsComponent_EndViewTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UECameraSettingsComponent, nullptr, "EndViewTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UECameraSettingsComponent_EndViewTarget_Statics::ECameraSettingsComponent_eventEndViewTarget_Parms), Z_Construct_UFunction_UECameraSettingsComponent_EndViewTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraSettingsComponent_EndViewTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UECameraSettingsComponent_EndViewTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraSettingsComponent_EndViewTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UECameraSettingsComponent_EndViewTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UECameraSettingsComponent_EndViewTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UECameraSettingsComponent_GetOwningCamera_Statics
	{
		struct ECameraSettingsComponent_eventGetOwningCamera_Parms
		{
			AECameraBase* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UECameraSettingsComponent_GetOwningCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraSettingsComponent_eventGetOwningCamera_Parms, ReturnValue), Z_Construct_UClass_AECameraBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UECameraSettingsComponent_GetOwningCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraSettingsComponent_GetOwningCamera_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraSettingsComponent_GetOwningCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "ECamera|Settings" },
		{ "Comment", "/** Get owning camera actor. */" },
		{ "ModuleRelativePath", "Public/Core/ECameraSettingsComponent.h" },
		{ "ToolTip", "Get owning camera actor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UECameraSettingsComponent_GetOwningCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UECameraSettingsComponent, nullptr, "GetOwningCamera", nullptr, nullptr, sizeof(Z_Construct_UFunction_UECameraSettingsComponent_GetOwningCamera_Statics::ECameraSettingsComponent_eventGetOwningCamera_Parms), Z_Construct_UFunction_UECameraSettingsComponent_GetOwningCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraSettingsComponent_GetOwningCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UECameraSettingsComponent_GetOwningCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraSettingsComponent_GetOwningCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UECameraSettingsComponent_GetOwningCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UECameraSettingsComponent_GetOwningCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UECameraSettingsComponent_GetOwningPawn_Statics
	{
		struct ECameraSettingsComponent_eventGetOwningPawn_Parms
		{
			APawn* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UECameraSettingsComponent_GetOwningPawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraSettingsComponent_eventGetOwningPawn_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UECameraSettingsComponent_GetOwningPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraSettingsComponent_GetOwningPawn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraSettingsComponent_GetOwningPawn_Statics::Function_MetaDataParams[] = {
		{ "Category", "ECamera|Settings" },
		{ "Comment", "/** Get owning pawn. */" },
		{ "ModuleRelativePath", "Public/Core/ECameraSettingsComponent.h" },
		{ "ToolTip", "Get owning pawn." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UECameraSettingsComponent_GetOwningPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UECameraSettingsComponent, nullptr, "GetOwningPawn", nullptr, nullptr, sizeof(Z_Construct_UFunction_UECameraSettingsComponent_GetOwningPawn_Statics::ECameraSettingsComponent_eventGetOwningPawn_Parms), Z_Construct_UFunction_UECameraSettingsComponent_GetOwningPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraSettingsComponent_GetOwningPawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UECameraSettingsComponent_GetOwningPawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraSettingsComponent_GetOwningPawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UECameraSettingsComponent_GetOwningPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UECameraSettingsComponent_GetOwningPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UECameraSettingsComponent_GetPlayerCameraManager_Statics
	{
		struct ECameraSettingsComponent_eventGetPlayerCameraManager_Parms
		{
			APlayerCameraManager* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UECameraSettingsComponent_GetPlayerCameraManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraSettingsComponent_eventGetPlayerCameraManager_Parms, ReturnValue), Z_Construct_UClass_APlayerCameraManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UECameraSettingsComponent_GetPlayerCameraManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraSettingsComponent_GetPlayerCameraManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraSettingsComponent_GetPlayerCameraManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "ECamera|Settings" },
		{ "Comment", "/** Get player camera manager. */" },
		{ "ModuleRelativePath", "Public/Core/ECameraSettingsComponent.h" },
		{ "ToolTip", "Get player camera manager." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UECameraSettingsComponent_GetPlayerCameraManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UECameraSettingsComponent, nullptr, "GetPlayerCameraManager", nullptr, nullptr, sizeof(Z_Construct_UFunction_UECameraSettingsComponent_GetPlayerCameraManager_Statics::ECameraSettingsComponent_eventGetPlayerCameraManager_Parms), Z_Construct_UFunction_UECameraSettingsComponent_GetPlayerCameraManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraSettingsComponent_GetPlayerCameraManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UECameraSettingsComponent_GetPlayerCameraManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraSettingsComponent_GetPlayerCameraManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UECameraSettingsComponent_GetPlayerCameraManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UECameraSettingsComponent_GetPlayerCameraManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UECameraSettingsComponent_GetPlayerController_Statics
	{
		struct ECameraSettingsComponent_eventGetPlayerController_Parms
		{
			APlayerController* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UECameraSettingsComponent_GetPlayerController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraSettingsComponent_eventGetPlayerController_Parms, ReturnValue), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UECameraSettingsComponent_GetPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraSettingsComponent_GetPlayerController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraSettingsComponent_GetPlayerController_Statics::Function_MetaDataParams[] = {
		{ "Category", "ECamera|Settings" },
		{ "Comment", "/** Get player controller at player index 0. */" },
		{ "ModuleRelativePath", "Public/Core/ECameraSettingsComponent.h" },
		{ "ToolTip", "Get player controller at player index 0." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UECameraSettingsComponent_GetPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UECameraSettingsComponent, nullptr, "GetPlayerController", nullptr, nullptr, sizeof(Z_Construct_UFunction_UECameraSettingsComponent_GetPlayerController_Statics::ECameraSettingsComponent_eventGetPlayerController_Parms), Z_Construct_UFunction_UECameraSettingsComponent_GetPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraSettingsComponent_GetPlayerController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UECameraSettingsComponent_GetPlayerController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraSettingsComponent_GetPlayerController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UECameraSettingsComponent_GetPlayerController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UECameraSettingsComponent_GetPlayerController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UECameraSettingsComponent_SetAimTarget_Statics
	{
		struct ECameraSettingsComponent_eventSetAimTarget_Parms
		{
			AActor* NewAimTarget;
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewAimTarget;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UECameraSettingsComponent_SetAimTarget_Statics::NewProp_NewAimTarget = { "NewAimTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraSettingsComponent_eventSetAimTarget_Parms, NewAimTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UECameraSettingsComponent_SetAimTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraSettingsComponent_eventSetAimTarget_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UECameraSettingsComponent_SetAimTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraSettingsComponent_SetAimTarget_Statics::NewProp_NewAimTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraSettingsComponent_SetAimTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraSettingsComponent_SetAimTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "ECamera|Settings" },
		{ "Comment", "/** Set aim target. Also sets AimComponent's aim target. */" },
		{ "ModuleRelativePath", "Public/Core/ECameraSettingsComponent.h" },
		{ "ToolTip", "Set aim target. Also sets AimComponent's aim target." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UECameraSettingsComponent_SetAimTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UECameraSettingsComponent, nullptr, "SetAimTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UECameraSettingsComponent_SetAimTarget_Statics::ECameraSettingsComponent_eventSetAimTarget_Parms), Z_Construct_UFunction_UECameraSettingsComponent_SetAimTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraSettingsComponent_SetAimTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UECameraSettingsComponent_SetAimTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraSettingsComponent_SetAimTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UECameraSettingsComponent_SetAimTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UECameraSettingsComponent_SetAimTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UECameraSettingsComponent_SetFollowTarget_Statics
	{
		struct ECameraSettingsComponent_eventSetFollowTarget_Parms
		{
			AActor* NewFollowTarget;
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewFollowTarget;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UECameraSettingsComponent_SetFollowTarget_Statics::NewProp_NewFollowTarget = { "NewFollowTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraSettingsComponent_eventSetFollowTarget_Parms, NewFollowTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UECameraSettingsComponent_SetFollowTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraSettingsComponent_eventSetFollowTarget_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UECameraSettingsComponent_SetFollowTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraSettingsComponent_SetFollowTarget_Statics::NewProp_NewFollowTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraSettingsComponent_SetFollowTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraSettingsComponent_SetFollowTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "ECamera|Settings" },
		{ "Comment", "/** Set follow target. Also sets FollowComponent's follow target. */" },
		{ "ModuleRelativePath", "Public/Core/ECameraSettingsComponent.h" },
		{ "ToolTip", "Set follow target. Also sets FollowComponent's follow target." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UECameraSettingsComponent_SetFollowTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UECameraSettingsComponent, nullptr, "SetFollowTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UECameraSettingsComponent_SetFollowTarget_Statics::ECameraSettingsComponent_eventSetFollowTarget_Parms), Z_Construct_UFunction_UECameraSettingsComponent_SetFollowTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraSettingsComponent_SetFollowTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UECameraSettingsComponent_SetFollowTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraSettingsComponent_SetFollowTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UECameraSettingsComponent_SetFollowTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UECameraSettingsComponent_SetFollowTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UECameraSettingsComponent);
	UClass* Z_Construct_UClass_UECameraSettingsComponent_NoRegister()
	{
		return UECameraSettingsComponent::StaticClass();
	}
	struct Z_Construct_UClass_UECameraSettingsComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FollowComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AimComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Extensions_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Extensions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Extensions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Extensions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FollowTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AimTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ECameraManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ECameraManager;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UECameraSettingsComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyCamera,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UECameraSettingsComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UECameraSettingsComponent_BecomeViewTarget, "BecomeViewTarget" }, // 389716185
		{ &Z_Construct_UFunction_UECameraSettingsComponent_EndViewTarget, "EndViewTarget" }, // 1235883370
		{ &Z_Construct_UFunction_UECameraSettingsComponent_GetOwningCamera, "GetOwningCamera" }, // 1258451470
		{ &Z_Construct_UFunction_UECameraSettingsComponent_GetOwningPawn, "GetOwningPawn" }, // 1406245722
		{ &Z_Construct_UFunction_UECameraSettingsComponent_GetPlayerCameraManager, "GetPlayerCameraManager" }, // 3990179143
		{ &Z_Construct_UFunction_UECameraSettingsComponent_GetPlayerController, "GetPlayerController" }, // 4268073462
		{ &Z_Construct_UFunction_UECameraSettingsComponent_SetAimTarget, "SetAimTarget" }, // 2500679868
		{ &Z_Construct_UFunction_UECameraSettingsComponent_SetFollowTarget, "SetFollowTarget" }, // 3634515246
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UECameraSettingsComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ECamera" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Core/ECameraSettingsComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/ECameraSettingsComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UECameraSettingsComponent_Statics::NewProp_FollowComponent_MetaData[] = {
		{ "Category", "ECamera|Follow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/ECameraSettingsComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UECameraSettingsComponent_Statics::NewProp_FollowComponent = { "FollowComponent", nullptr, (EPropertyFlags)0x002608000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UECameraSettingsComponent, FollowComponent), Z_Construct_UClass_UECameraComponentFollow_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UECameraSettingsComponent_Statics::NewProp_FollowComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UECameraSettingsComponent_Statics::NewProp_FollowComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UECameraSettingsComponent_Statics::NewProp_AimComponent_MetaData[] = {
		{ "Category", "ECamera|Aim" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/ECameraSettingsComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UECameraSettingsComponent_Statics::NewProp_AimComponent = { "AimComponent", nullptr, (EPropertyFlags)0x002608000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UECameraSettingsComponent, AimComponent), Z_Construct_UClass_UECameraComponentAim_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UECameraSettingsComponent_Statics::NewProp_AimComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UECameraSettingsComponent_Statics::NewProp_AimComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UECameraSettingsComponent_Statics::NewProp_Extensions_Inner_MetaData[] = {
		{ "Category", "ECamera|Extension" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/ECameraSettingsComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UECameraSettingsComponent_Statics::NewProp_Extensions_Inner = { "Extensions", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UECameraExtensionBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UECameraSettingsComponent_Statics::NewProp_Extensions_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UECameraSettingsComponent_Statics::NewProp_Extensions_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UECameraSettingsComponent_Statics::NewProp_Extensions_MetaData[] = {
		{ "Category", "ECamera|Extension" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/ECameraSettingsComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UECameraSettingsComponent_Statics::NewProp_Extensions = { "Extensions", nullptr, (EPropertyFlags)0x002408800000001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UECameraSettingsComponent, Extensions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UECameraSettingsComponent_Statics::NewProp_Extensions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UECameraSettingsComponent_Statics::NewProp_Extensions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UECameraSettingsComponent_Statics::NewProp_FollowTarget_MetaData[] = {
		{ "Category", "ECameraSettingsComponent" },
		{ "ModuleRelativePath", "Public/Core/ECameraSettingsComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UECameraSettingsComponent_Statics::NewProp_FollowTarget = { "FollowTarget", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UECameraSettingsComponent, FollowTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UECameraSettingsComponent_Statics::NewProp_FollowTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UECameraSettingsComponent_Statics::NewProp_FollowTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UECameraSettingsComponent_Statics::NewProp_AimTarget_MetaData[] = {
		{ "Category", "ECameraSettingsComponent" },
		{ "ModuleRelativePath", "Public/Core/ECameraSettingsComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UECameraSettingsComponent_Statics::NewProp_AimTarget = { "AimTarget", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UECameraSettingsComponent, AimTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UECameraSettingsComponent_Statics::NewProp_AimTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UECameraSettingsComponent_Statics::NewProp_AimTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UECameraSettingsComponent_Statics::NewProp_ECameraManager_MetaData[] = {
		{ "Category", "ECameraSettingsComponent" },
		{ "ModuleRelativePath", "Public/Core/ECameraSettingsComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UECameraSettingsComponent_Statics::NewProp_ECameraManager = { "ECameraManager", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UECameraSettingsComponent, ECameraManager), Z_Construct_UClass_AECameraManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UECameraSettingsComponent_Statics::NewProp_ECameraManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UECameraSettingsComponent_Statics::NewProp_ECameraManager_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UECameraSettingsComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UECameraSettingsComponent_Statics::NewProp_FollowComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UECameraSettingsComponent_Statics::NewProp_AimComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UECameraSettingsComponent_Statics::NewProp_Extensions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UECameraSettingsComponent_Statics::NewProp_Extensions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UECameraSettingsComponent_Statics::NewProp_FollowTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UECameraSettingsComponent_Statics::NewProp_AimTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UECameraSettingsComponent_Statics::NewProp_ECameraManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UECameraSettingsComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UECameraSettingsComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UECameraSettingsComponent_Statics::ClassParams = {
		&UECameraSettingsComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UECameraSettingsComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UECameraSettingsComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UECameraSettingsComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UECameraSettingsComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UECameraSettingsComponent()
	{
		if (!Z_Registration_Info_UClass_UECameraSettingsComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UECameraSettingsComponent.OuterSingleton, Z_Construct_UClass_UECameraSettingsComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UECameraSettingsComponent.OuterSingleton;
	}
	template<> EASYCAMERA_API UClass* StaticClass<UECameraSettingsComponent>()
	{
		return UECameraSettingsComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UECameraSettingsComponent);
	UECameraSettingsComponent::~UECameraSettingsComponent() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_ECameraSettingsComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_ECameraSettingsComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UECameraSettingsComponent, UECameraSettingsComponent::StaticClass, TEXT("UECameraSettingsComponent"), &Z_Registration_Info_UClass_UECameraSettingsComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UECameraSettingsComponent), 1219147666U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_ECameraSettingsComponent_h_2776506808(TEXT("/Script/EasyCamera"),
		Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_ECameraSettingsComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_ECameraSettingsComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
