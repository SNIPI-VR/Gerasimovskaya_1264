// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Interactibles/VRButtonComponent.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
#include "VRExpansionPlugin/Public/VRBPDatatypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRButtonComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRButtonComponent();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRButtonComponent_NoRegister();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRButtonType();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleAxis();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRStateChangeAuthorityType();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStartedInteractionSignature__DelegateSignature();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStateChangedSignature__DelegateSignature();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTransform_NetQuantize();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVRButtonType;
	static UEnum* EVRButtonType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVRButtonType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVRButtonType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRButtonType, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRButtonType"));
		}
		return Z_Registration_Info_UEnum_EVRButtonType.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRButtonType>()
	{
		return EVRButtonType_StaticEnum();
	}
	struct Z_Construct_UEnum_VRExpansionPlugin_EVRButtonType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VRExpansionPlugin_EVRButtonType_Statics::Enumerators[] = {
		{ "EVRButtonType::Btn_Press", (int64)EVRButtonType::Btn_Press },
		{ "EVRButtonType::Btn_Toggle_Return", (int64)EVRButtonType::Btn_Toggle_Return },
		{ "EVRButtonType::Btn_Toggle_Stay", (int64)EVRButtonType::Btn_Toggle_Stay },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VRExpansionPlugin_EVRButtonType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Btn_Press.Name", "EVRButtonType::Btn_Press" },
		{ "Btn_Toggle_Return.Name", "EVRButtonType::Btn_Toggle_Return" },
		{ "Btn_Toggle_Stay.Name", "EVRButtonType::Btn_Toggle_Stay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n*\n*/// VR Button Types\n" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "// VR Button Types" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VRExpansionPlugin_EVRButtonType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		"EVRButtonType",
		"EVRButtonType",
		Z_Construct_UEnum_VRExpansionPlugin_EVRButtonType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRButtonType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRButtonType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VRExpansionPlugin_EVRButtonType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRButtonType()
	{
		if (!Z_Registration_Info_UEnum_EVRButtonType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVRButtonType.InnerSingleton, Z_Construct_UEnum_VRExpansionPlugin_EVRButtonType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVRButtonType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVRStateChangeAuthorityType;
	static UEnum* EVRStateChangeAuthorityType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVRStateChangeAuthorityType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVRStateChangeAuthorityType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRStateChangeAuthorityType, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRStateChangeAuthorityType"));
		}
		return Z_Registration_Info_UEnum_EVRStateChangeAuthorityType.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRStateChangeAuthorityType>()
	{
		return EVRStateChangeAuthorityType_StaticEnum();
	}
	struct Z_Construct_UEnum_VRExpansionPlugin_EVRStateChangeAuthorityType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VRExpansionPlugin_EVRStateChangeAuthorityType_Statics::Enumerators[] = {
		{ "EVRStateChangeAuthorityType::CanChangeState_All", (int64)EVRStateChangeAuthorityType::CanChangeState_All },
		{ "EVRStateChangeAuthorityType::CanChangeState_Server", (int64)EVRStateChangeAuthorityType::CanChangeState_Server },
		{ "EVRStateChangeAuthorityType::CanChangeState_Owner", (int64)EVRStateChangeAuthorityType::CanChangeState_Owner },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VRExpansionPlugin_EVRStateChangeAuthorityType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CanChangeState_All.Comment", "/* Button state can be changed on all connections */" },
		{ "CanChangeState_All.Name", "EVRStateChangeAuthorityType::CanChangeState_All" },
		{ "CanChangeState_All.ToolTip", "Button state can be changed on all connections" },
		{ "CanChangeState_Owner.Comment", "/* Button state can be changed only on the owner of the interacting primitive */" },
		{ "CanChangeState_Owner.Name", "EVRStateChangeAuthorityType::CanChangeState_Owner" },
		{ "CanChangeState_Owner.ToolTip", "Button state can be changed only on the owner of the interacting primitive" },
		{ "CanChangeState_Server.Comment", "/* Button state can be changed only on the server */" },
		{ "CanChangeState_Server.Name", "EVRStateChangeAuthorityType::CanChangeState_Server" },
		{ "CanChangeState_Server.ToolTip", "Button state can be changed only on the server" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// VR Button SyncOptions\n" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "VR Button SyncOptions" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VRExpansionPlugin_EVRStateChangeAuthorityType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		"EVRStateChangeAuthorityType",
		"EVRStateChangeAuthorityType",
		Z_Construct_UEnum_VRExpansionPlugin_EVRStateChangeAuthorityType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRStateChangeAuthorityType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRStateChangeAuthorityType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VRExpansionPlugin_EVRStateChangeAuthorityType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRStateChangeAuthorityType()
	{
		if (!Z_Registration_Info_UEnum_EVRStateChangeAuthorityType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVRStateChangeAuthorityType.InnerSingleton, Z_Construct_UEnum_VRExpansionPlugin_EVRStateChangeAuthorityType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVRStateChangeAuthorityType.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStateChangedSignature__DelegateSignature_Statics
	{
		struct _Script_VRExpansionPlugin_eventVRButtonStateChangedSignature_Parms
		{
			bool ButtonState;
			AActor* InteractingActor;
			UPrimitiveComponent* InteractingComponent;
		};
		static void NewProp_ButtonState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ButtonState;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractingActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractingComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractingComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStateChangedSignature__DelegateSignature_Statics::NewProp_ButtonState_SetBit(void* Obj)
	{
		((_Script_VRExpansionPlugin_eventVRButtonStateChangedSignature_Parms*)Obj)->ButtonState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStateChangedSignature__DelegateSignature_Statics::NewProp_ButtonState = { "ButtonState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_VRExpansionPlugin_eventVRButtonStateChangedSignature_Parms), &Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStateChangedSignature__DelegateSignature_Statics::NewProp_ButtonState_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStateChangedSignature__DelegateSignature_Statics::NewProp_InteractingActor = { "InteractingActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVRButtonStateChangedSignature_Parms, InteractingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStateChangedSignature__DelegateSignature_Statics::NewProp_InteractingComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStateChangedSignature__DelegateSignature_Statics::NewProp_InteractingComponent = { "InteractingComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVRButtonStateChangedSignature_Parms, InteractingComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStateChangedSignature__DelegateSignature_Statics::NewProp_InteractingComponent_MetaData), Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStateChangedSignature__DelegateSignature_Statics::NewProp_InteractingComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStateChangedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStateChangedSignature__DelegateSignature_Statics::NewProp_ButtonState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStateChangedSignature__DelegateSignature_Statics::NewProp_InteractingActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStateChangedSignature__DelegateSignature_Statics::NewProp_InteractingComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStateChangedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Delegate for notification when the button state changes. */" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate for notification when the button state changes." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStateChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin, nullptr, "VRButtonStateChangedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStateChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStateChangedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStateChangedSignature__DelegateSignature_Statics::_Script_VRExpansionPlugin_eventVRButtonStateChangedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStateChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStateChangedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStateChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStateChangedSignature__DelegateSignature_Statics::_Script_VRExpansionPlugin_eventVRButtonStateChangedSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStateChangedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStateChangedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FVRButtonStateChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& VRButtonStateChangedSignature, bool ButtonState, AActor* InteractingActor, UPrimitiveComponent* InteractingComponent)
{
	struct _Script_VRExpansionPlugin_eventVRButtonStateChangedSignature_Parms
	{
		bool ButtonState;
		AActor* InteractingActor;
		UPrimitiveComponent* InteractingComponent;
	};
	_Script_VRExpansionPlugin_eventVRButtonStateChangedSignature_Parms Parms;
	Parms.ButtonState=ButtonState ? true : false;
	Parms.InteractingActor=InteractingActor;
	Parms.InteractingComponent=InteractingComponent;
	VRButtonStateChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStartedInteractionSignature__DelegateSignature_Statics
	{
		struct _Script_VRExpansionPlugin_eventVRButtonStartedInteractionSignature_Parms
		{
			AActor* InteractingActor;
			UPrimitiveComponent* InteractingComponent;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractingActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractingComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractingComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStartedInteractionSignature__DelegateSignature_Statics::NewProp_InteractingActor = { "InteractingActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVRButtonStartedInteractionSignature_Parms, InteractingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStartedInteractionSignature__DelegateSignature_Statics::NewProp_InteractingComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStartedInteractionSignature__DelegateSignature_Statics::NewProp_InteractingComponent = { "InteractingComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVRButtonStartedInteractionSignature_Parms, InteractingComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStartedInteractionSignature__DelegateSignature_Statics::NewProp_InteractingComponent_MetaData), Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStartedInteractionSignature__DelegateSignature_Statics::NewProp_InteractingComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStartedInteractionSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStartedInteractionSignature__DelegateSignature_Statics::NewProp_InteractingActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStartedInteractionSignature__DelegateSignature_Statics::NewProp_InteractingComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStartedInteractionSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Delegate for notification when the begins a new interaction. */" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate for notification when the begins a new interaction." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStartedInteractionSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin, nullptr, "VRButtonStartedInteractionSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStartedInteractionSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStartedInteractionSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStartedInteractionSignature__DelegateSignature_Statics::_Script_VRExpansionPlugin_eventVRButtonStartedInteractionSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStartedInteractionSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStartedInteractionSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStartedInteractionSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStartedInteractionSignature__DelegateSignature_Statics::_Script_VRExpansionPlugin_eventVRButtonStartedInteractionSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStartedInteractionSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStartedInteractionSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FVRButtonStartedInteractionSignature_DelegateWrapper(const FMulticastScriptDelegate& VRButtonStartedInteractionSignature, AActor* InteractingActor, UPrimitiveComponent* InteractingComponent)
{
	struct _Script_VRExpansionPlugin_eventVRButtonStartedInteractionSignature_Parms
	{
		AActor* InteractingActor;
		UPrimitiveComponent* InteractingComponent;
	};
	_Script_VRExpansionPlugin_eventVRButtonStartedInteractionSignature_Parms Parms;
	Parms.InteractingActor=InteractingActor;
	Parms.InteractingComponent=InteractingComponent;
	VRButtonStartedInteractionSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UVRButtonComponent::execOnRep_InitialRelativeTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_InitialRelativeTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRButtonComponent::execIsValidOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlapComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidOverlap_Implementation(Z_Param_OverlapComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRButtonComponent::execSetButtonToRestingPosition)
	{
		P_GET_UBOOL(Z_Param_bLerpToPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetButtonToRestingPosition(Z_Param_bLerpToPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRButtonComponent::execSetButtonState)
	{
		P_GET_UBOOL(Z_Param_bNewButtonState);
		P_GET_UBOOL(Z_Param_bCallButtonChangedEvent);
		P_GET_UBOOL(Z_Param_bSnapIntoPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetButtonState(Z_Param_bNewButtonState,Z_Param_bCallButtonChangedEvent,Z_Param_bSnapIntoPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRButtonComponent::execResetInitialButtonLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetInitialButtonLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRButtonComponent::execIsButtonInUse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsButtonInUse();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRButtonComponent::execOnOverlapEnd)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRButtonComponent::execOnOverlapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	struct VRButtonComponent_eventIsValidOverlap_Parms
	{
		UPrimitiveComponent* OverlapComponent;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		VRButtonComponent_eventIsValidOverlap_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct VRButtonComponent_eventReceiveButtonBeginInteraction_Parms
	{
		AActor* InteractingActor;
		UPrimitiveComponent* InteractingComponent;
	};
	struct VRButtonComponent_eventReceiveButtonEndInteraction_Parms
	{
		AActor* LastInteractingActor;
		UPrimitiveComponent* LastInteractingComponent;
	};
	struct VRButtonComponent_eventReceiveButtonStateChanged_Parms
	{
		bool bCurButtonState;
		AActor* LastInteractingActor;
		UPrimitiveComponent* InteractingComponent;
	};
	static FName NAME_UVRButtonComponent_IsValidOverlap = FName(TEXT("IsValidOverlap"));
	bool UVRButtonComponent::IsValidOverlap(UPrimitiveComponent* OverlapComponent)
	{
		VRButtonComponent_eventIsValidOverlap_Parms Parms;
		Parms.OverlapComponent=OverlapComponent;
		ProcessEvent(FindFunctionChecked(NAME_UVRButtonComponent_IsValidOverlap),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UVRButtonComponent_ReceiveButtonBeginInteraction = FName(TEXT("ReceiveButtonBeginInteraction"));
	void UVRButtonComponent::ReceiveButtonBeginInteraction(AActor* InteractingActor, UPrimitiveComponent* InteractingComponent)
	{
		VRButtonComponent_eventReceiveButtonBeginInteraction_Parms Parms;
		Parms.InteractingActor=InteractingActor;
		Parms.InteractingComponent=InteractingComponent;
		ProcessEvent(FindFunctionChecked(NAME_UVRButtonComponent_ReceiveButtonBeginInteraction),&Parms);
	}
	static FName NAME_UVRButtonComponent_ReceiveButtonEndInteraction = FName(TEXT("ReceiveButtonEndInteraction"));
	void UVRButtonComponent::ReceiveButtonEndInteraction(AActor* LastInteractingActor, UPrimitiveComponent* LastInteractingComponent)
	{
		VRButtonComponent_eventReceiveButtonEndInteraction_Parms Parms;
		Parms.LastInteractingActor=LastInteractingActor;
		Parms.LastInteractingComponent=LastInteractingComponent;
		ProcessEvent(FindFunctionChecked(NAME_UVRButtonComponent_ReceiveButtonEndInteraction),&Parms);
	}
	static FName NAME_UVRButtonComponent_ReceiveButtonStateChanged = FName(TEXT("ReceiveButtonStateChanged"));
	void UVRButtonComponent::ReceiveButtonStateChanged(bool bCurButtonState, AActor* LastInteractingActor, UPrimitiveComponent* InteractingComponent)
	{
		VRButtonComponent_eventReceiveButtonStateChanged_Parms Parms;
		Parms.bCurButtonState=bCurButtonState ? true : false;
		Parms.LastInteractingActor=LastInteractingActor;
		Parms.InteractingComponent=InteractingComponent;
		ProcessEvent(FindFunctionChecked(NAME_UVRButtonComponent_ReceiveButtonStateChanged),&Parms);
	}
	void UVRButtonComponent::StaticRegisterNativesUVRButtonComponent()
	{
		UClass* Class = UVRButtonComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsButtonInUse", &UVRButtonComponent::execIsButtonInUse },
			{ "IsValidOverlap", &UVRButtonComponent::execIsValidOverlap },
			{ "OnOverlapBegin", &UVRButtonComponent::execOnOverlapBegin },
			{ "OnOverlapEnd", &UVRButtonComponent::execOnOverlapEnd },
			{ "OnRep_InitialRelativeTransform", &UVRButtonComponent::execOnRep_InitialRelativeTransform },
			{ "ResetInitialButtonLocation", &UVRButtonComponent::execResetInitialButtonLocation },
			{ "SetButtonState", &UVRButtonComponent::execSetButtonState },
			{ "SetButtonToRestingPosition", &UVRButtonComponent::execSetButtonToRestingPosition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVRButtonComponent_IsButtonInUse_Statics
	{
		struct VRButtonComponent_eventIsButtonInUse_Parms
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
	void Z_Construct_UFunction_UVRButtonComponent_IsButtonInUse_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRButtonComponent_eventIsButtonInUse_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRButtonComponent_IsButtonInUse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRButtonComponent_eventIsButtonInUse_Parms), &Z_Construct_UFunction_UVRButtonComponent_IsButtonInUse_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRButtonComponent_IsButtonInUse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRButtonComponent_IsButtonInUse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRButtonComponent_IsButtonInUse_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRButtonComponent" },
		{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRButtonComponent_IsButtonInUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRButtonComponent, nullptr, "IsButtonInUse", nullptr, nullptr, Z_Construct_UFunction_UVRButtonComponent_IsButtonInUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRButtonComponent_IsButtonInUse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRButtonComponent_IsButtonInUse_Statics::VRButtonComponent_eventIsButtonInUse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRButtonComponent_IsButtonInUse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRButtonComponent_IsButtonInUse_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRButtonComponent_IsButtonInUse_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVRButtonComponent_IsButtonInUse_Statics::VRButtonComponent_eventIsButtonInUse_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVRButtonComponent_IsButtonInUse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRButtonComponent_IsButtonInUse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRButtonComponent_IsValidOverlap_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlapComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlapComponent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRButtonComponent_IsValidOverlap_Statics::NewProp_OverlapComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRButtonComponent_IsValidOverlap_Statics::NewProp_OverlapComponent = { "OverlapComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRButtonComponent_eventIsValidOverlap_Parms, OverlapComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRButtonComponent_IsValidOverlap_Statics::NewProp_OverlapComponent_MetaData), Z_Construct_UFunction_UVRButtonComponent_IsValidOverlap_Statics::NewProp_OverlapComponent_MetaData) };
	void Z_Construct_UFunction_UVRButtonComponent_IsValidOverlap_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRButtonComponent_eventIsValidOverlap_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRButtonComponent_IsValidOverlap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRButtonComponent_eventIsValidOverlap_Parms), &Z_Construct_UFunction_UVRButtonComponent_IsValidOverlap_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRButtonComponent_IsValidOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRButtonComponent_IsValidOverlap_Statics::NewProp_OverlapComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRButtonComponent_IsValidOverlap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRButtonComponent_IsValidOverlap_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRButtonComponent" },
		{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRButtonComponent_IsValidOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRButtonComponent, nullptr, "IsValidOverlap", nullptr, nullptr, Z_Construct_UFunction_UVRButtonComponent_IsValidOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRButtonComponent_IsValidOverlap_Statics::PropPointers), sizeof(VRButtonComponent_eventIsValidOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRButtonComponent_IsValidOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRButtonComponent_IsValidOverlap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRButtonComponent_IsValidOverlap_Statics::PropPointers) < 2048);
	static_assert(sizeof(VRButtonComponent_eventIsValidOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVRButtonComponent_IsValidOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRButtonComponent_IsValidOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics
	{
		struct VRButtonComponent_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRButtonComponent_eventOnOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData), Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRButtonComponent_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRButtonComponent_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRButtonComponent_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((VRButtonComponent_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRButtonComponent_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRButtonComponent_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRButtonComponent, nullptr, "OnOverlapBegin", nullptr, nullptr, Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::VRButtonComponent_eventOnOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::VRButtonComponent_eventOnOverlapBegin_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRButtonComponent_OnOverlapEnd_Statics
	{
		struct VRButtonComponent_eventOnOverlapEnd_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRButtonComponent_OnOverlapEnd_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRButtonComponent_OnOverlapEnd_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRButtonComponent_eventOnOverlapEnd_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRButtonComponent_OnOverlapEnd_Statics::NewProp_OverlappedComp_MetaData), Z_Construct_UFunction_UVRButtonComponent_OnOverlapEnd_Statics::NewProp_OverlappedComp_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRButtonComponent_OnOverlapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRButtonComponent_eventOnOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRButtonComponent_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRButtonComponent_OnOverlapEnd_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRButtonComponent_eventOnOverlapEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRButtonComponent_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_UVRButtonComponent_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVRButtonComponent_OnOverlapEnd_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRButtonComponent_eventOnOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRButtonComponent_OnOverlapEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRButtonComponent_OnOverlapEnd_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRButtonComponent_OnOverlapEnd_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRButtonComponent_OnOverlapEnd_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRButtonComponent_OnOverlapEnd_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRButtonComponent_OnOverlapEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRButtonComponent_OnOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRButtonComponent, nullptr, "OnOverlapEnd", nullptr, nullptr, Z_Construct_UFunction_UVRButtonComponent_OnOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRButtonComponent_OnOverlapEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRButtonComponent_OnOverlapEnd_Statics::VRButtonComponent_eventOnOverlapEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRButtonComponent_OnOverlapEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRButtonComponent_OnOverlapEnd_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRButtonComponent_OnOverlapEnd_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVRButtonComponent_OnOverlapEnd_Statics::VRButtonComponent_eventOnOverlapEnd_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVRButtonComponent_OnOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRButtonComponent_OnOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRButtonComponent_OnRep_InitialRelativeTransform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRButtonComponent_OnRep_InitialRelativeTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRButtonComponent_OnRep_InitialRelativeTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRButtonComponent, nullptr, "OnRep_InitialRelativeTransform", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRButtonComponent_OnRep_InitialRelativeTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRButtonComponent_OnRep_InitialRelativeTransform_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UVRButtonComponent_OnRep_InitialRelativeTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRButtonComponent_OnRep_InitialRelativeTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonBeginInteraction_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractingActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractingComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractingComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonBeginInteraction_Statics::NewProp_InteractingActor = { "InteractingActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRButtonComponent_eventReceiveButtonBeginInteraction_Parms, InteractingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonBeginInteraction_Statics::NewProp_InteractingComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonBeginInteraction_Statics::NewProp_InteractingComponent = { "InteractingComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRButtonComponent_eventReceiveButtonBeginInteraction_Parms, InteractingComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonBeginInteraction_Statics::NewProp_InteractingComponent_MetaData), Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonBeginInteraction_Statics::NewProp_InteractingComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonBeginInteraction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonBeginInteraction_Statics::NewProp_InteractingActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonBeginInteraction_Statics::NewProp_InteractingComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonBeginInteraction_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// On Button beginning interaction (may spam a bit depending on if overlap is jittering)\n" },
#endif
		{ "DisplayName", "Button Started Interaction" },
		{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "On Button beginning interaction (may spam a bit depending on if overlap is jittering)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonBeginInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRButtonComponent, nullptr, "ReceiveButtonBeginInteraction", nullptr, nullptr, Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonBeginInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonBeginInteraction_Statics::PropPointers), sizeof(VRButtonComponent_eventReceiveButtonBeginInteraction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonBeginInteraction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonBeginInteraction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonBeginInteraction_Statics::PropPointers) < 2048);
	static_assert(sizeof(VRButtonComponent_eventReceiveButtonBeginInteraction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonBeginInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonBeginInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonEndInteraction_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LastInteractingActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastInteractingComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LastInteractingComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonEndInteraction_Statics::NewProp_LastInteractingActor = { "LastInteractingActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRButtonComponent_eventReceiveButtonEndInteraction_Parms, LastInteractingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonEndInteraction_Statics::NewProp_LastInteractingComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonEndInteraction_Statics::NewProp_LastInteractingComponent = { "LastInteractingComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRButtonComponent_eventReceiveButtonEndInteraction_Parms, LastInteractingComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonEndInteraction_Statics::NewProp_LastInteractingComponent_MetaData), Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonEndInteraction_Statics::NewProp_LastInteractingComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonEndInteraction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonEndInteraction_Statics::NewProp_LastInteractingActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonEndInteraction_Statics::NewProp_LastInteractingComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonEndInteraction_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// On Button ending interaction (may spam a bit depending on if overlap is jittering)\n" },
#endif
		{ "DisplayName", "Button Ended Interaction" },
		{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "On Button ending interaction (may spam a bit depending on if overlap is jittering)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonEndInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRButtonComponent, nullptr, "ReceiveButtonEndInteraction", nullptr, nullptr, Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonEndInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonEndInteraction_Statics::PropPointers), sizeof(VRButtonComponent_eventReceiveButtonEndInteraction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonEndInteraction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonEndInteraction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonEndInteraction_Statics::PropPointers) < 2048);
	static_assert(sizeof(VRButtonComponent_eventReceiveButtonEndInteraction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonEndInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonEndInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonStateChanged_Statics
	{
		static void NewProp_bCurButtonState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCurButtonState;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LastInteractingActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractingComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractingComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonStateChanged_Statics::NewProp_bCurButtonState_SetBit(void* Obj)
	{
		((VRButtonComponent_eventReceiveButtonStateChanged_Parms*)Obj)->bCurButtonState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonStateChanged_Statics::NewProp_bCurButtonState = { "bCurButtonState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRButtonComponent_eventReceiveButtonStateChanged_Parms), &Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonStateChanged_Statics::NewProp_bCurButtonState_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonStateChanged_Statics::NewProp_LastInteractingActor = { "LastInteractingActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRButtonComponent_eventReceiveButtonStateChanged_Parms, LastInteractingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonStateChanged_Statics::NewProp_InteractingComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonStateChanged_Statics::NewProp_InteractingComponent = { "InteractingComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRButtonComponent_eventReceiveButtonStateChanged_Parms, InteractingComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonStateChanged_Statics::NewProp_InteractingComponent_MetaData), Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonStateChanged_Statics::NewProp_InteractingComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonStateChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonStateChanged_Statics::NewProp_bCurButtonState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonStateChanged_Statics::NewProp_LastInteractingActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonStateChanged_Statics::NewProp_InteractingComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonStateChanged_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// On the button state changing, keep in mind that InteractingActor can be invalid if manually setting the state\n" },
#endif
		{ "DisplayName", "Button State Changed" },
		{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "On the button state changing, keep in mind that InteractingActor can be invalid if manually setting the state" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRButtonComponent, nullptr, "ReceiveButtonStateChanged", nullptr, nullptr, Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonStateChanged_Statics::PropPointers), sizeof(VRButtonComponent_eventReceiveButtonStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonStateChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonStateChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(VRButtonComponent_eventReceiveButtonStateChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRButtonComponent_ResetInitialButtonLocation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRButtonComponent_ResetInitialButtonLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRButtonComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Should be called after the button is moved post begin play\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should be called after the button is moved post begin play" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRButtonComponent_ResetInitialButtonLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRButtonComponent, nullptr, "ResetInitialButtonLocation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRButtonComponent_ResetInitialButtonLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRButtonComponent_ResetInitialButtonLocation_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UVRButtonComponent_ResetInitialButtonLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRButtonComponent_ResetInitialButtonLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRButtonComponent_SetButtonState_Statics
	{
		struct VRButtonComponent_eventSetButtonState_Parms
		{
			bool bNewButtonState;
			bool bCallButtonChangedEvent;
			bool bSnapIntoPosition;
		};
		static void NewProp_bNewButtonState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewButtonState;
		static void NewProp_bCallButtonChangedEvent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCallButtonChangedEvent;
		static void NewProp_bSnapIntoPosition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapIntoPosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRButtonComponent_SetButtonState_Statics::NewProp_bNewButtonState_SetBit(void* Obj)
	{
		((VRButtonComponent_eventSetButtonState_Parms*)Obj)->bNewButtonState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRButtonComponent_SetButtonState_Statics::NewProp_bNewButtonState = { "bNewButtonState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRButtonComponent_eventSetButtonState_Parms), &Z_Construct_UFunction_UVRButtonComponent_SetButtonState_Statics::NewProp_bNewButtonState_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UVRButtonComponent_SetButtonState_Statics::NewProp_bCallButtonChangedEvent_SetBit(void* Obj)
	{
		((VRButtonComponent_eventSetButtonState_Parms*)Obj)->bCallButtonChangedEvent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRButtonComponent_SetButtonState_Statics::NewProp_bCallButtonChangedEvent = { "bCallButtonChangedEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRButtonComponent_eventSetButtonState_Parms), &Z_Construct_UFunction_UVRButtonComponent_SetButtonState_Statics::NewProp_bCallButtonChangedEvent_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UVRButtonComponent_SetButtonState_Statics::NewProp_bSnapIntoPosition_SetBit(void* Obj)
	{
		((VRButtonComponent_eventSetButtonState_Parms*)Obj)->bSnapIntoPosition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRButtonComponent_SetButtonState_Statics::NewProp_bSnapIntoPosition = { "bSnapIntoPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRButtonComponent_eventSetButtonState_Parms), &Z_Construct_UFunction_UVRButtonComponent_SetButtonState_Statics::NewProp_bSnapIntoPosition_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRButtonComponent_SetButtonState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRButtonComponent_SetButtonState_Statics::NewProp_bNewButtonState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRButtonComponent_SetButtonState_Statics::NewProp_bCallButtonChangedEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRButtonComponent_SetButtonState_Statics::NewProp_bSnapIntoPosition,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRButtonComponent_SetButtonState_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRButtonComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets the button state outside of interaction, bSnapIntoPosition is for Toggle_Stay mode, it will lerp into the new position if this is false\n" },
#endif
		{ "CPP_Default_bCallButtonChangedEvent", "true" },
		{ "CPP_Default_bSnapIntoPosition", "false" },
		{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the button state outside of interaction, bSnapIntoPosition is for Toggle_Stay mode, it will lerp into the new position if this is false" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRButtonComponent_SetButtonState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRButtonComponent, nullptr, "SetButtonState", nullptr, nullptr, Z_Construct_UFunction_UVRButtonComponent_SetButtonState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRButtonComponent_SetButtonState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRButtonComponent_SetButtonState_Statics::VRButtonComponent_eventSetButtonState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRButtonComponent_SetButtonState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRButtonComponent_SetButtonState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRButtonComponent_SetButtonState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVRButtonComponent_SetButtonState_Statics::VRButtonComponent_eventSetButtonState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVRButtonComponent_SetButtonState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRButtonComponent_SetButtonState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRButtonComponent_SetButtonToRestingPosition_Statics
	{
		struct VRButtonComponent_eventSetButtonToRestingPosition_Parms
		{
			bool bLerpToPosition;
		};
		static void NewProp_bLerpToPosition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLerpToPosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRButtonComponent_SetButtonToRestingPosition_Statics::NewProp_bLerpToPosition_SetBit(void* Obj)
	{
		((VRButtonComponent_eventSetButtonToRestingPosition_Parms*)Obj)->bLerpToPosition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRButtonComponent_SetButtonToRestingPosition_Statics::NewProp_bLerpToPosition = { "bLerpToPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRButtonComponent_eventSetButtonToRestingPosition_Parms), &Z_Construct_UFunction_UVRButtonComponent_SetButtonToRestingPosition_Statics::NewProp_bLerpToPosition_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRButtonComponent_SetButtonToRestingPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRButtonComponent_SetButtonToRestingPosition_Statics::NewProp_bLerpToPosition,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRButtonComponent_SetButtonToRestingPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRButtonComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Resets the button to its resting location (mostly for Toggle_Stay)\n" },
#endif
		{ "CPP_Default_bLerpToPosition", "false" },
		{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resets the button to its resting location (mostly for Toggle_Stay)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRButtonComponent_SetButtonToRestingPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRButtonComponent, nullptr, "SetButtonToRestingPosition", nullptr, nullptr, Z_Construct_UFunction_UVRButtonComponent_SetButtonToRestingPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRButtonComponent_SetButtonToRestingPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRButtonComponent_SetButtonToRestingPosition_Statics::VRButtonComponent_eventSetButtonToRestingPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRButtonComponent_SetButtonToRestingPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRButtonComponent_SetButtonToRestingPosition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRButtonComponent_SetButtonToRestingPosition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVRButtonComponent_SetButtonToRestingPosition_Statics::VRButtonComponent_eventSetButtonToRestingPosition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVRButtonComponent_SetButtonToRestingPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRButtonComponent_SetButtonToRestingPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVRButtonComponent);
	UClass* Z_Construct_UClass_UVRButtonComponent_NoRegister()
	{
		return UVRButtonComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVRButtonComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnButtonStateChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnButtonStateChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnButtonBeginInteraction_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnButtonBeginInteraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnButtonEndInteraction_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnButtonEndInteraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalInteractingComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LocalInteractingComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalLastInteractingActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LocalLastInteractingActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalLastInteractingComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LocalLastInteractingComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[];
#endif
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bButtonState_MetaData[];
#endif
		static void NewProp_bButtonState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bButtonState;
		static const UECodeGen_Private::FBytePropertyParams NewProp_StateChangeAuthorityType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateChangeAuthorityType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_StateChangeAuthorityType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DepressSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DepressSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DepressDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DepressDistance;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ButtonType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ButtonType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ButtonType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ButtonAxis_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ButtonAxis_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ButtonAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ButtonEngageDepth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ButtonEngageDepth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinTimeBetweenEngaging_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinTimeBetweenEngaging;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSkipOverlapFiltering_MetaData[];
#endif
		static void NewProp_bSkipOverlapFiltering_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipOverlapFiltering;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReplicateMovement_MetaData[];
#endif
		static void NewProp_bReplicateMovement_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplicateMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialRelativeTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitialRelativeTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVRButtonComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVRButtonComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UVRButtonComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVRButtonComponent_IsButtonInUse, "IsButtonInUse" }, // 2824033509
		{ &Z_Construct_UFunction_UVRButtonComponent_IsValidOverlap, "IsValidOverlap" }, // 2330945483
		{ &Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin, "OnOverlapBegin" }, // 1279255683
		{ &Z_Construct_UFunction_UVRButtonComponent_OnOverlapEnd, "OnOverlapEnd" }, // 2740769853
		{ &Z_Construct_UFunction_UVRButtonComponent_OnRep_InitialRelativeTransform, "OnRep_InitialRelativeTransform" }, // 4046669575
		{ &Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonBeginInteraction, "ReceiveButtonBeginInteraction" }, // 686055892
		{ &Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonEndInteraction, "ReceiveButtonEndInteraction" }, // 3420552034
		{ &Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonStateChanged, "ReceiveButtonStateChanged" }, // 3000750898
		{ &Z_Construct_UFunction_UVRButtonComponent_ResetInitialButtonLocation, "ResetInitialButtonLocation" }, // 1503988536
		{ &Z_Construct_UFunction_UVRButtonComponent_SetButtonState, "SetButtonState" }, // 926804897
		{ &Z_Construct_UFunction_UVRButtonComponent_SetButtonToRestingPosition, "SetButtonToRestingPosition" }, // 2734333312
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVRButtonComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRButtonComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "VRExpansionPlugin" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "Interactibles/VRButtonComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_OnButtonStateChanged_MetaData[] = {
		{ "Category", "VRButtonComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// On the button state changing, keep in mind that InteractingActor can be invalid if manually setting the state\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "On the button state changing, keep in mind that InteractingActor can be invalid if manually setting the state" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_OnButtonStateChanged = { "OnButtonStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRButtonComponent, OnButtonStateChanged), Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStateChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_OnButtonStateChanged_MetaData), Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_OnButtonStateChanged_MetaData) }; // 4268663856
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_OnButtonBeginInteraction_MetaData[] = {
		{ "Category", "VRButtonComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// On Button beginning interaction (may spam a bit depending on if overlap is jittering)\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "On Button beginning interaction (may spam a bit depending on if overlap is jittering)" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_OnButtonBeginInteraction = { "OnButtonBeginInteraction", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRButtonComponent, OnButtonBeginInteraction), Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStartedInteractionSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_OnButtonBeginInteraction_MetaData), Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_OnButtonBeginInteraction_MetaData) }; // 2358767257
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_OnButtonEndInteraction_MetaData[] = {
		{ "Category", "VRButtonComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// On Button ending interaction (may spam a bit depending on if overlap is jittering)\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "On Button ending interaction (may spam a bit depending on if overlap is jittering)" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_OnButtonEndInteraction = { "OnButtonEndInteraction", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRButtonComponent, OnButtonEndInteraction), Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStartedInteractionSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_OnButtonEndInteraction_MetaData), Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_OnButtonEndInteraction_MetaData) }; // 2358767257
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_LocalInteractingComponent_MetaData[] = {
		{ "Category", "VRButtonComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// On the button state changing, keep in mind that InteractingActor can be invalid if manually setting the state\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "On the button state changing, keep in mind that InteractingActor can be invalid if manually setting the state" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_LocalInteractingComponent = { "LocalInteractingComponent", nullptr, (EPropertyFlags)0x001400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRButtonComponent, LocalInteractingComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_LocalInteractingComponent_MetaData), Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_LocalInteractingComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_LocalLastInteractingActor_MetaData[] = {
		{ "Category", "VRButtonComponent" },
		{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_LocalLastInteractingActor = { "LocalLastInteractingActor", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRButtonComponent, LocalLastInteractingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_LocalLastInteractingActor_MetaData), Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_LocalLastInteractingActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_LocalLastInteractingComponent_MetaData[] = {
		{ "Category", "VRButtonComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_LocalLastInteractingComponent = { "LocalLastInteractingComponent", nullptr, (EPropertyFlags)0x001400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRButtonComponent, LocalLastInteractingComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_LocalLastInteractingComponent_MetaData), Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_LocalLastInteractingComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_bIsEnabled_MetaData[] = {
		{ "Category", "VRButtonComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether the button is enabled or not (can be interacted with)\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the button is enabled or not (can be interacted with)" },
#endif
	};
#endif
	void Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((UVRButtonComponent*)Obj)->bIsEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRButtonComponent), &Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_bIsEnabled_MetaData), Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_bIsEnabled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_bButtonState_MetaData[] = {
		{ "Category", "VRButtonComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current state of the button, writable to set initial value\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current state of the button, writable to set initial value" },
#endif
	};
#endif
	void Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_bButtonState_SetBit(void* Obj)
	{
		((UVRButtonComponent*)Obj)->bButtonState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_bButtonState = { "bButtonState", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRButtonComponent), &Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_bButtonState_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_bButtonState_MetaData), Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_bButtonState_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_StateChangeAuthorityType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_StateChangeAuthorityType_MetaData[] = {
		{ "Category", "VRButtonComponent|Replication" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Who is allowed to change the button state\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Who is allowed to change the button state" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_StateChangeAuthorityType = { "StateChangeAuthorityType", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRButtonComponent, StateChangeAuthorityType), Z_Construct_UEnum_VRExpansionPlugin_EVRStateChangeAuthorityType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_StateChangeAuthorityType_MetaData), Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_StateChangeAuthorityType_MetaData) }; // 1407746437
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_DepressSpeed_MetaData[] = {
		{ "Category", "VRButtonComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Speed that the button de-presses when no longer interacted with\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Speed that the button de-presses when no longer interacted with" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_DepressSpeed = { "DepressSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRButtonComponent, DepressSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_DepressSpeed_MetaData), Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_DepressSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_DepressDistance_MetaData[] = {
		{ "Category", "VRButtonComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Distance that the button depresses\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distance that the button depresses" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_DepressDistance = { "DepressDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRButtonComponent, DepressDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_DepressDistance_MetaData), Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_DepressDistance_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_ButtonType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_ButtonType_MetaData[] = {
		{ "Category", "VRButtonComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Type of button this is\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Type of button this is" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_ButtonType = { "ButtonType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRButtonComponent, ButtonType), Z_Construct_UEnum_VRExpansionPlugin_EVRButtonType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_ButtonType_MetaData), Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_ButtonType_MetaData) }; // 3331672412
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_ButtonAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_ButtonAxis_MetaData[] = {
		{ "Category", "VRButtonComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Negative on this axis is the depress direction\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Negative on this axis is the depress direction" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_ButtonAxis = { "ButtonAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRButtonComponent, ButtonAxis), Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleAxis, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_ButtonAxis_MetaData), Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_ButtonAxis_MetaData) }; // 626119600
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_ButtonEngageDepth_MetaData[] = {
		{ "Category", "VRButtonComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Depth at which the button engages (switches)\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Depth at which the button engages (switches)" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_ButtonEngageDepth = { "ButtonEngageDepth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRButtonComponent, ButtonEngageDepth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_ButtonEngageDepth_MetaData), Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_ButtonEngageDepth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_MinTimeBetweenEngaging_MetaData[] = {
		{ "Category", "VRButtonComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Minimum time before the button can be switched again\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimum time before the button can be switched again" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_MinTimeBetweenEngaging = { "MinTimeBetweenEngaging", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRButtonComponent, MinTimeBetweenEngaging), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_MinTimeBetweenEngaging_MetaData), Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_MinTimeBetweenEngaging_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_bSkipOverlapFiltering_MetaData[] = {
		{ "Category", "VRButtonComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Skips filtering overlaps on the button and lets you manage it yourself, this is the alternative to overriding IsValidOverlap\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Skips filtering overlaps on the button and lets you manage it yourself, this is the alternative to overriding IsValidOverlap" },
#endif
	};
#endif
	void Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_bSkipOverlapFiltering_SetBit(void* Obj)
	{
		((UVRButtonComponent*)Obj)->bSkipOverlapFiltering = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_bSkipOverlapFiltering = { "bSkipOverlapFiltering", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRButtonComponent), &Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_bSkipOverlapFiltering_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_bSkipOverlapFiltering_MetaData), Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_bSkipOverlapFiltering_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_bReplicateMovement_MetaData[] = {
		{ "Category", "VRGripInterface|Replication" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Overrides the default of : true and allows for controlling it like in an actor, should be default of off normally with grippable components\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Overrides the default of : true and allows for controlling it like in an actor, should be default of off normally with grippable components" },
#endif
	};
#endif
	void Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_bReplicateMovement_SetBit(void* Obj)
	{
		((UVRButtonComponent*)Obj)->bReplicateMovement = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_bReplicateMovement = { "bReplicateMovement", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRButtonComponent), &Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_bReplicateMovement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_bReplicateMovement_MetaData), Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_bReplicateMovement_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_InitialRelativeTransform_MetaData[] = {
		{ "Category", "VRButtonComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Now replicating this so that it works correctly over the network\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Now replicating this so that it works correctly over the network" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_InitialRelativeTransform = { "InitialRelativeTransform", "OnRep_InitialRelativeTransform", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRButtonComponent, InitialRelativeTransform), Z_Construct_UScriptStruct_FTransform_NetQuantize, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_InitialRelativeTransform_MetaData), Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_InitialRelativeTransform_MetaData) }; // 2473692074
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVRButtonComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_OnButtonStateChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_OnButtonBeginInteraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_OnButtonEndInteraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_LocalInteractingComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_LocalLastInteractingActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_LocalLastInteractingComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_bIsEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_bButtonState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_StateChangeAuthorityType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_StateChangeAuthorityType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_DepressSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_DepressDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_ButtonType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_ButtonType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_ButtonAxis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_ButtonAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_ButtonEngageDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_MinTimeBetweenEngaging,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_bSkipOverlapFiltering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_bReplicateMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_InitialRelativeTransform,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVRButtonComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRButtonComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVRButtonComponent_Statics::ClassParams = {
		&UVRButtonComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVRButtonComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVRButtonComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRButtonComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UVRButtonComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVRButtonComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UVRButtonComponent()
	{
		if (!Z_Registration_Info_UClass_UVRButtonComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVRButtonComponent.OuterSingleton, Z_Construct_UClass_UVRButtonComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVRButtonComponent.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UVRButtonComponent>()
	{
		return UVRButtonComponent::StaticClass();
	}

	void UVRButtonComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bButtonState(TEXT("bButtonState"));
		static const FName Name_StateChangeAuthorityType(TEXT("StateChangeAuthorityType"));
		static const FName Name_bReplicateMovement(TEXT("bReplicateMovement"));
		static const FName Name_InitialRelativeTransform(TEXT("InitialRelativeTransform"));

		const bool bIsValid = true
			&& Name_bButtonState == ClassReps[(int32)ENetFields_Private::bButtonState].Property->GetFName()
			&& Name_StateChangeAuthorityType == ClassReps[(int32)ENetFields_Private::StateChangeAuthorityType].Property->GetFName()
			&& Name_bReplicateMovement == ClassReps[(int32)ENetFields_Private::bReplicateMovement].Property->GetFName()
			&& Name_InitialRelativeTransform == ClassReps[(int32)ENetFields_Private::InitialRelativeTransform].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UVRButtonComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRButtonComponent);
	struct Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRButtonComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRButtonComponent_h_Statics::EnumInfo[] = {
		{ EVRButtonType_StaticEnum, TEXT("EVRButtonType"), &Z_Registration_Info_UEnum_EVRButtonType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3331672412U) },
		{ EVRStateChangeAuthorityType_StaticEnum, TEXT("EVRStateChangeAuthorityType"), &Z_Registration_Info_UEnum_EVRStateChangeAuthorityType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1407746437U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRButtonComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVRButtonComponent, UVRButtonComponent::StaticClass, TEXT("UVRButtonComponent"), &Z_Registration_Info_UClass_UVRButtonComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVRButtonComponent), 3355322546U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRButtonComponent_h_2117162205(TEXT("/Script/VRExpansionPlugin"),
		Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRButtonComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRButtonComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRButtonComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRButtonComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
