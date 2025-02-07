// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/VRCharacterMovementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRCharacterMovementComponent() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRBaseCharacterMovementComponent();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRCharacterMovementComponent();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRCharacterMovementComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRRootComponent_NoRegister();
// End Cross Module References
	void UVRCharacterMovementComponent::StaticRegisterNativesUVRCharacterMovementComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVRCharacterMovementComponent);
	UClass* Z_Construct_UClass_UVRCharacterMovementComponent_NoRegister()
	{
		return UVRCharacterMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVRCharacterMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VRRootCapsule_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VRRootCapsule;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowMovementMerging_MetaData[];
#endif
		static void NewProp_bAllowMovementMerging_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowMovementMerging;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRunClientCorrectionToHMD_MetaData[];
#endif
		static void NewProp_bRunClientCorrectionToHMD_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRunClientCorrectionToHMD;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVRCharacterMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVRBaseCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVRCharacterMovementComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRCharacterMovementComponent_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAIMoveCompletedSignature, FAIRequestID, RequestID, EPathFollowingResult::Type, Result);\n" },
#endif
		{ "IncludePath", "VRCharacterMovementComponent.h" },
		{ "ModuleRelativePath", "Public/VRCharacterMovementComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAIMoveCompletedSignature, FAIRequestID, RequestID, EPathFollowingResult::Type, Result);" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRCharacterMovementComponent_Statics::NewProp_VRRootCapsule_MetaData[] = {
		{ "Category", "VRMovement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VRCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVRCharacterMovementComponent_Statics::NewProp_VRRootCapsule = { "VRRootCapsule", nullptr, (EPropertyFlags)0x001400000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRCharacterMovementComponent, VRRootCapsule), Z_Construct_UClass_UVRRootComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRCharacterMovementComponent_Statics::NewProp_VRRootCapsule_MetaData), Z_Construct_UClass_UVRCharacterMovementComponent_Statics::NewProp_VRRootCapsule_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRCharacterMovementComponent_Statics::NewProp_bAllowMovementMerging_MetaData[] = {
		{ "Category", "VRCharacterMovementComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Allow merging movement replication (may cause issues when >10 players due to capsule location\n" },
#endif
		{ "ModuleRelativePath", "Public/VRCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allow merging movement replication (may cause issues when >10 players due to capsule location" },
#endif
	};
#endif
	void Z_Construct_UClass_UVRCharacterMovementComponent_Statics::NewProp_bAllowMovementMerging_SetBit(void* Obj)
	{
		((UVRCharacterMovementComponent*)Obj)->bAllowMovementMerging = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRCharacterMovementComponent_Statics::NewProp_bAllowMovementMerging = { "bAllowMovementMerging", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRCharacterMovementComponent), &Z_Construct_UClass_UVRCharacterMovementComponent_Statics::NewProp_bAllowMovementMerging_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRCharacterMovementComponent_Statics::NewProp_bAllowMovementMerging_MetaData), Z_Construct_UClass_UVRCharacterMovementComponent_Statics::NewProp_bAllowMovementMerging_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRCharacterMovementComponent_Statics::NewProp_bRunClientCorrectionToHMD_MetaData[] = {
		{ "Category", "VRCharacterMovementComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true we will run client corrections off of the HMD location instead of actor, this is a settable value to allow backwards compatibility\n" },
#endif
		{ "ModuleRelativePath", "Public/VRCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true we will run client corrections off of the HMD location instead of actor, this is a settable value to allow backwards compatibility" },
#endif
	};
#endif
	void Z_Construct_UClass_UVRCharacterMovementComponent_Statics::NewProp_bRunClientCorrectionToHMD_SetBit(void* Obj)
	{
		((UVRCharacterMovementComponent*)Obj)->bRunClientCorrectionToHMD = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRCharacterMovementComponent_Statics::NewProp_bRunClientCorrectionToHMD = { "bRunClientCorrectionToHMD", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRCharacterMovementComponent), &Z_Construct_UClass_UVRCharacterMovementComponent_Statics::NewProp_bRunClientCorrectionToHMD_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRCharacterMovementComponent_Statics::NewProp_bRunClientCorrectionToHMD_MetaData), Z_Construct_UClass_UVRCharacterMovementComponent_Statics::NewProp_bRunClientCorrectionToHMD_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVRCharacterMovementComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRCharacterMovementComponent_Statics::NewProp_VRRootCapsule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRCharacterMovementComponent_Statics::NewProp_bAllowMovementMerging,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRCharacterMovementComponent_Statics::NewProp_bRunClientCorrectionToHMD,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVRCharacterMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRCharacterMovementComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVRCharacterMovementComponent_Statics::ClassParams = {
		&UVRCharacterMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVRCharacterMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVRCharacterMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRCharacterMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UVRCharacterMovementComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVRCharacterMovementComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UVRCharacterMovementComponent()
	{
		if (!Z_Registration_Info_UClass_UVRCharacterMovementComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVRCharacterMovementComponent.OuterSingleton, Z_Construct_UClass_UVRCharacterMovementComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVRCharacterMovementComponent.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UVRCharacterMovementComponent>()
	{
		return UVRCharacterMovementComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRCharacterMovementComponent);
	UVRCharacterMovementComponent::~UVRCharacterMovementComponent() {}
	struct Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacterMovementComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacterMovementComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVRCharacterMovementComponent, UVRCharacterMovementComponent::StaticClass, TEXT("UVRCharacterMovementComponent"), &Z_Registration_Info_UClass_UVRCharacterMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVRCharacterMovementComponent), 3075383445U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacterMovementComponent_h_997559333(TEXT("/Script/VRExpansionPlugin"),
		Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacterMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacterMovementComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
