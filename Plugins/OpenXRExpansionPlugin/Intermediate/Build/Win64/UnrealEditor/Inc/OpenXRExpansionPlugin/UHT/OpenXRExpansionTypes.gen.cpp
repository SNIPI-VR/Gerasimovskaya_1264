// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenXRExpansionPlugin/Public/OpenXRExpansionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenXRExpansionTypes() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	OPENXREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_OpenXRExpansionPlugin_EBPXRResultSwitch();
	OPENXREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_OpenXRExpansionPlugin_EVROpenXRSkeletonType();
	OPENXREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_OpenXRExpansionPlugin_EVRSkeletalHandIndex();
	OPENXREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_OpenXRExpansionPlugin_EXRHandJointType();
	OPENXREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData();
	OPENXREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData();
	OPENXREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPOpenXRSkeletalPair();
	UPackage* Z_Construct_UPackage__Script_OpenXRExpansionPlugin();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBPXRResultSwitch;
	static UEnum* EBPXRResultSwitch_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBPXRResultSwitch.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBPXRResultSwitch.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OpenXRExpansionPlugin_EBPXRResultSwitch, (UObject*)Z_Construct_UPackage__Script_OpenXRExpansionPlugin(), TEXT("EBPXRResultSwitch"));
		}
		return Z_Registration_Info_UEnum_EBPXRResultSwitch.OuterSingleton;
	}
	template<> OPENXREXPANSIONPLUGIN_API UEnum* StaticEnum<EBPXRResultSwitch>()
	{
		return EBPXRResultSwitch_StaticEnum();
	}
	struct Z_Construct_UEnum_OpenXRExpansionPlugin_EBPXRResultSwitch_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OpenXRExpansionPlugin_EBPXRResultSwitch_Statics::Enumerators[] = {
		{ "EBPXRResultSwitch::OnSucceeded", (int64)EBPXRResultSwitch::OnSucceeded },
		{ "EBPXRResultSwitch::OnFailed", (int64)EBPXRResultSwitch::OnFailed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OpenXRExpansionPlugin_EBPXRResultSwitch_Statics::Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This makes a lot of the blueprint functions cleaner\n" },
#endif
		{ "ModuleRelativePath", "Public/OpenXRExpansionTypes.h" },
		{ "OnFailed.Comment", "// On Failure\n" },
		{ "OnFailed.Name", "EBPXRResultSwitch::OnFailed" },
		{ "OnFailed.ToolTip", "On Failure" },
		{ "OnSucceeded.Comment", "// On Success\n" },
		{ "OnSucceeded.Name", "EBPXRResultSwitch::OnSucceeded" },
		{ "OnSucceeded.ToolTip", "On Success" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This makes a lot of the blueprint functions cleaner" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OpenXRExpansionPlugin_EBPXRResultSwitch_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OpenXRExpansionPlugin,
		nullptr,
		"EBPXRResultSwitch",
		"EBPXRResultSwitch",
		Z_Construct_UEnum_OpenXRExpansionPlugin_EBPXRResultSwitch_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OpenXRExpansionPlugin_EBPXRResultSwitch_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OpenXRExpansionPlugin_EBPXRResultSwitch_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OpenXRExpansionPlugin_EBPXRResultSwitch_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OpenXRExpansionPlugin_EBPXRResultSwitch()
	{
		if (!Z_Registration_Info_UEnum_EBPXRResultSwitch.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBPXRResultSwitch.InnerSingleton, Z_Construct_UEnum_OpenXRExpansionPlugin_EBPXRResultSwitch_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBPXRResultSwitch.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVRSkeletalHandIndex;
	static UEnum* EVRSkeletalHandIndex_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVRSkeletalHandIndex.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVRSkeletalHandIndex.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OpenXRExpansionPlugin_EVRSkeletalHandIndex, (UObject*)Z_Construct_UPackage__Script_OpenXRExpansionPlugin(), TEXT("EVRSkeletalHandIndex"));
		}
		return Z_Registration_Info_UEnum_EVRSkeletalHandIndex.OuterSingleton;
	}
	template<> OPENXREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRSkeletalHandIndex>()
	{
		return EVRSkeletalHandIndex_StaticEnum();
	}
	struct Z_Construct_UEnum_OpenXRExpansionPlugin_EVRSkeletalHandIndex_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OpenXRExpansionPlugin_EVRSkeletalHandIndex_Statics::Enumerators[] = {
		{ "EVRSkeletalHandIndex::EActionHandIndex_Left", (int64)EVRSkeletalHandIndex::EActionHandIndex_Left },
		{ "EVRSkeletalHandIndex::EActionHandIndex_Right", (int64)EVRSkeletalHandIndex::EActionHandIndex_Right },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OpenXRExpansionPlugin_EVRSkeletalHandIndex_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EActionHandIndex_Left.Name", "EVRSkeletalHandIndex::EActionHandIndex_Left" },
		{ "EActionHandIndex_Right.Name", "EVRSkeletalHandIndex::EActionHandIndex_Right" },
		{ "ModuleRelativePath", "Public/OpenXRExpansionTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OpenXRExpansionPlugin_EVRSkeletalHandIndex_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OpenXRExpansionPlugin,
		nullptr,
		"EVRSkeletalHandIndex",
		"EVRSkeletalHandIndex",
		Z_Construct_UEnum_OpenXRExpansionPlugin_EVRSkeletalHandIndex_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OpenXRExpansionPlugin_EVRSkeletalHandIndex_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OpenXRExpansionPlugin_EVRSkeletalHandIndex_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OpenXRExpansionPlugin_EVRSkeletalHandIndex_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OpenXRExpansionPlugin_EVRSkeletalHandIndex()
	{
		if (!Z_Registration_Info_UEnum_EVRSkeletalHandIndex.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVRSkeletalHandIndex.InnerSingleton, Z_Construct_UEnum_OpenXRExpansionPlugin_EVRSkeletalHandIndex_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVRSkeletalHandIndex.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EXRHandJointType;
	static UEnum* EXRHandJointType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EXRHandJointType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EXRHandJointType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OpenXRExpansionPlugin_EXRHandJointType, (UObject*)Z_Construct_UPackage__Script_OpenXRExpansionPlugin(), TEXT("EXRHandJointType"));
		}
		return Z_Registration_Info_UEnum_EXRHandJointType.OuterSingleton;
	}
	template<> OPENXREXPANSIONPLUGIN_API UEnum* StaticEnum<EXRHandJointType>()
	{
		return EXRHandJointType_StaticEnum();
	}
	struct Z_Construct_UEnum_OpenXRExpansionPlugin_EXRHandJointType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OpenXRExpansionPlugin_EXRHandJointType_Statics::Enumerators[] = {
		{ "EXRHandJointType::OXR_HAND_JOINT_PALM_EXT", (int64)EXRHandJointType::OXR_HAND_JOINT_PALM_EXT },
		{ "EXRHandJointType::OXR_HAND_JOINT_WRIST_EXT", (int64)EXRHandJointType::OXR_HAND_JOINT_WRIST_EXT },
		{ "EXRHandJointType::OXR_HAND_JOINT_THUMB_METACARPAL_EXT", (int64)EXRHandJointType::OXR_HAND_JOINT_THUMB_METACARPAL_EXT },
		{ "EXRHandJointType::OXR_HAND_JOINT_THUMB_PROXIMAL_EXT", (int64)EXRHandJointType::OXR_HAND_JOINT_THUMB_PROXIMAL_EXT },
		{ "EXRHandJointType::OXR_HAND_JOINT_THUMB_DISTAL_EXT", (int64)EXRHandJointType::OXR_HAND_JOINT_THUMB_DISTAL_EXT },
		{ "EXRHandJointType::OXR_HAND_JOINT_THUMB_TIP_EXT", (int64)EXRHandJointType::OXR_HAND_JOINT_THUMB_TIP_EXT },
		{ "EXRHandJointType::OXR_HAND_JOINT_INDEX_METACARPAL_EXT", (int64)EXRHandJointType::OXR_HAND_JOINT_INDEX_METACARPAL_EXT },
		{ "EXRHandJointType::OXR_HAND_JOINT_INDEX_PROXIMAL_EXT", (int64)EXRHandJointType::OXR_HAND_JOINT_INDEX_PROXIMAL_EXT },
		{ "EXRHandJointType::OXR_HAND_JOINT_INDEX_INTERMEDIATE_EXT", (int64)EXRHandJointType::OXR_HAND_JOINT_INDEX_INTERMEDIATE_EXT },
		{ "EXRHandJointType::OXR_HAND_JOINT_INDEX_DISTAL_EXT", (int64)EXRHandJointType::OXR_HAND_JOINT_INDEX_DISTAL_EXT },
		{ "EXRHandJointType::OXR_HAND_JOINT_INDEX_TIP_EXT", (int64)EXRHandJointType::OXR_HAND_JOINT_INDEX_TIP_EXT },
		{ "EXRHandJointType::OXR_HAND_JOINT_MIDDLE_METACARPAL_EXT", (int64)EXRHandJointType::OXR_HAND_JOINT_MIDDLE_METACARPAL_EXT },
		{ "EXRHandJointType::OXR_HAND_JOINT_MIDDLE_PROXIMAL_EXT", (int64)EXRHandJointType::OXR_HAND_JOINT_MIDDLE_PROXIMAL_EXT },
		{ "EXRHandJointType::OXR_HAND_JOINT_MIDDLE_INTERMEDIATE_EXT", (int64)EXRHandJointType::OXR_HAND_JOINT_MIDDLE_INTERMEDIATE_EXT },
		{ "EXRHandJointType::OXR_HAND_JOINT_MIDDLE_DISTAL_EXT", (int64)EXRHandJointType::OXR_HAND_JOINT_MIDDLE_DISTAL_EXT },
		{ "EXRHandJointType::OXR_HAND_JOINT_MIDDLE_TIP_EXT", (int64)EXRHandJointType::OXR_HAND_JOINT_MIDDLE_TIP_EXT },
		{ "EXRHandJointType::OXR_HAND_JOINT_RING_METACARPAL_EXT", (int64)EXRHandJointType::OXR_HAND_JOINT_RING_METACARPAL_EXT },
		{ "EXRHandJointType::OXR_HAND_JOINT_RING_PROXIMAL_EXT", (int64)EXRHandJointType::OXR_HAND_JOINT_RING_PROXIMAL_EXT },
		{ "EXRHandJointType::OXR_HAND_JOINT_RING_INTERMEDIATE_EXT", (int64)EXRHandJointType::OXR_HAND_JOINT_RING_INTERMEDIATE_EXT },
		{ "EXRHandJointType::OXR_HAND_JOINT_RING_DISTAL_EXT", (int64)EXRHandJointType::OXR_HAND_JOINT_RING_DISTAL_EXT },
		{ "EXRHandJointType::OXR_HAND_JOINT_RING_TIP_EXT", (int64)EXRHandJointType::OXR_HAND_JOINT_RING_TIP_EXT },
		{ "EXRHandJointType::OXR_HAND_JOINT_LITTLE_METACARPAL_EXT", (int64)EXRHandJointType::OXR_HAND_JOINT_LITTLE_METACARPAL_EXT },
		{ "EXRHandJointType::OXR_HAND_JOINT_LITTLE_PROXIMAL_EXT", (int64)EXRHandJointType::OXR_HAND_JOINT_LITTLE_PROXIMAL_EXT },
		{ "EXRHandJointType::OXR_HAND_JOINT_LITTLE_INTERMEDIATE_EXT", (int64)EXRHandJointType::OXR_HAND_JOINT_LITTLE_INTERMEDIATE_EXT },
		{ "EXRHandJointType::OXR_HAND_JOINT_LITTLE_DISTAL_EXT", (int64)EXRHandJointType::OXR_HAND_JOINT_LITTLE_DISTAL_EXT },
		{ "EXRHandJointType::OXR_HAND_JOINT_LITTLE_TIP_EXT", (int64)EXRHandJointType::OXR_HAND_JOINT_LITTLE_TIP_EXT },
		{ "EXRHandJointType::OXR_HAND_JOINT_MAX_ENUM_EXT", (int64)EXRHandJointType::OXR_HAND_JOINT_MAX_ENUM_EXT },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OpenXRExpansionPlugin_EXRHandJointType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OpenXRExpansionTypes.h" },
		{ "OXR_HAND_JOINT_INDEX_DISTAL_EXT.Name", "EXRHandJointType::OXR_HAND_JOINT_INDEX_DISTAL_EXT" },
		{ "OXR_HAND_JOINT_INDEX_INTERMEDIATE_EXT.Name", "EXRHandJointType::OXR_HAND_JOINT_INDEX_INTERMEDIATE_EXT" },
		{ "OXR_HAND_JOINT_INDEX_METACARPAL_EXT.Name", "EXRHandJointType::OXR_HAND_JOINT_INDEX_METACARPAL_EXT" },
		{ "OXR_HAND_JOINT_INDEX_PROXIMAL_EXT.Name", "EXRHandJointType::OXR_HAND_JOINT_INDEX_PROXIMAL_EXT" },
		{ "OXR_HAND_JOINT_INDEX_TIP_EXT.Name", "EXRHandJointType::OXR_HAND_JOINT_INDEX_TIP_EXT" },
		{ "OXR_HAND_JOINT_LITTLE_DISTAL_EXT.Name", "EXRHandJointType::OXR_HAND_JOINT_LITTLE_DISTAL_EXT" },
		{ "OXR_HAND_JOINT_LITTLE_INTERMEDIATE_EXT.Name", "EXRHandJointType::OXR_HAND_JOINT_LITTLE_INTERMEDIATE_EXT" },
		{ "OXR_HAND_JOINT_LITTLE_METACARPAL_EXT.Name", "EXRHandJointType::OXR_HAND_JOINT_LITTLE_METACARPAL_EXT" },
		{ "OXR_HAND_JOINT_LITTLE_PROXIMAL_EXT.Name", "EXRHandJointType::OXR_HAND_JOINT_LITTLE_PROXIMAL_EXT" },
		{ "OXR_HAND_JOINT_LITTLE_TIP_EXT.Name", "EXRHandJointType::OXR_HAND_JOINT_LITTLE_TIP_EXT" },
		{ "OXR_HAND_JOINT_MAX_ENUM_EXT.Name", "EXRHandJointType::OXR_HAND_JOINT_MAX_ENUM_EXT" },
		{ "OXR_HAND_JOINT_MIDDLE_DISTAL_EXT.Name", "EXRHandJointType::OXR_HAND_JOINT_MIDDLE_DISTAL_EXT" },
		{ "OXR_HAND_JOINT_MIDDLE_INTERMEDIATE_EXT.Name", "EXRHandJointType::OXR_HAND_JOINT_MIDDLE_INTERMEDIATE_EXT" },
		{ "OXR_HAND_JOINT_MIDDLE_METACARPAL_EXT.Name", "EXRHandJointType::OXR_HAND_JOINT_MIDDLE_METACARPAL_EXT" },
		{ "OXR_HAND_JOINT_MIDDLE_PROXIMAL_EXT.Name", "EXRHandJointType::OXR_HAND_JOINT_MIDDLE_PROXIMAL_EXT" },
		{ "OXR_HAND_JOINT_MIDDLE_TIP_EXT.Name", "EXRHandJointType::OXR_HAND_JOINT_MIDDLE_TIP_EXT" },
		{ "OXR_HAND_JOINT_PALM_EXT.Name", "EXRHandJointType::OXR_HAND_JOINT_PALM_EXT" },
		{ "OXR_HAND_JOINT_RING_DISTAL_EXT.Name", "EXRHandJointType::OXR_HAND_JOINT_RING_DISTAL_EXT" },
		{ "OXR_HAND_JOINT_RING_INTERMEDIATE_EXT.Name", "EXRHandJointType::OXR_HAND_JOINT_RING_INTERMEDIATE_EXT" },
		{ "OXR_HAND_JOINT_RING_METACARPAL_EXT.Name", "EXRHandJointType::OXR_HAND_JOINT_RING_METACARPAL_EXT" },
		{ "OXR_HAND_JOINT_RING_PROXIMAL_EXT.Name", "EXRHandJointType::OXR_HAND_JOINT_RING_PROXIMAL_EXT" },
		{ "OXR_HAND_JOINT_RING_TIP_EXT.Name", "EXRHandJointType::OXR_HAND_JOINT_RING_TIP_EXT" },
		{ "OXR_HAND_JOINT_THUMB_DISTAL_EXT.Name", "EXRHandJointType::OXR_HAND_JOINT_THUMB_DISTAL_EXT" },
		{ "OXR_HAND_JOINT_THUMB_METACARPAL_EXT.Name", "EXRHandJointType::OXR_HAND_JOINT_THUMB_METACARPAL_EXT" },
		{ "OXR_HAND_JOINT_THUMB_PROXIMAL_EXT.Name", "EXRHandJointType::OXR_HAND_JOINT_THUMB_PROXIMAL_EXT" },
		{ "OXR_HAND_JOINT_THUMB_TIP_EXT.Name", "EXRHandJointType::OXR_HAND_JOINT_THUMB_TIP_EXT" },
		{ "OXR_HAND_JOINT_WRIST_EXT.Name", "EXRHandJointType::OXR_HAND_JOINT_WRIST_EXT" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OpenXRExpansionPlugin_EXRHandJointType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OpenXRExpansionPlugin,
		nullptr,
		"EXRHandJointType",
		"EXRHandJointType",
		Z_Construct_UEnum_OpenXRExpansionPlugin_EXRHandJointType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OpenXRExpansionPlugin_EXRHandJointType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OpenXRExpansionPlugin_EXRHandJointType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OpenXRExpansionPlugin_EXRHandJointType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OpenXRExpansionPlugin_EXRHandJointType()
	{
		if (!Z_Registration_Info_UEnum_EXRHandJointType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EXRHandJointType.InnerSingleton, Z_Construct_UEnum_OpenXRExpansionPlugin_EXRHandJointType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EXRHandJointType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVROpenXRSkeletonType;
	static UEnum* EVROpenXRSkeletonType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVROpenXRSkeletonType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVROpenXRSkeletonType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OpenXRExpansionPlugin_EVROpenXRSkeletonType, (UObject*)Z_Construct_UPackage__Script_OpenXRExpansionPlugin(), TEXT("EVROpenXRSkeletonType"));
		}
		return Z_Registration_Info_UEnum_EVROpenXRSkeletonType.OuterSingleton;
	}
	template<> OPENXREXPANSIONPLUGIN_API UEnum* StaticEnum<EVROpenXRSkeletonType>()
	{
		return EVROpenXRSkeletonType_StaticEnum();
	}
	struct Z_Construct_UEnum_OpenXRExpansionPlugin_EVROpenXRSkeletonType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OpenXRExpansionPlugin_EVROpenXRSkeletonType_Statics::Enumerators[] = {
		{ "EVROpenXRSkeletonType::OXR_SkeletonType_UE4Default_Right", (int64)EVROpenXRSkeletonType::OXR_SkeletonType_UE4Default_Right },
		{ "EVROpenXRSkeletonType::OXR_SkeletonType_UE4Default_Left", (int64)EVROpenXRSkeletonType::OXR_SkeletonType_UE4Default_Left },
		{ "EVROpenXRSkeletonType::OXR_SkeletonType_OpenVRDefault_Right", (int64)EVROpenXRSkeletonType::OXR_SkeletonType_OpenVRDefault_Right },
		{ "EVROpenXRSkeletonType::OXR_SkeletonType_OpenVRDefault_Left", (int64)EVROpenXRSkeletonType::OXR_SkeletonType_OpenVRDefault_Left },
		{ "EVROpenXRSkeletonType::OXR_SkeletonType_UE5Default_Right", (int64)EVROpenXRSkeletonType::OXR_SkeletonType_UE5Default_Right },
		{ "EVROpenXRSkeletonType::OXR_SkeletonType_UE5Default_Left", (int64)EVROpenXRSkeletonType::OXR_SkeletonType_UE5Default_Left },
		{ "EVROpenXRSkeletonType::OXR_SkeletonType_OpenXRDefault_Right", (int64)EVROpenXRSkeletonType::OXR_SkeletonType_OpenXRDefault_Right },
		{ "EVROpenXRSkeletonType::OXR_SkeletonType_OpenXRDefault_Left", (int64)EVROpenXRSkeletonType::OXR_SkeletonType_OpenXRDefault_Left },
		{ "EVROpenXRSkeletonType::OXR_SkeletonType_Custom", (int64)EVROpenXRSkeletonType::OXR_SkeletonType_Custom },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OpenXRExpansionPlugin_EVROpenXRSkeletonType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OpenXRExpansionTypes.h" },
		{ "OXR_SkeletonType_Custom.Name", "EVROpenXRSkeletonType::OXR_SkeletonType_Custom" },
		{ "OXR_SkeletonType_OpenVRDefault_Left.Comment", "// OpenVR Skeletal Left hand\n" },
		{ "OXR_SkeletonType_OpenVRDefault_Left.Name", "EVROpenXRSkeletonType::OXR_SkeletonType_OpenVRDefault_Left" },
		{ "OXR_SkeletonType_OpenVRDefault_Left.ToolTip", "OpenVR Skeletal Left hand" },
		{ "OXR_SkeletonType_OpenVRDefault_Right.Comment", "// OpenVR Skeletal Right hand\n" },
		{ "OXR_SkeletonType_OpenVRDefault_Right.Name", "EVROpenXRSkeletonType::OXR_SkeletonType_OpenVRDefault_Right" },
		{ "OXR_SkeletonType_OpenVRDefault_Right.ToolTip", "OpenVR Skeletal Right hand" },
		{ "OXR_SkeletonType_OpenXRDefault_Left.Comment", "// OpenXR Skeletal Left hand\n" },
		{ "OXR_SkeletonType_OpenXRDefault_Left.Name", "EVROpenXRSkeletonType::OXR_SkeletonType_OpenXRDefault_Left" },
		{ "OXR_SkeletonType_OpenXRDefault_Left.ToolTip", "OpenXR Skeletal Left hand" },
		{ "OXR_SkeletonType_OpenXRDefault_Right.Comment", "// OpenXR Skeletal Right hand\n" },
		{ "OXR_SkeletonType_OpenXRDefault_Right.Name", "EVROpenXRSkeletonType::OXR_SkeletonType_OpenXRDefault_Right" },
		{ "OXR_SkeletonType_OpenXRDefault_Right.ToolTip", "OpenXR Skeletal Right hand" },
		{ "OXR_SkeletonType_UE4Default_Left.Comment", "// UE4 Skeletal Left hand\n" },
		{ "OXR_SkeletonType_UE4Default_Left.Name", "EVROpenXRSkeletonType::OXR_SkeletonType_UE4Default_Left" },
		{ "OXR_SkeletonType_UE4Default_Left.ToolTip", "UE4 Skeletal Left hand" },
		{ "OXR_SkeletonType_UE4Default_Right.Comment", "// UE4 Skeletal Right hand\n" },
		{ "OXR_SkeletonType_UE4Default_Right.Name", "EVROpenXRSkeletonType::OXR_SkeletonType_UE4Default_Right" },
		{ "OXR_SkeletonType_UE4Default_Right.ToolTip", "UE4 Skeletal Right hand" },
		{ "OXR_SkeletonType_UE5Default_Left.Comment", "// UE5 Skeletal Left hand\n" },
		{ "OXR_SkeletonType_UE5Default_Left.Name", "EVROpenXRSkeletonType::OXR_SkeletonType_UE5Default_Left" },
		{ "OXR_SkeletonType_UE5Default_Left.ToolTip", "UE5 Skeletal Left hand" },
		{ "OXR_SkeletonType_UE5Default_Right.Comment", "// UE5 Skeletal Right hand\n" },
		{ "OXR_SkeletonType_UE5Default_Right.Name", "EVROpenXRSkeletonType::OXR_SkeletonType_UE5Default_Right" },
		{ "OXR_SkeletonType_UE5Default_Right.ToolTip", "UE5 Skeletal Right hand" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OpenXRExpansionPlugin_EVROpenXRSkeletonType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OpenXRExpansionPlugin,
		nullptr,
		"EVROpenXRSkeletonType",
		"EVROpenXRSkeletonType",
		Z_Construct_UEnum_OpenXRExpansionPlugin_EVROpenXRSkeletonType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OpenXRExpansionPlugin_EVROpenXRSkeletonType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OpenXRExpansionPlugin_EVROpenXRSkeletonType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OpenXRExpansionPlugin_EVROpenXRSkeletonType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OpenXRExpansionPlugin_EVROpenXRSkeletonType()
	{
		if (!Z_Registration_Info_UEnum_EVROpenXRSkeletonType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVROpenXRSkeletonType.InnerSingleton, Z_Construct_UEnum_OpenXRExpansionPlugin_EVROpenXRSkeletonType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVROpenXRSkeletonType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BPOpenXRActionSkeletalData;
class UScriptStruct* FBPOpenXRActionSkeletalData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BPOpenXRActionSkeletalData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BPOpenXRActionSkeletalData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData, (UObject*)Z_Construct_UPackage__Script_OpenXRExpansionPlugin(), TEXT("BPOpenXRActionSkeletalData"));
	}
	return Z_Registration_Info_UScriptStruct_BPOpenXRActionSkeletalData.OuterSingleton;
}
template<> OPENXREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FBPOpenXRActionSkeletalData>()
{
	return FBPOpenXRActionSkeletalData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_TargetHand_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetHand_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetHand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldScaleOverride_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldScaleOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowDeformingMesh_MetaData[];
#endif
		static void NewProp_bAllowDeformingMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowDeformingMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMirrorLeftRight_MetaData[];
#endif
		static void NewProp_bMirrorLeftRight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMirrorLeftRight;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FingerCurls_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FingerCurls_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FingerCurls;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletalTransforms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalTransforms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SkeletalTransforms;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableUE4HandRepSavings_MetaData[];
#endif
		static void NewProp_bEnableUE4HandRepSavings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableUE4HandRepSavings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AdditionTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasValidData_MetaData[];
#endif
		static void NewProp_bHasValidData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasValidData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VRExpansionFunctions|OpenXR|HandSkeleton" },
		{ "ModuleRelativePath", "Public/OpenXRExpansionTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPOpenXRActionSkeletalData>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_TargetHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_TargetHand_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/OpenXRExpansionTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_TargetHand = { "TargetHand", nullptr, (EPropertyFlags)0x0010000080000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPOpenXRActionSkeletalData, TargetHand), Z_Construct_UEnum_OpenXRExpansionPlugin_EVRSkeletalHandIndex, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_TargetHand_MetaData), Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_TargetHand_MetaData) }; // 2471406537
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_WorldScaleOverride_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A world scale override that will replace the engines current value and force into the tracked data if non zero\n" },
#endif
		{ "ModuleRelativePath", "Public/OpenXRExpansionTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A world scale override that will replace the engines current value and force into the tracked data if non zero" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_WorldScaleOverride = { "WorldScaleOverride", nullptr, (EPropertyFlags)0x0010000080000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPOpenXRActionSkeletalData, WorldScaleOverride), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_WorldScaleOverride_MetaData), Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_WorldScaleOverride_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_bAllowDeformingMesh_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/OpenXRExpansionTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_bAllowDeformingMesh_SetBit(void* Obj)
	{
		((FBPOpenXRActionSkeletalData*)Obj)->bAllowDeformingMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_bAllowDeformingMesh = { "bAllowDeformingMesh", nullptr, (EPropertyFlags)0x0010000080000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBPOpenXRActionSkeletalData), &Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_bAllowDeformingMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_bAllowDeformingMesh_MetaData), Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_bAllowDeformingMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_bMirrorLeftRight_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true then the bones will be mirrored from left/right, to allow you to swap a hand mesh or apply to a full body mesh\n" },
#endif
		{ "ModuleRelativePath", "Public/OpenXRExpansionTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true then the bones will be mirrored from left/right, to allow you to swap a hand mesh or apply to a full body mesh" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_bMirrorLeftRight_SetBit(void* Obj)
	{
		((FBPOpenXRActionSkeletalData*)Obj)->bMirrorLeftRight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_bMirrorLeftRight = { "bMirrorLeftRight", nullptr, (EPropertyFlags)0x0010000080000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBPOpenXRActionSkeletalData), &Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_bMirrorLeftRight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_bMirrorLeftRight_MetaData), Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_bMirrorLeftRight_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_FingerCurls_Inner = { "FingerCurls", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_FingerCurls_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// List of aproximated curls for each finger\n" },
#endif
		{ "ModuleRelativePath", "Public/OpenXRExpansionTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of aproximated curls for each finger" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_FingerCurls = { "FingerCurls", nullptr, (EPropertyFlags)0x0010000080002014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPOpenXRActionSkeletalData, FingerCurls), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_FingerCurls_MetaData), Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_FingerCurls_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_SkeletalTransforms_Inner = { "SkeletalTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_SkeletalTransforms_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/OpenXRExpansionTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_SkeletalTransforms = { "SkeletalTransforms", nullptr, (EPropertyFlags)0x0010000080002014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPOpenXRActionSkeletalData, SkeletalTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_SkeletalTransforms_MetaData), Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_SkeletalTransforms_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_bEnableUE4HandRepSavings_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true we will assume that the target skeleton does not have the metacarpal bones and we will not replicate them\n// Only really used for the old UE4 skeleton\n" },
#endif
		{ "ModuleRelativePath", "Public/OpenXRExpansionTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true we will assume that the target skeleton does not have the metacarpal bones and we will not replicate them\nOnly really used for the old UE4 skeleton" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_bEnableUE4HandRepSavings_SetBit(void* Obj)
	{
		((FBPOpenXRActionSkeletalData*)Obj)->bEnableUE4HandRepSavings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_bEnableUE4HandRepSavings = { "bEnableUE4HandRepSavings", nullptr, (EPropertyFlags)0x0010000080000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBPOpenXRActionSkeletalData), &Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_bEnableUE4HandRepSavings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_bEnableUE4HandRepSavings_MetaData), Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_bEnableUE4HandRepSavings_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_AdditionTransform_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The rotation required to rotate the finger bones back to X+\n// The animation node attempts to auto calculate it, if you have a non standard hand you may need to fill\n// This in by yourself\n" },
#endif
		{ "ModuleRelativePath", "Public/OpenXRExpansionTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The rotation required to rotate the finger bones back to X+\nThe animation node attempts to auto calculate it, if you have a non standard hand you may need to fill\nThis in by yourself" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_AdditionTransform = { "AdditionTransform", nullptr, (EPropertyFlags)0x0010000080000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPOpenXRActionSkeletalData, AdditionTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_AdditionTransform_MetaData), Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_AdditionTransform_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_bHasValidData_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/OpenXRExpansionTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_bHasValidData_SetBit(void* Obj)
	{
		((FBPOpenXRActionSkeletalData*)Obj)->bHasValidData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_bHasValidData = { "bHasValidData", nullptr, (EPropertyFlags)0x0010000080000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBPOpenXRActionSkeletalData), &Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_bHasValidData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_bHasValidData_MetaData), Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_bHasValidData_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_TargetHand_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_TargetHand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_WorldScaleOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_bAllowDeformingMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_bMirrorLeftRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_FingerCurls_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_FingerCurls,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_SkeletalTransforms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_SkeletalTransforms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_bEnableUE4HandRepSavings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_AdditionTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_bHasValidData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OpenXRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"BPOpenXRActionSkeletalData",
		Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::PropPointers),
		sizeof(FBPOpenXRActionSkeletalData),
		alignof(FBPOpenXRActionSkeletalData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData()
	{
		if (!Z_Registration_Info_UScriptStruct_BPOpenXRActionSkeletalData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BPOpenXRActionSkeletalData.InnerSingleton, Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BPOpenXRActionSkeletalData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BPOpenXRSkeletalPair;
class UScriptStruct* FBPOpenXRSkeletalPair::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BPOpenXRSkeletalPair.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BPOpenXRSkeletalPair.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPOpenXRSkeletalPair, (UObject*)Z_Construct_UPackage__Script_OpenXRExpansionPlugin(), TEXT("BPOpenXRSkeletalPair"));
	}
	return Z_Registration_Info_UScriptStruct_BPOpenXRSkeletalPair.OuterSingleton;
}
template<> OPENXREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FBPOpenXRSkeletalPair>()
{
	return FBPOpenXRSkeletalPair::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBPOpenXRSkeletalPair_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_OpenXRBone_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OpenXRBone_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OpenXRBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneToTarget_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneToTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPOpenXRSkeletalPair_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VRExpansionFunctions|SteamVR|HandSkeleton" },
		{ "ModuleRelativePath", "Public/OpenXRExpansionTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPOpenXRSkeletalPair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPOpenXRSkeletalPair>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBPOpenXRSkeletalPair_Statics::NewProp_OpenXRBone_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPOpenXRSkeletalPair_Statics::NewProp_OpenXRBone_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/OpenXRExpansionTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBPOpenXRSkeletalPair_Statics::NewProp_OpenXRBone = { "OpenXRBone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPOpenXRSkeletalPair, OpenXRBone), Z_Construct_UEnum_OpenXRExpansionPlugin_EXRHandJointType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPOpenXRSkeletalPair_Statics::NewProp_OpenXRBone_MetaData), Z_Construct_UScriptStruct_FBPOpenXRSkeletalPair_Statics::NewProp_OpenXRBone_MetaData) }; // 2312646290
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPOpenXRSkeletalPair_Statics::NewProp_BoneToTarget_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/OpenXRExpansionTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBPOpenXRSkeletalPair_Statics::NewProp_BoneToTarget = { "BoneToTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPOpenXRSkeletalPair, BoneToTarget), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPOpenXRSkeletalPair_Statics::NewProp_BoneToTarget_MetaData), Z_Construct_UScriptStruct_FBPOpenXRSkeletalPair_Statics::NewProp_BoneToTarget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPOpenXRSkeletalPair_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPOpenXRSkeletalPair_Statics::NewProp_OpenXRBone_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPOpenXRSkeletalPair_Statics::NewProp_OpenXRBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPOpenXRSkeletalPair_Statics::NewProp_BoneToTarget,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPOpenXRSkeletalPair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OpenXRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"BPOpenXRSkeletalPair",
		Z_Construct_UScriptStruct_FBPOpenXRSkeletalPair_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPOpenXRSkeletalPair_Statics::PropPointers),
		sizeof(FBPOpenXRSkeletalPair),
		alignof(FBPOpenXRSkeletalPair),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPOpenXRSkeletalPair_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBPOpenXRSkeletalPair_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPOpenXRSkeletalPair_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FBPOpenXRSkeletalPair()
	{
		if (!Z_Registration_Info_UScriptStruct_BPOpenXRSkeletalPair.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BPOpenXRSkeletalPair.InnerSingleton, Z_Construct_UScriptStruct_FBPOpenXRSkeletalPair_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BPOpenXRSkeletalPair.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BPOpenXRSkeletalMappingData;
class UScriptStruct* FBPOpenXRSkeletalMappingData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BPOpenXRSkeletalMappingData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BPOpenXRSkeletalMappingData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData, (UObject*)Z_Construct_UPackage__Script_OpenXRExpansionPlugin(), TEXT("BPOpenXRSkeletalMappingData"));
	}
	return Z_Registration_Info_UScriptStruct_BPOpenXRSkeletalMappingData.OuterSingleton;
}
template<> OPENXREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FBPOpenXRSkeletalMappingData>()
{
	return FBPOpenXRSkeletalMappingData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_BonePairs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BonePairs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BonePairs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMergeMissingBonesUE4_MetaData[];
#endif
		static void NewProp_bMergeMissingBonesUE4_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMergeMissingBonesUE4;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TargetHand_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetHand_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetHand;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VRExpansionFunctions|SteamVR|HandSkeleton" },
		{ "ModuleRelativePath", "Public/OpenXRExpansionTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPOpenXRSkeletalMappingData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics::NewProp_BonePairs_Inner = { "BonePairs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBPOpenXRSkeletalPair, METADATA_PARAMS(0, nullptr) }; // 1148427160
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics::NewProp_BonePairs_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/OpenXRExpansionTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics::NewProp_BonePairs = { "BonePairs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPOpenXRSkeletalMappingData, BonePairs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics::NewProp_BonePairs_MetaData), Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics::NewProp_BonePairs_MetaData) }; // 1148427160
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics::NewProp_bMergeMissingBonesUE4_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Merge the transforms of bones that are missing from the OpenVR skeleton to the UE4 one.\n// This should be always enabled for UE4 skeletons generally.\n" },
#endif
		{ "ModuleRelativePath", "Public/OpenXRExpansionTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Merge the transforms of bones that are missing from the OpenVR skeleton to the UE4 one.\nThis should be always enabled for UE4 skeletons generally." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics::NewProp_bMergeMissingBonesUE4_SetBit(void* Obj)
	{
		((FBPOpenXRSkeletalMappingData*)Obj)->bMergeMissingBonesUE4 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics::NewProp_bMergeMissingBonesUE4 = { "bMergeMissingBonesUE4", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBPOpenXRSkeletalMappingData), &Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics::NewProp_bMergeMissingBonesUE4_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics::NewProp_bMergeMissingBonesUE4_MetaData), Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics::NewProp_bMergeMissingBonesUE4_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics::NewProp_TargetHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics::NewProp_TargetHand_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The hand data to get, if not using a custom bone mapping then this value will be auto filled\n" },
#endif
		{ "ModuleRelativePath", "Public/OpenXRExpansionTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The hand data to get, if not using a custom bone mapping then this value will be auto filled" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics::NewProp_TargetHand = { "TargetHand", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPOpenXRSkeletalMappingData, TargetHand), Z_Construct_UEnum_OpenXRExpansionPlugin_EVRSkeletalHandIndex, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics::NewProp_TargetHand_MetaData), Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics::NewProp_TargetHand_MetaData) }; // 2471406537
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics::NewProp_BonePairs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics::NewProp_BonePairs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics::NewProp_bMergeMissingBonesUE4,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics::NewProp_TargetHand_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics::NewProp_TargetHand,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OpenXRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"BPOpenXRSkeletalMappingData",
		Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics::PropPointers),
		sizeof(FBPOpenXRSkeletalMappingData),
		alignof(FBPOpenXRSkeletalMappingData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData()
	{
		if (!Z_Registration_Info_UScriptStruct_BPOpenXRSkeletalMappingData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BPOpenXRSkeletalMappingData.InnerSingleton, Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BPOpenXRSkeletalMappingData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRExpansionTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRExpansionTypes_h_Statics::EnumInfo[] = {
		{ EBPXRResultSwitch_StaticEnum, TEXT("EBPXRResultSwitch"), &Z_Registration_Info_UEnum_EBPXRResultSwitch, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1740737255U) },
		{ EVRSkeletalHandIndex_StaticEnum, TEXT("EVRSkeletalHandIndex"), &Z_Registration_Info_UEnum_EVRSkeletalHandIndex, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2471406537U) },
		{ EXRHandJointType_StaticEnum, TEXT("EXRHandJointType"), &Z_Registration_Info_UEnum_EXRHandJointType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2312646290U) },
		{ EVROpenXRSkeletonType_StaticEnum, TEXT("EVROpenXRSkeletonType"), &Z_Registration_Info_UEnum_EVROpenXRSkeletonType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3046172617U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRExpansionTypes_h_Statics::ScriptStructInfo[] = {
		{ FBPOpenXRActionSkeletalData::StaticStruct, Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewStructOps, TEXT("BPOpenXRActionSkeletalData"), &Z_Registration_Info_UScriptStruct_BPOpenXRActionSkeletalData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBPOpenXRActionSkeletalData), 4139677458U) },
		{ FBPOpenXRSkeletalPair::StaticStruct, Z_Construct_UScriptStruct_FBPOpenXRSkeletalPair_Statics::NewStructOps, TEXT("BPOpenXRSkeletalPair"), &Z_Registration_Info_UScriptStruct_BPOpenXRSkeletalPair, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBPOpenXRSkeletalPair), 1148427160U) },
		{ FBPOpenXRSkeletalMappingData::StaticStruct, Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics::NewStructOps, TEXT("BPOpenXRSkeletalMappingData"), &Z_Registration_Info_UScriptStruct_BPOpenXRSkeletalMappingData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBPOpenXRSkeletalMappingData), 845059439U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRExpansionTypes_h_1417715376(TEXT("/Script/OpenXRExpansionPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRExpansionTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRExpansionTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRExpansionTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRExpansionTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
