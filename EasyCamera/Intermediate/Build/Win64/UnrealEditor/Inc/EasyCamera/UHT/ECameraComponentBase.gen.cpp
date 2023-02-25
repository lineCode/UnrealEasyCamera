// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyCamera/Public/Core/ECameraComponentBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECameraComponentBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	EASYCAMERA_API UClass* Z_Construct_UClass_AECameraBase_NoRegister();
	EASYCAMERA_API UClass* Z_Construct_UClass_UECameraComponentBase();
	EASYCAMERA_API UClass* Z_Construct_UClass_UECameraComponentBase_NoRegister();
	EASYCAMERA_API UClass* Z_Construct_UClass_UECameraSettingsComponent_NoRegister();
	EASYCAMERA_API UEnum* Z_Construct_UEnum_EasyCamera_EStage();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EasyCamera();
// End Cross Module References
	DEFINE_FUNCTION(UECameraComponentBase::execUpdateComponent)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateComponent_Implementation(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UECameraComponentBase::execBindToOnEndViewTarget)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PC);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindToOnEndViewTarget(Z_Param_PC);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UECameraComponentBase::execBindToOnBecomeViewTarget)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PC);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindToOnBecomeViewTarget(Z_Param_PC);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UECameraComponentBase::execBindToOnPostTickComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindToOnPostTickComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UECameraComponentBase::execBindToOnPreTickComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindToOnPreTickComponent();
		P_NATIVE_END;
	}
	struct ECameraComponentBase_eventK2_BindToOnBecomeViewTarget_Parms
	{
		APlayerController* PC;
	};
	struct ECameraComponentBase_eventK2_BindToOnEndViewTarget_Parms
	{
		APlayerController* PC;
	};
	struct ECameraComponentBase_eventUpdateComponent_Parms
	{
		float DeltaTime;
	};
	static FName NAME_UECameraComponentBase_K2_BindToOnBecomeViewTarget = FName(TEXT("K2_BindToOnBecomeViewTarget"));
	void UECameraComponentBase::K2_BindToOnBecomeViewTarget(APlayerController* PC)
	{
		ECameraComponentBase_eventK2_BindToOnBecomeViewTarget_Parms Parms;
		Parms.PC=PC;
		ProcessEvent(FindFunctionChecked(NAME_UECameraComponentBase_K2_BindToOnBecomeViewTarget),&Parms);
	}
	static FName NAME_UECameraComponentBase_K2_BindToOnEndViewTarget = FName(TEXT("K2_BindToOnEndViewTarget"));
	void UECameraComponentBase::K2_BindToOnEndViewTarget(APlayerController* PC)
	{
		ECameraComponentBase_eventK2_BindToOnEndViewTarget_Parms Parms;
		Parms.PC=PC;
		ProcessEvent(FindFunctionChecked(NAME_UECameraComponentBase_K2_BindToOnEndViewTarget),&Parms);
	}
	static FName NAME_UECameraComponentBase_K2_BindToOnPostTickComponent = FName(TEXT("K2_BindToOnPostTickComponent"));
	void UECameraComponentBase::K2_BindToOnPostTickComponent()
	{
		ProcessEvent(FindFunctionChecked(NAME_UECameraComponentBase_K2_BindToOnPostTickComponent),NULL);
	}
	static FName NAME_UECameraComponentBase_K2_BindToOnPreTickComponent = FName(TEXT("K2_BindToOnPreTickComponent"));
	void UECameraComponentBase::K2_BindToOnPreTickComponent()
	{
		ProcessEvent(FindFunctionChecked(NAME_UECameraComponentBase_K2_BindToOnPreTickComponent),NULL);
	}
	static FName NAME_UECameraComponentBase_UpdateComponent = FName(TEXT("UpdateComponent"));
	void UECameraComponentBase::UpdateComponent(float DeltaTime)
	{
		ECameraComponentBase_eventUpdateComponent_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_UECameraComponentBase_UpdateComponent),&Parms);
	}
	void UECameraComponentBase::StaticRegisterNativesUECameraComponentBase()
	{
		UClass* Class = UECameraComponentBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BindToOnBecomeViewTarget", &UECameraComponentBase::execBindToOnBecomeViewTarget },
			{ "BindToOnEndViewTarget", &UECameraComponentBase::execBindToOnEndViewTarget },
			{ "BindToOnPostTickComponent", &UECameraComponentBase::execBindToOnPostTickComponent },
			{ "BindToOnPreTickComponent", &UECameraComponentBase::execBindToOnPreTickComponent },
			{ "UpdateComponent", &UECameraComponentBase::execUpdateComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UECameraComponentBase_BindToOnBecomeViewTarget_Statics
	{
		struct ECameraComponentBase_eventBindToOnBecomeViewTarget_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UECameraComponentBase_BindToOnBecomeViewTarget_Statics::NewProp_PC = { "PC", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraComponentBase_eventBindToOnBecomeViewTarget_Parms, PC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UECameraComponentBase_BindToOnBecomeViewTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraComponentBase_BindToOnBecomeViewTarget_Statics::NewProp_PC,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraComponentBase_BindToOnBecomeViewTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/ECameraComponentBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UECameraComponentBase_BindToOnBecomeViewTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UECameraComponentBase, nullptr, "BindToOnBecomeViewTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UECameraComponentBase_BindToOnBecomeViewTarget_Statics::ECameraComponentBase_eventBindToOnBecomeViewTarget_Parms), Z_Construct_UFunction_UECameraComponentBase_BindToOnBecomeViewTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraComponentBase_BindToOnBecomeViewTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UECameraComponentBase_BindToOnBecomeViewTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraComponentBase_BindToOnBecomeViewTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UECameraComponentBase_BindToOnBecomeViewTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UECameraComponentBase_BindToOnBecomeViewTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UECameraComponentBase_BindToOnEndViewTarget_Statics
	{
		struct ECameraComponentBase_eventBindToOnEndViewTarget_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UECameraComponentBase_BindToOnEndViewTarget_Statics::NewProp_PC = { "PC", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraComponentBase_eventBindToOnEndViewTarget_Parms, PC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UECameraComponentBase_BindToOnEndViewTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraComponentBase_BindToOnEndViewTarget_Statics::NewProp_PC,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraComponentBase_BindToOnEndViewTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/ECameraComponentBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UECameraComponentBase_BindToOnEndViewTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UECameraComponentBase, nullptr, "BindToOnEndViewTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UECameraComponentBase_BindToOnEndViewTarget_Statics::ECameraComponentBase_eventBindToOnEndViewTarget_Parms), Z_Construct_UFunction_UECameraComponentBase_BindToOnEndViewTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraComponentBase_BindToOnEndViewTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UECameraComponentBase_BindToOnEndViewTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraComponentBase_BindToOnEndViewTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UECameraComponentBase_BindToOnEndViewTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UECameraComponentBase_BindToOnEndViewTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UECameraComponentBase_BindToOnPostTickComponent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraComponentBase_BindToOnPostTickComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/ECameraComponentBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UECameraComponentBase_BindToOnPostTickComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UECameraComponentBase, nullptr, "BindToOnPostTickComponent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UECameraComponentBase_BindToOnPostTickComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraComponentBase_BindToOnPostTickComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UECameraComponentBase_BindToOnPostTickComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UECameraComponentBase_BindToOnPostTickComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UECameraComponentBase_BindToOnPreTickComponent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraComponentBase_BindToOnPreTickComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/ECameraComponentBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UECameraComponentBase_BindToOnPreTickComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UECameraComponentBase, nullptr, "BindToOnPreTickComponent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UECameraComponentBase_BindToOnPreTickComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraComponentBase_BindToOnPreTickComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UECameraComponentBase_BindToOnPreTickComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UECameraComponentBase_BindToOnPreTickComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UECameraComponentBase_K2_BindToOnBecomeViewTarget_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PC;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UECameraComponentBase_K2_BindToOnBecomeViewTarget_Statics::NewProp_PC = { "PC", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraComponentBase_eventK2_BindToOnBecomeViewTarget_Parms, PC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UECameraComponentBase_K2_BindToOnBecomeViewTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraComponentBase_K2_BindToOnBecomeViewTarget_Statics::NewProp_PC,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraComponentBase_K2_BindToOnBecomeViewTarget_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** You can implement this function to define what this component will do when it becomes view target. */" },
		{ "DisplayName", "OnBecomeViewTarget" },
		{ "ModuleRelativePath", "Public/Core/ECameraComponentBase.h" },
		{ "ToolTip", "You can implement this function to define what this component will do when it becomes view target." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UECameraComponentBase_K2_BindToOnBecomeViewTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UECameraComponentBase, nullptr, "K2_BindToOnBecomeViewTarget", nullptr, nullptr, sizeof(ECameraComponentBase_eventK2_BindToOnBecomeViewTarget_Parms), Z_Construct_UFunction_UECameraComponentBase_K2_BindToOnBecomeViewTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraComponentBase_K2_BindToOnBecomeViewTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UECameraComponentBase_K2_BindToOnBecomeViewTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraComponentBase_K2_BindToOnBecomeViewTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UECameraComponentBase_K2_BindToOnBecomeViewTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UECameraComponentBase_K2_BindToOnBecomeViewTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UECameraComponentBase_K2_BindToOnEndViewTarget_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PC;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UECameraComponentBase_K2_BindToOnEndViewTarget_Statics::NewProp_PC = { "PC", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraComponentBase_eventK2_BindToOnEndViewTarget_Parms, PC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UECameraComponentBase_K2_BindToOnEndViewTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraComponentBase_K2_BindToOnEndViewTarget_Statics::NewProp_PC,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraComponentBase_K2_BindToOnEndViewTarget_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** You can implement this function to define what this component will do once it exits view target. */" },
		{ "DisplayName", "OnEndViewTarget" },
		{ "ModuleRelativePath", "Public/Core/ECameraComponentBase.h" },
		{ "ToolTip", "You can implement this function to define what this component will do once it exits view target." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UECameraComponentBase_K2_BindToOnEndViewTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UECameraComponentBase, nullptr, "K2_BindToOnEndViewTarget", nullptr, nullptr, sizeof(ECameraComponentBase_eventK2_BindToOnEndViewTarget_Parms), Z_Construct_UFunction_UECameraComponentBase_K2_BindToOnEndViewTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraComponentBase_K2_BindToOnEndViewTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UECameraComponentBase_K2_BindToOnEndViewTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraComponentBase_K2_BindToOnEndViewTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UECameraComponentBase_K2_BindToOnEndViewTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UECameraComponentBase_K2_BindToOnEndViewTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UECameraComponentBase_K2_BindToOnPostTickComponent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraComponentBase_K2_BindToOnPostTickComponent_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** You can implement this function to define what this component will do after all components execute in one tick. */" },
		{ "DisplayName", "OnPostTickComponent" },
		{ "ModuleRelativePath", "Public/Core/ECameraComponentBase.h" },
		{ "ToolTip", "You can implement this function to define what this component will do after all components execute in one tick." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UECameraComponentBase_K2_BindToOnPostTickComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UECameraComponentBase, nullptr, "K2_BindToOnPostTickComponent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UECameraComponentBase_K2_BindToOnPostTickComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraComponentBase_K2_BindToOnPostTickComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UECameraComponentBase_K2_BindToOnPostTickComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UECameraComponentBase_K2_BindToOnPostTickComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UECameraComponentBase_K2_BindToOnPreTickComponent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraComponentBase_K2_BindToOnPreTickComponent_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** You can implement this function to define what this component will do before any component executes in one tick. */" },
		{ "DisplayName", "OnPreTickComponent" },
		{ "ModuleRelativePath", "Public/Core/ECameraComponentBase.h" },
		{ "ToolTip", "You can implement this function to define what this component will do before any component executes in one tick." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UECameraComponentBase_K2_BindToOnPreTickComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UECameraComponentBase, nullptr, "K2_BindToOnPreTickComponent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UECameraComponentBase_K2_BindToOnPreTickComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraComponentBase_K2_BindToOnPreTickComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UECameraComponentBase_K2_BindToOnPreTickComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UECameraComponentBase_K2_BindToOnPreTickComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UECameraComponentBase_UpdateComponent_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UECameraComponentBase_UpdateComponent_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ECameraComponentBase_eventUpdateComponent_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UECameraComponentBase_UpdateComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UECameraComponentBase_UpdateComponent_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UECameraComponentBase_UpdateComponent_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** You can override this function to define the behaviour of this extension component. This is executed every tick. */" },
		{ "DisplayName", "UpdateComponent" },
		{ "ModuleRelativePath", "Public/Core/ECameraComponentBase.h" },
		{ "ToolTip", "You can override this function to define the behaviour of this extension component. This is executed every tick." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UECameraComponentBase_UpdateComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UECameraComponentBase, nullptr, "UpdateComponent", nullptr, nullptr, sizeof(ECameraComponentBase_eventUpdateComponent_Parms), Z_Construct_UFunction_UECameraComponentBase_UpdateComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraComponentBase_UpdateComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UECameraComponentBase_UpdateComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UECameraComponentBase_UpdateComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UECameraComponentBase_UpdateComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UECameraComponentBase_UpdateComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UECameraComponentBase);
	UClass* Z_Construct_UClass_UECameraComponentBase_NoRegister()
	{
		return UECameraComponentBase::StaticClass();
	}
	struct Z_Construct_UClass_UECameraComponentBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Stage_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stage_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Stage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningSettingComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningSettingComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UECameraComponentBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyCamera,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UECameraComponentBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UECameraComponentBase_BindToOnBecomeViewTarget, "BindToOnBecomeViewTarget" }, // 4121355999
		{ &Z_Construct_UFunction_UECameraComponentBase_BindToOnEndViewTarget, "BindToOnEndViewTarget" }, // 2211012862
		{ &Z_Construct_UFunction_UECameraComponentBase_BindToOnPostTickComponent, "BindToOnPostTickComponent" }, // 2668689178
		{ &Z_Construct_UFunction_UECameraComponentBase_BindToOnPreTickComponent, "BindToOnPreTickComponent" }, // 2583537102
		{ &Z_Construct_UFunction_UECameraComponentBase_K2_BindToOnBecomeViewTarget, "K2_BindToOnBecomeViewTarget" }, // 384587264
		{ &Z_Construct_UFunction_UECameraComponentBase_K2_BindToOnEndViewTarget, "K2_BindToOnEndViewTarget" }, // 2394749981
		{ &Z_Construct_UFunction_UECameraComponentBase_K2_BindToOnPostTickComponent, "K2_BindToOnPostTickComponent" }, // 1972255968
		{ &Z_Construct_UFunction_UECameraComponentBase_K2_BindToOnPreTickComponent, "K2_BindToOnPreTickComponent" }, // 3373967441
		{ &Z_Construct_UFunction_UECameraComponentBase_UpdateComponent, "UpdateComponent" }, // 3454941627
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UECameraComponentBase_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "ECamera" },
		{ "Comment", "/**\n * CameraComponentBase serves as the base for all components to inherit from.\n */" },
		{ "IncludePath", "Core/ECameraComponentBase.h" },
		{ "ModuleRelativePath", "Public/Core/ECameraComponentBase.h" },
		{ "ToolTip", "CameraComponentBase serves as the base for all components to inherit from." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UECameraComponentBase_Statics::NewProp_Stage_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UECameraComponentBase_Statics::NewProp_Stage_MetaData[] = {
		{ "Category", "ECameraComponentBase" },
		{ "ModuleRelativePath", "Public/Core/ECameraComponentBase.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UECameraComponentBase_Statics::NewProp_Stage = { "Stage", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UECameraComponentBase, Stage), Z_Construct_UEnum_EasyCamera_EStage, METADATA_PARAMS(Z_Construct_UClass_UECameraComponentBase_Statics::NewProp_Stage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UECameraComponentBase_Statics::NewProp_Stage_MetaData)) }; // 656728869
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UECameraComponentBase_Statics::NewProp_OwningActor_MetaData[] = {
		{ "Category", "ECameraComponentBase" },
		{ "ModuleRelativePath", "Public/Core/ECameraComponentBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UECameraComponentBase_Statics::NewProp_OwningActor = { "OwningActor", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UECameraComponentBase, OwningActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UECameraComponentBase_Statics::NewProp_OwningActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UECameraComponentBase_Statics::NewProp_OwningActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UECameraComponentBase_Statics::NewProp_OwningCamera_MetaData[] = {
		{ "Category", "ECameraComponentBase" },
		{ "ModuleRelativePath", "Public/Core/ECameraComponentBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UECameraComponentBase_Statics::NewProp_OwningCamera = { "OwningCamera", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UECameraComponentBase, OwningCamera), Z_Construct_UClass_AECameraBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UECameraComponentBase_Statics::NewProp_OwningCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UECameraComponentBase_Statics::NewProp_OwningCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UECameraComponentBase_Statics::NewProp_OwningSettingComponent_MetaData[] = {
		{ "Category", "ECameraComponentBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/ECameraComponentBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UECameraComponentBase_Statics::NewProp_OwningSettingComponent = { "OwningSettingComponent", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UECameraComponentBase, OwningSettingComponent), Z_Construct_UClass_UECameraSettingsComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UECameraComponentBase_Statics::NewProp_OwningSettingComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UECameraComponentBase_Statics::NewProp_OwningSettingComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UECameraComponentBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UECameraComponentBase_Statics::NewProp_Stage_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UECameraComponentBase_Statics::NewProp_Stage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UECameraComponentBase_Statics::NewProp_OwningActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UECameraComponentBase_Statics::NewProp_OwningCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UECameraComponentBase_Statics::NewProp_OwningSettingComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UECameraComponentBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UECameraComponentBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UECameraComponentBase_Statics::ClassParams = {
		&UECameraComponentBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UECameraComponentBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UECameraComponentBase_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UECameraComponentBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UECameraComponentBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UECameraComponentBase()
	{
		if (!Z_Registration_Info_UClass_UECameraComponentBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UECameraComponentBase.OuterSingleton, Z_Construct_UClass_UECameraComponentBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UECameraComponentBase.OuterSingleton;
	}
	template<> EASYCAMERA_API UClass* StaticClass<UECameraComponentBase>()
	{
		return UECameraComponentBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UECameraComponentBase);
	UECameraComponentBase::~UECameraComponentBase() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_ECameraComponentBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_ECameraComponentBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UECameraComponentBase, UECameraComponentBase::StaticClass, TEXT("UECameraComponentBase"), &Z_Registration_Info_UClass_UECameraComponentBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UECameraComponentBase), 3771401111U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_ECameraComponentBase_h_1652202706(TEXT("/Script/EasyCamera"),
		Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_ECameraComponentBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Core_ECameraComponentBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
