// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/VRRootComponent.h"
#include "VRExpansionPlugin/Public/VRBPDatatypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRRootComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRRootComponent();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRRootComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRTrackedParentInterface_NoRegister();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPVRWaistTracking_Info();
// End Cross Module References
	DEFINE_FUNCTION(UVRRootComponent::execSetTrackingPaused)
	{
		P_GET_UBOOL(Z_Param_bPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTrackingPaused(Z_Param_bPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRRootComponent::execSetCapsuleHalfHeightVR)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_HalfHeight);
		P_GET_UBOOL(Z_Param_bUpdateOverlaps);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCapsuleHalfHeightVR(Z_Param_HalfHeight,Z_Param_bUpdateOverlaps);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRRootComponent::execSetCapsuleSizeVR)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewRadius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewHalfHeight);
		P_GET_UBOOL(Z_Param_bUpdateOverlaps);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCapsuleSizeVR(Z_Param_NewRadius,Z_Param_NewHalfHeight,Z_Param_bUpdateOverlaps);
		P_NATIVE_END;
	}
	void UVRRootComponent::StaticRegisterNativesUVRRootComponent()
	{
		UClass* Class = UVRRootComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetCapsuleHalfHeightVR", &UVRRootComponent::execSetCapsuleHalfHeightVR },
			{ "SetCapsuleSizeVR", &UVRRootComponent::execSetCapsuleSizeVR },
			{ "SetTrackingPaused", &UVRRootComponent::execSetTrackingPaused },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVRRootComponent_SetCapsuleHalfHeightVR_Statics
	{
		struct VRRootComponent_eventSetCapsuleHalfHeightVR_Parms
		{
			float HalfHeight;
			bool bUpdateOverlaps;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HalfHeight;
		static void NewProp_bUpdateOverlaps_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateOverlaps;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRRootComponent_SetCapsuleHalfHeightVR_Statics::NewProp_HalfHeight = { "HalfHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRRootComponent_eventSetCapsuleHalfHeightVR_Parms, HalfHeight), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UVRRootComponent_SetCapsuleHalfHeightVR_Statics::NewProp_bUpdateOverlaps_SetBit(void* Obj)
	{
		((VRRootComponent_eventSetCapsuleHalfHeightVR_Parms*)Obj)->bUpdateOverlaps = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRRootComponent_SetCapsuleHalfHeightVR_Statics::NewProp_bUpdateOverlaps = { "bUpdateOverlaps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRRootComponent_eventSetCapsuleHalfHeightVR_Parms), &Z_Construct_UFunction_UVRRootComponent_SetCapsuleHalfHeightVR_Statics::NewProp_bUpdateOverlaps_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRRootComponent_SetCapsuleHalfHeightVR_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRRootComponent_SetCapsuleHalfHeightVR_Statics::NewProp_HalfHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRRootComponent_SetCapsuleHalfHeightVR_Statics::NewProp_bUpdateOverlaps,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRRootComponent_SetCapsuleHalfHeightVR_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Capsule" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Used to update the capsule half height and calculate the new offset value for VR\n// If updating the capsule height in VR you should be using this function or SetCapsuleSizeVR\n" },
#endif
		{ "CPP_Default_bUpdateOverlaps", "true" },
		{ "ModuleRelativePath", "Public/VRRootComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used to update the capsule half height and calculate the new offset value for VR\nIf updating the capsule height in VR you should be using this function or SetCapsuleSizeVR" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRRootComponent_SetCapsuleHalfHeightVR_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRRootComponent, nullptr, "SetCapsuleHalfHeightVR", nullptr, nullptr, Z_Construct_UFunction_UVRRootComponent_SetCapsuleHalfHeightVR_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRRootComponent_SetCapsuleHalfHeightVR_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRRootComponent_SetCapsuleHalfHeightVR_Statics::VRRootComponent_eventSetCapsuleHalfHeightVR_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRRootComponent_SetCapsuleHalfHeightVR_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRRootComponent_SetCapsuleHalfHeightVR_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRRootComponent_SetCapsuleHalfHeightVR_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVRRootComponent_SetCapsuleHalfHeightVR_Statics::VRRootComponent_eventSetCapsuleHalfHeightVR_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVRRootComponent_SetCapsuleHalfHeightVR()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRRootComponent_SetCapsuleHalfHeightVR_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRRootComponent_SetCapsuleSizeVR_Statics
	{
		struct VRRootComponent_eventSetCapsuleSizeVR_Parms
		{
			float NewRadius;
			float NewHalfHeight;
			bool bUpdateOverlaps;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewRadius;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewHalfHeight;
		static void NewProp_bUpdateOverlaps_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateOverlaps;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRRootComponent_SetCapsuleSizeVR_Statics::NewProp_NewRadius = { "NewRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRRootComponent_eventSetCapsuleSizeVR_Parms, NewRadius), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRRootComponent_SetCapsuleSizeVR_Statics::NewProp_NewHalfHeight = { "NewHalfHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRRootComponent_eventSetCapsuleSizeVR_Parms, NewHalfHeight), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UVRRootComponent_SetCapsuleSizeVR_Statics::NewProp_bUpdateOverlaps_SetBit(void* Obj)
	{
		((VRRootComponent_eventSetCapsuleSizeVR_Parms*)Obj)->bUpdateOverlaps = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRRootComponent_SetCapsuleSizeVR_Statics::NewProp_bUpdateOverlaps = { "bUpdateOverlaps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRRootComponent_eventSetCapsuleSizeVR_Parms), &Z_Construct_UFunction_UVRRootComponent_SetCapsuleSizeVR_Statics::NewProp_bUpdateOverlaps_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRRootComponent_SetCapsuleSizeVR_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRRootComponent_SetCapsuleSizeVR_Statics::NewProp_NewRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRRootComponent_SetCapsuleSizeVR_Statics::NewProp_NewHalfHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRRootComponent_SetCapsuleSizeVR_Statics::NewProp_bUpdateOverlaps,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRRootComponent_SetCapsuleSizeVR_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Capsule" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* This is overidden for the VR Character to re-set physics location\n\x09* If updating the capsule height in VR you should be using this function or SetCapsuleHalfHeightVR\n\x09* Change the capsule size. This is the unscaled size, before component scale is applied.\n\x09* @param\x09InRadius : radius of end-cap hemispheres and center cylinder.\n\x09* @param\x09InHalfHeight : half-height, from capsule center to end of top or bottom hemisphere.\n\x09* @param\x09""bUpdateOverlaps: if true and this shape is registered and collides, updates touching array for owner actor.\n\x09*/" },
#endif
		{ "CPP_Default_bUpdateOverlaps", "true" },
		{ "ModuleRelativePath", "Public/VRRootComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is overidden for the VR Character to re-set physics location\nIf updating the capsule height in VR you should be using this function or SetCapsuleHalfHeightVR\nChange the capsule size. This is the unscaled size, before component scale is applied.\n@param        InRadius : radius of end-cap hemispheres and center cylinder.\n@param        InHalfHeight : half-height, from capsule center to end of top or bottom hemisphere.\n@param        bUpdateOverlaps: if true and this shape is registered and collides, updates touching array for owner actor." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRRootComponent_SetCapsuleSizeVR_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRRootComponent, nullptr, "SetCapsuleSizeVR", nullptr, nullptr, Z_Construct_UFunction_UVRRootComponent_SetCapsuleSizeVR_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRRootComponent_SetCapsuleSizeVR_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRRootComponent_SetCapsuleSizeVR_Statics::VRRootComponent_eventSetCapsuleSizeVR_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRRootComponent_SetCapsuleSizeVR_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRRootComponent_SetCapsuleSizeVR_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRRootComponent_SetCapsuleSizeVR_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVRRootComponent_SetCapsuleSizeVR_Statics::VRRootComponent_eventSetCapsuleSizeVR_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVRRootComponent_SetCapsuleSizeVR()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRRootComponent_SetCapsuleSizeVR_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRRootComponent_SetTrackingPaused_Statics
	{
		struct VRRootComponent_eventSetTrackingPaused_Parms
		{
			bool bPaused;
		};
		static void NewProp_bPaused_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPaused;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRRootComponent_SetTrackingPaused_Statics::NewProp_bPaused_SetBit(void* Obj)
	{
		((VRRootComponent_eventSetTrackingPaused_Parms*)Obj)->bPaused = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRRootComponent_SetTrackingPaused_Statics::NewProp_bPaused = { "bPaused", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRRootComponent_eventSetTrackingPaused_Parms), &Z_Construct_UFunction_UVRRootComponent_SetTrackingPaused_Statics::NewProp_bPaused_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRRootComponent_SetTrackingPaused_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRRootComponent_SetTrackingPaused_Statics::NewProp_bPaused,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRRootComponent_SetTrackingPaused_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRExpansionLibrary" },
		{ "ModuleRelativePath", "Public/VRRootComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRRootComponent_SetTrackingPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRRootComponent, nullptr, "SetTrackingPaused", nullptr, nullptr, Z_Construct_UFunction_UVRRootComponent_SetTrackingPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRRootComponent_SetTrackingPaused_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRRootComponent_SetTrackingPaused_Statics::VRRootComponent_eventSetTrackingPaused_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRRootComponent_SetTrackingPaused_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRRootComponent_SetTrackingPaused_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRRootComponent_SetTrackingPaused_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVRRootComponent_SetTrackingPaused_Statics::VRRootComponent_eventSetTrackingPaused_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVRRootComponent_SetTrackingPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRRootComponent_SetTrackingPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVRRootComponent);
	UClass* Z_Construct_UClass_UVRRootComponent_NoRegister()
	{
		return UVRRootComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVRRootComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionalWaistTrackingParent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OptionalWaistTrackingParent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetPrimitiveComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TargetPrimitiveComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VRCapsuleOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VRCapsuleOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPauseTracking_MetaData[];
#endif
		static void NewProp_bPauseTracking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPauseTracking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCenterCapsuleOnHMD_MetaData[];
#endif
		static void NewProp_bCenterCapsuleOnHMD_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCenterCapsuleOnHMD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowSimulatingCollision_MetaData[];
#endif
		static void NewProp_bAllowSimulatingCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowSimulatingCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseWalkingCollisionOverride_MetaData[];
#endif
		static void NewProp_bUseWalkingCollisionOverride_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseWalkingCollisionOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WalkingCollisionOverride_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_WalkingCollisionOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHadRelativeMovement_MetaData[];
#endif
		static void NewProp_bHadRelativeMovement_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHadRelativeMovement;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVRRootComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCapsuleComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVRRootComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UVRRootComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVRRootComponent_SetCapsuleHalfHeightVR, "SetCapsuleHalfHeightVR" }, // 2256568068
		{ &Z_Construct_UFunction_UVRRootComponent_SetCapsuleSizeVR, "SetCapsuleSizeVR" }, // 3183384481
		{ &Z_Construct_UFunction_UVRRootComponent_SetTrackingPaused, "SetTrackingPaused" }, // 1006900802
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVRRootComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRRootComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "VRExpansionLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* A capsule component that repositions its physics scene and rendering location to the camera/HMD's relative position.\n* Generally not to be used by itself unless on a base Pawn and not a character, the VRCharacter has been highly customized to correctly support it.\n*/" },
#endif
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "VRRootComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VRRootComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A capsule component that repositions its physics scene and rendering location to the camera/HMD's relative position.\nGenerally not to be used by itself unless on a base Pawn and not a character, the VRCharacter has been highly customized to correctly support it." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRRootComponent_Statics::NewProp_OptionalWaistTrackingParent_MetaData[] = {
		{ "Category", "VRTrackedParentInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If valid will use this as the tracked parent instead of the HMD / Parent\n" },
#endif
		{ "ModuleRelativePath", "Public/VRRootComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If valid will use this as the tracked parent instead of the HMD / Parent" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVRRootComponent_Statics::NewProp_OptionalWaistTrackingParent = { "OptionalWaistTrackingParent", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRRootComponent, OptionalWaistTrackingParent), Z_Construct_UScriptStruct_FBPVRWaistTracking_Info, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRRootComponent_Statics::NewProp_OptionalWaistTrackingParent_MetaData), Z_Construct_UClass_UVRRootComponent_Statics::NewProp_OptionalWaistTrackingParent_MetaData) }; // 652357811
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRRootComponent_Statics::NewProp_TargetPrimitiveComponent_MetaData[] = {
		{ "Category", "VRExpansionLibrary" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VRRootComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVRRootComponent_Statics::NewProp_TargetPrimitiveComponent = { "TargetPrimitiveComponent", nullptr, (EPropertyFlags)0x001400000008200c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRRootComponent, TargetPrimitiveComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRRootComponent_Statics::NewProp_TargetPrimitiveComponent_MetaData), Z_Construct_UClass_UVRRootComponent_Statics::NewProp_TargetPrimitiveComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRRootComponent_Statics::NewProp_VRCapsuleOffset_MetaData[] = {
		{ "Category", "VRExpansionLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Used to offset the collision (IE backwards from the player slightly.\n// The default 2.15 Z offset is to account for floor hover from the character movement component.\n" },
#endif
		{ "ModuleRelativePath", "Public/VRRootComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used to offset the collision (IE backwards from the player slightly.\nThe default 2.15 Z offset is to account for floor hover from the character movement component." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVRRootComponent_Statics::NewProp_VRCapsuleOffset = { "VRCapsuleOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRRootComponent, VRCapsuleOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRRootComponent_Statics::NewProp_VRCapsuleOffset_MetaData), Z_Construct_UClass_UVRRootComponent_Statics::NewProp_VRCapsuleOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRRootComponent_Statics::NewProp_bPauseTracking_MetaData[] = {
		{ "Category", "VRExpansionLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true we will stop tracking the camera / hmd until enabled again\n" },
#endif
		{ "ModuleRelativePath", "Public/VRRootComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true we will stop tracking the camera / hmd until enabled again" },
#endif
	};
#endif
	void Z_Construct_UClass_UVRRootComponent_Statics::NewProp_bPauseTracking_SetBit(void* Obj)
	{
		((UVRRootComponent*)Obj)->bPauseTracking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRRootComponent_Statics::NewProp_bPauseTracking = { "bPauseTracking", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRRootComponent), &Z_Construct_UClass_UVRRootComponent_Statics::NewProp_bPauseTracking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRRootComponent_Statics::NewProp_bPauseTracking_MetaData), Z_Construct_UClass_UVRRootComponent_Statics::NewProp_bPauseTracking_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRRootComponent_Statics::NewProp_bCenterCapsuleOnHMD_MetaData[] = {
		{ "Category", "VRExpansionLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// #TODO: See if making this multiplayer compatible is viable\n// Offsets capsule to be centered on HMD - currently NOT multiplayer compatible\n" },
#endif
		{ "ModuleRelativePath", "Public/VRRootComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "#TODO: See if making this multiplayer compatible is viable\nOffsets capsule to be centered on HMD - currently NOT multiplayer compatible" },
#endif
	};
#endif
	void Z_Construct_UClass_UVRRootComponent_Statics::NewProp_bCenterCapsuleOnHMD_SetBit(void* Obj)
	{
		((UVRRootComponent*)Obj)->bCenterCapsuleOnHMD = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRRootComponent_Statics::NewProp_bCenterCapsuleOnHMD = { "bCenterCapsuleOnHMD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRRootComponent), &Z_Construct_UClass_UVRRootComponent_Statics::NewProp_bCenterCapsuleOnHMD_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRRootComponent_Statics::NewProp_bCenterCapsuleOnHMD_MetaData), Z_Construct_UClass_UVRRootComponent_Statics::NewProp_bCenterCapsuleOnHMD_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRRootComponent_Statics::NewProp_bAllowSimulatingCollision_MetaData[] = {
		{ "Category", "VRExpansionLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Allows the root component to be blocked by simulating objects (default off due to sickness inducing stuttering).\n" },
#endif
		{ "ModuleRelativePath", "Public/VRRootComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allows the root component to be blocked by simulating objects (default off due to sickness inducing stuttering)." },
#endif
	};
#endif
	void Z_Construct_UClass_UVRRootComponent_Statics::NewProp_bAllowSimulatingCollision_SetBit(void* Obj)
	{
		((UVRRootComponent*)Obj)->bAllowSimulatingCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRRootComponent_Statics::NewProp_bAllowSimulatingCollision = { "bAllowSimulatingCollision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRRootComponent), &Z_Construct_UClass_UVRRootComponent_Statics::NewProp_bAllowSimulatingCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRRootComponent_Statics::NewProp_bAllowSimulatingCollision_MetaData), Z_Construct_UClass_UVRRootComponent_Statics::NewProp_bAllowSimulatingCollision_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRRootComponent_Statics::NewProp_bUseWalkingCollisionOverride_MetaData[] = {
		{ "Category", "VRExpansionLibrary" },
		{ "ModuleRelativePath", "Public/VRRootComponent.h" },
	};
#endif
	void Z_Construct_UClass_UVRRootComponent_Statics::NewProp_bUseWalkingCollisionOverride_SetBit(void* Obj)
	{
		((UVRRootComponent*)Obj)->bUseWalkingCollisionOverride = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRRootComponent_Statics::NewProp_bUseWalkingCollisionOverride = { "bUseWalkingCollisionOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRRootComponent), &Z_Construct_UClass_UVRRootComponent_Statics::NewProp_bUseWalkingCollisionOverride_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRRootComponent_Statics::NewProp_bUseWalkingCollisionOverride_MetaData), Z_Construct_UClass_UVRRootComponent_Statics::NewProp_bUseWalkingCollisionOverride_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRRootComponent_Statics::NewProp_WalkingCollisionOverride_MetaData[] = {
		{ "Category", "VRExpansionLibrary" },
		{ "ModuleRelativePath", "Public/VRRootComponent.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVRRootComponent_Statics::NewProp_WalkingCollisionOverride = { "WalkingCollisionOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRRootComponent, WalkingCollisionOverride), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRRootComponent_Statics::NewProp_WalkingCollisionOverride_MetaData), Z_Construct_UClass_UVRRootComponent_Statics::NewProp_WalkingCollisionOverride_MetaData) }; // 1822723181
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRRootComponent_Statics::NewProp_bHadRelativeMovement_MetaData[] = {
		{ "Category", "VRExpansionLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// While misnamed, is true if we collided with a wall/obstacle due to the HMDs movement in this frame (not movement components)\n" },
#endif
		{ "ModuleRelativePath", "Public/VRRootComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "While misnamed, is true if we collided with a wall/obstacle due to the HMDs movement in this frame (not movement components)" },
#endif
	};
#endif
	void Z_Construct_UClass_UVRRootComponent_Statics::NewProp_bHadRelativeMovement_SetBit(void* Obj)
	{
		((UVRRootComponent*)Obj)->bHadRelativeMovement = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRRootComponent_Statics::NewProp_bHadRelativeMovement = { "bHadRelativeMovement", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRRootComponent), &Z_Construct_UClass_UVRRootComponent_Statics::NewProp_bHadRelativeMovement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRRootComponent_Statics::NewProp_bHadRelativeMovement_MetaData), Z_Construct_UClass_UVRRootComponent_Statics::NewProp_bHadRelativeMovement_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVRRootComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRRootComponent_Statics::NewProp_OptionalWaistTrackingParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRRootComponent_Statics::NewProp_TargetPrimitiveComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRRootComponent_Statics::NewProp_VRCapsuleOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRRootComponent_Statics::NewProp_bPauseTracking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRRootComponent_Statics::NewProp_bCenterCapsuleOnHMD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRRootComponent_Statics::NewProp_bAllowSimulatingCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRRootComponent_Statics::NewProp_bUseWalkingCollisionOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRRootComponent_Statics::NewProp_WalkingCollisionOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRRootComponent_Statics::NewProp_bHadRelativeMovement,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UVRRootComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UVRTrackedParentInterface_NoRegister, (int32)VTABLE_OFFSET(UVRRootComponent, IVRTrackedParentInterface), false },  // 1977504280
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVRRootComponent_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVRRootComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRRootComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVRRootComponent_Statics::ClassParams = {
		&UVRRootComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVRRootComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVRRootComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRRootComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UVRRootComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVRRootComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UVRRootComponent()
	{
		if (!Z_Registration_Info_UClass_UVRRootComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVRRootComponent.OuterSingleton, Z_Construct_UClass_UVRRootComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVRRootComponent.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UVRRootComponent>()
	{
		return UVRRootComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRRootComponent);
	UVRRootComponent::~UVRRootComponent() {}
	struct Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRRootComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRRootComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVRRootComponent, UVRRootComponent::StaticClass, TEXT("UVRRootComponent"), &Z_Registration_Info_UClass_UVRRootComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVRRootComponent), 3595836474U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRRootComponent_h_1891013891(TEXT("/Script/VRExpansionPlugin"),
		Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRRootComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRRootComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
