// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/ReplicatedVRCameraComponent.h"
#include "UObject/CoreNet.h"
#include "VRExpansionPlugin/Public/VRBPDatatypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReplicatedVRCameraComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRCharacter_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UReplicatedVRCameraComponent();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UReplicatedVRCameraComponent_NoRegister();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPVRComponentPosRep();
// End Cross Module References
	DEFINE_FUNCTION(UReplicatedVRCameraComponent::execServer_SendCameraTransform)
	{
		P_GET_STRUCT(FBPVRComponentPosRep,Z_Param_NewTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SendCameraTransform_Validate(Z_Param_NewTransform))
		{
			RPC_ValidateFailed(TEXT("Server_SendCameraTransform_Validate"));
			return;
		}
		P_THIS->Server_SendCameraTransform_Implementation(Z_Param_NewTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReplicatedVRCameraComponent::execOnRep_ReplicatedCameraTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ReplicatedCameraTransform();
		P_NATIVE_END;
	}
	struct ReplicatedVRCameraComponent_eventServer_SendCameraTransform_Parms
	{
		FBPVRComponentPosRep NewTransform;
	};
	static FName NAME_UReplicatedVRCameraComponent_Server_SendCameraTransform = FName(TEXT("Server_SendCameraTransform"));
	void UReplicatedVRCameraComponent::Server_SendCameraTransform(FBPVRComponentPosRep NewTransform)
	{
		ReplicatedVRCameraComponent_eventServer_SendCameraTransform_Parms Parms;
		Parms.NewTransform=NewTransform;
		ProcessEvent(FindFunctionChecked(NAME_UReplicatedVRCameraComponent_Server_SendCameraTransform),&Parms);
	}
	void UReplicatedVRCameraComponent::StaticRegisterNativesUReplicatedVRCameraComponent()
	{
		UClass* Class = UReplicatedVRCameraComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_ReplicatedCameraTransform", &UReplicatedVRCameraComponent::execOnRep_ReplicatedCameraTransform },
			{ "Server_SendCameraTransform", &UReplicatedVRCameraComponent::execServer_SendCameraTransform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UReplicatedVRCameraComponent_OnRep_ReplicatedCameraTransform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReplicatedVRCameraComponent_OnRep_ReplicatedCameraTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReplicatedVRCameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplicatedVRCameraComponent_OnRep_ReplicatedCameraTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReplicatedVRCameraComponent, nullptr, "OnRep_ReplicatedCameraTransform", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplicatedVRCameraComponent_OnRep_ReplicatedCameraTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplicatedVRCameraComponent_OnRep_ReplicatedCameraTransform_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UReplicatedVRCameraComponent_OnRep_ReplicatedCameraTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplicatedVRCameraComponent_OnRep_ReplicatedCameraTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReplicatedVRCameraComponent_Server_SendCameraTransform_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UReplicatedVRCameraComponent_Server_SendCameraTransform_Statics::NewProp_NewTransform = { "NewTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplicatedVRCameraComponent_eventServer_SendCameraTransform_Parms, NewTransform), Z_Construct_UScriptStruct_FBPVRComponentPosRep, METADATA_PARAMS(0, nullptr) }; // 2078088838
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplicatedVRCameraComponent_Server_SendCameraTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplicatedVRCameraComponent_Server_SendCameraTransform_Statics::NewProp_NewTransform,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReplicatedVRCameraComponent_Server_SendCameraTransform_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// I'm sending it unreliable because it is being resent pretty often\n" },
#endif
		{ "ModuleRelativePath", "Public/ReplicatedVRCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "I'm sending it unreliable because it is being resent pretty often" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplicatedVRCameraComponent_Server_SendCameraTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReplicatedVRCameraComponent, nullptr, "Server_SendCameraTransform", nullptr, nullptr, Z_Construct_UFunction_UReplicatedVRCameraComponent_Server_SendCameraTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReplicatedVRCameraComponent_Server_SendCameraTransform_Statics::PropPointers), sizeof(ReplicatedVRCameraComponent_eventServer_SendCameraTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplicatedVRCameraComponent_Server_SendCameraTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplicatedVRCameraComponent_Server_SendCameraTransform_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplicatedVRCameraComponent_Server_SendCameraTransform_Statics::PropPointers) < 2048);
	static_assert(sizeof(ReplicatedVRCameraComponent_eventServer_SendCameraTransform_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UReplicatedVRCameraComponent_Server_SendCameraTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplicatedVRCameraComponent_Server_SendCameraTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReplicatedVRCameraComponent);
	UClass* Z_Construct_UClass_UReplicatedVRCameraComponent_NoRegister()
	{
		return UReplicatedVRCameraComponent::StaticClass();
	}
	struct Z_Construct_UClass_UReplicatedVRCameraComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateInCharacterMovement_MetaData[];
#endif
		static void NewProp_bUpdateInCharacterMovement_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateInCharacterMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachChar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AttachChar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSampleVelocityInWorldSpace_MetaData[];
#endif
		static void NewProp_bSampleVelocityInWorldSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSampleVelocityInWorldSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFPSDebugMode_MetaData[];
#endif
		static void NewProp_bFPSDebugMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFPSDebugMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSetPositionDuringTick_MetaData[];
#endif
		static void NewProp_bSetPositionDuringTick_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetPositionDuringTick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bScaleTracking_MetaData[];
#endif
		static void NewProp_bScaleTracking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bScaleTracking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackingScaler_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TrackingScaler;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLimitMinHeight_MetaData[];
#endif
		static void NewProp_bLimitMinHeight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLimitMinHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumHeightAllowed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumHeightAllowed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLimitMaxHeight_MetaData[];
#endif
		static void NewProp_bLimitMaxHeight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLimitMaxHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHeightAllowed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHeightAllowed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLimitBounds_MetaData[];
#endif
		static void NewProp_bLimitBounds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLimitBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumTrackedBounds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumTrackedBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoSetLockToHmd_MetaData[];
#endif
		static void NewProp_bAutoSetLockToHmd_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoSetLockToHmd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedCameraTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReplicatedCameraTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSmoothReplicatedMotion_MetaData[];
#endif
		static void NewProp_bSmoothReplicatedMotion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSmoothReplicatedMotion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseExponentialSmoothing_MetaData[];
#endif
		static void NewProp_bUseExponentialSmoothing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseExponentialSmoothing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpolationSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NetworkMaxSmoothUpdateDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NetworkMaxSmoothUpdateDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NetworkNoSmoothUpdateDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NetworkNoSmoothUpdateDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NetUpdateRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NetUpdateRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UReplicatedVRCameraComponent_OnRep_ReplicatedCameraTransform, "OnRep_ReplicatedCameraTransform" }, // 3366538332
		{ &Z_Construct_UFunction_UReplicatedVRCameraComponent_Server_SendCameraTransform, "Server_SendCameraTransform" }, // 4247917
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "VRExpansionLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* An overridden camera component that replicates its location in multiplayer\n*/" },
#endif
		{ "HideCategories", "Mobility Rendering LOD Trigger PhysicsVolume" },
		{ "IncludePath", "ReplicatedVRCameraComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ReplicatedVRCameraComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An overridden camera component that replicates its location in multiplayer" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bUpdateInCharacterMovement_MetaData[] = {
		{ "Category", "VRExpansionLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, this component will not perform logic in its tick, it will instead allow the character movement component to move it (unless the CMC is inactive, then it will go back to self managing)\n" },
#endif
		{ "ModuleRelativePath", "Public/ReplicatedVRCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, this component will not perform logic in its tick, it will instead allow the character movement component to move it (unless the CMC is inactive, then it will go back to self managing)" },
#endif
	};
#endif
	void Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bUpdateInCharacterMovement_SetBit(void* Obj)
	{
		((UReplicatedVRCameraComponent*)Obj)->bUpdateInCharacterMovement = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bUpdateInCharacterMovement = { "bUpdateInCharacterMovement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UReplicatedVRCameraComponent), &Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bUpdateInCharacterMovement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bUpdateInCharacterMovement_MetaData), Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bUpdateInCharacterMovement_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_AttachChar_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReplicatedVRCameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_AttachChar = { "AttachChar", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReplicatedVRCameraComponent, AttachChar), Z_Construct_UClass_AVRCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_AttachChar_MetaData), Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_AttachChar_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bSampleVelocityInWorldSpace_MetaData[] = {
		{ "Category", "ReplicatedCamera|ComponentVelocity" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If we should sample the velocity in world or local space\n" },
#endif
		{ "ModuleRelativePath", "Public/ReplicatedVRCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If we should sample the velocity in world or local space" },
#endif
	};
#endif
	void Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bSampleVelocityInWorldSpace_SetBit(void* Obj)
	{
		((UReplicatedVRCameraComponent*)Obj)->bSampleVelocityInWorldSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bSampleVelocityInWorldSpace = { "bSampleVelocityInWorldSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UReplicatedVRCameraComponent), &Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bSampleVelocityInWorldSpace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bSampleVelocityInWorldSpace_MetaData), Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bSampleVelocityInWorldSpace_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bFPSDebugMode_MetaData[] = {
		{ "Category", "ReplicatedCamera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true we will sample relative position for replication instead of the tracked settings\n" },
#endif
		{ "ModuleRelativePath", "Public/ReplicatedVRCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true we will sample relative position for replication instead of the tracked settings" },
#endif
	};
#endif
	void Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bFPSDebugMode_SetBit(void* Obj)
	{
		((UReplicatedVRCameraComponent*)Obj)->bFPSDebugMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bFPSDebugMode = { "bFPSDebugMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UReplicatedVRCameraComponent), &Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bFPSDebugMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bFPSDebugMode_MetaData), Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bFPSDebugMode_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bSetPositionDuringTick_MetaData[] = {
		{ "Category", "ReplicatedCamera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// For non view target positional updates\n" },
#endif
		{ "ModuleRelativePath", "Public/ReplicatedVRCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "For non view target positional updates" },
#endif
	};
#endif
	void Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bSetPositionDuringTick_SetBit(void* Obj)
	{
		((UReplicatedVRCameraComponent*)Obj)->bSetPositionDuringTick = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bSetPositionDuringTick = { "bSetPositionDuringTick", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UReplicatedVRCameraComponent), &Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bSetPositionDuringTick_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bSetPositionDuringTick_MetaData), Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bSetPositionDuringTick_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bScaleTracking_MetaData[] = {
		{ "Category", "ReplicatedCamera|Advanced|Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true will scale the tracking of the camera by TrackingScaler\n" },
#endif
		{ "ModuleRelativePath", "Public/ReplicatedVRCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true will scale the tracking of the camera by TrackingScaler" },
#endif
	};
#endif
	void Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bScaleTracking_SetBit(void* Obj)
	{
		((UReplicatedVRCameraComponent*)Obj)->bScaleTracking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bScaleTracking = { "bScaleTracking", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UReplicatedVRCameraComponent), &Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bScaleTracking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bScaleTracking_MetaData), Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bScaleTracking_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_TrackingScaler_MetaData[] = {
		{ "Category", "ReplicatedCamera|Advanced|Tracking" },
		{ "ClampMin", "0.1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A scale to be applied to the tracking of the camera\n" },
#endif
		{ "EditCondition", "bScaleTracking" },
		{ "ModuleRelativePath", "Public/ReplicatedVRCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A scale to be applied to the tracking of the camera" },
#endif
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_TrackingScaler = { "TrackingScaler", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReplicatedVRCameraComponent, TrackingScaler), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_TrackingScaler_MetaData), Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_TrackingScaler_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bLimitMinHeight_MetaData[] = {
		{ "Category", "ReplicatedCamera|Advanced|Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true we will use the minimum height value to clamp the Z too\n" },
#endif
		{ "ModuleRelativePath", "Public/ReplicatedVRCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true we will use the minimum height value to clamp the Z too" },
#endif
	};
#endif
	void Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bLimitMinHeight_SetBit(void* Obj)
	{
		((UReplicatedVRCameraComponent*)Obj)->bLimitMinHeight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bLimitMinHeight = { "bLimitMinHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UReplicatedVRCameraComponent), &Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bLimitMinHeight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bLimitMinHeight_MetaData), Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bLimitMinHeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_MinimumHeightAllowed_MetaData[] = {
		{ "Category", "ReplicatedCamera|Advanced|Tracking" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The minimum height to allow for this camera\n" },
#endif
		{ "EditCondition", "bLimitMinHeight" },
		{ "ModuleRelativePath", "Public/ReplicatedVRCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The minimum height to allow for this camera" },
#endif
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_MinimumHeightAllowed = { "MinimumHeightAllowed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReplicatedVRCameraComponent, MinimumHeightAllowed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_MinimumHeightAllowed_MetaData), Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_MinimumHeightAllowed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bLimitMaxHeight_MetaData[] = {
		{ "Category", "ReplicatedCamera|Advanced|Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true will limit the max Z height that the camera is capable of reaching\n" },
#endif
		{ "ModuleRelativePath", "Public/ReplicatedVRCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true will limit the max Z height that the camera is capable of reaching" },
#endif
	};
#endif
	void Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bLimitMaxHeight_SetBit(void* Obj)
	{
		((UReplicatedVRCameraComponent*)Obj)->bLimitMaxHeight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bLimitMaxHeight = { "bLimitMaxHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UReplicatedVRCameraComponent), &Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bLimitMaxHeight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bLimitMaxHeight_MetaData), Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bLimitMaxHeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_MaxHeightAllowed_MetaData[] = {
		{ "Category", "ReplicatedCamera|Advanced|Tracking" },
		{ "ClampMin", "0.1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If we are limiting the max height, this is the maximum allowed value\n" },
#endif
		{ "EditCondition", "bLimitMaxHeight" },
		{ "ModuleRelativePath", "Public/ReplicatedVRCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If we are limiting the max height, this is the maximum allowed value" },
#endif
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_MaxHeightAllowed = { "MaxHeightAllowed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReplicatedVRCameraComponent, MaxHeightAllowed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_MaxHeightAllowed_MetaData), Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_MaxHeightAllowed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bLimitBounds_MetaData[] = {
		{ "Category", "ReplicatedCamera|Advanced|Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true will limit the maximum offset from center of the players tracked space\n" },
#endif
		{ "ModuleRelativePath", "Public/ReplicatedVRCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true will limit the maximum offset from center of the players tracked space" },
#endif
	};
#endif
	void Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bLimitBounds_SetBit(void* Obj)
	{
		((UReplicatedVRCameraComponent*)Obj)->bLimitBounds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bLimitBounds = { "bLimitBounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UReplicatedVRCameraComponent), &Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bLimitBounds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bLimitBounds_MetaData), Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bLimitBounds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_MaximumTrackedBounds_MetaData[] = {
		{ "Category", "ReplicatedCamera|Advanced|Tracking" },
		{ "ClampMin", "0.1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If we are limiting the maximum bounds, this is the maximum length of the vector from the center of the tracked space\n" },
#endif
		{ "EditCondition", "bLimitBounds" },
		{ "ModuleRelativePath", "Public/ReplicatedVRCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If we are limiting the maximum bounds, this is the maximum length of the vector from the center of the tracked space" },
#endif
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_MaximumTrackedBounds = { "MaximumTrackedBounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReplicatedVRCameraComponent, MaximumTrackedBounds), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_MaximumTrackedBounds_MetaData), Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_MaximumTrackedBounds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bAutoSetLockToHmd_MetaData[] = {
		{ "Category", "ReplicatedCamera|Advanced|Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets lock to hmd automatically based on if the camera is currently locally controlled or not */" },
#endif
		{ "ModuleRelativePath", "Public/ReplicatedVRCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets lock to hmd automatically based on if the camera is currently locally controlled or not" },
#endif
	};
#endif
	void Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bAutoSetLockToHmd_SetBit(void* Obj)
	{
		((UReplicatedVRCameraComponent*)Obj)->bAutoSetLockToHmd = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bAutoSetLockToHmd = { "bAutoSetLockToHmd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UReplicatedVRCameraComponent), &Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bAutoSetLockToHmd_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bAutoSetLockToHmd_MetaData), Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bAutoSetLockToHmd_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_ReplicatedCameraTransform_MetaData[] = {
		{ "Category", "ReplicatedCamera|Networking" },
		{ "ModuleRelativePath", "Public/ReplicatedVRCameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_ReplicatedCameraTransform = { "ReplicatedCameraTransform", "OnRep_ReplicatedCameraTransform", (EPropertyFlags)0x0010000100010021, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReplicatedVRCameraComponent, ReplicatedCameraTransform), Z_Construct_UScriptStruct_FBPVRComponentPosRep, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_ReplicatedCameraTransform_MetaData), Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_ReplicatedCameraTransform_MetaData) }; // 2078088838
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bSmoothReplicatedMotion_MetaData[] = {
		{ "Category", "ReplicatedCamera|Networking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether to smooth (lerp) between ticks for the replicated motion, DOES NOTHING if update rate is larger than FPS!\n" },
#endif
		{ "ModuleRelativePath", "Public/ReplicatedVRCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to smooth (lerp) between ticks for the replicated motion, DOES NOTHING if update rate is larger than FPS!" },
#endif
	};
#endif
	void Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bSmoothReplicatedMotion_SetBit(void* Obj)
	{
		((UReplicatedVRCameraComponent*)Obj)->bSmoothReplicatedMotion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bSmoothReplicatedMotion = { "bSmoothReplicatedMotion", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UReplicatedVRCameraComponent), &Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bSmoothReplicatedMotion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bSmoothReplicatedMotion_MetaData), Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bSmoothReplicatedMotion_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bUseExponentialSmoothing_MetaData[] = {
		{ "Category", "ReplicatedCamera|Networking|Smoothing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true then we will use exponential smoothing with buffered correction\n" },
#endif
		{ "editcondition", "bSmoothReplicatedMotion" },
		{ "ModuleRelativePath", "Public/ReplicatedVRCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true then we will use exponential smoothing with buffered correction" },
#endif
	};
#endif
	void Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bUseExponentialSmoothing_SetBit(void* Obj)
	{
		((UReplicatedVRCameraComponent*)Obj)->bUseExponentialSmoothing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bUseExponentialSmoothing = { "bUseExponentialSmoothing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UReplicatedVRCameraComponent), &Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bUseExponentialSmoothing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bUseExponentialSmoothing_MetaData), Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bUseExponentialSmoothing_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_InterpolationSpeed_MetaData[] = {
		{ "Category", "ReplicatedCamera|Networking|Smoothing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Timestep of smoothing translation\n" },
#endif
		{ "editcondition", "bUseExponentialSmoothing" },
		{ "ModuleRelativePath", "Public/ReplicatedVRCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Timestep of smoothing translation" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_InterpolationSpeed = { "InterpolationSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReplicatedVRCameraComponent, InterpolationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_InterpolationSpeed_MetaData), Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_InterpolationSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_NetworkMaxSmoothUpdateDistance_MetaData[] = {
		{ "Category", "ReplicatedCamera|Networking|Smoothing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Max distance to allow smoothing before snapping the remainder\n" },
#endif
		{ "editcondition", "bUseExponentialSmoothing" },
		{ "ModuleRelativePath", "Public/ReplicatedVRCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max distance to allow smoothing before snapping the remainder" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_NetworkMaxSmoothUpdateDistance = { "NetworkMaxSmoothUpdateDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReplicatedVRCameraComponent, NetworkMaxSmoothUpdateDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_NetworkMaxSmoothUpdateDistance_MetaData), Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_NetworkMaxSmoothUpdateDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_NetworkNoSmoothUpdateDistance_MetaData[] = {
		{ "Category", "ReplicatedCamera|Networking|Smoothing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Max distance to allow smoothing before snapping entirely to the new position\n" },
#endif
		{ "editcondition", "bUseExponentialSmoothing" },
		{ "ModuleRelativePath", "Public/ReplicatedVRCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max distance to allow smoothing before snapping entirely to the new position" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_NetworkNoSmoothUpdateDistance = { "NetworkNoSmoothUpdateDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReplicatedVRCameraComponent, NetworkNoSmoothUpdateDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_NetworkNoSmoothUpdateDistance_MetaData), Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_NetworkNoSmoothUpdateDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_NetUpdateRate_MetaData[] = {
		{ "Category", "ReplicatedCamera|Networking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Rate to update the position to the server, 100htz is default (same as replication rate, should also hit every tick).\n// On dedicated servers the update rate should be at or lower than the server tick rate for smoothing to work\n" },
#endif
		{ "ModuleRelativePath", "Public/ReplicatedVRCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rate to update the position to the server, 100htz is default (same as replication rate, should also hit every tick).\nOn dedicated servers the update rate should be at or lower than the server tick rate for smoothing to work" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_NetUpdateRate = { "NetUpdateRate", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReplicatedVRCameraComponent, NetUpdateRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_NetUpdateRate_MetaData), Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_NetUpdateRate_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bUpdateInCharacterMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_AttachChar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bSampleVelocityInWorldSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bFPSDebugMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bSetPositionDuringTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bScaleTracking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_TrackingScaler,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bLimitMinHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_MinimumHeightAllowed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bLimitMaxHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_MaxHeightAllowed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bLimitBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_MaximumTrackedBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bAutoSetLockToHmd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_ReplicatedCameraTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bSmoothReplicatedMotion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bUseExponentialSmoothing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_InterpolationSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_NetworkMaxSmoothUpdateDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_NetworkNoSmoothUpdateDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_NetUpdateRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReplicatedVRCameraComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::ClassParams = {
		&UReplicatedVRCameraComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UReplicatedVRCameraComponent()
	{
		if (!Z_Registration_Info_UClass_UReplicatedVRCameraComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReplicatedVRCameraComponent.OuterSingleton, Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReplicatedVRCameraComponent.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UReplicatedVRCameraComponent>()
	{
		return UReplicatedVRCameraComponent::StaticClass();
	}

	void UReplicatedVRCameraComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ReplicatedCameraTransform(TEXT("ReplicatedCameraTransform"));
		static const FName Name_bSmoothReplicatedMotion(TEXT("bSmoothReplicatedMotion"));
		static const FName Name_NetUpdateRate(TEXT("NetUpdateRate"));

		const bool bIsValid = true
			&& Name_ReplicatedCameraTransform == ClassReps[(int32)ENetFields_Private::ReplicatedCameraTransform].Property->GetFName()
			&& Name_bSmoothReplicatedMotion == ClassReps[(int32)ENetFields_Private::bSmoothReplicatedMotion].Property->GetFName()
			&& Name_NetUpdateRate == ClassReps[(int32)ENetFields_Private::NetUpdateRate].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UReplicatedVRCameraComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReplicatedVRCameraComponent);
	UReplicatedVRCameraComponent::~UReplicatedVRCameraComponent() {}
	struct Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReplicatedVRCameraComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReplicatedVRCameraComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReplicatedVRCameraComponent, UReplicatedVRCameraComponent::StaticClass, TEXT("UReplicatedVRCameraComponent"), &Z_Registration_Info_UClass_UReplicatedVRCameraComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReplicatedVRCameraComponent), 3039620200U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReplicatedVRCameraComponent_h_3043692054(TEXT("/Script/VRExpansionPlugin"),
		Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReplicatedVRCameraComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReplicatedVRCameraComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
