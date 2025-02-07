// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Misc/VRGameViewportClient.h"
#include "../../Source/Runtime/Engine/Classes/Engine/Engine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRGameViewportClient() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameViewportClient();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGameViewportClient();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGameViewportClient_NoRegister();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRGameInputMethod();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnWindowCloseRequested__DelegateSignature();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVRGameInputMethod;
	static UEnum* EVRGameInputMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVRGameInputMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVRGameInputMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRGameInputMethod, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRGameInputMethod"));
		}
		return Z_Registration_Info_UEnum_EVRGameInputMethod.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRGameInputMethod>()
	{
		return EVRGameInputMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_VRExpansionPlugin_EVRGameInputMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VRExpansionPlugin_EVRGameInputMethod_Statics::Enumerators[] = {
		{ "EVRGameInputMethod::GameInput_Default", (int64)EVRGameInputMethod::GameInput_Default },
		{ "EVRGameInputMethod::GameInput_SharedKeyboardAndMouse", (int64)EVRGameInputMethod::GameInput_SharedKeyboardAndMouse },
		{ "EVRGameInputMethod::GameInput_KeyboardAndMouseToPlayer2", (int64)EVRGameInputMethod::GameInput_KeyboardAndMouseToPlayer2 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VRExpansionPlugin_EVRGameInputMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "GameInput_Default.Name", "EVRGameInputMethod::GameInput_Default" },
		{ "GameInput_KeyboardAndMouseToPlayer2.Name", "EVRGameInputMethod::GameInput_KeyboardAndMouseToPlayer2" },
		{ "GameInput_SharedKeyboardAndMouse.Name", "EVRGameInputMethod::GameInput_SharedKeyboardAndMouse" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Misc/VRGameViewportClient.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VRExpansionPlugin_EVRGameInputMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		"EVRGameInputMethod",
		"EVRGameInputMethod",
		Z_Construct_UEnum_VRExpansionPlugin_EVRGameInputMethod_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRGameInputMethod_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRGameInputMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VRExpansionPlugin_EVRGameInputMethod_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRGameInputMethod()
	{
		if (!Z_Registration_Info_UEnum_EVRGameInputMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVRGameInputMethod.InnerSingleton, Z_Construct_UEnum_VRExpansionPlugin_EVRGameInputMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVRGameInputMethod.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnWindowCloseRequested__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnWindowCloseRequested__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/VRGameViewportClient.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnWindowCloseRequested__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin, nullptr, "VROnWindowCloseRequested__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnWindowCloseRequested__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnWindowCloseRequested__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnWindowCloseRequested__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnWindowCloseRequested__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FVROnWindowCloseRequested_DelegateWrapper(const FMulticastScriptDelegate& VROnWindowCloseRequested)
{
	VROnWindowCloseRequested.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UVRGameViewportClient::execEventWindowClosing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->EventWindowClosing();
		P_NATIVE_END;
	}
	void UVRGameViewportClient::StaticRegisterNativesUVRGameViewportClient()
	{
		UClass* Class = UVRGameViewportClient::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EventWindowClosing", &UVRGameViewportClient::execEventWindowClosing },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVRGameViewportClient_EventWindowClosing_Statics
	{
		struct VRGameViewportClient_eventEventWindowClosing_Parms
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
	void Z_Construct_UFunction_UVRGameViewportClient_EventWindowClosing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRGameViewportClient_eventEventWindowClosing_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGameViewportClient_EventWindowClosing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRGameViewportClient_eventEventWindowClosing_Parms), &Z_Construct_UFunction_UVRGameViewportClient_EventWindowClosing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGameViewportClient_EventWindowClosing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGameViewportClient_EventWindowClosing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGameViewportClient_EventWindowClosing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/VRGameViewportClient.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGameViewportClient_EventWindowClosing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGameViewportClient, nullptr, "EventWindowClosing", nullptr, nullptr, Z_Construct_UFunction_UVRGameViewportClient_EventWindowClosing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGameViewportClient_EventWindowClosing_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRGameViewportClient_EventWindowClosing_Statics::VRGameViewportClient_eventEventWindowClosing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGameViewportClient_EventWindowClosing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGameViewportClient_EventWindowClosing_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGameViewportClient_EventWindowClosing_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVRGameViewportClient_EventWindowClosing_Statics::VRGameViewportClient_eventEventWindowClosing_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVRGameViewportClient_EventWindowClosing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGameViewportClient_EventWindowClosing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVRGameViewportClient);
	UClass* Z_Construct_UClass_UVRGameViewportClient_NoRegister()
	{
		return UVRGameViewportClient::StaticClass();
	}
	struct Z_Construct_UClass_UVRGameViewportClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BPOnWindowCloseRequested_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_BPOnWindowCloseRequested;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreWindowCloseCommands_MetaData[];
#endif
		static void NewProp_bIgnoreWindowCloseCommands_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreWindowCloseCommands;
		static const UECodeGen_Private::FBytePropertyParams NewProp_GameInputMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameInputMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GameInputMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlsoChangeGamepPadInput_MetaData[];
#endif
		static void NewProp_bAlsoChangeGamepPadInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlsoChangeGamepPadInput;
		static const UECodeGen_Private::FNamePropertyParams NewProp_GamepadInputCategories_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GamepadInputCategories_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GamepadInputCategories;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVRGameViewportClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameViewportClient,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVRGameViewportClient_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UVRGameViewportClient_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVRGameViewportClient_EventWindowClosing, "EventWindowClosing" }, // 1384198368
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVRGameViewportClient_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGameViewportClient_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* Subclass this in a blueprint to overwrite how default input is passed around in engine between local characters.\n* Generally used for passing keyboard / mouse input to a secondary local player for local mixed gameplay in VR\n*/" },
#endif
		{ "IncludePath", "Misc/VRGameViewportClient.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Misc/VRGameViewportClient.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Subclass this in a blueprint to overwrite how default input is passed around in engine between local characters.\nGenerally used for passing keyboard / mouse input to a secondary local player for local mixed gameplay in VR" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_BPOnWindowCloseRequested_MetaData[] = {
		{ "Category", "VRExpansionPlugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Event thrown when the window is closed\n" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRGameViewportClient.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event thrown when the window is closed" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_BPOnWindowCloseRequested = { "BPOnWindowCloseRequested", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRGameViewportClient, BPOnWindowCloseRequested), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnWindowCloseRequested__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_BPOnWindowCloseRequested_MetaData), Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_BPOnWindowCloseRequested_MetaData) }; // 1393330470
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_bIgnoreWindowCloseCommands_MetaData[] = {
		{ "Category", "VRExpansionPlugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true then forced window closing will be canceled (alt-f4, ect)\n" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRGameViewportClient.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true then forced window closing will be canceled (alt-f4, ect)" },
#endif
	};
#endif
	void Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_bIgnoreWindowCloseCommands_SetBit(void* Obj)
	{
		((UVRGameViewportClient*)Obj)->bIgnoreWindowCloseCommands = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_bIgnoreWindowCloseCommands = { "bIgnoreWindowCloseCommands", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRGameViewportClient), &Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_bIgnoreWindowCloseCommands_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_bIgnoreWindowCloseCommands_MetaData), Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_bIgnoreWindowCloseCommands_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_GameInputMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_GameInputMethod_MetaData[] = {
		{ "Category", "VRExpansionPlugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Input Method for the viewport\n" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRGameViewportClient.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Method for the viewport" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_GameInputMethod = { "GameInputMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRGameViewportClient, GameInputMethod), Z_Construct_UEnum_VRExpansionPlugin_EVRGameInputMethod, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_GameInputMethod_MetaData), Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_GameInputMethod_MetaData) }; // 1639144792
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_bAlsoChangeGamepPadInput_MetaData[] = {
		{ "Category", "VRExpansionPlugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true we will also shuffle gamepad input according to the GameInputMethod\n" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRGameViewportClient.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true we will also shuffle gamepad input according to the GameInputMethod" },
#endif
	};
#endif
	void Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_bAlsoChangeGamepPadInput_SetBit(void* Obj)
	{
		((UVRGameViewportClient*)Obj)->bAlsoChangeGamepPadInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_bAlsoChangeGamepPadInput = { "bAlsoChangeGamepPadInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRGameViewportClient), &Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_bAlsoChangeGamepPadInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_bAlsoChangeGamepPadInput_MetaData), Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_bAlsoChangeGamepPadInput_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_GamepadInputCategories_Inner = { "GamepadInputCategories", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_GamepadInputCategories_MetaData[] = {
		{ "Category", "VRExpansionPlugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A List of input categories to consider as valid gamepad ones if bIsGamepad is true on the input event\n" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRGameViewportClient.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A List of input categories to consider as valid gamepad ones if bIsGamepad is true on the input event" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_GamepadInputCategories = { "GamepadInputCategories", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRGameViewportClient, GamepadInputCategories), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_GamepadInputCategories_MetaData), Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_GamepadInputCategories_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVRGameViewportClient_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_BPOnWindowCloseRequested,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_bIgnoreWindowCloseCommands,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_GameInputMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_GameInputMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_bAlsoChangeGamepPadInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_GamepadInputCategories_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_GamepadInputCategories,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVRGameViewportClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRGameViewportClient>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVRGameViewportClient_Statics::ClassParams = {
		&UVRGameViewportClient::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVRGameViewportClient_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVRGameViewportClient_Statics::PropPointers),
		0,
		0x009000ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRGameViewportClient_Statics::Class_MetaDataParams), Z_Construct_UClass_UVRGameViewportClient_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVRGameViewportClient_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UVRGameViewportClient()
	{
		if (!Z_Registration_Info_UClass_UVRGameViewportClient.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVRGameViewportClient.OuterSingleton, Z_Construct_UClass_UVRGameViewportClient_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVRGameViewportClient.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UVRGameViewportClient>()
	{
		return UVRGameViewportClient::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRGameViewportClient);
	UVRGameViewportClient::~UVRGameViewportClient() {}
	struct Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRGameViewportClient_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRGameViewportClient_h_Statics::EnumInfo[] = {
		{ EVRGameInputMethod_StaticEnum, TEXT("EVRGameInputMethod"), &Z_Registration_Info_UEnum_EVRGameInputMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1639144792U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRGameViewportClient_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVRGameViewportClient, UVRGameViewportClient::StaticClass, TEXT("UVRGameViewportClient"), &Z_Registration_Info_UClass_UVRGameViewportClient, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVRGameViewportClient), 3273950358U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRGameViewportClient_h_1613840066(TEXT("/Script/VRExpansionPlugin"),
		Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRGameViewportClient_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRGameViewportClient_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRGameViewportClient_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_Gerasimovskaya_1264_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRGameViewportClient_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
