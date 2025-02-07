// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Misc/VRPlayerStart.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRPlayerStart() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerStart();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRPlayerStart();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRPlayerStart_NoRegister();
// End Cross Module References
	void AVRPlayerStart::StaticRegisterNativesAVRPlayerStart()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVRPlayerStart);
	UClass* Z_Construct_UClass_AVRPlayerStart_NoRegister()
	{
		return AVRPlayerStart::StaticClass();
	}
	struct Z_Construct_UClass_AVRPlayerStart_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VRRootComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VRRootComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVRPlayerStart_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerStart,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVRPlayerStart_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPlayerStart_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Common" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n*\x09""A normal player start except I replaced the root component with a scene component so that the spawn\n*\x09transform will match our VR characters.\n*/" },
#endif
		{ "HideCategories", "Collision Collision Lighting LightColor Force" },
		{ "IncludePath", "Misc/VRPlayerStart.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Misc/VRPlayerStart.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A normal player start except I replaced the root component with a scene component so that the spawn\ntransform will match our VR characters." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPlayerStart_Statics::NewProp_VRRootComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Misc/VRPlayerStart.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVRPlayerStart_Statics::NewProp_VRRootComp = { "VRRootComp", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVRPlayerStart, VRRootComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVRPlayerStart_Statics::NewProp_VRRootComp_MetaData), Z_Construct_UClass_AVRPlayerStart_Statics::NewProp_VRRootComp_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVRPlayerStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRPlayerStart_Statics::NewProp_VRRootComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVRPlayerStart_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVRPlayerStart>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVRPlayerStart_Statics::ClassParams = {
		&AVRPlayerStart::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVRPlayerStart_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AVRPlayerStart_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVRPlayerStart_Statics::Class_MetaDataParams), Z_Construct_UClass_AVRPlayerStart_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVRPlayerStart_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AVRPlayerStart()
	{
		if (!Z_Registration_Info_UClass_AVRPlayerStart.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVRPlayerStart.OuterSingleton, Z_Construct_UClass_AVRPlayerStart_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVRPlayerStart.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<AVRPlayerStart>()
	{
		return AVRPlayerStart::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVRPlayerStart);
	AVRPlayerStart::~AVRPlayerStart() {}
	struct Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRPlayerStart_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRPlayerStart_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVRPlayerStart, AVRPlayerStart::StaticClass, TEXT("AVRPlayerStart"), &Z_Registration_Info_UClass_AVRPlayerStart, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVRPlayerStart), 460703369U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRPlayerStart_h_3120819339(TEXT("/Script/VRExpansionPlugin"),
		Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRPlayerStart_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRPlayerStart_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
