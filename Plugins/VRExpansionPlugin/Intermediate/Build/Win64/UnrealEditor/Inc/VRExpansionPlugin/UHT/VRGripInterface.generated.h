// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VRGripInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGripMotionControllerComponent;
class USceneComponent;
class UVRGripScriptBase;
enum class EGripCollisionType : uint8;
enum class EGripInterfaceTeleportBehavior : uint8;
enum class EGripLateUpdateSettings : uint8;
enum class EGripMovementReplicationSettings : uint8;
enum class ESecondaryGripType : uint8;
struct FBPActorGripInformation;
struct FBPAdvGripSettings;
struct FBPGripPair;
struct FKey;
struct FTransform_NetQuantize;
#ifdef VREXPANSIONPLUGIN_VRGripInterface_generated_h
#error "VRGripInterface.generated.h already included, missing '#pragma once' in VRGripInterface.h"
#endif
#define VREXPANSIONPLUGIN_VRGripInterface_generated_h

#define FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_26_DELEGATE \
VREXPANSIONPLUGIN_API void FVROnGripSignature_DelegateWrapper(const FMulticastScriptDelegate& VROnGripSignature, UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation);


#define FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_29_DELEGATE \
VREXPANSIONPLUGIN_API void FVROnDropSignature_DelegateWrapper(const FMulticastScriptDelegate& VROnDropSignature, UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation, bool bWasSocketed);


#define FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_21_SPARSE_DATA
#define FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_21_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_21_RPC_WRAPPERS \
	virtual bool GetGripScripts_Implementation(TArray<UVRGripScriptBase*>& ArrayReference) { return false; }; \
	virtual bool RequestsSocketing_Implementation(USceneComponent*& ParentToSocketTo, FName& OptionalSocketName, FTransform_NetQuantize& RelativeTransform) { return false; }; \
	virtual void SetHeld_Implementation(UGripMotionControllerComponent* HoldingController, uint8 GripID, bool bIsHeld) {}; \
	virtual void IsHeld_Implementation(TArray<FBPGripPair>& HoldingControllers, bool& bIsHeld) {}; \
	virtual bool AllowsMultipleGrips_Implementation() { return false; }; \
	virtual void OnInput_Implementation(FKey Key, EInputEvent KeyEvent) {}; \
	virtual void OnEndSecondaryUsed_Implementation() {}; \
	virtual void OnSecondaryUsed_Implementation() {}; \
	virtual void OnEndUsed_Implementation() {}; \
	virtual void OnUsed_Implementation() {}; \
	virtual void OnSecondaryGripRelease_Implementation(UGripMotionControllerComponent* GripOwningController, USceneComponent* ReleasingSecondaryGripComponent, FBPActorGripInformation const& GripInformation) {}; \
	virtual void OnSecondaryGrip_Implementation(UGripMotionControllerComponent* GripOwningController, USceneComponent* SecondaryGripComponent, FBPActorGripInformation const& GripInformation) {}; \
	virtual void OnChildGripRelease_Implementation(UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation, bool bWasSocketed) {}; \
	virtual void OnChildGrip_Implementation(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation) {}; \
	virtual void OnGripRelease_Implementation(UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation, bool bWasSocketed) {}; \
	virtual void OnGrip_Implementation(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation) {}; \
	virtual void TickGrip_Implementation(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation, float DeltaTime) {}; \
	virtual void ClosestGripSlotInRange_Implementation(FVector WorldLocation, bool bSecondarySlot, bool& bHadSlotInRange, FTransform& SlotWorldTransform, FName& SlotName, UGripMotionControllerComponent* CallingController, FName OverridePrefix) {}; \
	virtual float GripBreakDistance_Implementation() { return 0; }; \
	virtual FBPAdvGripSettings AdvancedGripSettings_Implementation() { return FBPAdvGripSettings(); }; \
	virtual void GetGripStiffnessAndDamping_Implementation(float& GripStiffnessOut, float& GripDampingOut) {}; \
	virtual EGripMovementReplicationSettings GripMovementReplicationType_Implementation() { return (EGripMovementReplicationSettings)0; }; \
	virtual EGripLateUpdateSettings GripLateUpdateSetting_Implementation() { return (EGripLateUpdateSettings)0; }; \
	virtual ESecondaryGripType SecondaryGripType_Implementation() { return (ESecondaryGripType)0; }; \
	virtual EGripCollisionType GetPrimaryGripType_Implementation(bool bIsSlot) { return (EGripCollisionType)0; }; \
	virtual bool SimulateOnDrop_Implementation() { return false; }; \
	virtual EGripInterfaceTeleportBehavior TeleportBehavior_Implementation() { return (EGripInterfaceTeleportBehavior)0; }; \
	virtual bool DenyGripping_Implementation(UGripMotionControllerComponent* GripInitiator) { return false; }; \
 \
	DECLARE_FUNCTION(execGetGripScripts); \
	DECLARE_FUNCTION(execRequestsSocketing); \
	DECLARE_FUNCTION(execSetHeld); \
	DECLARE_FUNCTION(execIsHeld); \
	DECLARE_FUNCTION(execAllowsMultipleGrips); \
	DECLARE_FUNCTION(execOnInput); \
	DECLARE_FUNCTION(execOnEndSecondaryUsed); \
	DECLARE_FUNCTION(execOnSecondaryUsed); \
	DECLARE_FUNCTION(execOnEndUsed); \
	DECLARE_FUNCTION(execOnUsed); \
	DECLARE_FUNCTION(execOnSecondaryGripRelease); \
	DECLARE_FUNCTION(execOnSecondaryGrip); \
	DECLARE_FUNCTION(execOnChildGripRelease); \
	DECLARE_FUNCTION(execOnChildGrip); \
	DECLARE_FUNCTION(execOnGripRelease); \
	DECLARE_FUNCTION(execOnGrip); \
	DECLARE_FUNCTION(execTickGrip); \
	DECLARE_FUNCTION(execClosestGripSlotInRange); \
	DECLARE_FUNCTION(execGripBreakDistance); \
	DECLARE_FUNCTION(execAdvancedGripSettings); \
	DECLARE_FUNCTION(execGetGripStiffnessAndDamping); \
	DECLARE_FUNCTION(execGripMovementReplicationType); \
	DECLARE_FUNCTION(execGripLateUpdateSetting); \
	DECLARE_FUNCTION(execSecondaryGripType); \
	DECLARE_FUNCTION(execGetPrimaryGripType); \
	DECLARE_FUNCTION(execSimulateOnDrop); \
	DECLARE_FUNCTION(execTeleportBehavior); \
	DECLARE_FUNCTION(execDenyGripping);


