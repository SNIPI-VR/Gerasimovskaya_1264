// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/GripScripts/GS_GunTools.h"
#include "../../Source/Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "VRExpansionPlugin/Public/VRBPDatatypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGS_GunTools() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize100();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGS_Default();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGS_GunTools();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGS_GunTools_NoRegister();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRVirtualStockModeChangedSignature__DelegateSignature();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPEuroLowPassFilter();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPEuroLowPassFilterTrans();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPVirtualStockSettings();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_VRExpansionPlugin_VRVirtualStockModeChangedSignature__DelegateSignature_Statics
	{
		struct _Script_VRExpansionPlugin_eventVRVirtualStockModeChangedSignature_Parms
		{
			bool IsVirtualStockEngaged;
		};
		static void NewProp_IsVirtualStockEngaged_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsVirtualStockEngaged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_VRExpansionPlugin_VRVirtualStockModeChangedSignature__DelegateSignature_Statics::NewProp_IsVirtualStockEngaged_SetBit(void* Obj)
	{
		((_Script_VRExpansionPlugin_eventVRVirtualStockModeChangedSignature_Parms*)Obj)->IsVirtualStockEngaged = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRVirtualStockModeChangedSignature__DelegateSignature_Statics::NewProp_IsVirtualStockEngaged = { "IsVirtualStockEngaged", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_VRExpansionPlugin_eventVRVirtualStockModeChangedSignature_Parms), &Z_Construct_UDelegateFunction_VRExpansionPlugin_VRVirtualStockModeChangedSignature__DelegateSignature_Statics::NewProp_IsVirtualStockEngaged_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VRExpansionPlugin_VRVirtualStockModeChangedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VRVirtualStockModeChangedSignature__DelegateSignature_Statics::NewProp_IsVirtualStockEngaged,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VRExpansionPlugin_VRVirtualStockModeChangedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Event thrown when we enter into virtual stock mode\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/GS_GunTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event thrown when we enter into virtual stock mode" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRVirtualStockModeChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin, nullptr, "VRVirtualStockModeChangedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_VRExpansionPlugin_VRVirtualStockModeChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRVirtualStockModeChangedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRVirtualStockModeChangedSignature__DelegateSignature_Statics::_Script_VRExpansionPlugin_eventVRVirtualStockModeChangedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRVirtualStockModeChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_VRExpansionPlugin_VRVirtualStockModeChangedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRVirtualStockModeChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRVirtualStockModeChangedSignature__DelegateSignature_Statics::_Script_VRExpansionPlugin_eventVRVirtualStockModeChangedSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRVirtualStockModeChangedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VRExpansionPlugin_VRVirtualStockModeChangedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FVRVirtualStockModeChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& VRVirtualStockModeChangedSignature, bool IsVirtualStockEngaged)
{
	struct _Script_VRExpansionPlugin_eventVRVirtualStockModeChangedSignature_Parms
	{
		bool IsVirtualStockEngaged;
	};
	_Script_VRExpansionPlugin_eventVRVirtualStockModeChangedSignature_Parms Parms;
	Parms.IsVirtualStockEngaged=IsVirtualStockEngaged ? true : false;
	VRVirtualStockModeChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BPVirtualStockSettings;
class UScriptStruct* FBPVirtualStockSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BPVirtualStockSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BPVirtualStockSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPVirtualStockSettings, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("BPVirtualStockSettings"));
	}
	return Z_Registration_Info_UScriptStruct_BPVirtualStockSettings.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FBPVirtualStockSettings>()
{
	return FBPVirtualStockSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseDistanceBasedStockSnapping_MetaData[];
#endif
		static void NewProp_bUseDistanceBasedStockSnapping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDistanceBasedStockSnapping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StockSnapDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StockSnapDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StockSnapLerpThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StockSnapLerpThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StockLerpValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StockLerpValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StockSnapOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StockSnapOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAdjustZOfStockToPrimaryHand_MetaData[];
#endif
		static void NewProp_bAdjustZOfStockToPrimaryHand_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAdjustZOfStockToPrimaryHand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSmoothStockHand_MetaData[];
#endif
		static void NewProp_bSmoothStockHand_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSmoothStockHand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingValueForStock_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SmoothingValueForStock;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StockHandSmoothing_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StockHandSmoothing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebugDrawVirtualStock_MetaData[];
#endif
		static void NewProp_bDebugDrawVirtualStock_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugDrawVirtualStock;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "GunSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Global settings for this player\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/GS_GunTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Global settings for this player" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPVirtualStockSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::NewProp_bUseDistanceBasedStockSnapping_MetaData[] = {
		{ "Category", "VirtualStock" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// *Global Value* Should we auto snap to the virtual stock by a set distance\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/GS_GunTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "*Global Value* Should we auto snap to the virtual stock by a set distance" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::NewProp_bUseDistanceBasedStockSnapping_SetBit(void* Obj)
	{
		((FBPVirtualStockSettings*)Obj)->bUseDistanceBasedStockSnapping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::NewProp_bUseDistanceBasedStockSnapping = { "bUseDistanceBasedStockSnapping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBPVirtualStockSettings), &Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::NewProp_bUseDistanceBasedStockSnapping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::NewProp_bUseDistanceBasedStockSnapping_MetaData), Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::NewProp_bUseDistanceBasedStockSnapping_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::NewProp_StockSnapDistance_MetaData[] = {
		{ "Category", "VirtualStock" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// *Global Value* The distance before snapping to the stock / unsnapping\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/GS_GunTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "*Global Value* The distance before snapping to the stock / unsnapping" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::NewProp_StockSnapDistance = { "StockSnapDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPVirtualStockSettings, StockSnapDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::NewProp_StockSnapDistance_MetaData), Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::NewProp_StockSnapDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::NewProp_StockSnapLerpThreshold_MetaData[] = {
		{ "Category", "VirtualStock" },
		{ "ClampMin", "0.00" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// *Global Value* The distance from the edge of the stock snap distance where it will be at 100% influence\n// Prior to this threshold being hit it will lerp from standard hold to the virtual stock version.\n// A value of 0.0f will leave it always off\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/GS_GunTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "*Global Value* The distance from the edge of the stock snap distance where it will be at 100% influence\nPrior to this threshold being hit it will lerp from standard hold to the virtual stock version.\nA value of 0.0f will leave it always off" },
#endif
		{ "UIMin", "0.00" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::NewProp_StockSnapLerpThreshold = { "StockSnapLerpThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPVirtualStockSettings, StockSnapLerpThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::NewProp_StockSnapLerpThreshold_MetaData), Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::NewProp_StockSnapLerpThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::NewProp_StockLerpValue_MetaData[] = {
		{ "Category", "VirtualStock" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current lerp value of the stock from zero influence to full influence\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/GS_GunTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current lerp value of the stock from zero influence to full influence" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::NewProp_StockLerpValue = { "StockLerpValue", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPVirtualStockSettings, StockLerpValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::NewProp_StockLerpValue_MetaData), Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::NewProp_StockLerpValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::NewProp_StockSnapOffset_MetaData[] = {
		{ "Category", "VirtualStock" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// *Global Value* An offset to apply to the HMD location to be considered the neck / mount pivot \n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/GS_GunTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "*Global Value* An offset to apply to the HMD location to be considered the neck / mount pivot" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::NewProp_StockSnapOffset = { "StockSnapOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPVirtualStockSettings, StockSnapOffset), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::NewProp_StockSnapOffset_MetaData), Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::NewProp_StockSnapOffset_MetaData) }; // 2131173936
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::NewProp_bAdjustZOfStockToPrimaryHand_MetaData[] = {
		{ "Category", "VirtualStock" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// *Global Value* If we want to have the stock location adjust to follow the primary hands Z value\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/GS_GunTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "*Global Value* If we want to have the stock location adjust to follow the primary hands Z value" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::NewProp_bAdjustZOfStockToPrimaryHand_SetBit(void* Obj)
	{
		((FBPVirtualStockSettings*)Obj)->bAdjustZOfStockToPrimaryHand = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::NewProp_bAdjustZOfStockToPrimaryHand = { "bAdjustZOfStockToPrimaryHand", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBPVirtualStockSettings), &Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::NewProp_bAdjustZOfStockToPrimaryHand_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::NewProp_bAdjustZOfStockToPrimaryHand_MetaData), Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::NewProp_bAdjustZOfStockToPrimaryHand_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::NewProp_bSmoothStockHand_MetaData[] = {
		{ "Category", "VirtualStock|Smoothing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// *Global Value* Whether we should lerp the location of the rearmost (stock side) hand, mostly used for snipers.\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/GS_GunTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "*Global Value* Whether we should lerp the location of the rearmost (stock side) hand, mostly used for snipers." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::NewProp_bSmoothStockHand_SetBit(void* Obj)
	{
		((FBPVirtualStockSettings*)Obj)->bSmoothStockHand = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::NewProp_bSmoothStockHand = { "bSmoothStockHand", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBPVirtualStockSettings), &Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::NewProp_bSmoothStockHand_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::NewProp_bSmoothStockHand_MetaData), Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::NewProp_bSmoothStockHand_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::NewProp_SmoothingValueForStock_MetaData[] = {
		{ "Category", "VirtualStock|Smoothing" },
		{ "ClampMax", "1.00" },
		{ "ClampMin", "0.00" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// *Global Value* How much influence the virtual stock smoothing should have, 0.0f is zero smoothing, 1.0f is full smoothing, you should test with full smoothing to get the amount you\n// want and then set the smoothing value up until it feels right between the fully smoothed and unsmoothed values.\n" },
#endif
		{ "editcondition", "bSmoothStockHand" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_GunTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "*Global Value* How much influence the virtual stock smoothing should have, 0.0f is zero smoothing, 1.0f is full smoothing, you should test with full smoothing to get the amount you\nwant and then set the smoothing value up until it feels right between the fully smoothed and unsmoothed values." },
#endif
		{ "UIMax", "1.00" },
		{ "UIMin", "0.00" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::NewProp_SmoothingValueForStock = { "SmoothingValueForStock", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPVirtualStockSettings, SmoothingValueForStock), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::NewProp_SmoothingValueForStock_MetaData), Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::NewProp_SmoothingValueForStock_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::NewProp_StockHandSmoothing_MetaData[] = {
		{ "Category", "GunSettings|VirtualStock|Smoothing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Used to smooth filter the virtual stocks primary hand location\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/GS_GunTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used to smooth filter the virtual stocks primary hand location" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::NewProp_StockHandSmoothing = { "StockHandSmoothing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPVirtualStockSettings, StockHandSmoothing), Z_Construct_UScriptStruct_FBPEuroLowPassFilterTrans, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::NewProp_StockHandSmoothing_MetaData), Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::NewProp_StockHandSmoothing_MetaData) }; // 698223992
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::NewProp_bDebugDrawVirtualStock_MetaData[] = {
		{ "Category", "GunSettings|VirtualStock|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Draw debug elements showing the virtual stock location and angles to interacting components\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/GS_GunTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Draw debug elements showing the virtual stock location and angles to interacting components" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::NewProp_bDebugDrawVirtualStock_SetBit(void* Obj)
	{
		((FBPVirtualStockSettings*)Obj)->bDebugDrawVirtualStock = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::NewProp_bDebugDrawVirtualStock = { "bDebugDrawVirtualStock", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBPVirtualStockSettings), &Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::NewProp_bDebugDrawVirtualStock_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::NewProp_bDebugDrawVirtualStock_MetaData), Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::NewProp_bDebugDrawVirtualStock_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::NewProp_bUseDistanceBasedStockSnapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::NewProp_StockSnapDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::NewProp_StockSnapLerpThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::NewProp_StockLerpValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::NewProp_StockSnapOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::NewProp_bAdjustZOfStockToPrimaryHand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::NewProp_bSmoothStockHand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::NewProp_SmoothingValueForStock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::NewProp_StockHandSmoothing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::NewProp_bDebugDrawVirtualStock,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"BPVirtualStockSettings",
		Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::PropPointers),
		sizeof(FBPVirtualStockSettings),
		alignof(FBPVirtualStockSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FBPVirtualStockSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_BPVirtualStockSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BPVirtualStockSettings.InnerSingleton, Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BPVirtualStockSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GunTools_AdvSecondarySettings;
class UScriptStruct* FGunTools_AdvSecondarySettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GunTools_AdvSecondarySettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GunTools_AdvSecondarySettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("GunTools_AdvSecondarySettings"));
	}
	return Z_Registration_Info_UScriptStruct_GunTools_AdvSecondarySettings.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FGunTools_AdvSecondarySettings>()
{
	return FGunTools_AdvSecondarySettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAdvancedSecondarySettings_MetaData[];
#endif
		static void NewProp_bUseAdvancedSecondarySettings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAdvancedSecondarySettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryGripScaler_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SecondaryGripScaler;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseConstantGripScaler_MetaData[];
#endif
		static void NewProp_bUseConstantGripScaler_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseConstantGripScaler;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseGlobalSmoothingSettings_MetaData[];
#endif
		static void NewProp_bUseGlobalSmoothingSettings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGlobalSmoothingSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondarySmoothing_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SecondarySmoothing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSecondaryGripDistanceInfluence_MetaData[];
#endif
		static void NewProp_bUseSecondaryGripDistanceInfluence_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSecondaryGripDistanceInfluence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GripInfluenceDeadZone_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GripInfluenceDeadZone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GripInfluenceDistanceToZero_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GripInfluenceDistanceToZero;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VRExpansionLibrary" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_GunTools.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGunTools_AdvSecondarySettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings_Statics::NewProp_bUseAdvancedSecondarySettings_MetaData[] = {
		{ "Category", "AdvSecondarySettings" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_GunTools.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings_Statics::NewProp_bUseAdvancedSecondarySettings_SetBit(void* Obj)
	{
		((FGunTools_AdvSecondarySettings*)Obj)->bUseAdvancedSecondarySettings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings_Statics::NewProp_bUseAdvancedSecondarySettings = { "bUseAdvancedSecondarySettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGunTools_AdvSecondarySettings), &Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings_Statics::NewProp_bUseAdvancedSecondarySettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings_Statics::NewProp_bUseAdvancedSecondarySettings_MetaData), Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings_Statics::NewProp_bUseAdvancedSecondarySettings_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings_Statics::NewProp_SecondaryGripScaler_MetaData[] = {
		{ "Category", "AdvSecondarySettings|Smoothing" },
		{ "ClampMax", "1.00" },
		{ "ClampMin", "0.00" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Scaler used for handling the smoothing amount, 0.0f is zero smoothing, 1.0f is full smoothing, you should test with full smoothing to get the amount you\n// want and then set the smoothing value up until it feels right between the fully smoothed and unsmoothed values.\n" },
#endif
		{ "editcondition", "bUseAdvancedSecondarySettings" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_GunTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scaler used for handling the smoothing amount, 0.0f is zero smoothing, 1.0f is full smoothing, you should test with full smoothing to get the amount you\nwant and then set the smoothing value up until it feels right between the fully smoothed and unsmoothed values." },
#endif
		{ "UIMax", "1.00" },
		{ "UIMin", "0.00" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings_Statics::NewProp_SecondaryGripScaler = { "SecondaryGripScaler", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGunTools_AdvSecondarySettings, SecondaryGripScaler), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings_Statics::NewProp_SecondaryGripScaler_MetaData), Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings_Statics::NewProp_SecondaryGripScaler_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings_Statics::NewProp_bUseConstantGripScaler_MetaData[] = {
		{ "Category", "AdvSecondarySettings|Smoothing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true we will constantly be lerping with the grip scaler instead of only sometimes.\n" },
#endif
		{ "editcondition", "bUseAdvancedSecondarySettings" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_GunTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true we will constantly be lerping with the grip scaler instead of only sometimes." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings_Statics::NewProp_bUseConstantGripScaler_SetBit(void* Obj)
	{
		((FGunTools_AdvSecondarySettings*)Obj)->bUseConstantGripScaler = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings_Statics::NewProp_bUseConstantGripScaler = { "bUseConstantGripScaler", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGunTools_AdvSecondarySettings), &Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings_Statics::NewProp_bUseConstantGripScaler_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings_Statics::NewProp_bUseConstantGripScaler_MetaData), Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings_Statics::NewProp_bUseConstantGripScaler_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings_Statics::NewProp_bUseGlobalSmoothingSettings_MetaData[] = {
		{ "Category", "AdvSecondarySettings|Smoothing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true will override custom settings for the smoothing values with the global settings in VRSettings\n" },
#endif
		{ "editcondition", "bUseAdvancedSecondarySettings" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_GunTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true will override custom settings for the smoothing values with the global settings in VRSettings" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings_Statics::NewProp_bUseGlobalSmoothingSettings_SetBit(void* Obj)
	{
		((FGunTools_AdvSecondarySettings*)Obj)->bUseGlobalSmoothingSettings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings_Statics::NewProp_bUseGlobalSmoothingSettings = { "bUseGlobalSmoothingSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGunTools_AdvSecondarySettings), &Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings_Statics::NewProp_bUseGlobalSmoothingSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings_Statics::NewProp_bUseGlobalSmoothingSettings_MetaData), Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings_Statics::NewProp_bUseGlobalSmoothingSettings_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings_Statics::NewProp_SecondarySmoothing_MetaData[] = {
		{ "Category", "AdvSecondarySettings|Smoothing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Used to smooth filter the secondary influence\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/GS_GunTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used to smooth filter the secondary influence" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings_Statics::NewProp_SecondarySmoothing = { "SecondarySmoothing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGunTools_AdvSecondarySettings, SecondarySmoothing), Z_Construct_UScriptStruct_FBPEuroLowPassFilter, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings_Statics::NewProp_SecondarySmoothing_MetaData), Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings_Statics::NewProp_SecondarySmoothing_MetaData) }; // 2275998855
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings_Statics::NewProp_bUseSecondaryGripDistanceInfluence_MetaData[] = {
		{ "Category", "AdvSecondarySettings|DistanceInfluence" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether to scale the secondary hand influence off of distance from grip point\n" },
#endif
		{ "editcondition", "bUseAdvancedSecondarySettings" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_GunTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to scale the secondary hand influence off of distance from grip point" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings_Statics::NewProp_bUseSecondaryGripDistanceInfluence_SetBit(void* Obj)
	{
		((FGunTools_AdvSecondarySettings*)Obj)->bUseSecondaryGripDistanceInfluence = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings_Statics::NewProp_bUseSecondaryGripDistanceInfluence = { "bUseSecondaryGripDistanceInfluence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGunTools_AdvSecondarySettings), &Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings_Statics::NewProp_bUseSecondaryGripDistanceInfluence_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings_Statics::NewProp_bUseSecondaryGripDistanceInfluence_MetaData), Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings_Statics::NewProp_bUseSecondaryGripDistanceInfluence_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings_Statics::NewProp_GripInfluenceDeadZone_MetaData[] = {
		{ "Category", "AdvSecondarySettings|DistanceInfluence" },
		{ "ClampMax", "256.00" },
		{ "ClampMin", "0.00" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Distance from grip point in local space where there is 100% influence\n" },
#endif
		{ "editcondition", "bUseSecondaryGripDistanceInfluence" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_GunTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distance from grip point in local space where there is 100% influence" },
#endif
		{ "UIMax", "256.00" },
		{ "UIMin", "0.00" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings_Statics::NewProp_GripInfluenceDeadZone = { "GripInfluenceDeadZone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGunTools_AdvSecondarySettings, GripInfluenceDeadZone), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings_Statics::NewProp_GripInfluenceDeadZone_MetaData), Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings_Statics::NewProp_GripInfluenceDeadZone_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings_Statics::NewProp_GripInfluenceDistanceToZero_MetaData[] = {
		{ "Category", "AdvSecondarySettings|DistanceInfluence" },
		{ "ClampMax", "256.00" },
		{ "ClampMin", "1.00" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Distance from grip point in local space before all influence is lost on the secondary grip (1.0f - 0.0f influence over this range)\n// this comes into effect outside of the deadzone\n" },
#endif
		{ "editcondition", "bUseSecondaryGripDistanceInfluence" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_GunTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distance from grip point in local space before all influence is lost on the secondary grip (1.0f - 0.0f influence over this range)\nthis comes into effect outside of the deadzone" },
#endif
		{ "UIMax", "256.00" },
		{ "UIMin", "1.00" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings_Statics::NewProp_GripInfluenceDistanceToZero = { "GripInfluenceDistanceToZero", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGunTools_AdvSecondarySettings, GripInfluenceDistanceToZero), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings_Statics::NewProp_GripInfluenceDistanceToZero_MetaData), Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings_Statics::NewProp_GripInfluenceDistanceToZero_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings_Statics::NewProp_bUseAdvancedSecondarySettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings_Statics::NewProp_SecondaryGripScaler,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings_Statics::NewProp_bUseConstantGripScaler,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings_Statics::NewProp_bUseGlobalSmoothingSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings_Statics::NewProp_SecondarySmoothing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings_Statics::NewProp_bUseSecondaryGripDistanceInfluence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings_Statics::NewProp_GripInfluenceDeadZone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings_Statics::NewProp_GripInfluenceDistanceToZero,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"GunTools_AdvSecondarySettings",
		Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings_Statics::PropPointers),
		sizeof(FGunTools_AdvSecondarySettings),
		alignof(FGunTools_AdvSecondarySettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings()
	{
		if (!Z_Registration_Info_UScriptStruct_GunTools_AdvSecondarySettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GunTools_AdvSecondarySettings.InnerSingleton, Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GunTools_AdvSecondarySettings.InnerSingleton;
	}
	DEFINE_FUNCTION(UGS_GunTools::execResetRecoil)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetRecoil();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGS_GunTools::execAddRecoilInstance)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_RecoilAddition);
		P_GET_STRUCT(FVector,Z_Param_Optional_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddRecoilInstance(Z_Param_Out_RecoilAddition,Z_Param_Optional_Location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGS_GunTools::execSetVirtualStockEnabled)
	{
		P_GET_UBOOL(Z_Param_bAllowVirtualStock);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVirtualStockEnabled(Z_Param_bAllowVirtualStock);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGS_GunTools::execSetVirtualStockComponent)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_NewStockComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVirtualStockComponent(Z_Param_NewStockComponent);
		P_NATIVE_END;
	}
	void UGS_GunTools::StaticRegisterNativesUGS_GunTools()
	{
		UClass* Class = UGS_GunTools::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddRecoilInstance", &UGS_GunTools::execAddRecoilInstance },
			{ "ResetRecoil", &UGS_GunTools::execResetRecoil },
			{ "SetVirtualStockComponent", &UGS_GunTools::execSetVirtualStockComponent },
			{ "SetVirtualStockEnabled", &UGS_GunTools::execSetVirtualStockEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGS_GunTools_AddRecoilInstance_Statics
	{
		struct GS_GunTools_eventAddRecoilInstance_Parms
		{
			FTransform RecoilAddition;
			FVector Optional_Location;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecoilAddition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RecoilAddition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Optional_Location;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGS_GunTools_AddRecoilInstance_Statics::NewProp_RecoilAddition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGS_GunTools_AddRecoilInstance_Statics::NewProp_RecoilAddition = { "RecoilAddition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GS_GunTools_eventAddRecoilInstance_Parms, RecoilAddition), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGS_GunTools_AddRecoilInstance_Statics::NewProp_RecoilAddition_MetaData), Z_Construct_UFunction_UGS_GunTools_AddRecoilInstance_Statics::NewProp_RecoilAddition_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGS_GunTools_AddRecoilInstance_Statics::NewProp_Optional_Location = { "Optional_Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GS_GunTools_eventAddRecoilInstance_Parms, Optional_Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGS_GunTools_AddRecoilInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGS_GunTools_AddRecoilInstance_Statics::NewProp_RecoilAddition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGS_GunTools_AddRecoilInstance_Statics::NewProp_Optional_Location,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGS_GunTools_AddRecoilInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Recoil" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Adds a recoil instance to the gun tools, the option location is for if using the physical recoil mode\n// Physical recoil is in world space and positional only, logical recoil is in relative space to the mesh itself and uses all\n// of the transforms properties.\n" },
#endif
		{ "CPP_Default_Optional_Location", "" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_GunTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a recoil instance to the gun tools, the option location is for if using the physical recoil mode\nPhysical recoil is in world space and positional only, logical recoil is in relative space to the mesh itself and uses all\nof the transforms properties." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGS_GunTools_AddRecoilInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGS_GunTools, nullptr, "AddRecoilInstance", nullptr, nullptr, Z_Construct_UFunction_UGS_GunTools_AddRecoilInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGS_GunTools_AddRecoilInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGS_GunTools_AddRecoilInstance_Statics::GS_GunTools_eventAddRecoilInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGS_GunTools_AddRecoilInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGS_GunTools_AddRecoilInstance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGS_GunTools_AddRecoilInstance_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGS_GunTools_AddRecoilInstance_Statics::GS_GunTools_eventAddRecoilInstance_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGS_GunTools_AddRecoilInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGS_GunTools_AddRecoilInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGS_GunTools_ResetRecoil_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGS_GunTools_ResetRecoil_Statics::Function_MetaDataParams[] = {
		{ "Category", "Recoil" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_GunTools.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGS_GunTools_ResetRecoil_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGS_GunTools, nullptr, "ResetRecoil", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGS_GunTools_ResetRecoil_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGS_GunTools_ResetRecoil_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UGS_GunTools_ResetRecoil()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGS_GunTools_ResetRecoil_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGS_GunTools_SetVirtualStockComponent_Statics
	{
		struct GS_GunTools_eventSetVirtualStockComponent_Parms
		{
			USceneComponent* NewStockComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewStockComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewStockComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGS_GunTools_SetVirtualStockComponent_Statics::NewProp_NewStockComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGS_GunTools_SetVirtualStockComponent_Statics::NewProp_NewStockComponent = { "NewStockComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GS_GunTools_eventSetVirtualStockComponent_Parms, NewStockComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGS_GunTools_SetVirtualStockComponent_Statics::NewProp_NewStockComponent_MetaData), Z_Construct_UFunction_UGS_GunTools_SetVirtualStockComponent_Statics::NewProp_NewStockComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGS_GunTools_SetVirtualStockComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGS_GunTools_SetVirtualStockComponent_Statics::NewProp_NewStockComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGS_GunTools_SetVirtualStockComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualStock" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_GunTools.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGS_GunTools_SetVirtualStockComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGS_GunTools, nullptr, "SetVirtualStockComponent", nullptr, nullptr, Z_Construct_UFunction_UGS_GunTools_SetVirtualStockComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGS_GunTools_SetVirtualStockComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGS_GunTools_SetVirtualStockComponent_Statics::GS_GunTools_eventSetVirtualStockComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGS_GunTools_SetVirtualStockComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGS_GunTools_SetVirtualStockComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGS_GunTools_SetVirtualStockComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGS_GunTools_SetVirtualStockComponent_Statics::GS_GunTools_eventSetVirtualStockComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGS_GunTools_SetVirtualStockComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGS_GunTools_SetVirtualStockComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGS_GunTools_SetVirtualStockEnabled_Statics
	{
		struct GS_GunTools_eventSetVirtualStockEnabled_Parms
		{
			bool bAllowVirtualStock;
		};
		static void NewProp_bAllowVirtualStock_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowVirtualStock;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGS_GunTools_SetVirtualStockEnabled_Statics::NewProp_bAllowVirtualStock_SetBit(void* Obj)
	{
		((GS_GunTools_eventSetVirtualStockEnabled_Parms*)Obj)->bAllowVirtualStock = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGS_GunTools_SetVirtualStockEnabled_Statics::NewProp_bAllowVirtualStock = { "bAllowVirtualStock", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GS_GunTools_eventSetVirtualStockEnabled_Parms), &Z_Construct_UFunction_UGS_GunTools_SetVirtualStockEnabled_Statics::NewProp_bAllowVirtualStock_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGS_GunTools_SetVirtualStockEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGS_GunTools_SetVirtualStockEnabled_Statics::NewProp_bAllowVirtualStock,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGS_GunTools_SetVirtualStockEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualStock" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_GunTools.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGS_GunTools_SetVirtualStockEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGS_GunTools, nullptr, "SetVirtualStockEnabled", nullptr, nullptr, Z_Construct_UFunction_UGS_GunTools_SetVirtualStockEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGS_GunTools_SetVirtualStockEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGS_GunTools_SetVirtualStockEnabled_Statics::GS_GunTools_eventSetVirtualStockEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGS_GunTools_SetVirtualStockEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGS_GunTools_SetVirtualStockEnabled_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGS_GunTools_SetVirtualStockEnabled_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGS_GunTools_SetVirtualStockEnabled_Statics::GS_GunTools_eventSetVirtualStockEnabled_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGS_GunTools_SetVirtualStockEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGS_GunTools_SetVirtualStockEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGS_GunTools);
	UClass* Z_Construct_UClass_UGS_GunTools_NoRegister()
	{
		return UGS_GunTools::StaticClass();
	}
	struct Z_Construct_UClass_UGS_GunTools_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponRootOrientationComponent_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_WeaponRootOrientationComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseHighQualityRemoteSimulation_MetaData[];
#endif
		static void NewProp_bUseHighQualityRemoteSimulation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHighQualityRemoteSimulation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdvSecondarySettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AdvSecondarySettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PivotOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnVirtualStockModeChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnVirtualStockModeChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseVirtualStock_MetaData[];
#endif
		static void NewProp_bUseVirtualStock_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseVirtualStock;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VirtualStockComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VirtualStockComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseGlobalVirtualStockSettings_MetaData[];
#endif
		static void NewProp_bUseGlobalVirtualStockSettings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGlobalVirtualStockSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VirtualStockSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VirtualStockSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasRecoil_MetaData[];
#endif
		static void NewProp_bHasRecoil_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasRecoil;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyRecoilAsPhysicalForce_MetaData[];
#endif
		static void NewProp_bApplyRecoilAsPhysicalForce_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyRecoilAsPhysicalForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxRecoilTranslation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxRecoilTranslation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxRecoilRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxRecoilRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxRecoilScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxRecoilScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DecayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LerpRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LerpRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGS_GunTools_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGS_Default,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_GunTools_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGS_GunTools_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGS_GunTools_AddRecoilInstance, "AddRecoilInstance" }, // 436577452
		{ &Z_Construct_UFunction_UGS_GunTools_ResetRecoil, "ResetRecoil" }, // 2178741902
		{ &Z_Construct_UFunction_UGS_GunTools_SetVirtualStockComponent, "SetVirtualStockComponent" }, // 4014988277
		{ &Z_Construct_UFunction_UGS_GunTools_SetVirtualStockEnabled, "SetVirtualStockEnabled" }, // 1939474755
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_GunTools_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_GunTools_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "VRExpansionPlugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A grip script that adds useful fire-arm related features to grips\n// Just adding it to the grippable object provides the features without removing standard\n// Grip features.\n" },
#endif
		{ "HideCategories", "TickSettings DefaultSettings" },
		{ "IncludePath", "GripScripts/GS_GunTools.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_GunTools.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A grip script that adds useful fire-arm related features to grips\nJust adding it to the grippable object provides the features without removing standard\nGrip features." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_GunTools_Statics::NewProp_WeaponRootOrientationComponent_MetaData[] = {
		{ "Category", "Weapon Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The name of the component that is used to orient the weapon along its primary axis\n// If it does not exist then the weapon is assumed to be X+ facing.\n// Also used to perform some calculations, make sure it is parented to the gripped object (root component for actors),\n// and that the X+ vector of the orientation component is facing the forward direction of the weapon (gun tip for guns, ect).\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/GS_GunTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the component that is used to orient the weapon along its primary axis\nIf it does not exist then the weapon is assumed to be X+ facing.\nAlso used to perform some calculations, make sure it is parented to the gripped object (root component for actors),\nand that the X+ vector of the orientation component is facing the forward direction of the weapon (gun tip for guns, ect)." },
#endif
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGS_GunTools_Statics::NewProp_WeaponRootOrientationComponent = { "WeaponRootOrientationComponent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGS_GunTools, WeaponRootOrientationComponent), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_GunTools_Statics::NewProp_WeaponRootOrientationComponent_MetaData), Z_Construct_UClass_UGS_GunTools_Statics::NewProp_WeaponRootOrientationComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_GunTools_Statics::NewProp_bUseHighQualityRemoteSimulation_MetaData[] = {
		{ "Category", "GunSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// (default false) If true will run through the entire simulation that the owning client uses for the gun. If false, does a lighter and more performant approximation.\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/GS_GunTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "(default false) If true will run through the entire simulation that the owning client uses for the gun. If false, does a lighter and more performant approximation." },
#endif
	};
#endif
	void Z_Construct_UClass_UGS_GunTools_Statics::NewProp_bUseHighQualityRemoteSimulation_SetBit(void* Obj)
	{
		((UGS_GunTools*)Obj)->bUseHighQualityRemoteSimulation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGS_GunTools_Statics::NewProp_bUseHighQualityRemoteSimulation = { "bUseHighQualityRemoteSimulation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGS_GunTools), &Z_Construct_UClass_UGS_GunTools_Statics::NewProp_bUseHighQualityRemoteSimulation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_GunTools_Statics::NewProp_bUseHighQualityRemoteSimulation_MetaData), Z_Construct_UClass_UGS_GunTools_Statics::NewProp_bUseHighQualityRemoteSimulation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_GunTools_Statics::NewProp_AdvSecondarySettings_MetaData[] = {
		{ "Category", "GunSettings" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_GunTools.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGS_GunTools_Statics::NewProp_AdvSecondarySettings = { "AdvSecondarySettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGS_GunTools, AdvSecondarySettings), Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_GunTools_Statics::NewProp_AdvSecondarySettings_MetaData), Z_Construct_UClass_UGS_GunTools_Statics::NewProp_AdvSecondarySettings_MetaData) }; // 463821159
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_GunTools_Statics::NewProp_PivotOffset_MetaData[] = {
		{ "Category", "Pivot" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Offset to apply to the pivot (good for centering pivot into the palm ect).\n// For this to apply to the physical center of mass as well an OrientationComponent needs to be defined\n// So that we have a valid directional vector to work off of, otherwise the pivot will be in component space and you \n// will have a harder time aligning it if the weapon is off axis (still works, just less intuitive).\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/GS_GunTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Offset to apply to the pivot (good for centering pivot into the palm ect).\nFor this to apply to the physical center of mass as well an OrientationComponent needs to be defined\nSo that we have a valid directional vector to work off of, otherwise the pivot will be in component space and you\nwill have a harder time aligning it if the weapon is off axis (still works, just less intuitive)." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGS_GunTools_Statics::NewProp_PivotOffset = { "PivotOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGS_GunTools, PivotOffset), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_GunTools_Statics::NewProp_PivotOffset_MetaData), Z_Construct_UClass_UGS_GunTools_Statics::NewProp_PivotOffset_MetaData) }; // 2131173936
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_GunTools_Statics::NewProp_OnVirtualStockModeChanged_MetaData[] = {
		{ "Category", "VirtualStock" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Call to use an object\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/GS_GunTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Call to use an object" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGS_GunTools_Statics::NewProp_OnVirtualStockModeChanged = { "OnVirtualStockModeChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGS_GunTools, OnVirtualStockModeChanged), Z_Construct_UDelegateFunction_VRExpansionPlugin_VRVirtualStockModeChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_GunTools_Statics::NewProp_OnVirtualStockModeChanged_MetaData), Z_Construct_UClass_UGS_GunTools_Statics::NewProp_OnVirtualStockModeChanged_MetaData) }; // 146084906
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_GunTools_Statics::NewProp_bUseVirtualStock_MetaData[] = {
		{ "Category", "VirtualStock" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Overrides the pivot location to be at this component instead\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/GS_GunTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Overrides the pivot location to be at this component instead" },
#endif
	};
#endif
	void Z_Construct_UClass_UGS_GunTools_Statics::NewProp_bUseVirtualStock_SetBit(void* Obj)
	{
		((UGS_GunTools*)Obj)->bUseVirtualStock = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGS_GunTools_Statics::NewProp_bUseVirtualStock = { "bUseVirtualStock", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGS_GunTools), &Z_Construct_UClass_UGS_GunTools_Statics::NewProp_bUseVirtualStock_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_GunTools_Statics::NewProp_bUseVirtualStock_MetaData), Z_Construct_UClass_UGS_GunTools_Statics::NewProp_bUseVirtualStock_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_GunTools_Statics::NewProp_VirtualStockComponent_MetaData[] = {
		{ "Category", "VirtualStock" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Overrides the default behavior of using the HMD location for the stock and uses this component instead\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_GunTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Overrides the default behavior of using the HMD location for the stock and uses this component instead" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGS_GunTools_Statics::NewProp_VirtualStockComponent = { "VirtualStockComponent", nullptr, (EPropertyFlags)0x001400000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGS_GunTools, VirtualStockComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_GunTools_Statics::NewProp_VirtualStockComponent_MetaData), Z_Construct_UClass_UGS_GunTools_Statics::NewProp_VirtualStockComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_GunTools_Statics::NewProp_bUseGlobalVirtualStockSettings_MetaData[] = {
		{ "Category", "VirtualStock" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Loads the global virtual stock settings on grip (only if locally controlled, you need to manually replicate and store the global settings\n// In the character if networked).\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/GS_GunTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Loads the global virtual stock settings on grip (only if locally controlled, you need to manually replicate and store the global settings\nIn the character if networked)." },
#endif
	};
#endif
	void Z_Construct_UClass_UGS_GunTools_Statics::NewProp_bUseGlobalVirtualStockSettings_SetBit(void* Obj)
	{
		((UGS_GunTools*)Obj)->bUseGlobalVirtualStockSettings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGS_GunTools_Statics::NewProp_bUseGlobalVirtualStockSettings = { "bUseGlobalVirtualStockSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGS_GunTools), &Z_Construct_UClass_UGS_GunTools_Statics::NewProp_bUseGlobalVirtualStockSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_GunTools_Statics::NewProp_bUseGlobalVirtualStockSettings_MetaData), Z_Construct_UClass_UGS_GunTools_Statics::NewProp_bUseGlobalVirtualStockSettings_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_GunTools_Statics::NewProp_VirtualStockSettings_MetaData[] = {
		{ "Category", "VirtualStock" },
		{ "editcondition", "!bUseGlobalVirtualStockSettings" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_GunTools.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGS_GunTools_Statics::NewProp_VirtualStockSettings = { "VirtualStockSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGS_GunTools, VirtualStockSettings), Z_Construct_UScriptStruct_FBPVirtualStockSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_GunTools_Statics::NewProp_VirtualStockSettings_MetaData), Z_Construct_UClass_UGS_GunTools_Statics::NewProp_VirtualStockSettings_MetaData) }; // 1264964056
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_GunTools_Statics::NewProp_bHasRecoil_MetaData[] = {
		{ "Category", "Recoil" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If this gun has recoil\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/GS_GunTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If this gun has recoil" },
#endif
	};
#endif
	void Z_Construct_UClass_UGS_GunTools_Statics::NewProp_bHasRecoil_SetBit(void* Obj)
	{
		((UGS_GunTools*)Obj)->bHasRecoil = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGS_GunTools_Statics::NewProp_bHasRecoil = { "bHasRecoil", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGS_GunTools), &Z_Construct_UClass_UGS_GunTools_Statics::NewProp_bHasRecoil_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_GunTools_Statics::NewProp_bHasRecoil_MetaData), Z_Construct_UClass_UGS_GunTools_Statics::NewProp_bHasRecoil_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_GunTools_Statics::NewProp_bApplyRecoilAsPhysicalForce_MetaData[] = {
		{ "Category", "Recoil" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true then the recoil will be added as a physical force instead of logical blend\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/GS_GunTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true then the recoil will be added as a physical force instead of logical blend" },
#endif
	};
#endif
	void Z_Construct_UClass_UGS_GunTools_Statics::NewProp_bApplyRecoilAsPhysicalForce_SetBit(void* Obj)
	{
		((UGS_GunTools*)Obj)->bApplyRecoilAsPhysicalForce = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGS_GunTools_Statics::NewProp_bApplyRecoilAsPhysicalForce = { "bApplyRecoilAsPhysicalForce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGS_GunTools), &Z_Construct_UClass_UGS_GunTools_Statics::NewProp_bApplyRecoilAsPhysicalForce_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_GunTools_Statics::NewProp_bApplyRecoilAsPhysicalForce_MetaData), Z_Construct_UClass_UGS_GunTools_Statics::NewProp_bApplyRecoilAsPhysicalForce_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_GunTools_Statics::NewProp_MaxRecoilTranslation_MetaData[] = {
		{ "Category", "Recoil" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Maximum recoil addition\n" },
#endif
		{ "editcondition", "bHasRecoil" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_GunTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum recoil addition" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGS_GunTools_Statics::NewProp_MaxRecoilTranslation = { "MaxRecoilTranslation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGS_GunTools, MaxRecoilTranslation), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_GunTools_Statics::NewProp_MaxRecoilTranslation_MetaData), Z_Construct_UClass_UGS_GunTools_Statics::NewProp_MaxRecoilTranslation_MetaData) }; // 2131173936
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_GunTools_Statics::NewProp_MaxRecoilRotation_MetaData[] = {
		{ "Category", "Recoil" },
		{ "editcondition", "bHasRecoil" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_GunTools.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGS_GunTools_Statics::NewProp_MaxRecoilRotation = { "MaxRecoilRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGS_GunTools, MaxRecoilRotation), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_GunTools_Statics::NewProp_MaxRecoilRotation_MetaData), Z_Construct_UClass_UGS_GunTools_Statics::NewProp_MaxRecoilRotation_MetaData) }; // 2131173936
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_GunTools_Statics::NewProp_MaxRecoilScale_MetaData[] = {
		{ "Category", "Recoil" },
		{ "editcondition", "bHasRecoil" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_GunTools.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGS_GunTools_Statics::NewProp_MaxRecoilScale = { "MaxRecoilScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGS_GunTools, MaxRecoilScale), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_GunTools_Statics::NewProp_MaxRecoilScale_MetaData), Z_Construct_UClass_UGS_GunTools_Statics::NewProp_MaxRecoilScale_MetaData) }; // 2131173936
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_GunTools_Statics::NewProp_DecayRate_MetaData[] = {
		{ "Category", "Recoil" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Recoil decay rate, how fast it decays back to baseline\n" },
#endif
		{ "editcondition", "bHasRecoil" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_GunTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Recoil decay rate, how fast it decays back to baseline" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGS_GunTools_Statics::NewProp_DecayRate = { "DecayRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGS_GunTools, DecayRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_GunTools_Statics::NewProp_DecayRate_MetaData), Z_Construct_UClass_UGS_GunTools_Statics::NewProp_DecayRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_GunTools_Statics::NewProp_LerpRate_MetaData[] = {
		{ "Category", "Recoil" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Recoil lerp rate, how long it takes to lerp to the target recoil amount (0.0f would be instant)\n" },
#endif
		{ "editcondition", "bHasRecoil" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_GunTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Recoil lerp rate, how long it takes to lerp to the target recoil amount (0.0f would be instant)" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGS_GunTools_Statics::NewProp_LerpRate = { "LerpRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGS_GunTools, LerpRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_GunTools_Statics::NewProp_LerpRate_MetaData), Z_Construct_UClass_UGS_GunTools_Statics::NewProp_LerpRate_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGS_GunTools_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_GunTools_Statics::NewProp_WeaponRootOrientationComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_GunTools_Statics::NewProp_bUseHighQualityRemoteSimulation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_GunTools_Statics::NewProp_AdvSecondarySettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_GunTools_Statics::NewProp_PivotOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_GunTools_Statics::NewProp_OnVirtualStockModeChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_GunTools_Statics::NewProp_bUseVirtualStock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_GunTools_Statics::NewProp_VirtualStockComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_GunTools_Statics::NewProp_bUseGlobalVirtualStockSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_GunTools_Statics::NewProp_VirtualStockSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_GunTools_Statics::NewProp_bHasRecoil,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_GunTools_Statics::NewProp_bApplyRecoilAsPhysicalForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_GunTools_Statics::NewProp_MaxRecoilTranslation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_GunTools_Statics::NewProp_MaxRecoilRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_GunTools_Statics::NewProp_MaxRecoilScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_GunTools_Statics::NewProp_DecayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_GunTools_Statics::NewProp_LerpRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGS_GunTools_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGS_GunTools>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGS_GunTools_Statics::ClassParams = {
		&UGS_GunTools::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGS_GunTools_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGS_GunTools_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_GunTools_Statics::Class_MetaDataParams), Z_Construct_UClass_UGS_GunTools_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_GunTools_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGS_GunTools()
	{
		if (!Z_Registration_Info_UClass_UGS_GunTools.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGS_GunTools.OuterSingleton, Z_Construct_UClass_UGS_GunTools_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGS_GunTools.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UGS_GunTools>()
	{
		return UGS_GunTools::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGS_GunTools);
	UGS_GunTools::~UGS_GunTools() {}
	struct Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_Statics::ScriptStructInfo[] = {
		{ FBPVirtualStockSettings::StaticStruct, Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics::NewStructOps, TEXT("BPVirtualStockSettings"), &Z_Registration_Info_UScriptStruct_BPVirtualStockSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBPVirtualStockSettings), 1264964056U) },
		{ FGunTools_AdvSecondarySettings::StaticStruct, Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings_Statics::NewStructOps, TEXT("GunTools_AdvSecondarySettings"), &Z_Registration_Info_UScriptStruct_GunTools_AdvSecondarySettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGunTools_AdvSecondarySettings), 463821159U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGS_GunTools, UGS_GunTools::StaticClass, TEXT("UGS_GunTools"), &Z_Registration_Info_UClass_UGS_GunTools, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGS_GunTools), 2957481232U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_387925740(TEXT("/Script/VRExpansionPlugin"),
		Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
