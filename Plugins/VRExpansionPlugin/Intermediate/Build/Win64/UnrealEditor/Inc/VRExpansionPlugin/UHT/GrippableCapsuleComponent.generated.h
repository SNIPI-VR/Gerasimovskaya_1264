// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Grippables/GrippableCapsuleComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VREXPANSIONPLUGIN_GrippableCapsuleComponent_generated_h
#error "GrippableCapsuleComponent.generated.h already included, missing '#pragma once' in GrippableCapsuleComponent.h"
#endif
#define VREXPANSIONPLUGIN_GrippableCapsuleComponent_generated_h

#define FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableCapsuleComponent_h_24_SPARSE_DATA
#define FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableCapsuleComponent_h_24_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableCapsuleComponent_h_24_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableCapsuleComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetGripPriority); \
	DECLARE_FUNCTION(execSetDenyGripping);


#define FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableCapsuleComponent_h_24_ACCESSORS
#define FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableCapsuleComponent_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGrippableCapsuleComponent(); \
	friend struct Z_Construct_UClass_UGrippableCapsuleComponent_Statics; \
public: \
	DECLARE_CLASS(UGrippableCapsuleComponent, UCapsuleComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UGrippableCapsuleComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UGrippableCapsuleComponent*>(this); } \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		GripLogicScripts=NETFIELD_REP_START, \
		bReplicateGripScripts, \
		GameplayTags, \
		bRepGripSettingsAndGameplayTags, \
		bReplicateMovement, \
		VRGripInterfaceSettings, \
		NETFIELD_REP_END=VRGripInterfaceSettings	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableCapsuleComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGrippableCapsuleComponent(UGrippableCapsuleComponent&&); \
	NO_API UGrippableCapsuleComponent(const UGrippableCapsuleComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGrippableCapsuleComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGrippableCapsuleComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGrippableCapsuleComponent)


#define FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableCapsuleComponent_h_21_PROLOG
#define FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableCapsuleComponent_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableCapsuleComponent_h_24_SPARSE_DATA \
	FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableCapsuleComponent_h_24_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableCapsuleComponent_h_24_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableCapsuleComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableCapsuleComponent_h_24_ACCESSORS \
	FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableCapsuleComponent_h_24_INCLASS_NO_PURE_DECLS \
	FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableCapsuleComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class UGrippableCapsuleComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableCapsuleComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