#define FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_21_ACCESSORS
#define FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_21_CALLBACK_WRAPPERS
#define FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRGripInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRGripInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRGripInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRGripInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRGripInterface(UVRGripInterface&&); \
	NO_API UVRGripInterface(const UVRGripInterface&); \
public: \
	NO_API virtual ~UVRGripInterface();


#define FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_21_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUVRGripInterface(); \
	friend struct Z_Construct_UClass_UVRGripInterface_Statics; \
public: \
	DECLARE_CLASS(UVRGripInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRGripInterface)


#define FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_21_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_21_GENERATED_UINTERFACE_BODY() \
	FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_21_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_21_INCLASS_IINTERFACE \
protected: \
	virtual ~IVRGripInterface() {} \
public: \
	typedef UVRGripInterface UClassType; \
	typedef IVRGripInterface ThisClass; \
	static FBPAdvGripSettings Execute_AdvancedGripSettings(UObject* O); \
	static bool Execute_AllowsMultipleGrips(UObject* O); \
	static void Execute_ClosestGripSlotInRange(UObject* O, FVector WorldLocation, bool bSecondarySlot, bool& bHadSlotInRange, FTransform& SlotWorldTransform, FName& SlotName, UGripMotionControllerComponent* CallingController, FName OverridePrefix); \
	static bool Execute_DenyGripping(UObject* O, UGripMotionControllerComponent* GripInitiator); \
	static bool Execute_GetGripScripts(UObject* O, TArray<UVRGripScriptBase*>& ArrayReference); \
	static void Execute_GetGripStiffnessAndDamping(UObject* O, float& GripStiffnessOut, float& GripDampingOut); \
	static EGripCollisionType Execute_GetPrimaryGripType(UObject* O, bool bIsSlot); \
	static float Execute_GripBreakDistance(UObject* O); \
	static EGripLateUpdateSettings Execute_GripLateUpdateSetting(UObject* O); \
	static EGripMovementReplicationSettings Execute_GripMovementReplicationType(UObject* O); \
	static void Execute_IsHeld(UObject* O, TArray<FBPGripPair>& HoldingControllers, bool& bIsHeld); \
	static void Execute_OnChildGrip(UObject* O, UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation); \
	static void Execute_OnChildGripRelease(UObject* O, UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation, bool bWasSocketed); \
	static void Execute_OnEndSecondaryUsed(UObject* O); \
	static void Execute_OnEndUsed(UObject* O); \
	static void Execute_OnGrip(UObject* O, UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation); \
	static void Execute_OnGripRelease(UObject* O, UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation, bool bWasSocketed); \
	static void Execute_OnInput(UObject* O, FKey Key, EInputEvent KeyEvent); \
	static void Execute_OnSecondaryGrip(UObject* O, UGripMotionControllerComponent* GripOwningController, USceneComponent* SecondaryGripComponent, FBPActorGripInformation const& GripInformation); \
	static void Execute_OnSecondaryGripRelease(UObject* O, UGripMotionControllerComponent* GripOwningController, USceneComponent* ReleasingSecondaryGripComponent, FBPActorGripInformation const& GripInformation); \
	static void Execute_OnSecondaryUsed(UObject* O); \
	static void Execute_OnUsed(UObject* O); \
	static bool Execute_RequestsSocketing(UObject* O, USceneComponent*& ParentToSocketTo, FName& OptionalSocketName, FTransform_NetQuantize& RelativeTransform); \
	static ESecondaryGripType Execute_SecondaryGripType(UObject* O); \
	static void Execute_SetHeld(UObject* O, UGripMotionControllerComponent* HoldingController, uint8 GripID, bool bIsHeld); \
	static bool Execute_SimulateOnDrop(UObject* O); \
	static EGripInterfaceTeleportBehavior Execute_TeleportBehavior(UObject* O); \
	static void Execute_TickGrip(UObject* O, UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation, float DeltaTime); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_18_PROLOG
#define FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_21_SPARSE_DATA \
	FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_21_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_21_RPC_WRAPPERS \
	FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_21_ACCESSORS \
	FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_21_CALLBACK_WRAPPERS \
	FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_21_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class UVRGripInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
