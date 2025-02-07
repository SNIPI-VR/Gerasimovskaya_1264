// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GripMotionControllerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
class UPrimitiveComponent;
class USceneComponent;
enum class EBPVRResultSwitch : uint8;
enum class EControllerHand : uint8;
enum class EGripCollisionType : uint8;
enum class EGripLateUpdateSettings : uint8;
enum class EGripMovementReplicationSettings : uint8;
enum class ETrackingStatus : uint8;
enum class EVRClientAuthConflictResolutionMode : uint8;
struct FBPActorGripInformation;
struct FBPAdvancedPhysicsHandleSettings;
struct FBPSecondaryGripInfo;
struct FBPVRComponentPosRep;
struct FTransform_NetQuantize;
struct FVector_NetQuantize100;
struct FXRDeviceId;
#ifdef VREXPANSIONPLUGIN_GripMotionControllerComponent_generated_h
#error "GripMotionControllerComponent.generated.h already included, missing '#pragma once' in GripMotionControllerComponent.h"
#endif
#define VREXPANSIONPLUGIN_GripMotionControllerComponent_generated_h

#define FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_42_DELEGATE \
VREXPANSIONPLUGIN_API void FVRGripControllerOnTrackingEventSignature_DelegateWrapper(const FMulticastScriptDelegate& VRGripControllerOnTrackingEventSignature, ETrackingStatus const& NewTrackingStatus);


#define FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_45_DELEGATE \
VREXPANSIONPLUGIN_API void FVROnControllerGripSignature_DelegateWrapper(const FMulticastScriptDelegate& VROnControllerGripSignature, FBPActorGripInformation const& GripInformation);


#define FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_48_DELEGATE \
VREXPANSIONPLUGIN_API void FVROnControllerDropSignature_DelegateWrapper(const FMulticastScriptDelegate& VROnControllerDropSignature, FBPActorGripInformation const& GripInformation, bool bWasSocketed);


#define FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_51_DELEGATE \
VREXPANSIONPLUGIN_API void FVROnControllerSocketSignature_DelegateWrapper(const FMulticastScriptDelegate& VROnControllerSocketSignature, FBPActorGripInformation const& GripInformation, const USceneComponent* NewParentComp, FName OptionalSocketName, FTransform RelativeTransformToParent, bool bWeldingBodies);


#define FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_54_DELEGATE \
VREXPANSIONPLUGIN_API void FVROnControllerTeleportedGripsSignature_DelegateWrapper(const FMulticastScriptDelegate& VROnControllerTeleportedGripsSignature);


#define FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_57_DELEGATE \
VREXPANSIONPLUGIN_API void FVRGripControllerOnGripOutOfRange_DelegateWrapper(const FMulticastScriptDelegate& VRGripControllerOnGripOutOfRange, FBPActorGripInformation const& GripInformation, float Distance);


#define FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_60_DELEGATE \
VREXPANSIONPLUGIN_API void FVRGripControllerOnProfileTransformChanged_DelegateWrapper(const FMulticastScriptDelegate& VRGripControllerOnProfileTransformChanged, FTransform const& NewRelTransForProcComps, FTransform const& NewProfileTransform);


#define FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_63_DELEGATE \
VREXPANSIONPLUGIN_API void FVROnClientAuthGripConflict_DelegateWrapper(const FMulticastScriptDelegate& VROnClientAuthGripConflict, UObject* Object, EVRClientAuthConflictResolutionMode ResolutionMethod);


#define FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_124_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGripComponentEndPhysicsTickFunction_Statics; \
	VREXPANSIONPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FTickFunction Super;


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FGripComponentEndPhysicsTickFunction>();

