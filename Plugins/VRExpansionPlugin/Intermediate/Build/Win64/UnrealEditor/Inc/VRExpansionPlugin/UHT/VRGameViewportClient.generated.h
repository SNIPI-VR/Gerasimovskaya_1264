// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Misc/VRGameViewportClient.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VREXPANSIONPLUGIN_VRGameViewportClient_generated_h
#error "VRGameViewportClient.generated.h already included, missing '#pragma once' in VRGameViewportClient.h"
#endif
#define VREXPANSIONPLUGIN_VRGameViewportClient_generated_h

#define FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRGameViewportClient_h_23_DELEGATE \
VREXPANSIONPLUGIN_API void FVROnWindowCloseRequested_DelegateWrapper(const FMulticastScriptDelegate& VROnWindowCloseRequested);


#define FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRGameViewportClient_h_33_SPARSE_DATA
#define FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRGameViewportClient_h_33_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRGameViewportClient_h_33_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRGameViewportClient_h_33_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEventWindowClosing);


#define FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRGameViewportClient_h_33_ACCESSORS
#define FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRGameViewportClient_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUVRGameViewportClient(); \
	friend struct Z_Construct_UClass_UVRGameViewportClient_Statics; \
public: \
	DECLARE_CLASS(UVRGameViewportClient, UGameViewportClient, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRGameViewportClient)


#define FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRGameViewportClient_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRGameViewportClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRGameViewportClient) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRGameViewportClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRGameViewportClient); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRGameViewportClient(UVRGameViewportClient&&); \
	NO_API UVRGameViewportClient(const UVRGameViewportClient&); \
public: \
	NO_API virtual ~UVRGameViewportClient();


#define FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRGameViewportClient_h_30_PROLOG
#define FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRGameViewportClient_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRGameViewportClient_h_33_SPARSE_DATA \
	FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRGameViewportClient_h_33_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRGameViewportClient_h_33_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRGameViewportClient_h_33_RPC_WRAPPERS \
	FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRGameViewportClient_h_33_ACCESSORS \
	FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRGameViewportClient_h_33_INCLASS \
	FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRGameViewportClient_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class UVRGameViewportClient>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRGameViewportClient_h


#define FOREACH_ENUM_EVRGAMEINPUTMETHOD(op) \
	op(EVRGameInputMethod::GameInput_Default) \
	op(EVRGameInputMethod::GameInput_SharedKeyboardAndMouse) \
	op(EVRGameInputMethod::GameInput_KeyboardAndMouseToPlayer2) 

enum class EVRGameInputMethod : uint8;
template<> struct TIsUEnumClass<EVRGameInputMethod> { enum { Value = true }; };
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRGameInputMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
