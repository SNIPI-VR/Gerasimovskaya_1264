// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenXRExpansionPlugin/Public/AnimNode_ApplyOpenXRHandPose.h"
#include "OpenXRExpansionPlugin/Public/OpenXRExpansionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_ApplyOpenXRHandPose() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	OPENXREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_OpenXRExpansionPlugin_EVROpenXRSkeletonType();
	OPENXREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose();
	OPENXREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData();
	OPENXREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData();
	UPackage* Z_Construct_UPackage__Script_OpenXRExpansionPlugin();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_ApplyOpenXRHandPose>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_ApplyOpenXRHandPose cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_ApplyOpenXRHandPose;
class UScriptStruct* FAnimNode_ApplyOpenXRHandPose::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_ApplyOpenXRHandPose.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_ApplyOpenXRHandPose.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose, (UObject*)Z_Construct_UPackage__Script_OpenXRExpansionPlugin(), TEXT("AnimNode_ApplyOpenXRHandPose"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_ApplyOpenXRHandPose.OuterSingleton;
}
template<> OPENXREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FAnimNode_ApplyOpenXRHandPose>()
{
	return FAnimNode_ApplyOpenXRHandPose::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_SkeletonType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletonType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SkeletonType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSkipRootBone_MetaData[];
#endif
		static void NewProp_bSkipRootBone_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipRootBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyApplyWristTransform_MetaData[];
#endif
		static void NewProp_bOnlyApplyWristTransform_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyApplyWristTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionalStoredActionInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OptionalStoredActionInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MappedBonePairs_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MappedBonePairs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimNode_ApplyOpenXRHandPose.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_ApplyOpenXRHandPose>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_SkeletonType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_SkeletonType_MetaData[] = {
		{ "Category", "Skeletal" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Generally used when not passing in custom bone mappings, defines the auto mapping style\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_ApplyOpenXRHandPose.h" },
		{ "PinShownByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generally used when not passing in custom bone mappings, defines the auto mapping style" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_SkeletonType = { "SkeletonType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_ApplyOpenXRHandPose, SkeletonType), Z_Construct_UEnum_OpenXRExpansionPlugin_EVROpenXRSkeletonType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_SkeletonType_MetaData), Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_SkeletonType_MetaData) }; // 3046172617
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_bSkipRootBone_MetaData[] = {
		{ "Category", "Skeletal" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If your hand is part of a full body or arm skeleton and you don't have a proxy bone to retain the position enable this\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_ApplyOpenXRHandPose.h" },
		{ "PinShownByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If your hand is part of a full body or arm skeleton and you don't have a proxy bone to retain the position enable this" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_bSkipRootBone_SetBit(void* Obj)
	{
		((FAnimNode_ApplyOpenXRHandPose*)Obj)->bSkipRootBone = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_bSkipRootBone = { "bSkipRootBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_ApplyOpenXRHandPose), &Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_bSkipRootBone_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_bSkipRootBone_MetaData), Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_bSkipRootBone_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_bOnlyApplyWristTransform_MetaData[] = {
		{ "Category", "Skeletal" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If you only want to use the wrist transform part of this\n// This will also automatically add the deform to the wrist as it doesn't make much sense without it\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_ApplyOpenXRHandPose.h" },
		{ "PinShownByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If you only want to use the wrist transform part of this\nThis will also automatically add the deform to the wrist as it doesn't make much sense without it" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_bOnlyApplyWristTransform_SetBit(void* Obj)
	{
		((FAnimNode_ApplyOpenXRHandPose*)Obj)->bOnlyApplyWristTransform = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_bOnlyApplyWristTransform = { "bOnlyApplyWristTransform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_ApplyOpenXRHandPose), &Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_bOnlyApplyWristTransform_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_bOnlyApplyWristTransform_MetaData), Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_bOnlyApplyWristTransform_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_OptionalStoredActionInfo_MetaData[] = {
		{ "Category", "Skeletal" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Generally used when not passing in custom bone mappings, defines the auto mapping style\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_ApplyOpenXRHandPose.h" },
		{ "PinShownByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generally used when not passing in custom bone mappings, defines the auto mapping style" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_OptionalStoredActionInfo = { "OptionalStoredActionInfo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_ApplyOpenXRHandPose, OptionalStoredActionInfo), Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_OptionalStoredActionInfo_MetaData), Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_OptionalStoredActionInfo_MetaData) }; // 4139677458
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_MappedBonePairs_MetaData[] = {
		{ "Category", "Skeletal" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// MappedBonePairs, if you leave it blank then they will auto generate based off of the SkeletonType\n// Otherwise, fill out yourself.\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_ApplyOpenXRHandPose.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappedBonePairs, if you leave it blank then they will auto generate based off of the SkeletonType\nOtherwise, fill out yourself." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_MappedBonePairs = { "MappedBonePairs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_ApplyOpenXRHandPose, MappedBonePairs), Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_MappedBonePairs_MetaData), Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_MappedBonePairs_MetaData) }; // 845059439
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_SkeletonType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_SkeletonType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_bSkipRootBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_bOnlyApplyWristTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_OptionalStoredActionInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_MappedBonePairs,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OpenXRExpansionPlugin,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_ApplyOpenXRHandPose",
		Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::PropPointers),
		sizeof(FAnimNode_ApplyOpenXRHandPose),
		alignof(FAnimNode_ApplyOpenXRHandPose),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_ApplyOpenXRHandPose.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_ApplyOpenXRHandPose.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_ApplyOpenXRHandPose.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_AnimNode_ApplyOpenXRHandPose_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_AnimNode_ApplyOpenXRHandPose_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_ApplyOpenXRHandPose::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewStructOps, TEXT("AnimNode_ApplyOpenXRHandPose"), &Z_Registration_Info_UScriptStruct_AnimNode_ApplyOpenXRHandPose, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_ApplyOpenXRHandPose), 4254256760U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_AnimNode_ApplyOpenXRHandPose_h_3126099998(TEXT("/Script/OpenXRExpansionPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_AnimNode_ApplyOpenXRHandPose_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_AnimNode_ApplyOpenXRHandPose_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
