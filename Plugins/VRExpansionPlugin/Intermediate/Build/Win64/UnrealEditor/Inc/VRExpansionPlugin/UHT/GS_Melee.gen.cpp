// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/GripScripts/GS_Melee.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
#include "VRExpansionPlugin/Public/VRBPDatatypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGS_Melee() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EPhysicalSurface();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGS_Default();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGS_Melee();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGS_Melee_NoRegister();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRMeleeComType();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRMeleePrimaryHandType();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRMeleeZoneType();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeInvalidHitSignature__DelegateSignature();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleSettings();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPGripPair();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPHitSurfaceProperties();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPLodgeComponentInfo();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVRMeleeZoneType;
	static UEnum* EVRMeleeZoneType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVRMeleeZoneType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVRMeleeZoneType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRMeleeZoneType, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRMeleeZoneType"));
		}
		return Z_Registration_Info_UEnum_EVRMeleeZoneType.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRMeleeZoneType>()
	{
		return EVRMeleeZoneType_StaticEnum();
	}
	struct Z_Construct_UEnum_VRExpansionPlugin_EVRMeleeZoneType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VRExpansionPlugin_EVRMeleeZoneType_Statics::Enumerators[] = {
		{ "EVRMeleeZoneType::VRPMELLE_ZONETYPE_Stab", (int64)EVRMeleeZoneType::VRPMELLE_ZONETYPE_Stab },
		{ "EVRMeleeZoneType::VRPMELLE_ZONETYPE_Hit", (int64)EVRMeleeZoneType::VRPMELLE_ZONETYPE_Hit },
		{ "EVRMeleeZoneType::VRPMELLE_ZONETYPE_StabAndHit", (int64)EVRMeleeZoneType::VRPMELLE_ZONETYPE_StabAndHit },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VRExpansionPlugin_EVRMeleeZoneType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The type of melee hit zone we are\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The type of melee hit zone we are" },
#endif
		{ "VRPMELLE_ZONETYPE_Hit.Comment", "// This zone is only valid for hits\n" },
		{ "VRPMELLE_ZONETYPE_Hit.DisplayName", "Hit" },
		{ "VRPMELLE_ZONETYPE_Hit.Name", "EVRMeleeZoneType::VRPMELLE_ZONETYPE_Hit" },
		{ "VRPMELLE_ZONETYPE_Hit.ToolTip", "This zone is only valid for hits" },
		{ "VRPMELLE_ZONETYPE_Stab.Comment", "// This zone is only valid for stabs\n" },
		{ "VRPMELLE_ZONETYPE_Stab.DisplayName", "Stab" },
		{ "VRPMELLE_ZONETYPE_Stab.Name", "EVRMeleeZoneType::VRPMELLE_ZONETYPE_Stab" },
		{ "VRPMELLE_ZONETYPE_Stab.ToolTip", "This zone is only valid for stabs" },
		{ "VRPMELLE_ZONETYPE_StabAndHit.Comment", "// This zone is valid for both stabs and hits\n" },
		{ "VRPMELLE_ZONETYPE_StabAndHit.DisplayName", "StabAndHit" },
		{ "VRPMELLE_ZONETYPE_StabAndHit.Name", "EVRMeleeZoneType::VRPMELLE_ZONETYPE_StabAndHit" },
		{ "VRPMELLE_ZONETYPE_StabAndHit.ToolTip", "This zone is valid for both stabs and hits" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VRExpansionPlugin_EVRMeleeZoneType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		"EVRMeleeZoneType",
		"EVRMeleeZoneType",
		Z_Construct_UEnum_VRExpansionPlugin_EVRMeleeZoneType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRMeleeZoneType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRMeleeZoneType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VRExpansionPlugin_EVRMeleeZoneType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRMeleeZoneType()
	{
		if (!Z_Registration_Info_UEnum_EVRMeleeZoneType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVRMeleeZoneType.InnerSingleton, Z_Construct_UEnum_VRExpansionPlugin_EVRMeleeZoneType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVRMeleeZoneType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVRMeleeComType;
	static UEnum* EVRMeleeComType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVRMeleeComType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVRMeleeComType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRMeleeComType, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRMeleeComType"));
		}
		return Z_Registration_Info_UEnum_EVRMeleeComType.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRMeleeComType>()
	{
		return EVRMeleeComType_StaticEnum();
	}
	struct Z_Construct_UEnum_VRExpansionPlugin_EVRMeleeComType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VRExpansionPlugin_EVRMeleeComType_Statics::Enumerators[] = {
		{ "EVRMeleeComType::VRPMELEECOM_Normal", (int64)EVRMeleeComType::VRPMELEECOM_Normal },
		{ "EVRMeleeComType::VRPMELEECOM_BetweenHands", (int64)EVRMeleeComType::VRPMELEECOM_BetweenHands },
		{ "EVRMeleeComType::VRPMELEECOM_PrimaryHand", (int64)EVRMeleeComType::VRPMELEECOM_PrimaryHand },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VRExpansionPlugin_EVRMeleeComType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The type of COM selection to use\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The type of COM selection to use" },
#endif
		{ "VRPMELEECOM_BetweenHands.Comment", "// Sets COM to between hands\n" },
		{ "VRPMELEECOM_BetweenHands.DisplayName", "BetweenHands" },
		{ "VRPMELEECOM_BetweenHands.Name", "EVRMeleeComType::VRPMELEECOM_BetweenHands" },
		{ "VRPMELEECOM_BetweenHands.ToolTip", "Sets COM to between hands" },
		{ "VRPMELEECOM_Normal.Comment", "// Does not set COM\n" },
		{ "VRPMELEECOM_Normal.DisplayName", "Normal" },
		{ "VRPMELEECOM_Normal.Name", "EVRMeleeComType::VRPMELEECOM_Normal" },
		{ "VRPMELEECOM_Normal.ToolTip", "Does not set COM" },
		{ "VRPMELEECOM_PrimaryHand.Comment", "// Uses the primary hand as com location\n" },
		{ "VRPMELEECOM_PrimaryHand.DisplayName", "PrimaryHand" },
		{ "VRPMELEECOM_PrimaryHand.Name", "EVRMeleeComType::VRPMELEECOM_PrimaryHand" },
		{ "VRPMELEECOM_PrimaryHand.ToolTip", "Uses the primary hand as com location" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VRExpansionPlugin_EVRMeleeComType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		"EVRMeleeComType",
		"EVRMeleeComType",
		Z_Construct_UEnum_VRExpansionPlugin_EVRMeleeComType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRMeleeComType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRMeleeComType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VRExpansionPlugin_EVRMeleeComType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRMeleeComType()
	{
		if (!Z_Registration_Info_UEnum_EVRMeleeComType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVRMeleeComType.InnerSingleton, Z_Construct_UEnum_VRExpansionPlugin_EVRMeleeComType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVRMeleeComType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVRMeleePrimaryHandType;
	static UEnum* EVRMeleePrimaryHandType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVRMeleePrimaryHandType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVRMeleePrimaryHandType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRMeleePrimaryHandType, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRMeleePrimaryHandType"));
		}
		return Z_Registration_Info_UEnum_EVRMeleePrimaryHandType.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRMeleePrimaryHandType>()
	{
		return EVRMeleePrimaryHandType_StaticEnum();
	}
	struct Z_Construct_UEnum_VRExpansionPlugin_EVRMeleePrimaryHandType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VRExpansionPlugin_EVRMeleePrimaryHandType_Statics::Enumerators[] = {
		{ "EVRMeleePrimaryHandType::VRPHAND_Rear", (int64)EVRMeleePrimaryHandType::VRPHAND_Rear },
		{ "EVRMeleePrimaryHandType::VRPHAND_Front", (int64)EVRMeleePrimaryHandType::VRPHAND_Front },
		{ "EVRMeleePrimaryHandType::VRPHAND_Slotted", (int64)EVRMeleePrimaryHandType::VRPHAND_Slotted },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VRExpansionPlugin_EVRMeleePrimaryHandType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The type of primary hand selection to use\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The type of primary hand selection to use" },
#endif
		{ "VRPHAND_Front.Comment", "// Uses the foremost hand as the primary hand\n" },
		{ "VRPHAND_Front.DisplayName", "Front" },
		{ "VRPHAND_Front.Name", "EVRMeleePrimaryHandType::VRPHAND_Front" },
		{ "VRPHAND_Front.ToolTip", "Uses the foremost hand as the primary hand" },
		{ "VRPHAND_Rear.Comment", "// Uses the rearmost hand as the primary hand\n" },
		{ "VRPHAND_Rear.DisplayName", "Rear" },
		{ "VRPHAND_Rear.Name", "EVRMeleePrimaryHandType::VRPHAND_Rear" },
		{ "VRPHAND_Rear.ToolTip", "Uses the rearmost hand as the primary hand" },
		{ "VRPHAND_Slotted.Comment", "// Uses the first slotted hand as the primary hand\n// If neither are slotted then its first come first serve and both hannds load the secondary settings\n" },
		{ "VRPHAND_Slotted.DisplayName", "Slotted" },
		{ "VRPHAND_Slotted.Name", "EVRMeleePrimaryHandType::VRPHAND_Slotted" },
		{ "VRPHAND_Slotted.ToolTip", "Uses the first slotted hand as the primary hand\nIf neither are slotted then its first come first serve and both hannds load the secondary settings" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VRExpansionPlugin_EVRMeleePrimaryHandType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		"EVRMeleePrimaryHandType",
		"EVRMeleePrimaryHandType",
		Z_Construct_UEnum_VRExpansionPlugin_EVRMeleePrimaryHandType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRMeleePrimaryHandType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRMeleePrimaryHandType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VRExpansionPlugin_EVRMeleePrimaryHandType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRMeleePrimaryHandType()
	{
		if (!Z_Registration_Info_UEnum_EVRMeleePrimaryHandType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVRMeleePrimaryHandType.InnerSingleton, Z_Construct_UEnum_VRExpansionPlugin_EVRMeleePrimaryHandType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVRMeleePrimaryHandType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BPHitSurfaceProperties;
class UScriptStruct* FBPHitSurfaceProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BPHitSurfaceProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BPHitSurfaceProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPHitSurfaceProperties, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("BPHitSurfaceProperties"));
	}
	return Z_Registration_Info_UScriptStruct_BPHitSurfaceProperties.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FBPHitSurfaceProperties>()
{
	return FBPHitSurfaceProperties::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSurfaceAllowsPenetration_MetaData[];
#endif
		static void NewProp_bSurfaceAllowsPenetration_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSurfaceAllowsPenetration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BluntDamageScaler_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BluntDamageScaler;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SharpDamageScaler_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SharpDamageScaler;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StabVelocityScaler_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StabVelocityScaler;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SurfaceType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Lodging" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A Lodge component data struct\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A Lodge component data struct" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPHitSurfaceProperties>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::NewProp_bSurfaceAllowsPenetration_MetaData[] = {
		{ "Category", "Surface Property" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Does this surface type allow penetration\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Does this surface type allow penetration" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::NewProp_bSurfaceAllowsPenetration_SetBit(void* Obj)
	{
		((FBPHitSurfaceProperties*)Obj)->bSurfaceAllowsPenetration = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::NewProp_bSurfaceAllowsPenetration = { "bSurfaceAllowsPenetration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBPHitSurfaceProperties), &Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::NewProp_bSurfaceAllowsPenetration_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::NewProp_bSurfaceAllowsPenetration_MetaData), Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::NewProp_bSurfaceAllowsPenetration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::NewProp_BluntDamageScaler_MetaData[] = {
		{ "Category", "Surface Property" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Scaler to damage applied from hitting this surface with blunt damage\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scaler to damage applied from hitting this surface with blunt damage" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::NewProp_BluntDamageScaler = { "BluntDamageScaler", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPHitSurfaceProperties, BluntDamageScaler), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::NewProp_BluntDamageScaler_MetaData), Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::NewProp_BluntDamageScaler_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::NewProp_SharpDamageScaler_MetaData[] = {
		{ "Category", "Surface Property" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Scaler to damage applied from hitting this surface with sharp damage\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scaler to damage applied from hitting this surface with sharp damage" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::NewProp_SharpDamageScaler = { "SharpDamageScaler", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPHitSurfaceProperties, SharpDamageScaler), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::NewProp_SharpDamageScaler_MetaData), Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::NewProp_SharpDamageScaler_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::NewProp_StabVelocityScaler_MetaData[] = {
		{ "Category", "Surface Property" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Alters the stab velocity to let you make it harder or easier to stab this surface\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Alters the stab velocity to let you make it harder or easier to stab this surface" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::NewProp_StabVelocityScaler = { "StabVelocityScaler", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPHitSurfaceProperties, StabVelocityScaler), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::NewProp_StabVelocityScaler_MetaData), Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::NewProp_StabVelocityScaler_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::NewProp_SurfaceType_MetaData[] = {
		{ "Category", "Surface Property" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::NewProp_SurfaceType = { "SurfaceType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPHitSurfaceProperties, SurfaceType), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::NewProp_SurfaceType_MetaData), Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::NewProp_SurfaceType_MetaData) }; // 2508321301
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::NewProp_bSurfaceAllowsPenetration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::NewProp_BluntDamageScaler,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::NewProp_SharpDamageScaler,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::NewProp_StabVelocityScaler,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::NewProp_SurfaceType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"BPHitSurfaceProperties",
		Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::PropPointers),
		sizeof(FBPHitSurfaceProperties),
		alignof(FBPHitSurfaceProperties),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FBPHitSurfaceProperties()
	{
		if (!Z_Registration_Info_UScriptStruct_BPHitSurfaceProperties.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BPHitSurfaceProperties.InnerSingleton, Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BPHitSurfaceProperties.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BPLodgeComponentInfo;
class UScriptStruct* FBPLodgeComponentInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BPLodgeComponentInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BPLodgeComponentInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPLodgeComponentInfo, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("BPLodgeComponentInfo"));
	}
	return Z_Registration_Info_UScriptStruct_BPLodgeComponentInfo.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FBPLodgeComponentInfo>()
{
	return FBPLodgeComponentInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ComponentName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ZoneType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoneType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ZoneType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreForwardVectorForHitImpulse_MetaData[];
#endif
		static void NewProp_bIgnoreForwardVectorForHitImpulse_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreForwardVectorForHitImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageScaler_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageScaler;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PenetrationDepth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PenetrationDepth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowPenetrationInReverseAsWell_MetaData[];
#endif
		static void NewProp_bAllowPenetrationInReverseAsWell_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowPenetrationInReverseAsWell;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PenetrationVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PenetrationVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumHitVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumHitVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AcceptableForwardProductRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AcceptableForwardProductRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AcceptableForwardProductRangeForHits_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AcceptableForwardProductRangeForHits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TargetComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Lodging" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A Lodge component data struct\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A Lodge component data struct" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPLodgeComponentInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_ComponentName_MetaData[] = {
		{ "Category", "LodgeComponentInfo" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_ComponentName = { "ComponentName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPLodgeComponentInfo, ComponentName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_ComponentName_MetaData), Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_ComponentName_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_ZoneType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_ZoneType_MetaData[] = {
		{ "Category", "LodgeComponentInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Type of collision zone we are\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Type of collision zone we are" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_ZoneType = { "ZoneType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPLodgeComponentInfo, ZoneType), Z_Construct_UEnum_VRExpansionPlugin_EVRMeleeZoneType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_ZoneType_MetaData), Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_ZoneType_MetaData) }; // 1388201271
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_bIgnoreForwardVectorForHitImpulse_MetaData[] = {
		{ "Category", "LodgeComponentInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true than we will calculate hit impulse off of its total value and not just off of it axially aligned to the forward of this body\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true than we will calculate hit impulse off of its total value and not just off of it axially aligned to the forward of this body" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_bIgnoreForwardVectorForHitImpulse_SetBit(void* Obj)
	{
		((FBPLodgeComponentInfo*)Obj)->bIgnoreForwardVectorForHitImpulse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_bIgnoreForwardVectorForHitImpulse = { "bIgnoreForwardVectorForHitImpulse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBPLodgeComponentInfo), &Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_bIgnoreForwardVectorForHitImpulse_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_bIgnoreForwardVectorForHitImpulse_MetaData), Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_bIgnoreForwardVectorForHitImpulse_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_DamageScaler_MetaData[] = {
		{ "Category", "LodgeComponentInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// For end users to provide a base damage per zone if they want\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "For end users to provide a base damage per zone if they want" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_DamageScaler = { "DamageScaler", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPLodgeComponentInfo, DamageScaler), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_DamageScaler_MetaData), Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_DamageScaler_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_PenetrationDepth_MetaData[] = {
		{ "Category", "LodgeComponentInfo" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_PenetrationDepth = { "PenetrationDepth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPLodgeComponentInfo, PenetrationDepth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_PenetrationDepth_MetaData), Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_PenetrationDepth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_bAllowPenetrationInReverseAsWell_MetaData[] = {
		{ "Category", "LodgeComponentInfo" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_bAllowPenetrationInReverseAsWell_SetBit(void* Obj)
	{
		((FBPLodgeComponentInfo*)Obj)->bAllowPenetrationInReverseAsWell = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_bAllowPenetrationInReverseAsWell = { "bAllowPenetrationInReverseAsWell", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBPLodgeComponentInfo), &Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_bAllowPenetrationInReverseAsWell_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_bAllowPenetrationInReverseAsWell_MetaData), Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_bAllowPenetrationInReverseAsWell_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_PenetrationVelocity_MetaData[] = {
		{ "Category", "Weapon Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is the impulse velocity (along forward axis of component) required to throw an OnPenetrated event from a PenetrationNotifierComponent\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is the impulse velocity (along forward axis of component) required to throw an OnPenetrated event from a PenetrationNotifierComponent" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_PenetrationVelocity = { "PenetrationVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPLodgeComponentInfo, PenetrationVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_PenetrationVelocity_MetaData), Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_PenetrationVelocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_MinimumHitVelocity_MetaData[] = {
		{ "Category", "Weapon Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is the impulse velocity required to throw an OnHit event from a PenetrationNotifierComponent (If a stab didn't take place)\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is the impulse velocity required to throw an OnHit event from a PenetrationNotifierComponent (If a stab didn't take place)" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_MinimumHitVelocity = { "MinimumHitVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPLodgeComponentInfo, MinimumHitVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_MinimumHitVelocity_MetaData), Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_MinimumHitVelocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_AcceptableForwardProductRange_MetaData[] = {
		{ "Category", "Weapon Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The acceptable range of the dot product of the forward vector and the impact normal to define a valid facing\n// Subtracted from the 1.0f forward facing value\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The acceptable range of the dot product of the forward vector and the impact normal to define a valid facing\nSubtracted from the 1.0f forward facing value" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_AcceptableForwardProductRange = { "AcceptableForwardProductRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPLodgeComponentInfo, AcceptableForwardProductRange), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_AcceptableForwardProductRange_MetaData), Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_AcceptableForwardProductRange_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_AcceptableForwardProductRangeForHits_MetaData[] = {
		{ "Category", "Weapon Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The acceptable range of the dot product of the forward vector and the impact normal to define a valid facing\n// Subtracted from the 1.0f forward facing value\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The acceptable range of the dot product of the forward vector and the impact normal to define a valid facing\nSubtracted from the 1.0f forward facing value" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_AcceptableForwardProductRangeForHits = { "AcceptableForwardProductRangeForHits", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPLodgeComponentInfo, AcceptableForwardProductRangeForHits), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_AcceptableForwardProductRangeForHits_MetaData), Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_AcceptableForwardProductRangeForHits_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_TargetComponent_MetaData[] = {
		{ "Category", "LodgeComponentInfo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_TargetComponent = { "TargetComponent", nullptr, (EPropertyFlags)0x001400000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPLodgeComponentInfo, TargetComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_TargetComponent_MetaData), Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_TargetComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_ComponentName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_ZoneType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_ZoneType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_bIgnoreForwardVectorForHitImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_DamageScaler,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_PenetrationDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_bAllowPenetrationInReverseAsWell,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_PenetrationVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_MinimumHitVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_AcceptableForwardProductRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_AcceptableForwardProductRangeForHits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_TargetComponent,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"BPLodgeComponentInfo",
		Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::PropPointers),
		sizeof(FBPLodgeComponentInfo),
		alignof(FBPLodgeComponentInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FBPLodgeComponentInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_BPLodgeComponentInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BPLodgeComponentInfo.InnerSingleton, Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BPLodgeComponentInfo.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature_Statics
	{
		struct _Script_VRExpansionPlugin_eventVROnMeleeShouldLodgeSignature_Parms
		{
			FBPLodgeComponentInfo LogComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			TEnumAsByte<ECollisionChannel> OtherCompCollisionChannel;
			FBPHitSurfaceProperties HitSurfaceProperties;
			FVector NormalImpulse;
			FHitResult Hit;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_LogComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OtherCompCollisionChannel;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitSurfaceProperties;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature_Statics::NewProp_LogComponent = { "LogComponent", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVROnMeleeShouldLodgeSignature_Parms, LogComponent), Z_Construct_UScriptStruct_FBPLodgeComponentInfo, METADATA_PARAMS(0, nullptr) }; // 1220180553
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVROnMeleeShouldLodgeSignature_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVROnMeleeShouldLodgeSignature_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature_Statics::NewProp_OtherComp_MetaData), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature_Statics::NewProp_OtherCompCollisionChannel = { "OtherCompCollisionChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVROnMeleeShouldLodgeSignature_Parms, OtherCompCollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 1822723181
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature_Statics::NewProp_HitSurfaceProperties = { "HitSurfaceProperties", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVROnMeleeShouldLodgeSignature_Parms, HitSurfaceProperties), Z_Construct_UScriptStruct_FBPHitSurfaceProperties, METADATA_PARAMS(0, nullptr) }; // 2541670484
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVROnMeleeShouldLodgeSignature_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVROnMeleeShouldLodgeSignature_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature_Statics::NewProp_Hit_MetaData), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature_Statics::NewProp_Hit_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature_Statics::NewProp_LogComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature_Statics::NewProp_OtherCompCollisionChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature_Statics::NewProp_HitSurfaceProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature_Statics::NewProp_NormalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Event thrown when we the melee weapon becomes lodged\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event thrown when we the melee weapon becomes lodged" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin, nullptr, "VROnMeleeShouldLodgeSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature_Statics::_Script_VRExpansionPlugin_eventVROnMeleeShouldLodgeSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature_Statics::_Script_VRExpansionPlugin_eventVROnMeleeShouldLodgeSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FVROnMeleeShouldLodgeSignature_DelegateWrapper(const FMulticastScriptDelegate& VROnMeleeShouldLodgeSignature, FBPLodgeComponentInfo LogComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, ECollisionChannel OtherCompCollisionChannel, FBPHitSurfaceProperties HitSurfaceProperties, FVector NormalImpulse, FHitResult const& Hit)
{
	struct _Script_VRExpansionPlugin_eventVROnMeleeShouldLodgeSignature_Parms
	{
		FBPLodgeComponentInfo LogComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		TEnumAsByte<ECollisionChannel> OtherCompCollisionChannel;
		FBPHitSurfaceProperties HitSurfaceProperties;
		FVector NormalImpulse;
		FHitResult Hit;
	};
	_Script_VRExpansionPlugin_eventVROnMeleeShouldLodgeSignature_Parms Parms;
	Parms.LogComponent=LogComponent;
	Parms.OtherActor=OtherActor;
	Parms.OtherComp=OtherComp;
	Parms.OtherCompCollisionChannel=OtherCompCollisionChannel;
	Parms.HitSurfaceProperties=HitSurfaceProperties;
	Parms.NormalImpulse=NormalImpulse;
	Parms.Hit=Hit;
	VROnMeleeShouldLodgeSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature_Statics
	{
		struct _Script_VRExpansionPlugin_eventVROnMeleeOnHit_Parms
		{
			FBPLodgeComponentInfo LogComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			TEnumAsByte<ECollisionChannel> OtherCompCollisionChannel;
			FBPHitSurfaceProperties HitSurfaceProperties;
			FVector NormalImpulse;
			FHitResult Hit;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_LogComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OtherCompCollisionChannel;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitSurfaceProperties;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature_Statics::NewProp_LogComponent = { "LogComponent", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVROnMeleeOnHit_Parms, LogComponent), Z_Construct_UScriptStruct_FBPLodgeComponentInfo, METADATA_PARAMS(0, nullptr) }; // 1220180553
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVROnMeleeOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVROnMeleeOnHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature_Statics::NewProp_OtherComp_MetaData), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature_Statics::NewProp_OtherCompCollisionChannel = { "OtherCompCollisionChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVROnMeleeOnHit_Parms, OtherCompCollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 1822723181
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature_Statics::NewProp_HitSurfaceProperties = { "HitSurfaceProperties", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVROnMeleeOnHit_Parms, HitSurfaceProperties), Z_Construct_UScriptStruct_FBPHitSurfaceProperties, METADATA_PARAMS(0, nullptr) }; // 2541670484
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVROnMeleeOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVROnMeleeOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature_Statics::NewProp_Hit_MetaData), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature_Statics::NewProp_Hit_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature_Statics::NewProp_LogComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature_Statics::NewProp_OtherCompCollisionChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature_Statics::NewProp_HitSurfaceProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature_Statics::NewProp_NormalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin, nullptr, "VROnMeleeOnHit__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature_Statics::_Script_VRExpansionPlugin_eventVROnMeleeOnHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature_Statics::_Script_VRExpansionPlugin_eventVROnMeleeOnHit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FVROnMeleeOnHit_DelegateWrapper(const FMulticastScriptDelegate& VROnMeleeOnHit, FBPLodgeComponentInfo LogComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, ECollisionChannel OtherCompCollisionChannel, FBPHitSurfaceProperties HitSurfaceProperties, FVector NormalImpulse, FHitResult const& Hit)
{
	struct _Script_VRExpansionPlugin_eventVROnMeleeOnHit_Parms
	{
		FBPLodgeComponentInfo LogComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		TEnumAsByte<ECollisionChannel> OtherCompCollisionChannel;
		FBPHitSurfaceProperties HitSurfaceProperties;
		FVector NormalImpulse;
		FHitResult Hit;
	};
	_Script_VRExpansionPlugin_eventVROnMeleeOnHit_Parms Parms;
	Parms.LogComponent=LogComponent;
	Parms.OtherActor=OtherActor;
	Parms.OtherComp=OtherComp;
	Parms.OtherCompCollisionChannel=OtherCompCollisionChannel;
	Parms.HitSurfaceProperties=HitSurfaceProperties;
	Parms.NormalImpulse=NormalImpulse;
	Parms.Hit=Hit;
	VROnMeleeOnHit.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeInvalidHitSignature__DelegateSignature_Statics
	{
		struct _Script_VRExpansionPlugin_eventVROnMeleeInvalidHitSignature_Parms
		{
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeInvalidHitSignature__DelegateSignature_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVROnMeleeInvalidHitSignature_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeInvalidHitSignature__DelegateSignature_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeInvalidHitSignature__DelegateSignature_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVROnMeleeInvalidHitSignature_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeInvalidHitSignature__DelegateSignature_Statics::NewProp_OtherComp_MetaData), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeInvalidHitSignature__DelegateSignature_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeInvalidHitSignature__DelegateSignature_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVROnMeleeInvalidHitSignature_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeInvalidHitSignature__DelegateSignature_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeInvalidHitSignature__DelegateSignature_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVROnMeleeInvalidHitSignature_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeInvalidHitSignature__DelegateSignature_Statics::NewProp_Hit_MetaData), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeInvalidHitSignature__DelegateSignature_Statics::NewProp_Hit_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeInvalidHitSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeInvalidHitSignature__DelegateSignature_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeInvalidHitSignature__DelegateSignature_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeInvalidHitSignature__DelegateSignature_Statics::NewProp_NormalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeInvalidHitSignature__DelegateSignature_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeInvalidHitSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeInvalidHitSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin, nullptr, "VROnMeleeInvalidHitSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeInvalidHitSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeInvalidHitSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeInvalidHitSignature__DelegateSignature_Statics::_Script_VRExpansionPlugin_eventVROnMeleeInvalidHitSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeInvalidHitSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeInvalidHitSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeInvalidHitSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeInvalidHitSignature__DelegateSignature_Statics::_Script_VRExpansionPlugin_eventVROnMeleeInvalidHitSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeInvalidHitSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeInvalidHitSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FVROnMeleeInvalidHitSignature_DelegateWrapper(const FMulticastScriptDelegate& VROnMeleeInvalidHitSignature, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult const& Hit)
{
	struct _Script_VRExpansionPlugin_eventVROnMeleeInvalidHitSignature_Parms
	{
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		FVector NormalImpulse;
		FHitResult Hit;
	};
	_Script_VRExpansionPlugin_eventVROnMeleeInvalidHitSignature_Parms Parms;
	Parms.OtherActor=OtherActor;
	Parms.OtherComp=OtherComp;
	Parms.NormalImpulse=NormalImpulse;
	Parms.Hit=Hit;
	VROnMeleeInvalidHitSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UGS_Melee::execSetPrimaryAndSecondaryHands)
	{
		P_GET_STRUCT_REF(FBPGripPair,Z_Param_Out_PrimaryGrip);
		P_GET_STRUCT_REF(FBPGripPair,Z_Param_Out_SecondaryGrip);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPrimaryAndSecondaryHands(Z_Param_Out_PrimaryGrip,Z_Param_Out_SecondaryGrip);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGS_Melee::execUpdateHandPositionAndRotation)
	{
		P_GET_STRUCT(FBPGripPair,Z_Param_HandPair);
		P_GET_STRUCT(FTransform,Z_Param_HandWorldTransform);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LocDifference);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_RotDifference);
		P_GET_UBOOL(Z_Param_bUpdateLocation);
		P_GET_UBOOL(Z_Param_bUpdateRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateHandPositionAndRotation(Z_Param_HandPair,Z_Param_HandWorldTransform,Z_Param_Out_LocDifference,Z_Param_Out_RotDifference,Z_Param_bUpdateLocation,Z_Param_bUpdateRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGS_Melee::execUpdateHandPosition)
	{
		P_GET_STRUCT(FBPGripPair,Z_Param_HandPair);
		P_GET_STRUCT(FVector,Z_Param_HandWorldPosition);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LocDifference);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateHandPosition(Z_Param_HandPair,Z_Param_HandWorldPosition,Z_Param_Out_LocDifference);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGS_Melee::execSetIsLodged)
	{
		P_GET_UBOOL(Z_Param_IsLodged);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_LodgeComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsLodged(Z_Param_IsLodged,Z_Param_LodgeComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGS_Melee::execOnLodgeHitCallback)
	{
		P_GET_OBJECT(AActor,Z_Param_SelfActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLodgeHitCallback(Z_Param_SelfActor,Z_Param_OtherActor,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	void UGS_Melee::StaticRegisterNativesUGS_Melee()
	{
		UClass* Class = UGS_Melee::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnLodgeHitCallback", &UGS_Melee::execOnLodgeHitCallback },
			{ "SetIsLodged", &UGS_Melee::execSetIsLodged },
			{ "SetPrimaryAndSecondaryHands", &UGS_Melee::execSetPrimaryAndSecondaryHands },
			{ "UpdateHandPosition", &UGS_Melee::execUpdateHandPosition },
			{ "UpdateHandPositionAndRotation", &UGS_Melee::execUpdateHandPositionAndRotation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGS_Melee_OnLodgeHitCallback_Statics
	{
		struct GS_Melee_eventOnLodgeHitCallback_Parms
		{
			AActor* SelfActor;
			AActor* OtherActor;
			FVector NormalImpulse;
			FHitResult Hit;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelfActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGS_Melee_OnLodgeHitCallback_Statics::NewProp_SelfActor = { "SelfActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GS_Melee_eventOnLodgeHitCallback_Parms, SelfActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGS_Melee_OnLodgeHitCallback_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GS_Melee_eventOnLodgeHitCallback_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGS_Melee_OnLodgeHitCallback_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GS_Melee_eventOnLodgeHitCallback_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGS_Melee_OnLodgeHitCallback_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGS_Melee_OnLodgeHitCallback_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GS_Melee_eventOnLodgeHitCallback_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGS_Melee_OnLodgeHitCallback_Statics::NewProp_Hit_MetaData), Z_Construct_UFunction_UGS_Melee_OnLodgeHitCallback_Statics::NewProp_Hit_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGS_Melee_OnLodgeHitCallback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGS_Melee_OnLodgeHitCallback_Statics::NewProp_SelfActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGS_Melee_OnLodgeHitCallback_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGS_Melee_OnLodgeHitCallback_Statics::NewProp_NormalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGS_Melee_OnLodgeHitCallback_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGS_Melee_OnLodgeHitCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGS_Melee_OnLodgeHitCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGS_Melee, nullptr, "OnLodgeHitCallback", nullptr, nullptr, Z_Construct_UFunction_UGS_Melee_OnLodgeHitCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGS_Melee_OnLodgeHitCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGS_Melee_OnLodgeHitCallback_Statics::GS_Melee_eventOnLodgeHitCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGS_Melee_OnLodgeHitCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGS_Melee_OnLodgeHitCallback_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGS_Melee_OnLodgeHitCallback_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGS_Melee_OnLodgeHitCallback_Statics::GS_Melee_eventOnLodgeHitCallback_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGS_Melee_OnLodgeHitCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGS_Melee_OnLodgeHitCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGS_Melee_SetIsLodged_Statics
	{
		struct GS_Melee_eventSetIsLodged_Parms
		{
			bool IsLodged;
			UPrimitiveComponent* LodgeComponent;
		};
		static void NewProp_IsLodged_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsLodged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LodgeComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LodgeComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGS_Melee_SetIsLodged_Statics::NewProp_IsLodged_SetBit(void* Obj)
	{
		((GS_Melee_eventSetIsLodged_Parms*)Obj)->IsLodged = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGS_Melee_SetIsLodged_Statics::NewProp_IsLodged = { "IsLodged", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GS_Melee_eventSetIsLodged_Parms), &Z_Construct_UFunction_UGS_Melee_SetIsLodged_Statics::NewProp_IsLodged_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGS_Melee_SetIsLodged_Statics::NewProp_LodgeComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGS_Melee_SetIsLodged_Statics::NewProp_LodgeComponent = { "LodgeComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GS_Melee_eventSetIsLodged_Parms, LodgeComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGS_Melee_SetIsLodged_Statics::NewProp_LodgeComponent_MetaData), Z_Construct_UFunction_UGS_Melee_SetIsLodged_Statics::NewProp_LodgeComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGS_Melee_SetIsLodged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGS_Melee_SetIsLodged_Statics::NewProp_IsLodged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGS_Melee_SetIsLodged_Statics::NewProp_LodgeComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGS_Melee_SetIsLodged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon Settings" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGS_Melee_SetIsLodged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGS_Melee, nullptr, "SetIsLodged", nullptr, nullptr, Z_Construct_UFunction_UGS_Melee_SetIsLodged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGS_Melee_SetIsLodged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGS_Melee_SetIsLodged_Statics::GS_Melee_eventSetIsLodged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGS_Melee_SetIsLodged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGS_Melee_SetIsLodged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGS_Melee_SetIsLodged_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGS_Melee_SetIsLodged_Statics::GS_Melee_eventSetIsLodged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGS_Melee_SetIsLodged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGS_Melee_SetIsLodged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGS_Melee_SetPrimaryAndSecondaryHands_Statics
	{
		struct GS_Melee_eventSetPrimaryAndSecondaryHands_Parms
		{
			FBPGripPair PrimaryGrip;
			FBPGripPair SecondaryGrip;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryGrip;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SecondaryGrip;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGS_Melee_SetPrimaryAndSecondaryHands_Statics::NewProp_PrimaryGrip = { "PrimaryGrip", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GS_Melee_eventSetPrimaryAndSecondaryHands_Parms, PrimaryGrip), Z_Construct_UScriptStruct_FBPGripPair, METADATA_PARAMS(0, nullptr) }; // 1566849434
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGS_Melee_SetPrimaryAndSecondaryHands_Statics::NewProp_SecondaryGrip = { "SecondaryGrip", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GS_Melee_eventSetPrimaryAndSecondaryHands_Parms, SecondaryGrip), Z_Construct_UScriptStruct_FBPGripPair, METADATA_PARAMS(0, nullptr) }; // 1566849434
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGS_Melee_SetPrimaryAndSecondaryHands_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGS_Melee_SetPrimaryAndSecondaryHands_Statics::NewProp_PrimaryGrip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGS_Melee_SetPrimaryAndSecondaryHands_Statics::NewProp_SecondaryGrip,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGS_Melee_SetPrimaryAndSecondaryHands_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon Settings" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGS_Melee_SetPrimaryAndSecondaryHands_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGS_Melee, nullptr, "SetPrimaryAndSecondaryHands", nullptr, nullptr, Z_Construct_UFunction_UGS_Melee_SetPrimaryAndSecondaryHands_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGS_Melee_SetPrimaryAndSecondaryHands_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGS_Melee_SetPrimaryAndSecondaryHands_Statics::GS_Melee_eventSetPrimaryAndSecondaryHands_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGS_Melee_SetPrimaryAndSecondaryHands_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGS_Melee_SetPrimaryAndSecondaryHands_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGS_Melee_SetPrimaryAndSecondaryHands_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGS_Melee_SetPrimaryAndSecondaryHands_Statics::GS_Melee_eventSetPrimaryAndSecondaryHands_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGS_Melee_SetPrimaryAndSecondaryHands()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGS_Melee_SetPrimaryAndSecondaryHands_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGS_Melee_UpdateHandPosition_Statics
	{
		struct GS_Melee_eventUpdateHandPosition_Parms
		{
			FBPGripPair HandPair;
			FVector HandWorldPosition;
			FVector LocDifference;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_HandPair;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HandWorldPosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocDifference;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGS_Melee_UpdateHandPosition_Statics::NewProp_HandPair = { "HandPair", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GS_Melee_eventUpdateHandPosition_Parms, HandPair), Z_Construct_UScriptStruct_FBPGripPair, METADATA_PARAMS(0, nullptr) }; // 1566849434
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGS_Melee_UpdateHandPosition_Statics::NewProp_HandWorldPosition = { "HandWorldPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GS_Melee_eventUpdateHandPosition_Parms, HandWorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGS_Melee_UpdateHandPosition_Statics::NewProp_LocDifference = { "LocDifference", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GS_Melee_eventUpdateHandPosition_Parms, LocDifference), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGS_Melee_UpdateHandPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGS_Melee_UpdateHandPosition_Statics::NewProp_HandPair,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGS_Melee_UpdateHandPosition_Statics::NewProp_HandWorldPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGS_Melee_UpdateHandPosition_Statics::NewProp_LocDifference,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGS_Melee_UpdateHandPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// UpdateHand location on the shaft in the X axis\n// If primary hand is false then it will do the secondary hand\n// World location is of the pivot generally, I have it passing in so people can snap\n// LocDifference returns the relative distance of the change in position (or zero if there was none).\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UpdateHand location on the shaft in the X axis\nIf primary hand is false then it will do the secondary hand\nWorld location is of the pivot generally, I have it passing in so people can snap\nLocDifference returns the relative distance of the change in position (or zero if there was none)." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGS_Melee_UpdateHandPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGS_Melee, nullptr, "UpdateHandPosition", nullptr, nullptr, Z_Construct_UFunction_UGS_Melee_UpdateHandPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGS_Melee_UpdateHandPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGS_Melee_UpdateHandPosition_Statics::GS_Melee_eventUpdateHandPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGS_Melee_UpdateHandPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGS_Melee_UpdateHandPosition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGS_Melee_UpdateHandPosition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGS_Melee_UpdateHandPosition_Statics::GS_Melee_eventUpdateHandPosition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGS_Melee_UpdateHandPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGS_Melee_UpdateHandPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGS_Melee_UpdateHandPositionAndRotation_Statics
	{
		struct GS_Melee_eventUpdateHandPositionAndRotation_Parms
		{
			FBPGripPair HandPair;
			FTransform HandWorldTransform;
			FVector LocDifference;
			float RotDifference;
			bool bUpdateLocation;
			bool bUpdateRotation;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_HandPair;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HandWorldTransform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocDifference;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotDifference;
		static void NewProp_bUpdateLocation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateLocation;
		static void NewProp_bUpdateRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGS_Melee_UpdateHandPositionAndRotation_Statics::NewProp_HandPair = { "HandPair", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GS_Melee_eventUpdateHandPositionAndRotation_Parms, HandPair), Z_Construct_UScriptStruct_FBPGripPair, METADATA_PARAMS(0, nullptr) }; // 1566849434
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGS_Melee_UpdateHandPositionAndRotation_Statics::NewProp_HandWorldTransform = { "HandWorldTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GS_Melee_eventUpdateHandPositionAndRotation_Parms, HandWorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGS_Melee_UpdateHandPositionAndRotation_Statics::NewProp_LocDifference = { "LocDifference", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GS_Melee_eventUpdateHandPositionAndRotation_Parms, LocDifference), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGS_Melee_UpdateHandPositionAndRotation_Statics::NewProp_RotDifference = { "RotDifference", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GS_Melee_eventUpdateHandPositionAndRotation_Parms, RotDifference), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGS_Melee_UpdateHandPositionAndRotation_Statics::NewProp_bUpdateLocation_SetBit(void* Obj)
	{
		((GS_Melee_eventUpdateHandPositionAndRotation_Parms*)Obj)->bUpdateLocation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGS_Melee_UpdateHandPositionAndRotation_Statics::NewProp_bUpdateLocation = { "bUpdateLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GS_Melee_eventUpdateHandPositionAndRotation_Parms), &Z_Construct_UFunction_UGS_Melee_UpdateHandPositionAndRotation_Statics::NewProp_bUpdateLocation_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGS_Melee_UpdateHandPositionAndRotation_Statics::NewProp_bUpdateRotation_SetBit(void* Obj)
	{
		((GS_Melee_eventUpdateHandPositionAndRotation_Parms*)Obj)->bUpdateRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGS_Melee_UpdateHandPositionAndRotation_Statics::NewProp_bUpdateRotation = { "bUpdateRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GS_Melee_eventUpdateHandPositionAndRotation_Parms), &Z_Construct_UFunction_UGS_Melee_UpdateHandPositionAndRotation_Statics::NewProp_bUpdateRotation_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGS_Melee_UpdateHandPositionAndRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGS_Melee_UpdateHandPositionAndRotation_Statics::NewProp_HandPair,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGS_Melee_UpdateHandPositionAndRotation_Statics::NewProp_HandWorldTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGS_Melee_UpdateHandPositionAndRotation_Statics::NewProp_LocDifference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGS_Melee_UpdateHandPositionAndRotation_Statics::NewProp_RotDifference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGS_Melee_UpdateHandPositionAndRotation_Statics::NewProp_bUpdateLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGS_Melee_UpdateHandPositionAndRotation_Statics::NewProp_bUpdateRotation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGS_Melee_UpdateHandPositionAndRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// UpdateHand location and rotation on the shaft in the X axis\n// If primary hand is false then it will do the secondary hand\n// World location is of the pivot generally, I have it passing in so people can snap\n// LocDifference returns the relative distance of the change in position (or zero if there was none).\n" },
#endif
		{ "CPP_Default_bUpdateLocation", "true" },
		{ "CPP_Default_bUpdateRotation", "true" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UpdateHand location and rotation on the shaft in the X axis\nIf primary hand is false then it will do the secondary hand\nWorld location is of the pivot generally, I have it passing in so people can snap\nLocDifference returns the relative distance of the change in position (or zero if there was none)." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGS_Melee_UpdateHandPositionAndRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGS_Melee, nullptr, "UpdateHandPositionAndRotation", nullptr, nullptr, Z_Construct_UFunction_UGS_Melee_UpdateHandPositionAndRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGS_Melee_UpdateHandPositionAndRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGS_Melee_UpdateHandPositionAndRotation_Statics::GS_Melee_eventUpdateHandPositionAndRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGS_Melee_UpdateHandPositionAndRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGS_Melee_UpdateHandPositionAndRotation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGS_Melee_UpdateHandPositionAndRotation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGS_Melee_UpdateHandPositionAndRotation_Statics::GS_Melee_eventUpdateHandPositionAndRotation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGS_Melee_UpdateHandPositionAndRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGS_Melee_UpdateHandPositionAndRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGS_Melee);
	UClass* Z_Construct_UClass_UGS_Melee_NoRegister()
	{
		return UGS_Melee::StaticClass();
	}
	struct Z_Construct_UClass_UGS_Melee_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnShouldLodgeInObject_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnShouldLodgeInObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMeleeHit_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMeleeHit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMeleeInvalidHit_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMeleeInvalidHit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysTickPenetration_MetaData[];
#endif
		static void NewProp_bAlwaysTickPenetration_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysTickPenetration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyPenetrateWithTwoHands_MetaData[];
#endif
		static void NewProp_bOnlyPenetrateWithTwoHands_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyPenetrateWithTwoHands;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OverrideMeleeSurfaceSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideMeleeSurfaceSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OverrideMeleeSurfaceSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponRootOrientationComponent_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_WeaponRootOrientationComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PenetrationNotifierComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PenetrationNotifierComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PenetrationNotifierComponents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoSetPrimaryAndSecondaryHands_MetaData[];
#endif
		static void NewProp_bAutoSetPrimaryAndSecondaryHands_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoSetPrimaryAndSecondaryHands;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PrimaryHandSelectionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryHandSelectionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PrimaryHandSelectionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryHand_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryHand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryHand_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SecondaryHand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUsePrimaryHandSettingsWithOneHand_MetaData[];
#endif
		static void NewProp_bUsePrimaryHandSettingsWithOneHand_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePrimaryHandSettingsWithOneHand;
		static const UECodeGen_Private::FBytePropertyParams NewProp_COMType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_COMType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_COMType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryHandPhysicsSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryHandPhysicsSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryHandPhysicsSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SecondaryHandPhysicsSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGS_Melee_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGS_Default,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_Melee_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGS_Melee_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGS_Melee_OnLodgeHitCallback, "OnLodgeHitCallback" }, // 2471879472
		{ &Z_Construct_UFunction_UGS_Melee_SetIsLodged, "SetIsLodged" }, // 3637512862
		{ &Z_Construct_UFunction_UGS_Melee_SetPrimaryAndSecondaryHands, "SetPrimaryAndSecondaryHands" }, // 2000528851
		{ &Z_Construct_UFunction_UGS_Melee_UpdateHandPosition, "UpdateHandPosition" }, // 1501951086
		{ &Z_Construct_UFunction_UGS_Melee_UpdateHandPositionAndRotation, "UpdateHandPositionAndRotation" }, // 1699834966
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_Melee_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_Melee_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "VRExpansionPlugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* A Melee grip script that hands multi hand interactions and penetration notifications*\n* The per surface damage and penetration options have been moved to the project settings unless the per script override is set\n*/" },
#endif
		{ "HideCategories", "TickSettings DefaultSettings" },
		{ "IncludePath", "GripScripts/GS_Melee.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A Melee grip script that hands multi hand interactions and penetration notifications*\nThe per surface damage and penetration options have been moved to the project settings unless the per script override is set" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_Melee_Statics::NewProp_OnShouldLodgeInObject_MetaData[] = {
		{ "Category", "Melee|Lodging" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Thrown if we should lodge into a hit object\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Thrown if we should lodge into a hit object" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGS_Melee_Statics::NewProp_OnShouldLodgeInObject = { "OnShouldLodgeInObject", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGS_Melee, OnShouldLodgeInObject), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_Melee_Statics::NewProp_OnShouldLodgeInObject_MetaData), Z_Construct_UClass_UGS_Melee_Statics::NewProp_OnShouldLodgeInObject_MetaData) }; // 1860864622
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_Melee_Statics::NewProp_OnMeleeHit_MetaData[] = {
		{ "Category", "Melee|Hit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Thrown if we hit something we can damage\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Thrown if we hit something we can damage" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGS_Melee_Statics::NewProp_OnMeleeHit = { "OnMeleeHit", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGS_Melee, OnMeleeHit), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_Melee_Statics::NewProp_OnMeleeHit_MetaData), Z_Construct_UClass_UGS_Melee_Statics::NewProp_OnMeleeHit_MetaData) }; // 2667854480
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_Melee_Statics::NewProp_OnMeleeInvalidHit_MetaData[] = {
		{ "Category", "Melee|Hit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Fired when a hit is invalid (hit something that isn't flagged for damage or stabbing or was below the damage or stab threshold)\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fired when a hit is invalid (hit something that isn't flagged for damage or stabbing or was below the damage or stab threshold)" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGS_Melee_Statics::NewProp_OnMeleeInvalidHit = { "OnMeleeInvalidHit", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGS_Melee, OnMeleeInvalidHit), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeInvalidHitSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_Melee_Statics::NewProp_OnMeleeInvalidHit_MetaData), Z_Construct_UClass_UGS_Melee_Statics::NewProp_OnMeleeInvalidHit_MetaData) }; // 2789307252
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_Melee_Statics::NewProp_bAlwaysTickPenetration_MetaData[] = {
		{ "Category", "Melee|Lodging" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Always tick for penetration\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Always tick for penetration" },
#endif
	};
#endif
	void Z_Construct_UClass_UGS_Melee_Statics::NewProp_bAlwaysTickPenetration_SetBit(void* Obj)
	{
		((UGS_Melee*)Obj)->bAlwaysTickPenetration = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGS_Melee_Statics::NewProp_bAlwaysTickPenetration = { "bAlwaysTickPenetration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGS_Melee), &Z_Construct_UClass_UGS_Melee_Statics::NewProp_bAlwaysTickPenetration_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_Melee_Statics::NewProp_bAlwaysTickPenetration_MetaData), Z_Construct_UClass_UGS_Melee_Statics::NewProp_bAlwaysTickPenetration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_Melee_Statics::NewProp_bOnlyPenetrateWithTwoHands_MetaData[] = {
		{ "Category", "Melee|Lodging" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Only penetrate with two hands on the weapon\n// Mostly for very large weapons\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Only penetrate with two hands on the weapon\nMostly for very large weapons" },
#endif
	};
#endif
	void Z_Construct_UClass_UGS_Melee_Statics::NewProp_bOnlyPenetrateWithTwoHands_SetBit(void* Obj)
	{
		((UGS_Melee*)Obj)->bOnlyPenetrateWithTwoHands = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGS_Melee_Statics::NewProp_bOnlyPenetrateWithTwoHands = { "bOnlyPenetrateWithTwoHands", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGS_Melee), &Z_Construct_UClass_UGS_Melee_Statics::NewProp_bOnlyPenetrateWithTwoHands_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_Melee_Statics::NewProp_bOnlyPenetrateWithTwoHands_MetaData), Z_Construct_UClass_UGS_Melee_Statics::NewProp_bOnlyPenetrateWithTwoHands_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGS_Melee_Statics::NewProp_OverrideMeleeSurfaceSettings_Inner = { "OverrideMeleeSurfaceSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBPHitSurfaceProperties, METADATA_PARAMS(0, nullptr) }; // 2541670484
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_Melee_Statics::NewProp_OverrideMeleeSurfaceSettings_MetaData[] = {
		{ "Category", "Melee|Lodging" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A list of surface types that allow penetration and their properties\n// If empty then the script will use the global settings, if filled with anything then it will override the global settings\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A list of surface types that allow penetration and their properties\nIf empty then the script will use the global settings, if filled with anything then it will override the global settings" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGS_Melee_Statics::NewProp_OverrideMeleeSurfaceSettings = { "OverrideMeleeSurfaceSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGS_Melee, OverrideMeleeSurfaceSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_Melee_Statics::NewProp_OverrideMeleeSurfaceSettings_MetaData), Z_Construct_UClass_UGS_Melee_Statics::NewProp_OverrideMeleeSurfaceSettings_MetaData) }; // 2541670484
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_Melee_Statics::NewProp_WeaponRootOrientationComponent_MetaData[] = {
		{ "Category", "Weapon Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The name of the component that is used to orient the weapon along its primary axis\n// If it does not exist then the weapon is assumed to be X+ facing.\n// Also used to perform some calculations, make sure it is parented to the gripped object (root component for actors).\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the component that is used to orient the weapon along its primary axis\nIf it does not exist then the weapon is assumed to be X+ facing.\nAlso used to perform some calculations, make sure it is parented to the gripped object (root component for actors)." },
#endif
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGS_Melee_Statics::NewProp_WeaponRootOrientationComponent = { "WeaponRootOrientationComponent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGS_Melee, WeaponRootOrientationComponent), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_Melee_Statics::NewProp_WeaponRootOrientationComponent_MetaData), Z_Construct_UClass_UGS_Melee_Statics::NewProp_WeaponRootOrientationComponent_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGS_Melee_Statics::NewProp_PenetrationNotifierComponents_Inner = { "PenetrationNotifierComponents", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBPLodgeComponentInfo, METADATA_PARAMS(0, nullptr) }; // 1220180553
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_Melee_Statics::NewProp_PenetrationNotifierComponents_MetaData[] = {
		{ "Category", "Weapon Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is a built list of components that act as penetration notifiers, they will have their OnHit bound too and we will handle penetration logic\n// off of it.\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a built list of components that act as penetration notifiers, they will have their OnHit bound too and we will handle penetration logic\noff of it." },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGS_Melee_Statics::NewProp_PenetrationNotifierComponents = { "PenetrationNotifierComponents", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGS_Melee, PenetrationNotifierComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_Melee_Statics::NewProp_PenetrationNotifierComponents_MetaData), Z_Construct_UClass_UGS_Melee_Statics::NewProp_PenetrationNotifierComponents_MetaData) }; // 1220180553
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_Melee_Statics::NewProp_bAutoSetPrimaryAndSecondaryHands_MetaData[] = {
		{ "Category", "Weapon Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// When true, will auto set the primary and secondary hands by the WeaponRootOrientationComponents X Axis distance.\n// Smallest value along the X Axis will be considered the primary hand.\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When true, will auto set the primary and secondary hands by the WeaponRootOrientationComponents X Axis distance.\nSmallest value along the X Axis will be considered the primary hand." },
#endif
	};
#endif
	void Z_Construct_UClass_UGS_Melee_Statics::NewProp_bAutoSetPrimaryAndSecondaryHands_SetBit(void* Obj)
	{
		((UGS_Melee*)Obj)->bAutoSetPrimaryAndSecondaryHands = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGS_Melee_Statics::NewProp_bAutoSetPrimaryAndSecondaryHands = { "bAutoSetPrimaryAndSecondaryHands", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGS_Melee), &Z_Construct_UClass_UGS_Melee_Statics::NewProp_bAutoSetPrimaryAndSecondaryHands_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_Melee_Statics::NewProp_bAutoSetPrimaryAndSecondaryHands_MetaData), Z_Construct_UClass_UGS_Melee_Statics::NewProp_bAutoSetPrimaryAndSecondaryHands_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGS_Melee_Statics::NewProp_PrimaryHandSelectionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_Melee_Statics::NewProp_PrimaryHandSelectionType_MetaData[] = {
		{ "Category", "Weapon Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Which method of primary hand to select\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Which method of primary hand to select" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGS_Melee_Statics::NewProp_PrimaryHandSelectionType = { "PrimaryHandSelectionType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGS_Melee, PrimaryHandSelectionType), Z_Construct_UEnum_VRExpansionPlugin_EVRMeleePrimaryHandType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_Melee_Statics::NewProp_PrimaryHandSelectionType_MetaData), Z_Construct_UClass_UGS_Melee_Statics::NewProp_PrimaryHandSelectionType_MetaData) }; // 3955906939
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_Melee_Statics::NewProp_PrimaryHand_MetaData[] = {
		{ "Category", "Weapon Settings" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGS_Melee_Statics::NewProp_PrimaryHand = { "PrimaryHand", nullptr, (EPropertyFlags)0x0010008000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGS_Melee, PrimaryHand), Z_Construct_UScriptStruct_FBPGripPair, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_Melee_Statics::NewProp_PrimaryHand_MetaData), Z_Construct_UClass_UGS_Melee_Statics::NewProp_PrimaryHand_MetaData) }; // 1566849434
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_Melee_Statics::NewProp_SecondaryHand_MetaData[] = {
		{ "Category", "Weapon Settings" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGS_Melee_Statics::NewProp_SecondaryHand = { "SecondaryHand", nullptr, (EPropertyFlags)0x0010008000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGS_Melee, SecondaryHand), Z_Construct_UScriptStruct_FBPGripPair, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_Melee_Statics::NewProp_SecondaryHand_MetaData), Z_Construct_UClass_UGS_Melee_Statics::NewProp_SecondaryHand_MetaData) }; // 1566849434
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_Melee_Statics::NewProp_bUsePrimaryHandSettingsWithOneHand_MetaData[] = {
		{ "Category", "Weapon Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true we will use the primary hands grip settings when we only have one hand gripping instead of the objects VRGripInterfaces settings\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true we will use the primary hands grip settings when we only have one hand gripping instead of the objects VRGripInterfaces settings" },
#endif
	};
#endif
	void Z_Construct_UClass_UGS_Melee_Statics::NewProp_bUsePrimaryHandSettingsWithOneHand_SetBit(void* Obj)
	{
		((UGS_Melee*)Obj)->bUsePrimaryHandSettingsWithOneHand = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGS_Melee_Statics::NewProp_bUsePrimaryHandSettingsWithOneHand = { "bUsePrimaryHandSettingsWithOneHand", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGS_Melee), &Z_Construct_UClass_UGS_Melee_Statics::NewProp_bUsePrimaryHandSettingsWithOneHand_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_Melee_Statics::NewProp_bUsePrimaryHandSettingsWithOneHand_MetaData), Z_Construct_UClass_UGS_Melee_Statics::NewProp_bUsePrimaryHandSettingsWithOneHand_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGS_Melee_Statics::NewProp_COMType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_Melee_Statics::NewProp_COMType_MetaData[] = {
		{ "Category", "Weapon Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// To select the type of com setting to use\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "To select the type of com setting to use" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGS_Melee_Statics::NewProp_COMType = { "COMType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGS_Melee, COMType), Z_Construct_UEnum_VRExpansionPlugin_EVRMeleeComType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_Melee_Statics::NewProp_COMType_MetaData), Z_Construct_UClass_UGS_Melee_Statics::NewProp_COMType_MetaData) }; // 3418583513
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_Melee_Statics::NewProp_PrimaryHandPhysicsSettings_MetaData[] = {
		{ "Category", "Weapon Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Grip settings to use on the primary hand when multiple grips are active\n// Falls back to the standard grip settings when only one grip is active\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Grip settings to use on the primary hand when multiple grips are active\nFalls back to the standard grip settings when only one grip is active" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGS_Melee_Statics::NewProp_PrimaryHandPhysicsSettings = { "PrimaryHandPhysicsSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGS_Melee, PrimaryHandPhysicsSettings), Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_Melee_Statics::NewProp_PrimaryHandPhysicsSettings_MetaData), Z_Construct_UClass_UGS_Melee_Statics::NewProp_PrimaryHandPhysicsSettings_MetaData) }; // 2973955314
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_Melee_Statics::NewProp_SecondaryHandPhysicsSettings_MetaData[] = {
		{ "Category", "Weapon Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Grip settings to use on the secondary hand when multiple grips are active\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Grip settings to use on the secondary hand when multiple grips are active" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGS_Melee_Statics::NewProp_SecondaryHandPhysicsSettings = { "SecondaryHandPhysicsSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGS_Melee, SecondaryHandPhysicsSettings), Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_Melee_Statics::NewProp_SecondaryHandPhysicsSettings_MetaData), Z_Construct_UClass_UGS_Melee_Statics::NewProp_SecondaryHandPhysicsSettings_MetaData) }; // 2973955314
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGS_Melee_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_Melee_Statics::NewProp_OnShouldLodgeInObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_Melee_Statics::NewProp_OnMeleeHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_Melee_Statics::NewProp_OnMeleeInvalidHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_Melee_Statics::NewProp_bAlwaysTickPenetration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_Melee_Statics::NewProp_bOnlyPenetrateWithTwoHands,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_Melee_Statics::NewProp_OverrideMeleeSurfaceSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_Melee_Statics::NewProp_OverrideMeleeSurfaceSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_Melee_Statics::NewProp_WeaponRootOrientationComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_Melee_Statics::NewProp_PenetrationNotifierComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_Melee_Statics::NewProp_PenetrationNotifierComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_Melee_Statics::NewProp_bAutoSetPrimaryAndSecondaryHands,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_Melee_Statics::NewProp_PrimaryHandSelectionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_Melee_Statics::NewProp_PrimaryHandSelectionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_Melee_Statics::NewProp_PrimaryHand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_Melee_Statics::NewProp_SecondaryHand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_Melee_Statics::NewProp_bUsePrimaryHandSettingsWithOneHand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_Melee_Statics::NewProp_COMType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_Melee_Statics::NewProp_COMType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_Melee_Statics::NewProp_PrimaryHandPhysicsSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_Melee_Statics::NewProp_SecondaryHandPhysicsSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGS_Melee_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGS_Melee>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGS_Melee_Statics::ClassParams = {
		&UGS_Melee::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGS_Melee_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGS_Melee_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_Melee_Statics::Class_MetaDataParams), Z_Construct_UClass_UGS_Melee_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_Melee_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGS_Melee()
	{
		if (!Z_Registration_Info_UClass_UGS_Melee.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGS_Melee.OuterSingleton, Z_Construct_UClass_UGS_Melee_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGS_Melee.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UGS_Melee>()
	{
		return UGS_Melee::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGS_Melee);
	UGS_Melee::~UGS_Melee() {}
	struct Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_Statics::EnumInfo[] = {
		{ EVRMeleeZoneType_StaticEnum, TEXT("EVRMeleeZoneType"), &Z_Registration_Info_UEnum_EVRMeleeZoneType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1388201271U) },
		{ EVRMeleeComType_StaticEnum, TEXT("EVRMeleeComType"), &Z_Registration_Info_UEnum_EVRMeleeComType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3418583513U) },
		{ EVRMeleePrimaryHandType_StaticEnum, TEXT("EVRMeleePrimaryHandType"), &Z_Registration_Info_UEnum_EVRMeleePrimaryHandType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3955906939U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_Statics::ScriptStructInfo[] = {
		{ FBPHitSurfaceProperties::StaticStruct, Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::NewStructOps, TEXT("BPHitSurfaceProperties"), &Z_Registration_Info_UScriptStruct_BPHitSurfaceProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBPHitSurfaceProperties), 2541670484U) },
		{ FBPLodgeComponentInfo::StaticStruct, Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewStructOps, TEXT("BPLodgeComponentInfo"), &Z_Registration_Info_UScriptStruct_BPLodgeComponentInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBPLodgeComponentInfo), 1220180553U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGS_Melee, UGS_Melee::StaticClass, TEXT("UGS_Melee"), &Z_Registration_Info_UClass_UGS_Melee, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGS_Melee), 1734808429U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_4220940591(TEXT("/Script/VRExpansionPlugin"),
		Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
