// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyCamera/Public/Utils/ECameraTypes.h"
#include "Engine/Classes/Engine/Scene.h"
#include "GameplayCameras/Public/WaveOscillatorCameraShakePattern.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECameraTypes() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	EASYCAMERA_API UEnum* Z_Construct_UEnum_EasyCamera_ECameraShakeType();
	EASYCAMERA_API UEnum* Z_Construct_UEnum_EasyCamera_ECraneFollowType();
	EASYCAMERA_API UEnum* Z_Construct_UEnum_EasyCamera_EDampMethod();
	EASYCAMERA_API UEnum* Z_Construct_UEnum_EasyCamera_EGroupLocationMethod();
	EASYCAMERA_API UEnum* Z_Construct_UEnum_EasyCamera_EGroupRotationMethod();
	EASYCAMERA_API UEnum* Z_Construct_UEnum_EasyCamera_EHeading();
	EASYCAMERA_API UEnum* Z_Construct_UEnum_EasyCamera_ERailFollowType();
	EASYCAMERA_API UEnum* Z_Construct_UEnum_EasyCamera_EResolveGroupActorMethod();
	EASYCAMERA_API UEnum* Z_Construct_UEnum_EasyCamera_ESimpleFollowType();
	EASYCAMERA_API UEnum* Z_Construct_UEnum_EasyCamera_EStage();
	EASYCAMERA_API UEnum* Z_Construct_UEnum_EasyCamera_ETraceShape();
	EASYCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FBoundingWrappedActor();
	EASYCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FCraneManualParams();
	EASYCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FCraneManualPointParams();
	EASYCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FDampParams();
	EASYCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FOccluderParams();
	EASYCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FOrbit();
	EASYCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FPackedOscillationParams();
	EASYCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FRailManualParams();
	EASYCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FRailManualPointParams();
	EASYCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FRecenteringParams();
	EASYCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FWeightedPostProcess();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEasingFunc();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
	GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FWaveOscillator();
	UPackage* Z_Construct_UPackage__Script_EasyCamera();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHeading;
	static UEnum* EHeading_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHeading.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHeading.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyCamera_EHeading, Z_Construct_UPackage__Script_EasyCamera(), TEXT("EHeading"));
		}
		return Z_Registration_Info_UEnum_EHeading.OuterSingleton;
	}
	template<> EASYCAMERA_API UEnum* StaticEnum<EHeading>()
	{
		return EHeading_StaticEnum();
	}
	struct Z_Construct_UEnum_EasyCamera_EHeading_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EasyCamera_EHeading_Statics::Enumerators[] = {
		{ "EHeading::WorldForward", (int64)EHeading::WorldForward },
		{ "EHeading::TargetForward", (int64)EHeading::TargetForward },
		{ "EHeading::HardForward", (int64)EHeading::HardForward },
		{ "EHeading::SoftForward", (int64)EHeading::SoftForward },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EasyCamera_EHeading_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n* Define headings.\n*/" },
		{ "HardForward.Comment", "/** A hard specified forward. */" },
		{ "HardForward.Name", "EHeading::HardForward" },
		{ "HardForward.ToolTip", "A hard specified forward." },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "SoftForward.Comment", "/** A soft specified forwad, determined by a source actor and a destination actor. */" },
		{ "SoftForward.Name", "EHeading::SoftForward" },
		{ "SoftForward.ToolTip", "A soft specified forwad, determined by a source actor and a destination actor." },
		{ "TargetForward.Comment", "/** Target's local space forward as heading. \n\x09 *  Different components may interpret this differently.\n\x09 *  For example, ControlAim component uses follow target's forward.\n\x09 *  NOTE: this should be used very carefully as it may cause unexpected artifacts. \n\x09 */" },
		{ "TargetForward.Name", "EHeading::TargetForward" },
		{ "TargetForward.ToolTip", "Target's local space forward as heading.\nDifferent components may interpret this differently.\nFor example, ControlAim component uses follow target's forward.\nNOTE: this should be used very carefully as it may cause unexpected artifacts." },
		{ "ToolTip", "Define headings." },
		{ "WorldForward.Comment", "/** World space forward as heading, i.e., (1,0,0). */" },
		{ "WorldForward.Name", "EHeading::WorldForward" },
		{ "WorldForward.ToolTip", "World space forward as heading, i.e., (1,0,0)." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyCamera_EHeading_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EasyCamera,
		nullptr,
		"EHeading",
		"EHeading",
		Z_Construct_UEnum_EasyCamera_EHeading_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EasyCamera_EHeading_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_EasyCamera_EHeading_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EasyCamera_EHeading_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EasyCamera_EHeading()
	{
		if (!Z_Registration_Info_UEnum_EHeading.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHeading.InnerSingleton, Z_Construct_UEnum_EasyCamera_EHeading_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHeading.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStage;
	static UEnum* EStage_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStage.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStage.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyCamera_EStage, Z_Construct_UPackage__Script_EasyCamera(), TEXT("EStage"));
		}
		return Z_Registration_Info_UEnum_EStage.OuterSingleton;
	}
	template<> EASYCAMERA_API UEnum* StaticEnum<EStage>()
	{
		return EStage_StaticEnum();
	}
	struct Z_Construct_UEnum_EasyCamera_EStage_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EasyCamera_EStage_Statics::Enumerators[] = {
		{ "EStage::PreFollow", (int64)EStage::PreFollow },
		{ "EStage::Follow", (int64)EStage::Follow },
		{ "EStage::PostFollow", (int64)EStage::PostFollow },
		{ "EStage::PreAim", (int64)EStage::PreAim },
		{ "EStage::Aim", (int64)EStage::Aim },
		{ "EStage::PostAim", (int64)EStage::PostAim },
		{ "EStage::Noise", (int64)EStage::Noise },
		{ "EStage::Finalize", (int64)EStage::Finalize },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EasyCamera_EStage_Statics::Enum_MetaDataParams[] = {
		{ "Aim.Comment", "/** Executes at the Aim stage. */" },
		{ "Aim.Name", "EStage::Aim" },
		{ "Aim.ToolTip", "Executes at the Aim stage." },
		{ "Comment", "/**\n* Stages in which camera components should be applied.\n* Each camera component has a specific stage.\n* Order: PreFollow -> Follow -> PostFollow -> PreAim -> Aim -> PostAim -> Noise -> Finalize.\n*/" },
		{ "Finalize.Comment", "/** Executes at the Finalize stage. */" },
		{ "Finalize.Name", "EStage::Finalize" },
		{ "Finalize.ToolTip", "Executes at the Finalize stage." },
		{ "Follow.Comment", "/** Executes at the Follow stage. */" },
		{ "Follow.Name", "EStage::Follow" },
		{ "Follow.ToolTip", "Executes at the Follow stage." },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "Noise.Comment", "/** Executes at the Noise stage. */" },
		{ "Noise.Name", "EStage::Noise" },
		{ "Noise.ToolTip", "Executes at the Noise stage." },
		{ "PostAim.Comment", "/** Executes at the PostAim stage. */" },
		{ "PostAim.Name", "EStage::PostAim" },
		{ "PostAim.ToolTip", "Executes at the PostAim stage." },
		{ "PostFollow.Comment", "/** Executes at the PostFollow stage. */" },
		{ "PostFollow.Name", "EStage::PostFollow" },
		{ "PostFollow.ToolTip", "Executes at the PostFollow stage." },
		{ "PreAim.Comment", "/** Executes at the PreAim stage. */" },
		{ "PreAim.Name", "EStage::PreAim" },
		{ "PreAim.ToolTip", "Executes at the PreAim stage." },
		{ "PreFollow.Comment", "/** Executes at the PreFollow stage. */" },
		{ "PreFollow.Name", "EStage::PreFollow" },
		{ "PreFollow.ToolTip", "Executes at the PreFollow stage." },
		{ "ToolTip", "Stages in which camera components should be applied.\nEach camera component has a specific stage.\nOrder: PreFollow -> Follow -> PostFollow -> PreAim -> Aim -> PostAim -> Noise -> Finalize." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyCamera_EStage_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EasyCamera,
		nullptr,
		"EStage",
		"EStage",
		Z_Construct_UEnum_EasyCamera_EStage_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EasyCamera_EStage_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_EasyCamera_EStage_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EasyCamera_EStage_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EasyCamera_EStage()
	{
		if (!Z_Registration_Info_UEnum_EStage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStage.InnerSingleton, Z_Construct_UEnum_EasyCamera_EStage_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStage.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESimpleFollowType;
	static UEnum* ESimpleFollowType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESimpleFollowType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESimpleFollowType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyCamera_ESimpleFollowType, Z_Construct_UPackage__Script_EasyCamera(), TEXT("ESimpleFollowType"));
		}
		return Z_Registration_Info_UEnum_ESimpleFollowType.OuterSingleton;
	}
	template<> EASYCAMERA_API UEnum* StaticEnum<ESimpleFollowType>()
	{
		return ESimpleFollowType_StaticEnum();
	}
	struct Z_Construct_UEnum_EasyCamera_ESimpleFollowType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EasyCamera_ESimpleFollowType_Statics::Enumerators[] = {
		{ "ESimpleFollowType::WorldSpace", (int64)ESimpleFollowType::WorldSpace },
		{ "ESimpleFollowType::LocalSpace", (int64)ESimpleFollowType::LocalSpace },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EasyCamera_ESimpleFollowType_Statics::Enum_MetaDataParams[] = {
		{ "LocalSpace.Comment", "/** Keep a fixed relationship at follow target's local space. */" },
		{ "LocalSpace.Name", "ESimpleFollowType::LocalSpace" },
		{ "LocalSpace.ToolTip", "Keep a fixed relationship at follow target's local space." },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "WorldSpace.Comment", "/** Keep a fixed relationship at world space. */" },
		{ "WorldSpace.Name", "ESimpleFollowType::WorldSpace" },
		{ "WorldSpace.ToolTip", "Keep a fixed relationship at world space." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyCamera_ESimpleFollowType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EasyCamera,
		nullptr,
		"ESimpleFollowType",
		"ESimpleFollowType",
		Z_Construct_UEnum_EasyCamera_ESimpleFollowType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EasyCamera_ESimpleFollowType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_EasyCamera_ESimpleFollowType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EasyCamera_ESimpleFollowType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EasyCamera_ESimpleFollowType()
	{
		if (!Z_Registration_Info_UEnum_ESimpleFollowType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESimpleFollowType.InnerSingleton, Z_Construct_UEnum_EasyCamera_ESimpleFollowType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESimpleFollowType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETraceShape;
	static UEnum* ETraceShape_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETraceShape.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETraceShape.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyCamera_ETraceShape, Z_Construct_UPackage__Script_EasyCamera(), TEXT("ETraceShape"));
		}
		return Z_Registration_Info_UEnum_ETraceShape.OuterSingleton;
	}
	template<> EASYCAMERA_API UEnum* StaticEnum<ETraceShape>()
	{
		return ETraceShape_StaticEnum();
	}
	struct Z_Construct_UEnum_EasyCamera_ETraceShape_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EasyCamera_ETraceShape_Statics::Enumerators[] = {
		{ "ETraceShape::Line", (int64)ETraceShape::Line },
		{ "ETraceShape::Sphere", (int64)ETraceShape::Sphere },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EasyCamera_ETraceShape_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n* Methods you can use for trace.\n*/" },
		{ "Line.Comment", "/** Uses a simple line trace emitted from camera. */" },
		{ "Line.Name", "ETraceShape::Line" },
		{ "Line.ToolTip", "Uses a simple line trace emitted from camera." },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "Sphere.Comment", "/** Use a sphere. */" },
		{ "Sphere.Name", "ETraceShape::Sphere" },
		{ "Sphere.ToolTip", "Use a sphere." },
		{ "ToolTip", "Methods you can use for trace." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyCamera_ETraceShape_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EasyCamera,
		nullptr,
		"ETraceShape",
		"ETraceShape",
		Z_Construct_UEnum_EasyCamera_ETraceShape_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EasyCamera_ETraceShape_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_EasyCamera_ETraceShape_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EasyCamera_ETraceShape_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EasyCamera_ETraceShape()
	{
		if (!Z_Registration_Info_UEnum_ETraceShape.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETraceShape.InnerSingleton, Z_Construct_UEnum_EasyCamera_ETraceShape_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETraceShape.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDampMethod;
	static UEnum* EDampMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDampMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDampMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyCamera_EDampMethod, Z_Construct_UPackage__Script_EasyCamera(), TEXT("EDampMethod"));
		}
		return Z_Registration_Info_UEnum_EDampMethod.OuterSingleton;
	}
	template<> EASYCAMERA_API UEnum* StaticEnum<EDampMethod>()
	{
		return EDampMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_EasyCamera_EDampMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EasyCamera_EDampMethod_Statics::Enumerators[] = {
		{ "EDampMethod::Naive", (int64)EDampMethod::Naive },
		{ "EDampMethod::Simulate", (int64)EDampMethod::Simulate },
		{ "EDampMethod::Spring", (int64)EDampMethod::Spring },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EasyCamera_EDampMethod_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n* Methods you can use for damping.\n*/" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "Naive.Comment", "/** Uses a simple residual-based damping algorithm. */" },
		{ "Naive.Name", "EDampMethod::Naive" },
		{ "Naive.ToolTip", "Uses a simple residual-based damping algorithm." },
		{ "Simulate.Comment", "/** Splits the given deltaTime into several parts and simulates naive damping in order. */" },
		{ "Simulate.Name", "EDampMethod::Simulate" },
		{ "Simulate.ToolTip", "Splits the given deltaTime into several parts and simulates naive damping in order." },
		{ "Spring.Comment", "/** Uses spring to damp. */" },
		{ "Spring.Name", "EDampMethod::Spring" },
		{ "Spring.ToolTip", "Uses spring to damp." },
		{ "ToolTip", "Methods you can use for damping." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyCamera_EDampMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EasyCamera,
		nullptr,
		"EDampMethod",
		"EDampMethod",
		Z_Construct_UEnum_EasyCamera_EDampMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EasyCamera_EDampMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_EasyCamera_EDampMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EasyCamera_EDampMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EasyCamera_EDampMethod()
	{
		if (!Z_Registration_Info_UEnum_EDampMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDampMethod.InnerSingleton, Z_Construct_UEnum_EasyCamera_EDampMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDampMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGroupLocationMethod;
	static UEnum* EGroupLocationMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGroupLocationMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGroupLocationMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyCamera_EGroupLocationMethod, Z_Construct_UPackage__Script_EasyCamera(), TEXT("EGroupLocationMethod"));
		}
		return Z_Registration_Info_UEnum_EGroupLocationMethod.OuterSingleton;
	}
	template<> EASYCAMERA_API UEnum* StaticEnum<EGroupLocationMethod>()
	{
		return EGroupLocationMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_EasyCamera_EGroupLocationMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EasyCamera_EGroupLocationMethod_Statics::Enumerators[] = {
		{ "EGroupLocationMethod::ArithmeticAverage", (int64)EGroupLocationMethod::ArithmeticAverage },
		{ "EGroupLocationMethod::WeighedAverage", (int64)EGroupLocationMethod::WeighedAverage },
		{ "EGroupLocationMethod::UnweightedDistanceBased", (int64)EGroupLocationMethod::UnweightedDistanceBased },
		{ "EGroupLocationMethod::WeightedDistanceBased", (int64)EGroupLocationMethod::WeightedDistanceBased },
		{ "EGroupLocationMethod::Closest", (int64)EGroupLocationMethod::Closest },
		{ "EGroupLocationMethod::Farest", (int64)EGroupLocationMethod::Farest },
		{ "EGroupLocationMethod::Specified", (int64)EGroupLocationMethod::Specified },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EasyCamera_EGroupLocationMethod_Statics::Enum_MetaDataParams[] = {
		{ "ArithmeticAverage.Comment", "/** Group actor location will be the arithmetic average of all target locations. */" },
		{ "ArithmeticAverage.Name", "EGroupLocationMethod::ArithmeticAverage" },
		{ "ArithmeticAverage.ToolTip", "Group actor location will be the arithmetic average of all target locations." },
		{ "Closest.Comment", "/** The closest target location to the given location will be used as group actor location. */" },
		{ "Closest.Name", "EGroupLocationMethod::Closest" },
		{ "Closest.ToolTip", "The closest target location to the given location will be used as group actor location." },
		{ "Comment", "/**\n* Methods you want to use for calculate group actor location.\n*/" },
		{ "Farest.Comment", "/** The farest target location to the given location will be used as group actor location. */" },
		{ "Farest.Name", "EGroupLocationMethod::Farest" },
		{ "Farest.ToolTip", "The farest target location to the given location will be used as group actor location." },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "Specified.Comment", "/** Specified location. */" },
		{ "Specified.Name", "EGroupLocationMethod::Specified" },
		{ "Specified.ToolTip", "Specified location." },
		{ "ToolTip", "Methods you want to use for calculate group actor location." },
		{ "UnweightedDistanceBased.Comment", "/** Group actor location will be dynamically determined based on the distance between the given location and each target actor location.\n\x09 *  This method does not take actor weight into consideration.\n\x09 */" },
		{ "UnweightedDistanceBased.Name", "EGroupLocationMethod::UnweightedDistanceBased" },
		{ "UnweightedDistanceBased.ToolTip", "Group actor location will be dynamically determined based on the distance between the given location and each target actor location.\nThis method does not take actor weight into consideration." },
		{ "WeighedAverage.Comment", "/** Group actor location will be the weighed average of target locations. */" },
		{ "WeighedAverage.Name", "EGroupLocationMethod::WeighedAverage" },
		{ "WeighedAverage.ToolTip", "Group actor location will be the weighed average of target locations." },
		{ "WeightedDistanceBased.Comment", "/** Weighted version of UnweightedDistanceBased. */" },
		{ "WeightedDistanceBased.Name", "EGroupLocationMethod::WeightedDistanceBased" },
		{ "WeightedDistanceBased.ToolTip", "Weighted version of UnweightedDistanceBased." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyCamera_EGroupLocationMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EasyCamera,
		nullptr,
		"EGroupLocationMethod",
		"EGroupLocationMethod",
		Z_Construct_UEnum_EasyCamera_EGroupLocationMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EasyCamera_EGroupLocationMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_EasyCamera_EGroupLocationMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EasyCamera_EGroupLocationMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EasyCamera_EGroupLocationMethod()
	{
		if (!Z_Registration_Info_UEnum_EGroupLocationMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGroupLocationMethod.InnerSingleton, Z_Construct_UEnum_EasyCamera_EGroupLocationMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGroupLocationMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGroupRotationMethod;
	static UEnum* EGroupRotationMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGroupRotationMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGroupRotationMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyCamera_EGroupRotationMethod, Z_Construct_UPackage__Script_EasyCamera(), TEXT("EGroupRotationMethod"));
		}
		return Z_Registration_Info_UEnum_EGroupRotationMethod.OuterSingleton;
	}
	template<> EASYCAMERA_API UEnum* StaticEnum<EGroupRotationMethod>()
	{
		return EGroupRotationMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_EasyCamera_EGroupRotationMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EasyCamera_EGroupRotationMethod_Statics::Enumerators[] = {
		{ "EGroupRotationMethod::ArithmeticAverage", (int64)EGroupRotationMethod::ArithmeticAverage },
		{ "EGroupRotationMethod::WeighedAverage", (int64)EGroupRotationMethod::WeighedAverage },
		{ "EGroupRotationMethod::Specified", (int64)EGroupRotationMethod::Specified },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EasyCamera_EGroupRotationMethod_Statics::Enum_MetaDataParams[] = {
		{ "ArithmeticAverage.Comment", "/** Group actor rotation will be the arithmetic average of all target rotations. */" },
		{ "ArithmeticAverage.Name", "EGroupRotationMethod::ArithmeticAverage" },
		{ "ArithmeticAverage.ToolTip", "Group actor rotation will be the arithmetic average of all target rotations." },
		{ "Comment", "/**\n* Methods you want to use for calculate group actor rotation.\n*/" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "Specified.Comment", "/** Specified rotation. */" },
		{ "Specified.Name", "EGroupRotationMethod::Specified" },
		{ "Specified.ToolTip", "Specified rotation." },
		{ "ToolTip", "Methods you want to use for calculate group actor rotation." },
		{ "WeighedAverage.Comment", "/** Group actor rotation will be the weighed average of target rotations. */" },
		{ "WeighedAverage.Name", "EGroupRotationMethod::WeighedAverage" },
		{ "WeighedAverage.ToolTip", "Group actor rotation will be the weighed average of target rotations." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyCamera_EGroupRotationMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EasyCamera,
		nullptr,
		"EGroupRotationMethod",
		"EGroupRotationMethod",
		Z_Construct_UEnum_EasyCamera_EGroupRotationMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EasyCamera_EGroupRotationMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_EasyCamera_EGroupRotationMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EasyCamera_EGroupRotationMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EasyCamera_EGroupRotationMethod()
	{
		if (!Z_Registration_Info_UEnum_EGroupRotationMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGroupRotationMethod.InnerSingleton, Z_Construct_UEnum_EasyCamera_EGroupRotationMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGroupRotationMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EResolveGroupActorMethod;
	static UEnum* EResolveGroupActorMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EResolveGroupActorMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EResolveGroupActorMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyCamera_EResolveGroupActorMethod, Z_Construct_UPackage__Script_EasyCamera(), TEXT("EResolveGroupActorMethod"));
		}
		return Z_Registration_Info_UEnum_EResolveGroupActorMethod.OuterSingleton;
	}
	template<> EASYCAMERA_API UEnum* StaticEnum<EResolveGroupActorMethod>()
	{
		return EResolveGroupActorMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_EasyCamera_EResolveGroupActorMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EasyCamera_EResolveGroupActorMethod_Statics::Enumerators[] = {
		{ "EResolveGroupActorMethod::ZoomOnly", (int64)EResolveGroupActorMethod::ZoomOnly },
		{ "EResolveGroupActorMethod::DistanceOnly", (int64)EResolveGroupActorMethod::DistanceOnly },
		{ "EResolveGroupActorMethod::Mix", (int64)EResolveGroupActorMethod::Mix },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EasyCamera_EResolveGroupActorMethod_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n* Methods you want to use to resolve group actor in scren space.\n* DistanceOnly and Mix are recommended.\n*/" },
		{ "DistanceOnly.Comment", "/** Only adjust camera distance. */" },
		{ "DistanceOnly.Name", "EResolveGroupActorMethod::DistanceOnly" },
		{ "DistanceOnly.ToolTip", "Only adjust camera distance." },
		{ "Mix.Comment", "/** Mix-adjusting FOV and distance. */" },
		{ "Mix.Name", "EResolveGroupActorMethod::Mix" },
		{ "Mix.ToolTip", "Mix-adjusting FOV and distance." },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "ToolTip", "Methods you want to use to resolve group actor in scren space.\nDistanceOnly and Mix are recommended." },
		{ "ZoomOnly.Comment", "/** Only adjust camera FOV. */" },
		{ "ZoomOnly.Name", "EResolveGroupActorMethod::ZoomOnly" },
		{ "ZoomOnly.ToolTip", "Only adjust camera FOV." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyCamera_EResolveGroupActorMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EasyCamera,
		nullptr,
		"EResolveGroupActorMethod",
		"EResolveGroupActorMethod",
		Z_Construct_UEnum_EasyCamera_EResolveGroupActorMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EasyCamera_EResolveGroupActorMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_EasyCamera_EResolveGroupActorMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EasyCamera_EResolveGroupActorMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EasyCamera_EResolveGroupActorMethod()
	{
		if (!Z_Registration_Info_UEnum_EResolveGroupActorMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EResolveGroupActorMethod.InnerSingleton, Z_Construct_UEnum_EasyCamera_EResolveGroupActorMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EResolveGroupActorMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERailFollowType;
	static UEnum* ERailFollowType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERailFollowType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERailFollowType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyCamera_ERailFollowType, Z_Construct_UPackage__Script_EasyCamera(), TEXT("ERailFollowType"));
		}
		return Z_Registration_Info_UEnum_ERailFollowType.OuterSingleton;
	}
	template<> EASYCAMERA_API UEnum* StaticEnum<ERailFollowType>()
	{
		return ERailFollowType_StaticEnum();
	}
	struct Z_Construct_UEnum_EasyCamera_ERailFollowType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EasyCamera_ERailFollowType_Statics::Enumerators[] = {
		{ "ERailFollowType::FollowTarget", (int64)ERailFollowType::FollowTarget },
		{ "ERailFollowType::FixedSpeed", (int64)ERailFollowType::FixedSpeed },
		{ "ERailFollowType::Manual", (int64)ERailFollowType::Manual },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EasyCamera_ERailFollowType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Methods you want to use for RailFollow component. */" },
		{ "FixedSpeed.Comment", "/** Camera will move on rail at a fixed speed, starting at some place you specify. */" },
		{ "FixedSpeed.Name", "ERailFollowType::FixedSpeed" },
		{ "FixedSpeed.ToolTip", "Camera will move on rail at a fixed speed, starting at some place you specify." },
		{ "FollowTarget.Comment", "/** Camera will get to the position on rail nearest to the follow target. */" },
		{ "FollowTarget.Name", "ERailFollowType::FollowTarget" },
		{ "FollowTarget.ToolTip", "Camera will get to the position on rail nearest to the follow target." },
		{ "Manual.Comment", "/** Camera will move according to your manual setup. */" },
		{ "Manual.Name", "ERailFollowType::Manual" },
		{ "Manual.ToolTip", "Camera will move according to your manual setup." },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "ToolTip", "Methods you want to use for RailFollow component." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyCamera_ERailFollowType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EasyCamera,
		nullptr,
		"ERailFollowType",
		"ERailFollowType",
		Z_Construct_UEnum_EasyCamera_ERailFollowType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EasyCamera_ERailFollowType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_EasyCamera_ERailFollowType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EasyCamera_ERailFollowType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EasyCamera_ERailFollowType()
	{
		if (!Z_Registration_Info_UEnum_ERailFollowType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERailFollowType.InnerSingleton, Z_Construct_UEnum_EasyCamera_ERailFollowType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERailFollowType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECraneFollowType;
	static UEnum* ECraneFollowType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECraneFollowType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECraneFollowType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyCamera_ECraneFollowType, Z_Construct_UPackage__Script_EasyCamera(), TEXT("ECraneFollowType"));
		}
		return Z_Registration_Info_UEnum_ECraneFollowType.OuterSingleton;
	}
	template<> EASYCAMERA_API UEnum* StaticEnum<ECraneFollowType>()
	{
		return ECraneFollowType_StaticEnum();
	}
	struct Z_Construct_UEnum_EasyCamera_ECraneFollowType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EasyCamera_ECraneFollowType_Statics::Enumerators[] = {
		{ "ECraneFollowType::FollowTarget", (int64)ECraneFollowType::FollowTarget },
		{ "ECraneFollowType::FixedSpeed", (int64)ECraneFollowType::FixedSpeed },
		{ "ECraneFollowType::Manual", (int64)ECraneFollowType::Manual },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EasyCamera_ECraneFollowType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Methods you want to use for CraneFollow component. */" },
		{ "FixedSpeed.Comment", "/** Camera will move on crane at a fixed speed, starting at some place you specify. */" },
		{ "FixedSpeed.Name", "ECraneFollowType::FixedSpeed" },
		{ "FixedSpeed.ToolTip", "Camera will move on crane at a fixed speed, starting at some place you specify." },
		{ "FollowTarget.Comment", "/** Camera will get to the position on crane nearest to the follow target. */" },
		{ "FollowTarget.Name", "ECraneFollowType::FollowTarget" },
		{ "FollowTarget.ToolTip", "Camera will get to the position on crane nearest to the follow target." },
		{ "Manual.Comment", "/** Camera will move according to your manual setup. */" },
		{ "Manual.Name", "ECraneFollowType::Manual" },
		{ "Manual.ToolTip", "Camera will move according to your manual setup." },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "ToolTip", "Methods you want to use for CraneFollow component." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyCamera_ECraneFollowType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EasyCamera,
		nullptr,
		"ECraneFollowType",
		"ECraneFollowType",
		Z_Construct_UEnum_EasyCamera_ECraneFollowType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EasyCamera_ECraneFollowType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_EasyCamera_ECraneFollowType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EasyCamera_ECraneFollowType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EasyCamera_ECraneFollowType()
	{
		if (!Z_Registration_Info_UEnum_ECraneFollowType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECraneFollowType.InnerSingleton, Z_Construct_UEnum_EasyCamera_ECraneFollowType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECraneFollowType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECameraShakeType;
	static UEnum* ECameraShakeType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECameraShakeType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECameraShakeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyCamera_ECameraShakeType, Z_Construct_UPackage__Script_EasyCamera(), TEXT("ECameraShakeType"));
		}
		return Z_Registration_Info_UEnum_ECameraShakeType.OuterSingleton;
	}
	template<> EASYCAMERA_API UEnum* StaticEnum<ECameraShakeType>()
	{
		return ECameraShakeType_StaticEnum();
	}
	struct Z_Construct_UEnum_EasyCamera_ECameraShakeType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EasyCamera_ECameraShakeType_Statics::Enumerators[] = {
		{ "ECameraShakeType::Wave", (int64)ECameraShakeType::Wave },
		{ "ECameraShakeType::Perlin", (int64)ECameraShakeType::Perlin },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EasyCamera_ECameraShakeType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Camera shake types. */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "Perlin.Name", "ECameraShakeType::Perlin" },
		{ "ToolTip", "Camera shake types." },
		{ "Wave.Name", "ECameraShakeType::Wave" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyCamera_ECameraShakeType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EasyCamera,
		nullptr,
		"ECameraShakeType",
		"ECameraShakeType",
		Z_Construct_UEnum_EasyCamera_ECameraShakeType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EasyCamera_ECameraShakeType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_EasyCamera_ECameraShakeType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EasyCamera_ECameraShakeType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EasyCamera_ECameraShakeType()
	{
		if (!Z_Registration_Info_UEnum_ECameraShakeType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECameraShakeType.InnerSingleton, Z_Construct_UEnum_EasyCamera_ECameraShakeType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECameraShakeType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Orbit;
class UScriptStruct* FOrbit::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Orbit.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Orbit.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOrbit, Z_Construct_UPackage__Script_EasyCamera(), TEXT("Orbit"));
	}
	return Z_Registration_Info_UScriptStruct_Orbit.OuterSingleton;
}
template<> EASYCAMERA_API UScriptStruct* StaticStruct<FOrbit>()
{
	return FOrbit::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOrbit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOrbit_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A set of parameters describing an orbit. */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "ToolTip", "A set of parameters describing an orbit." },
	};
#endif
	void* Z_Construct_UScriptStruct_FOrbit_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOrbit>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOrbit_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "Orbit" },
		{ "Comment", "/** Height relative to follow target. */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "ToolTip", "Height relative to follow target." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOrbit_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOrbit, Height), METADATA_PARAMS(Z_Construct_UScriptStruct_FOrbit_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrbit_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOrbit_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "Orbit" },
		{ "Comment", "/** Orbit radius. */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "ToolTip", "Orbit radius." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOrbit_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOrbit, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FOrbit_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrbit_Statics::NewProp_Radius_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOrbit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrbit_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrbit_Statics::NewProp_Radius,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOrbit_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EasyCamera,
		nullptr,
		&NewStructOps,
		"Orbit",
		sizeof(FOrbit),
		alignof(FOrbit),
		Z_Construct_UScriptStruct_FOrbit_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrbit_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOrbit_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrbit_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOrbit()
	{
		if (!Z_Registration_Info_UScriptStruct_Orbit.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Orbit.InnerSingleton, Z_Construct_UScriptStruct_FOrbit_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Orbit.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RecenteringParams;
class UScriptStruct* FRecenteringParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RecenteringParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RecenteringParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRecenteringParams, Z_Construct_UPackage__Script_EasyCamera(), TEXT("RecenteringParams"));
	}
	return Z_Registration_Info_UScriptStruct_RecenteringParams.OuterSingleton;
}
template<> EASYCAMERA_API UScriptStruct* StaticStruct<FRecenteringParams>()
{
	return FRecenteringParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRecenteringParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecentering_MetaData[];
#endif
		static void NewProp_bRecentering_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecentering;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResetPitch_MetaData[];
#endif
		static void NewProp_bResetPitch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetPitch;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Heading_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Heading_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Heading;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaitTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WaitTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecenteringTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RecenteringTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HardForward_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HardForward;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Destination_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Destination;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecenteringParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A set of parameters describing recentering setting. */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "ToolTip", "A set of parameters describing recentering setting." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRecenteringParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRecenteringParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecenteringParams_Statics::NewProp_bRecentering_MetaData[] = {
		{ "Category", "RecenteringParams" },
		{ "Comment", "/** Whether to enable recentering. */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "ToolTip", "Whether to enable recentering." },
	};
#endif
	void Z_Construct_UScriptStruct_FRecenteringParams_Statics::NewProp_bRecentering_SetBit(void* Obj)
	{
		((FRecenteringParams*)Obj)->bRecentering = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRecenteringParams_Statics::NewProp_bRecentering = { "bRecentering", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRecenteringParams), &Z_Construct_UScriptStruct_FRecenteringParams_Statics::NewProp_bRecentering_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRecenteringParams_Statics::NewProp_bRecentering_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecenteringParams_Statics::NewProp_bRecentering_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecenteringParams_Statics::NewProp_bResetPitch_MetaData[] = {
		{ "Category", "RecenteringParams" },
		{ "Comment", "/** Whether to reset pitch to zero when recentering. */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "ToolTip", "Whether to reset pitch to zero when recentering." },
	};
#endif
	void Z_Construct_UScriptStruct_FRecenteringParams_Statics::NewProp_bResetPitch_SetBit(void* Obj)
	{
		((FRecenteringParams*)Obj)->bResetPitch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRecenteringParams_Statics::NewProp_bResetPitch = { "bResetPitch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRecenteringParams), &Z_Construct_UScriptStruct_FRecenteringParams_Statics::NewProp_bResetPitch_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRecenteringParams_Statics::NewProp_bResetPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecenteringParams_Statics::NewProp_bResetPitch_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRecenteringParams_Statics::NewProp_Heading_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecenteringParams_Statics::NewProp_Heading_MetaData[] = {
		{ "Category", "RecenteringParams" },
		{ "Comment", "/** Heading for recentering. */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "ToolTip", "Heading for recentering." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRecenteringParams_Statics::NewProp_Heading = { "Heading", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRecenteringParams, Heading), Z_Construct_UEnum_EasyCamera_EHeading, METADATA_PARAMS(Z_Construct_UScriptStruct_FRecenteringParams_Statics::NewProp_Heading_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecenteringParams_Statics::NewProp_Heading_MetaData)) }; // 503929634
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecenteringParams_Statics::NewProp_WaitTime_MetaData[] = {
		{ "Category", "RecenteringParams" },
		{ "Comment", "/** How long will it take to start recentering since input is not given. */" },
		{ "EditCondition", "bRecentering ==  true" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "ToolTip", "How long will it take to start recentering since input is not given." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRecenteringParams_Statics::NewProp_WaitTime = { "WaitTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRecenteringParams, WaitTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FRecenteringParams_Statics::NewProp_WaitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecenteringParams_Statics::NewProp_WaitTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecenteringParams_Statics::NewProp_RecenteringTime_MetaData[] = {
		{ "Category", "RecenteringParams" },
		{ "Comment", "/** Time to finish recentering. */" },
		{ "EditCondition", "bRecentering ==  true" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "ToolTip", "Time to finish recentering." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRecenteringParams_Statics::NewProp_RecenteringTime = { "RecenteringTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRecenteringParams, RecenteringTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FRecenteringParams_Statics::NewProp_RecenteringTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecenteringParams_Statics::NewProp_RecenteringTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecenteringParams_Statics::NewProp_HardForward_MetaData[] = {
		{ "Category", "RecenteringParams" },
		{ "Comment", "/** Hard specified forward. Will ignore its pitch angle. */" },
		{ "EditCondition", "bRecentering ==  true && Heading == EHeading::HardForward" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "ToolTip", "Hard specified forward. Will ignore its pitch angle." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRecenteringParams_Statics::NewProp_HardForward = { "HardForward", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRecenteringParams, HardForward), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRecenteringParams_Statics::NewProp_HardForward_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecenteringParams_Statics::NewProp_HardForward_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecenteringParams_Statics::NewProp_Source_MetaData[] = {
		{ "Category", "RecenteringParams" },
		{ "Comment", "/** Source actor for soft forward. Its position is used as the start position. */" },
		{ "EditCondition", "bRecentering ==  true && Heading == EHeading::SoftForward" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "ToolTip", "Source actor for soft forward. Its position is used as the start position." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRecenteringParams_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRecenteringParams, Source), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRecenteringParams_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecenteringParams_Statics::NewProp_Source_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecenteringParams_Statics::NewProp_Destination_MetaData[] = {
		{ "Category", "RecenteringParams" },
		{ "Comment", "/** Destination actor for soft forward. Its position is used as the end position. */" },
		{ "EditCondition", "bRecentering ==  true && Heading == EHeading::SoftForward" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "ToolTip", "Destination actor for soft forward. Its position is used as the end position." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRecenteringParams_Statics::NewProp_Destination = { "Destination", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRecenteringParams, Destination), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRecenteringParams_Statics::NewProp_Destination_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecenteringParams_Statics::NewProp_Destination_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRecenteringParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecenteringParams_Statics::NewProp_bRecentering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecenteringParams_Statics::NewProp_bResetPitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecenteringParams_Statics::NewProp_Heading_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecenteringParams_Statics::NewProp_Heading,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecenteringParams_Statics::NewProp_WaitTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecenteringParams_Statics::NewProp_RecenteringTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecenteringParams_Statics::NewProp_HardForward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecenteringParams_Statics::NewProp_Source,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecenteringParams_Statics::NewProp_Destination,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRecenteringParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EasyCamera,
		nullptr,
		&NewStructOps,
		"RecenteringParams",
		sizeof(FRecenteringParams),
		alignof(FRecenteringParams),
		Z_Construct_UScriptStruct_FRecenteringParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecenteringParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRecenteringParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecenteringParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRecenteringParams()
	{
		if (!Z_Registration_Info_UScriptStruct_RecenteringParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RecenteringParams.InnerSingleton, Z_Construct_UScriptStruct_FRecenteringParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RecenteringParams.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OccluderParams;
class UScriptStruct* FOccluderParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OccluderParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OccluderParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOccluderParams, Z_Construct_UPackage__Script_EasyCamera(), TEXT("OccluderParams"));
	}
	return Z_Registration_Info_UScriptStruct_OccluderParams.OuterSingleton;
}
template<> EASYCAMERA_API UScriptStruct* StaticStruct<FOccluderParams>()
{
	return FOccluderParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOccluderParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_TraceShape_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceShape_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TraceShape;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTraceSingle_MetaData[];
#endif
		static void NewProp_bTraceSingle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraceSingle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ObjectTypes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectTypes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectTypes;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumTraceLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumTraceLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumOcclusionTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumOcclusionTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphereRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SphereRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowDebug_MetaData[];
#endif
		static void NewProp_bShowDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDebug;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOccluderParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A set of parameters describing occlusion detection. */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "ToolTip", "A set of parameters describing occlusion detection." },
	};
#endif
	void* Z_Construct_UScriptStruct_FOccluderParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOccluderParams>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOccluderParams_Statics::NewProp_TraceShape_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOccluderParams_Statics::NewProp_TraceShape_MetaData[] = {
		{ "Category", "OccluderParams" },
		{ "Comment", "/** Shape you use for tracing. */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "ToolTip", "Shape you use for tracing." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOccluderParams_Statics::NewProp_TraceShape = { "TraceShape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOccluderParams, TraceShape), Z_Construct_UEnum_EasyCamera_ETraceShape, METADATA_PARAMS(Z_Construct_UScriptStruct_FOccluderParams_Statics::NewProp_TraceShape_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOccluderParams_Statics::NewProp_TraceShape_MetaData)) }; // 3406915036
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOccluderParams_Statics::NewProp_bTraceSingle_MetaData[] = {
		{ "Category", "OccluderParams" },
		{ "Comment", "/** If on, only returns the first hit encountered. This can be toggled on to improve performance.\n\x09 *  This should be turned on in most cases.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "ToolTip", "If on, only returns the first hit encountered. This can be toggled on to improve performance.\nThis should be turned on in most cases." },
	};
#endif
	void Z_Construct_UScriptStruct_FOccluderParams_Statics::NewProp_bTraceSingle_SetBit(void* Obj)
	{
		((FOccluderParams*)Obj)->bTraceSingle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOccluderParams_Statics::NewProp_bTraceSingle = { "bTraceSingle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FOccluderParams), &Z_Construct_UScriptStruct_FOccluderParams_Statics::NewProp_bTraceSingle_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOccluderParams_Statics::NewProp_bTraceSingle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOccluderParams_Statics::NewProp_bTraceSingle_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOccluderParams_Statics::NewProp_ObjectTypes_Inner = { "ObjectTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) }; // 3629342158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOccluderParams_Statics::NewProp_ObjectTypes_MetaData[] = {
		{ "Category", "OccluderParams" },
		{ "Comment", "/** Array of object types to trace occlusion. */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "ToolTip", "Array of object types to trace occlusion." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOccluderParams_Statics::NewProp_ObjectTypes = { "ObjectTypes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOccluderParams, ObjectTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOccluderParams_Statics::NewProp_ObjectTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOccluderParams_Statics::NewProp_ObjectTypes_MetaData)) }; // 3629342158
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOccluderParams_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOccluderParams_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "Category", "OccluderParams" },
		{ "Comment", "/** Actors ignored for trace. */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "ToolTip", "Actors ignored for trace." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOccluderParams_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOccluderParams, ActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOccluderParams_Statics::NewProp_ActorsToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOccluderParams_Statics::NewProp_ActorsToIgnore_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOccluderParams_Statics::NewProp_MaximumTraceLength_MetaData[] = {
		{ "Category", "OccluderParams" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Maximum length of the ray used to trace occlusion along the sight line of camera. Set as 0 to use the actual line length. */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "ToolTip", "Maximum length of the ray used to trace occlusion along the sight line of camera. Set as 0 to use the actual line length." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOccluderParams_Statics::NewProp_MaximumTraceLength = { "MaximumTraceLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOccluderParams, MaximumTraceLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FOccluderParams_Statics::NewProp_MaximumTraceLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOccluderParams_Statics::NewProp_MaximumTraceLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOccluderParams_Statics::NewProp_MinimumOcclusionTime_MetaData[] = {
		{ "Category", "OccluderParams" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Do not take any action until occlusion has lasted this long. Set as 0 to immediately avoid occlusion.  */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "ToolTip", "Do not take any action until occlusion has lasted this long. Set as 0 to immediately avoid occlusion." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOccluderParams_Statics::NewProp_MinimumOcclusionTime = { "MinimumOcclusionTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOccluderParams, MinimumOcclusionTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FOccluderParams_Statics::NewProp_MinimumOcclusionTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOccluderParams_Statics::NewProp_MinimumOcclusionTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOccluderParams_Statics::NewProp_SphereRadius_MetaData[] = {
		{ "Category", "OccluderParams" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** If use Sphere trace type, define its radius. */" },
		{ "EditCondition", "TraceShape == ETraceShape::Sphere" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "ToolTip", "If use Sphere trace type, define its radius." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOccluderParams_Statics::NewProp_SphereRadius = { "SphereRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOccluderParams, SphereRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FOccluderParams_Statics::NewProp_SphereRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOccluderParams_Statics::NewProp_SphereRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOccluderParams_Statics::NewProp_bShowDebug_MetaData[] = {
		{ "Category", "OccluderParams" },
		{ "Comment", "/** Whether to show debug line. */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "ToolTip", "Whether to show debug line." },
	};
#endif
	void Z_Construct_UScriptStruct_FOccluderParams_Statics::NewProp_bShowDebug_SetBit(void* Obj)
	{
		((FOccluderParams*)Obj)->bShowDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOccluderParams_Statics::NewProp_bShowDebug = { "bShowDebug", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FOccluderParams), &Z_Construct_UScriptStruct_FOccluderParams_Statics::NewProp_bShowDebug_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOccluderParams_Statics::NewProp_bShowDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOccluderParams_Statics::NewProp_bShowDebug_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOccluderParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOccluderParams_Statics::NewProp_TraceShape_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOccluderParams_Statics::NewProp_TraceShape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOccluderParams_Statics::NewProp_bTraceSingle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOccluderParams_Statics::NewProp_ObjectTypes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOccluderParams_Statics::NewProp_ObjectTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOccluderParams_Statics::NewProp_ActorsToIgnore_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOccluderParams_Statics::NewProp_ActorsToIgnore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOccluderParams_Statics::NewProp_MaximumTraceLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOccluderParams_Statics::NewProp_MinimumOcclusionTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOccluderParams_Statics::NewProp_SphereRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOccluderParams_Statics::NewProp_bShowDebug,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOccluderParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EasyCamera,
		nullptr,
		&NewStructOps,
		"OccluderParams",
		sizeof(FOccluderParams),
		alignof(FOccluderParams),
		Z_Construct_UScriptStruct_FOccluderParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOccluderParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOccluderParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOccluderParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOccluderParams()
	{
		if (!Z_Registration_Info_UScriptStruct_OccluderParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OccluderParams.InnerSingleton, Z_Construct_UScriptStruct_FOccluderParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OccluderParams.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DampParams;
class UScriptStruct* FDampParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DampParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DampParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDampParams, Z_Construct_UPackage__Script_EasyCamera(), TEXT("DampParams"));
	}
	return Z_Registration_Info_UScriptStruct_DampParams.OuterSingleton;
}
template<> EASYCAMERA_API UScriptStruct* StaticStruct<FDampParams>()
{
	return FDampParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDampParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_DampMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DampMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DampMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Residual_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Residual;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringCoefficient_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpringCoefficient;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringResidual_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpringResidual;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDampParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A set of parameters describing damping. \n *  You should always add damping, even though you don't really need it.\n *  If this is the case, set damping as a very small number, such as 0.005.\n */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "ToolTip", "A set of parameters describing damping.\nYou should always add damping, even though you don't really need it.\nIf this is the case, set damping as a very small number, such as 0.005." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDampParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDampParams>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDampParams_Statics::NewProp_DampMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDampParams_Statics::NewProp_DampMethod_MetaData[] = {
		{ "Category", "DampParams" },
		{ "Comment", "/** Which damp method you want to use. Select from Naive, Simulate and Spring. */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "ToolTip", "Which damp method you want to use. Select from Naive, Simulate and Spring." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDampParams_Statics::NewProp_DampMethod = { "DampMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDampParams, DampMethod), Z_Construct_UEnum_EasyCamera_EDampMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FDampParams_Statics::NewProp_DampMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDampParams_Statics::NewProp_DampMethod_MetaData)) }; // 3157704024
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDampParams_Statics::NewProp_Residual_MetaData[] = {
		{ "Category", "DampParams" },
		{ "Comment", "/** Used for Naive and Simulate. Damp residual after damp time (in percent). */" },
		{ "EditCondition", "DampMethod != EDampMethod::Spring" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "ToolTip", "Used for Naive and Simulate. Damp residual after damp time (in percent)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDampParams_Statics::NewProp_Residual = { "Residual", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDampParams, Residual), METADATA_PARAMS(Z_Construct_UScriptStruct_FDampParams_Statics::NewProp_Residual_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDampParams_Statics::NewProp_Residual_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDampParams_Statics::NewProp_SpringCoefficient_MetaData[] = {
		{ "Category", "DampParams" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Used for Spring. The spring coefficient controlling how responsive the actor gets back to its rest place.In the order of X, Y and Z axis. */" },
		{ "EditCondition", "DampMethod == EDampMethod::Spring" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "ToolTip", "Used for Spring. The spring coefficient controlling how responsive the actor gets back to its rest place.In the order of X, Y and Z axis." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDampParams_Statics::NewProp_SpringCoefficient = { "SpringCoefficient", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDampParams, SpringCoefficient), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FDampParams_Statics::NewProp_SpringCoefficient_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDampParams_Statics::NewProp_SpringCoefficient_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDampParams_Statics::NewProp_SpringResidual_MetaData[] = {
		{ "Category", "DampParams" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Used for Spring. Damp residual after damp time. Keep it large (>0.5) for more stable camera movement. */" },
		{ "EditCondition", "DampMethod == EDampMethod::Spring" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "ToolTip", "Used for Spring. Damp residual after damp time. Keep it large (>0.5) for more stable camera movement." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDampParams_Statics::NewProp_SpringResidual = { "SpringResidual", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDampParams, SpringResidual), METADATA_PARAMS(Z_Construct_UScriptStruct_FDampParams_Statics::NewProp_SpringResidual_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDampParams_Statics::NewProp_SpringResidual_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDampParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDampParams_Statics::NewProp_DampMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDampParams_Statics::NewProp_DampMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDampParams_Statics::NewProp_Residual,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDampParams_Statics::NewProp_SpringCoefficient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDampParams_Statics::NewProp_SpringResidual,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDampParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EasyCamera,
		nullptr,
		&NewStructOps,
		"DampParams",
		sizeof(FDampParams),
		alignof(FDampParams),
		Z_Construct_UScriptStruct_FDampParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDampParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDampParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDampParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDampParams()
	{
		if (!Z_Registration_Info_UScriptStruct_DampParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DampParams.InnerSingleton, Z_Construct_UScriptStruct_FDampParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DampParams.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BoundingWrappedActor;
class UScriptStruct* FBoundingWrappedActor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BoundingWrappedActor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BoundingWrappedActor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoundingWrappedActor, Z_Construct_UPackage__Script_EasyCamera(), TEXT("BoundingWrappedActor"));
	}
	return Z_Registration_Info_UScriptStruct_BoundingWrappedActor.OuterSingleton;
}
template<> EASYCAMERA_API UScriptStruct* StaticStruct<FBoundingWrappedActor>()
{
	return FBoundingWrappedActor::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBoundingWrappedActor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExcludeBoundingBox_MetaData[];
#endif
		static void NewProp_bExcludeBoundingBox_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExcludeBoundingBox;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoundingWrappedActor_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A set of parameters describing an actor wrapped by a bounding box. */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "ToolTip", "A set of parameters describing an actor wrapped by a bounding box." },
	};
#endif
	void* Z_Construct_UScriptStruct_FBoundingWrappedActor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoundingWrappedActor>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoundingWrappedActor_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "BoundingWrappedActor" },
		{ "Comment", "/** Target actor. */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "ToolTip", "Target actor." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FBoundingWrappedActor_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBoundingWrappedActor, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoundingWrappedActor_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoundingWrappedActor_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoundingWrappedActor_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "BoundingWrappedActor" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Weight. */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "ToolTip", "Weight." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBoundingWrappedActor_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBoundingWrappedActor, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoundingWrappedActor_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoundingWrappedActor_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoundingWrappedActor_Statics::NewProp_Width_MetaData[] = {
		{ "Category", "BoundingWrappedActor" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** (Half) Width of the bounding box on screen space. */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "ToolTip", "(Half) Width of the bounding box on screen space." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBoundingWrappedActor_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBoundingWrappedActor, Width), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoundingWrappedActor_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoundingWrappedActor_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoundingWrappedActor_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "BoundingWrappedActor" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** (Half) Height of the bounding box on screen space. */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "ToolTip", "(Half) Height of the bounding box on screen space." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBoundingWrappedActor_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBoundingWrappedActor, Height), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoundingWrappedActor_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoundingWrappedActor_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoundingWrappedActor_Statics::NewProp_bExcludeBoundingBox_MetaData[] = {
		{ "Category", "BoundingWrappedActor" },
		{ "Comment", "/** Whether to exclude this actor (ignore this bounding box) during the resolving stage. */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "ToolTip", "Whether to exclude this actor (ignore this bounding box) during the resolving stage." },
	};
#endif
	void Z_Construct_UScriptStruct_FBoundingWrappedActor_Statics::NewProp_bExcludeBoundingBox_SetBit(void* Obj)
	{
		((FBoundingWrappedActor*)Obj)->bExcludeBoundingBox = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBoundingWrappedActor_Statics::NewProp_bExcludeBoundingBox = { "bExcludeBoundingBox", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FBoundingWrappedActor), &Z_Construct_UScriptStruct_FBoundingWrappedActor_Statics::NewProp_bExcludeBoundingBox_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoundingWrappedActor_Statics::NewProp_bExcludeBoundingBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoundingWrappedActor_Statics::NewProp_bExcludeBoundingBox_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoundingWrappedActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoundingWrappedActor_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoundingWrappedActor_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoundingWrappedActor_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoundingWrappedActor_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoundingWrappedActor_Statics::NewProp_bExcludeBoundingBox,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoundingWrappedActor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EasyCamera,
		nullptr,
		&NewStructOps,
		"BoundingWrappedActor",
		sizeof(FBoundingWrappedActor),
		alignof(FBoundingWrappedActor),
		Z_Construct_UScriptStruct_FBoundingWrappedActor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoundingWrappedActor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBoundingWrappedActor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoundingWrappedActor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBoundingWrappedActor()
	{
		if (!Z_Registration_Info_UScriptStruct_BoundingWrappedActor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BoundingWrappedActor.InnerSingleton, Z_Construct_UScriptStruct_FBoundingWrappedActor_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BoundingWrappedActor.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RailManualPointParams;
class UScriptStruct* FRailManualPointParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RailManualPointParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RailManualPointParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRailManualPointParams, Z_Construct_UPackage__Script_EasyCamera(), TEXT("RailManualPointParams"));
	}
	return Z_Registration_Info_UScriptStruct_RailManualPointParams.OuterSingleton;
}
template<> EASYCAMERA_API UScriptStruct* StaticStruct<FRailManualPointParams>()
{
	return FRailManualPointParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRailManualPointParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendFunc_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlendFunc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForward_MetaData[];
#endif
		static void NewProp_bForward_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForward;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRailManualPointParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A set of parameters defining one key point for ERailFollowType::Manual. */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "ToolTip", "A set of parameters defining one key point for ERailFollowType::Manual." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRailManualPointParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRailManualPointParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRailManualPointParams_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "RailManualPointParams" },
		{ "Comment", "/** Position on rail, within [0,1]. */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "ToolTip", "Position on rail, within [0,1]." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRailManualPointParams_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRailManualPointParams, Position), METADATA_PARAMS(Z_Construct_UScriptStruct_FRailManualPointParams_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRailManualPointParams_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRailManualPointParams_Statics::NewProp_BlendTime_MetaData[] = {
		{ "Category", "RailManualPointParams" },
		{ "Comment", "/** Blend time used from previous key point to this one. */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "ToolTip", "Blend time used from previous key point to this one." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRailManualPointParams_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRailManualPointParams, BlendTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FRailManualPointParams_Statics::NewProp_BlendTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRailManualPointParams_Statics::NewProp_BlendTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRailManualPointParams_Statics::NewProp_BlendFunc_MetaData[] = {
		{ "Category", "RailManualPointParams" },
		{ "Comment", "/** Blend function used from previous key point to this one. */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "ToolTip", "Blend function used from previous key point to this one." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRailManualPointParams_Statics::NewProp_BlendFunc = { "BlendFunc", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRailManualPointParams, BlendFunc), Z_Construct_UEnum_Engine_EEasingFunc, METADATA_PARAMS(Z_Construct_UScriptStruct_FRailManualPointParams_Statics::NewProp_BlendFunc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRailManualPointParams_Statics::NewProp_BlendFunc_MetaData)) }; // 36709713
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRailManualPointParams_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "RailManualPointParams" },
		{ "Comment", "/** How long will this key point stay at this position. */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "ToolTip", "How long will this key point stay at this position." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRailManualPointParams_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRailManualPointParams, Duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FRailManualPointParams_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRailManualPointParams_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRailManualPointParams_Statics::NewProp_bForward_MetaData[] = {
		{ "Category", "RailManualPointParams" },
		{ "Comment", "/** Is this key point going forward from previous key point or backward?\n\x09 *  For example, if previous key point position is 0.5, and this is 0.8,\n\x09 *  forward direction 0.5->0.6->0.7->0.8, and backward is 0.5->0.4->...->1.0->0.9->0.8.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "ToolTip", "Is this key point going forward from previous key point or backward?\nFor example, if previous key point position is 0.5, and this is 0.8,\nforward direction 0.5->0.6->0.7->0.8, and backward is 0.5->0.4->...->1.0->0.9->0.8." },
	};
#endif
	void Z_Construct_UScriptStruct_FRailManualPointParams_Statics::NewProp_bForward_SetBit(void* Obj)
	{
		((FRailManualPointParams*)Obj)->bForward = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRailManualPointParams_Statics::NewProp_bForward = { "bForward", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRailManualPointParams), &Z_Construct_UScriptStruct_FRailManualPointParams_Statics::NewProp_bForward_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRailManualPointParams_Statics::NewProp_bForward_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRailManualPointParams_Statics::NewProp_bForward_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRailManualPointParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRailManualPointParams_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRailManualPointParams_Statics::NewProp_BlendTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRailManualPointParams_Statics::NewProp_BlendFunc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRailManualPointParams_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRailManualPointParams_Statics::NewProp_bForward,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRailManualPointParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EasyCamera,
		nullptr,
		&NewStructOps,
		"RailManualPointParams",
		sizeof(FRailManualPointParams),
		alignof(FRailManualPointParams),
		Z_Construct_UScriptStruct_FRailManualPointParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRailManualPointParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRailManualPointParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRailManualPointParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRailManualPointParams()
	{
		if (!Z_Registration_Info_UScriptStruct_RailManualPointParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RailManualPointParams.InnerSingleton, Z_Construct_UScriptStruct_FRailManualPointParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RailManualPointParams.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RailManualParams;
class UScriptStruct* FRailManualParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RailManualParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RailManualParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRailManualParams, Z_Construct_UPackage__Script_EasyCamera(), TEXT("RailManualParams"));
	}
	return Z_Registration_Info_UScriptStruct_RailManualParams.OuterSingleton;
}
template<> EASYCAMERA_API UScriptStruct* StaticStruct<FRailManualParams>()
{
	return FRailManualParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRailManualParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartPosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeyPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_KeyPoints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRailManualParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A set of parameters for ERailFollowType::Manual. */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "ToolTip", "A set of parameters for ERailFollowType::Manual." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRailManualParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRailManualParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRailManualParams_Statics::NewProp_StartPosition_MetaData[] = {
		{ "Category", "RailManualParams" },
		{ "Comment", "/** Start position on rail, within [0,1]. */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "ToolTip", "Start position on rail, within [0,1]." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRailManualParams_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRailManualParams, StartPosition), METADATA_PARAMS(Z_Construct_UScriptStruct_FRailManualParams_Statics::NewProp_StartPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRailManualParams_Statics::NewProp_StartPosition_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRailManualParams_Statics::NewProp_KeyPoints_Inner = { "KeyPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRailManualPointParams, METADATA_PARAMS(nullptr, 0) }; // 3480825443
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRailManualParams_Statics::NewProp_KeyPoints_MetaData[] = {
		{ "Category", "RailManualParams" },
		{ "Comment", "/** A list of key points on rail. */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "ToolTip", "A list of key points on rail." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRailManualParams_Statics::NewProp_KeyPoints = { "KeyPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRailManualParams, KeyPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRailManualParams_Statics::NewProp_KeyPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRailManualParams_Statics::NewProp_KeyPoints_MetaData)) }; // 3480825443
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRailManualParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRailManualParams_Statics::NewProp_StartPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRailManualParams_Statics::NewProp_KeyPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRailManualParams_Statics::NewProp_KeyPoints,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRailManualParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EasyCamera,
		nullptr,
		&NewStructOps,
		"RailManualParams",
		sizeof(FRailManualParams),
		alignof(FRailManualParams),
		Z_Construct_UScriptStruct_FRailManualParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRailManualParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRailManualParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRailManualParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRailManualParams()
	{
		if (!Z_Registration_Info_UScriptStruct_RailManualParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RailManualParams.InnerSingleton, Z_Construct_UScriptStruct_FRailManualParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RailManualParams.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CraneManualPointParams;
class UScriptStruct* FCraneManualPointParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CraneManualPointParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CraneManualPointParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCraneManualPointParams, Z_Construct_UPackage__Script_EasyCamera(), TEXT("CraneManualPointParams"));
	}
	return Z_Registration_Info_UScriptStruct_CraneManualPointParams.OuterSingleton;
}
template<> EASYCAMERA_API UScriptStruct* StaticStruct<FCraneManualPointParams>()
{
	return FCraneManualPointParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCraneManualPointParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendFunc_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlendFunc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForwardYaw_MetaData[];
#endif
		static void NewProp_bForwardYaw_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForwardYaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForwardPitch_MetaData[];
#endif
		static void NewProp_bForwardPitch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForwardPitch;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCraneManualPointParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A set of parameters defining one key point for ECraneFollowType::Manual. */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "ToolTip", "A set of parameters defining one key point for ECraneFollowType::Manual." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCraneManualPointParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCraneManualPointParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCraneManualPointParams_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "CraneManualPointParams" },
		{ "Comment", "/** Position on crane, respectively for arm length, crane yaw and crane pitch, in world space. */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "ToolTip", "Position on crane, respectively for arm length, crane yaw and crane pitch, in world space." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCraneManualPointParams_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCraneManualPointParams, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FCraneManualPointParams_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCraneManualPointParams_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCraneManualPointParams_Statics::NewProp_BlendTime_MetaData[] = {
		{ "Category", "CraneManualPointParams" },
		{ "Comment", "/** Blend time used from previous key point to this one. Consistent for arm length, yaw and pitch. */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "ToolTip", "Blend time used from previous key point to this one. Consistent for arm length, yaw and pitch." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCraneManualPointParams_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCraneManualPointParams, BlendTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FCraneManualPointParams_Statics::NewProp_BlendTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCraneManualPointParams_Statics::NewProp_BlendTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCraneManualPointParams_Statics::NewProp_BlendFunc_MetaData[] = {
		{ "Category", "CraneManualPointParams" },
		{ "Comment", "/** Blend function used from previous key point to this one. Consistent for arm length, yaw and pitch. */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "ToolTip", "Blend function used from previous key point to this one. Consistent for arm length, yaw and pitch." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCraneManualPointParams_Statics::NewProp_BlendFunc = { "BlendFunc", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCraneManualPointParams, BlendFunc), Z_Construct_UEnum_Engine_EEasingFunc, METADATA_PARAMS(Z_Construct_UScriptStruct_FCraneManualPointParams_Statics::NewProp_BlendFunc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCraneManualPointParams_Statics::NewProp_BlendFunc_MetaData)) }; // 36709713
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCraneManualPointParams_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "CraneManualPointParams" },
		{ "Comment", "/** How long will this key point stay at this position. Consistent for arm length, yaw and pitch. */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "ToolTip", "How long will this key point stay at this position. Consistent for arm length, yaw and pitch." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCraneManualPointParams_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCraneManualPointParams, Duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FCraneManualPointParams_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCraneManualPointParams_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCraneManualPointParams_Statics::NewProp_bForwardYaw_MetaData[] = {
		{ "Category", "CraneManualPointParams" },
		{ "Comment", "/** Is yaw going forward from previous key point or backward? In degree.\n\x09 *  For example, if previous key point position is 30, and this is 50,\n\x09 *  forward direction 30->40->50, and backward is 30->20->...->360->350->...->50.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "ToolTip", "Is yaw going forward from previous key point or backward? In degree.\nFor example, if previous key point position is 30, and this is 50,\nforward direction 30->40->50, and backward is 30->20->...->360->350->...->50." },
	};
#endif
	void Z_Construct_UScriptStruct_FCraneManualPointParams_Statics::NewProp_bForwardYaw_SetBit(void* Obj)
	{
		((FCraneManualPointParams*)Obj)->bForwardYaw = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCraneManualPointParams_Statics::NewProp_bForwardYaw = { "bForwardYaw", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCraneManualPointParams), &Z_Construct_UScriptStruct_FCraneManualPointParams_Statics::NewProp_bForwardYaw_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCraneManualPointParams_Statics::NewProp_bForwardYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCraneManualPointParams_Statics::NewProp_bForwardYaw_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCraneManualPointParams_Statics::NewProp_bForwardPitch_MetaData[] = {
		{ "Category", "CraneManualPointParams" },
		{ "Comment", "/** Is pitch going forward from previous key point or backward? In degree.\n\x09 *  For example, if previous key point position is 30, and this is 50,\n\x09 *  forward direction 30->40->50, and backward is 30->20->...->360->350->...->50.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "ToolTip", "Is pitch going forward from previous key point or backward? In degree.\nFor example, if previous key point position is 30, and this is 50,\nforward direction 30->40->50, and backward is 30->20->...->360->350->...->50." },
	};
#endif
	void Z_Construct_UScriptStruct_FCraneManualPointParams_Statics::NewProp_bForwardPitch_SetBit(void* Obj)
	{
		((FCraneManualPointParams*)Obj)->bForwardPitch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCraneManualPointParams_Statics::NewProp_bForwardPitch = { "bForwardPitch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCraneManualPointParams), &Z_Construct_UScriptStruct_FCraneManualPointParams_Statics::NewProp_bForwardPitch_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCraneManualPointParams_Statics::NewProp_bForwardPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCraneManualPointParams_Statics::NewProp_bForwardPitch_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCraneManualPointParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCraneManualPointParams_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCraneManualPointParams_Statics::NewProp_BlendTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCraneManualPointParams_Statics::NewProp_BlendFunc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCraneManualPointParams_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCraneManualPointParams_Statics::NewProp_bForwardYaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCraneManualPointParams_Statics::NewProp_bForwardPitch,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCraneManualPointParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EasyCamera,
		nullptr,
		&NewStructOps,
		"CraneManualPointParams",
		sizeof(FCraneManualPointParams),
		alignof(FCraneManualPointParams),
		Z_Construct_UScriptStruct_FCraneManualPointParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCraneManualPointParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCraneManualPointParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCraneManualPointParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCraneManualPointParams()
	{
		if (!Z_Registration_Info_UScriptStruct_CraneManualPointParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CraneManualPointParams.InnerSingleton, Z_Construct_UScriptStruct_FCraneManualPointParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CraneManualPointParams.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CraneManualParams;
class UScriptStruct* FCraneManualParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CraneManualParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CraneManualParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCraneManualParams, Z_Construct_UPackage__Script_EasyCamera(), TEXT("CraneManualParams"));
	}
	return Z_Registration_Info_UScriptStruct_CraneManualParams.OuterSingleton;
}
template<> EASYCAMERA_API UScriptStruct* StaticStruct<FCraneManualParams>()
{
	return FCraneManualParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCraneManualParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartPosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeyPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_KeyPoints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCraneManualParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A set of parameters for ECraneFollowType::Manual. */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "ToolTip", "A set of parameters for ECraneFollowType::Manual." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCraneManualParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCraneManualParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCraneManualParams_Statics::NewProp_StartPosition_MetaData[] = {
		{ "Category", "CraneManualParams" },
		{ "Comment", "/** Start position on crane, respectively for arm length, crane yaw and crane pitch, in world space. */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "ToolTip", "Start position on crane, respectively for arm length, crane yaw and crane pitch, in world space." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCraneManualParams_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCraneManualParams, StartPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FCraneManualParams_Statics::NewProp_StartPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCraneManualParams_Statics::NewProp_StartPosition_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCraneManualParams_Statics::NewProp_KeyPoints_Inner = { "KeyPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCraneManualPointParams, METADATA_PARAMS(nullptr, 0) }; // 4219685089
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCraneManualParams_Statics::NewProp_KeyPoints_MetaData[] = {
		{ "Category", "CraneManualParams" },
		{ "Comment", "/** A list of key points on crane. */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "ToolTip", "A list of key points on crane." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCraneManualParams_Statics::NewProp_KeyPoints = { "KeyPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCraneManualParams, KeyPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCraneManualParams_Statics::NewProp_KeyPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCraneManualParams_Statics::NewProp_KeyPoints_MetaData)) }; // 4219685089
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCraneManualParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCraneManualParams_Statics::NewProp_StartPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCraneManualParams_Statics::NewProp_KeyPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCraneManualParams_Statics::NewProp_KeyPoints,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCraneManualParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EasyCamera,
		nullptr,
		&NewStructOps,
		"CraneManualParams",
		sizeof(FCraneManualParams),
		alignof(FCraneManualParams),
		Z_Construct_UScriptStruct_FCraneManualParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCraneManualParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCraneManualParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCraneManualParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCraneManualParams()
	{
		if (!Z_Registration_Info_UScriptStruct_CraneManualParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CraneManualParams.InnerSingleton, Z_Construct_UScriptStruct_FCraneManualParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CraneManualParams.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WeightedPostProcess;
class UScriptStruct* FWeightedPostProcess::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WeightedPostProcess.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WeightedPostProcess.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeightedPostProcess, Z_Construct_UPackage__Script_EasyCamera(), TEXT("WeightedPostProcess"));
	}
	return Z_Registration_Info_UScriptStruct_WeightedPostProcess.OuterSingleton;
}
template<> EASYCAMERA_API UScriptStruct* StaticStruct<FWeightedPostProcess>()
{
	return FWeightedPostProcess::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWeightedPostProcess_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PPSetting_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PPSetting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendInTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendInTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendOutTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendOutTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeightedPostProcess_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A struct consisting of PostProcessSettings and its corresponding weight. */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "ToolTip", "A struct consisting of PostProcessSettings and its corresponding weight." },
	};
#endif
	void* Z_Construct_UScriptStruct_FWeightedPostProcess_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeightedPostProcess>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeightedPostProcess_Statics::NewProp_PPSetting_MetaData[] = {
		{ "Category", "WeightedPostProcess" },
		{ "Comment", "/** Post process settings. */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "ToolTip", "Post process settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWeightedPostProcess_Statics::NewProp_PPSetting = { "PPSetting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWeightedPostProcess, PPSetting), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeightedPostProcess_Statics::NewProp_PPSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeightedPostProcess_Statics::NewProp_PPSetting_MetaData)) }; // 617129618
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeightedPostProcess_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "WeightedPostProcess" },
		{ "Comment", "/** Weight. The amount of influence the volume's properties have. A value of 1 has full effect, while a value of 0 has no effect. */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "ToolTip", "Weight. The amount of influence the volume's properties have. A value of 1 has full effect, while a value of 0 has no effect." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeightedPostProcess_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWeightedPostProcess, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeightedPostProcess_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeightedPostProcess_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeightedPostProcess_Statics::NewProp_BlendInTime_MetaData[] = {
		{ "Category", "WeightedPostProcess" },
		{ "Comment", "/** Time used to blend into this post process effect. */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "ToolTip", "Time used to blend into this post process effect." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeightedPostProcess_Statics::NewProp_BlendInTime = { "BlendInTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWeightedPostProcess, BlendInTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeightedPostProcess_Statics::NewProp_BlendInTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeightedPostProcess_Statics::NewProp_BlendInTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeightedPostProcess_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "WeightedPostProcess" },
		{ "Comment", "/** Duration for this post process effect. O means endlessness. */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "ToolTip", "Duration for this post process effect. O means endlessness." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeightedPostProcess_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWeightedPostProcess, Duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeightedPostProcess_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeightedPostProcess_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeightedPostProcess_Statics::NewProp_BlendOutTime_MetaData[] = {
		{ "Category", "WeightedPostProcess" },
		{ "Comment", "/** Time used to blend out of this post process effect. */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "ToolTip", "Time used to blend out of this post process effect." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeightedPostProcess_Statics::NewProp_BlendOutTime = { "BlendOutTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWeightedPostProcess, BlendOutTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeightedPostProcess_Statics::NewProp_BlendOutTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeightedPostProcess_Statics::NewProp_BlendOutTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeightedPostProcess_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeightedPostProcess_Statics::NewProp_PPSetting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeightedPostProcess_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeightedPostProcess_Statics::NewProp_BlendInTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeightedPostProcess_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeightedPostProcess_Statics::NewProp_BlendOutTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeightedPostProcess_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EasyCamera,
		nullptr,
		&NewStructOps,
		"WeightedPostProcess",
		sizeof(FWeightedPostProcess),
		alignof(FWeightedPostProcess),
		Z_Construct_UScriptStruct_FWeightedPostProcess_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeightedPostProcess_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWeightedPostProcess_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeightedPostProcess_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWeightedPostProcess()
	{
		if (!Z_Registration_Info_UScriptStruct_WeightedPostProcess.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WeightedPostProcess.InnerSingleton, Z_Construct_UScriptStruct_FWeightedPostProcess_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WeightedPostProcess.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PackedOscillationParams;
class UScriptStruct* FPackedOscillationParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PackedOscillationParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PackedOscillationParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPackedOscillationParams, Z_Construct_UPackage__Script_EasyCamera(), TEXT("PackedOscillationParams"));
	}
	return Z_Registration_Info_UScriptStruct_PackedOscillationParams.OuterSingleton;
}
template<> EASYCAMERA_API UScriptStruct* StaticStruct<FPackedOscillationParams>()
{
	return FPackedOscillationParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPackedOscillationParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_ShakeType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShakeType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ShakeType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationAmplitudeMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LocationAmplitudeMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationFrequencyMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LocationFrequencyMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_X;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Y;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Z_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Z;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationAmplitudeMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationAmplitudeMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationFrequencyMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationFrequencyMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pitch_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Yaw_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Yaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Roll_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Roll;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FOV_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FOV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendInTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendInTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendOutTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendOutTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A struct packing some oscillation parameters.  */" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
		{ "ToolTip", "A struct packing some oscillation parameters." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPackedOscillationParams>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_ShakeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_ShakeType_MetaData[] = {
		{ "Category", "PackedOscillationParams" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_ShakeType = { "ShakeType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPackedOscillationParams, ShakeType), Z_Construct_UEnum_EasyCamera_ECameraShakeType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_ShakeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_ShakeType_MetaData)) }; // 3468767513
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_LocationAmplitudeMultiplier_MetaData[] = {
		{ "Category", "PackedOscillationParams" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_LocationAmplitudeMultiplier = { "LocationAmplitudeMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPackedOscillationParams, LocationAmplitudeMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_LocationAmplitudeMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_LocationAmplitudeMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_LocationFrequencyMultiplier_MetaData[] = {
		{ "Category", "PackedOscillationParams" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_LocationFrequencyMultiplier = { "LocationFrequencyMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPackedOscillationParams, LocationFrequencyMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_LocationFrequencyMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_LocationFrequencyMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_X_MetaData[] = {
		{ "Category", "PackedOscillationParams" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPackedOscillationParams, X), Z_Construct_UScriptStruct_FWaveOscillator, METADATA_PARAMS(Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_X_MetaData)) }; // 2877888459
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_Y_MetaData[] = {
		{ "Category", "PackedOscillationParams" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPackedOscillationParams, Y), Z_Construct_UScriptStruct_FWaveOscillator, METADATA_PARAMS(Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_Y_MetaData)) }; // 2877888459
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_Z_MetaData[] = {
		{ "Category", "PackedOscillationParams" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPackedOscillationParams, Z), Z_Construct_UScriptStruct_FWaveOscillator, METADATA_PARAMS(Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_Z_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_Z_MetaData)) }; // 2877888459
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_RotationAmplitudeMultiplier_MetaData[] = {
		{ "Category", "PackedOscillationParams" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_RotationAmplitudeMultiplier = { "RotationAmplitudeMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPackedOscillationParams, RotationAmplitudeMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_RotationAmplitudeMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_RotationAmplitudeMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_RotationFrequencyMultiplier_MetaData[] = {
		{ "Category", "PackedOscillationParams" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_RotationFrequencyMultiplier = { "RotationFrequencyMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPackedOscillationParams, RotationFrequencyMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_RotationFrequencyMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_RotationFrequencyMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_Pitch_MetaData[] = {
		{ "Category", "PackedOscillationParams" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPackedOscillationParams, Pitch), Z_Construct_UScriptStruct_FWaveOscillator, METADATA_PARAMS(Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_Pitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_Pitch_MetaData)) }; // 2877888459
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_Yaw_MetaData[] = {
		{ "Category", "PackedOscillationParams" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPackedOscillationParams, Yaw), Z_Construct_UScriptStruct_FWaveOscillator, METADATA_PARAMS(Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_Yaw_MetaData)) }; // 2877888459
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_Roll_MetaData[] = {
		{ "Category", "PackedOscillationParams" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_Roll = { "Roll", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPackedOscillationParams, Roll), Z_Construct_UScriptStruct_FWaveOscillator, METADATA_PARAMS(Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_Roll_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_Roll_MetaData)) }; // 2877888459
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_FOV_MetaData[] = {
		{ "Category", "PackedOscillationParams" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_FOV = { "FOV", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPackedOscillationParams, FOV), Z_Construct_UScriptStruct_FWaveOscillator, METADATA_PARAMS(Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_FOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_FOV_MetaData)) }; // 2877888459
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "PackedOscillationParams" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPackedOscillationParams, Duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_BlendInTime_MetaData[] = {
		{ "Category", "PackedOscillationParams" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_BlendInTime = { "BlendInTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPackedOscillationParams, BlendInTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_BlendInTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_BlendInTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_BlendOutTime_MetaData[] = {
		{ "Category", "PackedOscillationParams" },
		{ "ModuleRelativePath", "Public/Utils/ECameraTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_BlendOutTime = { "BlendOutTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPackedOscillationParams, BlendOutTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_BlendOutTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_BlendOutTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_ShakeType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_ShakeType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_LocationAmplitudeMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_LocationFrequencyMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_Z,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_RotationAmplitudeMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_RotationFrequencyMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_Pitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_Yaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_Roll,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_FOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_BlendInTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewProp_BlendOutTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EasyCamera,
		nullptr,
		&NewStructOps,
		"PackedOscillationParams",
		sizeof(FPackedOscillationParams),
		alignof(FPackedOscillationParams),
		Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPackedOscillationParams()
	{
		if (!Z_Registration_Info_UScriptStruct_PackedOscillationParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PackedOscillationParams.InnerSingleton, Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PackedOscillationParams.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraTypes_h_Statics::EnumInfo[] = {
		{ EHeading_StaticEnum, TEXT("EHeading"), &Z_Registration_Info_UEnum_EHeading, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 503929634U) },
		{ EStage_StaticEnum, TEXT("EStage"), &Z_Registration_Info_UEnum_EStage, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 656728869U) },
		{ ESimpleFollowType_StaticEnum, TEXT("ESimpleFollowType"), &Z_Registration_Info_UEnum_ESimpleFollowType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2865816498U) },
		{ ETraceShape_StaticEnum, TEXT("ETraceShape"), &Z_Registration_Info_UEnum_ETraceShape, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3406915036U) },
		{ EDampMethod_StaticEnum, TEXT("EDampMethod"), &Z_Registration_Info_UEnum_EDampMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3157704024U) },
		{ EGroupLocationMethod_StaticEnum, TEXT("EGroupLocationMethod"), &Z_Registration_Info_UEnum_EGroupLocationMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1544102701U) },
		{ EGroupRotationMethod_StaticEnum, TEXT("EGroupRotationMethod"), &Z_Registration_Info_UEnum_EGroupRotationMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 39848431U) },
		{ EResolveGroupActorMethod_StaticEnum, TEXT("EResolveGroupActorMethod"), &Z_Registration_Info_UEnum_EResolveGroupActorMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2252597265U) },
		{ ERailFollowType_StaticEnum, TEXT("ERailFollowType"), &Z_Registration_Info_UEnum_ERailFollowType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2653739046U) },
		{ ECraneFollowType_StaticEnum, TEXT("ECraneFollowType"), &Z_Registration_Info_UEnum_ECraneFollowType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1906596626U) },
		{ ECameraShakeType_StaticEnum, TEXT("ECameraShakeType"), &Z_Registration_Info_UEnum_ECameraShakeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3468767513U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraTypes_h_Statics::ScriptStructInfo[] = {
		{ FOrbit::StaticStruct, Z_Construct_UScriptStruct_FOrbit_Statics::NewStructOps, TEXT("Orbit"), &Z_Registration_Info_UScriptStruct_Orbit, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOrbit), 3410102452U) },
		{ FRecenteringParams::StaticStruct, Z_Construct_UScriptStruct_FRecenteringParams_Statics::NewStructOps, TEXT("RecenteringParams"), &Z_Registration_Info_UScriptStruct_RecenteringParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRecenteringParams), 3094948852U) },
		{ FOccluderParams::StaticStruct, Z_Construct_UScriptStruct_FOccluderParams_Statics::NewStructOps, TEXT("OccluderParams"), &Z_Registration_Info_UScriptStruct_OccluderParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOccluderParams), 3639929556U) },
		{ FDampParams::StaticStruct, Z_Construct_UScriptStruct_FDampParams_Statics::NewStructOps, TEXT("DampParams"), &Z_Registration_Info_UScriptStruct_DampParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDampParams), 4182365953U) },
		{ FBoundingWrappedActor::StaticStruct, Z_Construct_UScriptStruct_FBoundingWrappedActor_Statics::NewStructOps, TEXT("BoundingWrappedActor"), &Z_Registration_Info_UScriptStruct_BoundingWrappedActor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBoundingWrappedActor), 3484375314U) },
		{ FRailManualPointParams::StaticStruct, Z_Construct_UScriptStruct_FRailManualPointParams_Statics::NewStructOps, TEXT("RailManualPointParams"), &Z_Registration_Info_UScriptStruct_RailManualPointParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRailManualPointParams), 3480825443U) },
		{ FRailManualParams::StaticStruct, Z_Construct_UScriptStruct_FRailManualParams_Statics::NewStructOps, TEXT("RailManualParams"), &Z_Registration_Info_UScriptStruct_RailManualParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRailManualParams), 1768044752U) },
		{ FCraneManualPointParams::StaticStruct, Z_Construct_UScriptStruct_FCraneManualPointParams_Statics::NewStructOps, TEXT("CraneManualPointParams"), &Z_Registration_Info_UScriptStruct_CraneManualPointParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCraneManualPointParams), 4219685089U) },
		{ FCraneManualParams::StaticStruct, Z_Construct_UScriptStruct_FCraneManualParams_Statics::NewStructOps, TEXT("CraneManualParams"), &Z_Registration_Info_UScriptStruct_CraneManualParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCraneManualParams), 2381028218U) },
		{ FWeightedPostProcess::StaticStruct, Z_Construct_UScriptStruct_FWeightedPostProcess_Statics::NewStructOps, TEXT("WeightedPostProcess"), &Z_Registration_Info_UScriptStruct_WeightedPostProcess, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWeightedPostProcess), 89789668U) },
		{ FPackedOscillationParams::StaticStruct, Z_Construct_UScriptStruct_FPackedOscillationParams_Statics::NewStructOps, TEXT("PackedOscillationParams"), &Z_Registration_Info_UScriptStruct_PackedOscillationParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPackedOscillationParams), 727348018U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraTypes_h_1423985292(TEXT("/Script/EasyCamera"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ECameraTest_Plugins_EasyCamera_Source_EasyCamera_Public_Utils_ECameraTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