#define FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_312_SPARSE_DATA
#define FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_312_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_312_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_312_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void NotifyDrop_Implementation(FBPActorGripInformation const& NewDrop, bool bSimulate); \
	virtual void NotifyDropAndSocket_Implementation(FBPActorGripInformation const& NewDrop, USceneComponent* SocketingParent, FName OptionalSocketName, FTransform_NetQuantize const& RelativeTransformToParent, bool bWeldBodies); \
	virtual bool Server_NotifyDropAndSocketGrip_Validate(uint8 , USceneComponent* , FName , FTransform_NetQuantize const& , bool ); \
	virtual void Server_NotifyDropAndSocketGrip_Implementation(uint8 GripID, USceneComponent* SocketingParent, FName OptionalSocketName, FTransform_NetQuantize const& RelativeTransformToParent, bool bWeldBodies); \
	virtual bool Server_SendControllerTransform_Validate(FBPVRComponentPosRep ); \
	virtual void Server_SendControllerTransform_Implementation(FBPVRComponentPosRep NewTransform); \
	virtual bool Server_NotifyHandledTransaction_Validate(uint8 ); \
	virtual void Server_NotifyHandledTransaction_Implementation(uint8 GripID); \
	virtual bool Server_NotifyLocalGripRemoved_Validate(uint8 , FTransform_NetQuantize const& , FVector_NetQuantize100 , FVector_NetQuantize100 ); \
	virtual void Server_NotifyLocalGripRemoved_Implementation(uint8 GripID, FTransform_NetQuantize const& TransformAtDrop, FVector_NetQuantize100 OptAngularVelocity, FVector_NetQuantize100 OptLinearVelocity); \
	virtual bool Server_NotifySecondaryAttachmentChanged_Retain_Validate(uint8 , FBPSecondaryGripInfo const& , FTransform_NetQuantize const& ); \
	virtual void Server_NotifySecondaryAttachmentChanged_Retain_Implementation(uint8 GripID, FBPSecondaryGripInfo const& SecondaryGripInfo, FTransform_NetQuantize const& NewRelativeTransform); \
	virtual bool Server_NotifySecondaryAttachmentChanged_Validate(uint8 , FBPSecondaryGripInfo const& ); \
	virtual void Server_NotifySecondaryAttachmentChanged_Implementation(uint8 GripID, FBPSecondaryGripInfo const& SecondaryGripInfo); \
	virtual bool Server_NotifyLocalGripAddedOrChanged_Validate(FBPActorGripInformation const& ); \
	virtual void Server_NotifyLocalGripAddedOrChanged_Implementation(FBPActorGripInformation const& newGrip); \
	virtual void Client_NotifyInvalidLocalGrip_Implementation(UObject* LocallyGrippedObject, uint8 GripID, bool bWasAGripConflict); \
 \
	DECLARE_FUNCTION(execHasAuthority); \
	DECLARE_FUNCTION(execGetControllerDeviceID); \
	DECLARE_FUNCTION(execGripControllerIsTracked); \
	DECLARE_FUNCTION(execGetGripDistance_BP); \
	DECLARE_FUNCTION(execUpdatePhysicsHandleTransform_BP); \
	DECLARE_FUNCTION(execUpdatePhysicsHandle_BP); \
	DECLARE_FUNCTION(execDestroyPhysicsHandle_BP); \
	DECLARE_FUNCTION(execSetUpPhysicsHandle_BP); \
	DECLARE_FUNCTION(execSetPhysicsHandleSettings); \
	DECLARE_FUNCTION(execGetPhysicsHandleSettings); \
	DECLARE_FUNCTION(execRemoveSecondaryAttachmentFromGripByID); \
	DECLARE_FUNCTION(execRemoveSecondaryAttachmentFromGrip); \
	DECLARE_FUNCTION(execRemoveSecondaryAttachmentPoint); \
	DECLARE_FUNCTION(execAddSecondaryAttachmentToGripByID); \
	DECLARE_FUNCTION(execAddSecondaryAttachmentToGrip); \
	DECLARE_FUNCTION(execAddSecondaryAttachmentPoint); \
	DECLARE_FUNCTION(execTeleportMoveGrips); \
	DECLARE_FUNCTION(execTeleportMoveGrip); \
	DECLARE_FUNCTION(execTeleportMoveGrippedComponent); \
	DECLARE_FUNCTION(execTeleportMoveGrippedActor); \
	DECLARE_FUNCTION(execPostTeleportMoveGrippedObjects); \
	DECLARE_FUNCTION(execGetGrippedComponents); \
	DECLARE_FUNCTION(execGetGrippedObjects); \
	DECLARE_FUNCTION(execGetGrippedActors); \
	DECLARE_FUNCTION(execGetAllGrips); \
	DECLARE_FUNCTION(execK2_GetFirstActiveGrip); \
	DECLARE_FUNCTION(execHasGrippedObjects); \
	DECLARE_FUNCTION(execGetIsSecondaryAttachment); \
	DECLARE_FUNCTION(execGetIsComponentHeld); \
	DECLARE_FUNCTION(execGetIsHeld); \
	DECLARE_FUNCTION(execGetIsObjectHeld); \
	DECLARE_FUNCTION(execConvertToGripRelativeTransform); \
	DECLARE_FUNCTION(execConvertToControllerRelativeTransform); \
	DECLARE_FUNCTION(execBP_HasGripMovementAuthority); \
	DECLARE_FUNCTION(execBP_HasGripAuthorityForObject); \
	DECLARE_FUNCTION(execBP_HasGripAuthority); \
	DECLARE_FUNCTION(execCreateGripRelativeAdditionTransform_BP); \
	DECLARE_FUNCTION(execSetGripStiffnessAndDamping); \
	DECLARE_FUNCTION(execSetGripAdditionTransform); \
	DECLARE_FUNCTION(execSetGripRelativeTransform); \
	DECLARE_FUNCTION(execSetGripLateUpdateSetting); \
	DECLARE_FUNCTION(execSetGripCollisionType); \
	DECLARE_FUNCTION(execSetPausedTransform); \
	DECLARE_FUNCTION(execSetGripHybridLock); \
	DECLARE_FUNCTION(execSetGripPaused); \
	DECLARE_FUNCTION(execGetGrippedObjectTransform); \
	DECLARE_FUNCTION(execGetGripMass); \
	DECLARE_FUNCTION(execGetPhysicsConstraintForce); \
	DECLARE_FUNCTION(execGetPhysicsVelocities); \
	DECLARE_FUNCTION(execGetGripByID); \
	DECLARE_FUNCTION(execGetGripByObject); \
	DECLARE_FUNCTION(execGetGripByComponent); \
	DECLARE_FUNCTION(execGetGripByActor); \
	DECLARE_FUNCTION(execNotifyDrop); \
	DECLARE_FUNCTION(execDropGrip); \
	DECLARE_FUNCTION(execDropComponent); \
	DECLARE_FUNCTION(execGripComponent); \
	DECLARE_FUNCTION(execDropActor); \
	DECLARE_FUNCTION(execGripActor); \
	DECLARE_FUNCTION(execDropObjectByInterface); \
	DECLARE_FUNCTION(execGripObjectByInterface); \
	DECLARE_FUNCTION(execDropObject); \
	DECLARE_FUNCTION(execGripObject); \
	DECLARE_FUNCTION(execSetSocketTransform); \
	DECLARE_FUNCTION(execNotifyDropAndSocket); \
	DECLARE_FUNCTION(execServer_NotifyDropAndSocketGrip); \
	DECLARE_FUNCTION(execDropAndSocketGrip); \
	DECLARE_FUNCTION(execDropAndSocketObject); \
	DECLARE_FUNCTION(execBP_IsLocallyControlled); \
	DECLARE_FUNCTION(execServer_SendControllerTransform); \
	DECLARE_FUNCTION(execOnRep_ReplicatedControllerTransform); \
	DECLARE_FUNCTION(execOnRep_LocallyGrippedObjects); \
	DECLARE_FUNCTION(execOnRep_GrippedObjects); \
	DECLARE_FUNCTION(execOnRep_LocalTransaction); \
	DECLARE_FUNCTION(execServer_NotifyHandledTransaction); \
	DECLARE_FUNCTION(execServer_NotifyLocalGripRemoved); \
	DECLARE_FUNCTION(execServer_NotifySecondaryAttachmentChanged_Retain); \
	DECLARE_FUNCTION(execServer_NotifySecondaryAttachmentChanged); \
	DECLARE_FUNCTION(execServer_NotifyLocalGripAddedOrChanged); \
	DECLARE_FUNCTION(execClient_NotifyInvalidLocalGrip); \
	DECLARE_FUNCTION(execGetPivotLocation_BP); \
	DECLARE_FUNCTION(execGetPivotTransform_BP); \
	DECLARE_FUNCTION(execSetCustomPivotComponent); \
	DECLARE_FUNCTION(execGetHandType); \
	DECLARE_FUNCTION(execNewControllerProfileLoaded); \
	DECLARE_FUNCTION(execCancelGlobalLerpToHand);


#define FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_312_ACCESSORS
#define FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_312_CALLBACK_WRAPPERS
#define FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_312_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGripMotionControllerComponent(); \
	friend struct Z_Construct_UClass_UGripMotionControllerComponent_Statics; \
public: \
	DECLARE_CLASS(UGripMotionControllerComponent, UMotionControllerComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UGripMotionControllerComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		GrippedObjects=NETFIELD_REP_START, \
		LocallyGrippedObjects, \
		LocalTransactionBuffer, \
		ReplicatedControllerTransform, \
		ControllerNetUpdateRate, \
		bSmoothReplicatedMotion, \
		bReplicateWithoutTracking, \
		NETFIELD_REP_END=bReplicateWithoutTracking	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_312_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGripMotionControllerComponent(UGripMotionControllerComponent&&); \
	NO_API UGripMotionControllerComponent(const UGripMotionControllerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGripMotionControllerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGripMotionControllerComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGripMotionControllerComponent)


#define FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_154_PROLOG
#define FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_312_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_312_SPARSE_DATA \
	FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_312_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_312_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_312_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_312_ACCESSORS \
	FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_312_CALLBACK_WRAPPERS \
	FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_312_INCLASS_NO_PURE_DECLS \
	FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_312_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class UGripMotionControllerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
