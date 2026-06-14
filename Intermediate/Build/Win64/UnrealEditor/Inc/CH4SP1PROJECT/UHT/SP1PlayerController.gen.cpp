// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CH4SP1PROJECT/SP1PlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSP1PlayerController() {}

// Begin Cross Module References
CH4SP1PROJECT_API UClass* Z_Construct_UClass_ASP1PlayerController();
CH4SP1PROJECT_API UClass* Z_Construct_UClass_ASP1PlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
UPackage* Z_Construct_UPackage__Script_CH4SP1PROJECT();
// End Cross Module References

// Begin Class ASP1PlayerController Function Multicast_ReceiveChat
struct SP1PlayerController_eventMulticast_ReceiveChat_Parms
{
	FString ChatMessage;
};
static const FName NAME_ASP1PlayerController_Multicast_ReceiveChat = FName(TEXT("Multicast_ReceiveChat"));
void ASP1PlayerController::Multicast_ReceiveChat(const FString& ChatMessage)
{
	SP1PlayerController_eventMulticast_ReceiveChat_Parms Parms;
	Parms.ChatMessage=ChatMessage;
	UFunction* Func = FindFunctionChecked(NAME_ASP1PlayerController_Multicast_ReceiveChat);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ASP1PlayerController_Multicast_ReceiveChat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "SP1PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ChatMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASP1PlayerController_Multicast_ReceiveChat_Statics::NewProp_ChatMessage = { "ChatMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SP1PlayerController_eventMulticast_ReceiveChat_Parms, ChatMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatMessage_MetaData), NewProp_ChatMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASP1PlayerController_Multicast_ReceiveChat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASP1PlayerController_Multicast_ReceiveChat_Statics::NewProp_ChatMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASP1PlayerController_Multicast_ReceiveChat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASP1PlayerController_Multicast_ReceiveChat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASP1PlayerController, nullptr, "Multicast_ReceiveChat", nullptr, nullptr, Z_Construct_UFunction_ASP1PlayerController_Multicast_ReceiveChat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASP1PlayerController_Multicast_ReceiveChat_Statics::PropPointers), sizeof(SP1PlayerController_eventMulticast_ReceiveChat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASP1PlayerController_Multicast_ReceiveChat_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASP1PlayerController_Multicast_ReceiveChat_Statics::Function_MetaDataParams) };
static_assert(sizeof(SP1PlayerController_eventMulticast_ReceiveChat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASP1PlayerController_Multicast_ReceiveChat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASP1PlayerController_Multicast_ReceiveChat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASP1PlayerController::execMulticast_ReceiveChat)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ChatMessage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multicast_ReceiveChat_Implementation(Z_Param_ChatMessage);
	P_NATIVE_END;
}
// End Class ASP1PlayerController Function Multicast_ReceiveChat

// Begin Class ASP1PlayerController Function Multicast_ShowResult
struct SP1PlayerController_eventMulticast_ShowResult_Parms
{
	FString ResultText;
};
static const FName NAME_ASP1PlayerController_Multicast_ShowResult = FName(TEXT("Multicast_ShowResult"));
void ASP1PlayerController::Multicast_ShowResult(const FString& ResultText)
{
	SP1PlayerController_eventMulticast_ShowResult_Parms Parms;
	Parms.ResultText=ResultText;
	UFunction* Func = FindFunctionChecked(NAME_ASP1PlayerController_Multicast_ShowResult);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ASP1PlayerController_Multicast_ShowResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "SP1PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ResultText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASP1PlayerController_Multicast_ShowResult_Statics::NewProp_ResultText = { "ResultText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SP1PlayerController_eventMulticast_ShowResult_Parms, ResultText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultText_MetaData), NewProp_ResultText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASP1PlayerController_Multicast_ShowResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASP1PlayerController_Multicast_ShowResult_Statics::NewProp_ResultText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASP1PlayerController_Multicast_ShowResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASP1PlayerController_Multicast_ShowResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASP1PlayerController, nullptr, "Multicast_ShowResult", nullptr, nullptr, Z_Construct_UFunction_ASP1PlayerController_Multicast_ShowResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASP1PlayerController_Multicast_ShowResult_Statics::PropPointers), sizeof(SP1PlayerController_eventMulticast_ShowResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASP1PlayerController_Multicast_ShowResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASP1PlayerController_Multicast_ShowResult_Statics::Function_MetaDataParams) };
static_assert(sizeof(SP1PlayerController_eventMulticast_ShowResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASP1PlayerController_Multicast_ShowResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASP1PlayerController_Multicast_ShowResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASP1PlayerController::execMulticast_ShowResult)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ResultText);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multicast_ShowResult_Implementation(Z_Param_ResultText);
	P_NATIVE_END;
}
// End Class ASP1PlayerController Function Multicast_ShowResult

// Begin Class ASP1PlayerController Function Server_SendChat
struct SP1PlayerController_eventServer_SendChat_Parms
{
	FString Message;
};
static const FName NAME_ASP1PlayerController_Server_SendChat = FName(TEXT("Server_SendChat"));
void ASP1PlayerController::Server_SendChat(const FString& Message)
{
	SP1PlayerController_eventServer_SendChat_Parms Parms;
	Parms.Message=Message;
	UFunction* Func = FindFunctionChecked(NAME_ASP1PlayerController_Server_SendChat);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ASP1PlayerController_Server_SendChat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "SP1PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASP1PlayerController_Server_SendChat_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SP1PlayerController_eventServer_SendChat_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASP1PlayerController_Server_SendChat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASP1PlayerController_Server_SendChat_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASP1PlayerController_Server_SendChat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASP1PlayerController_Server_SendChat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASP1PlayerController, nullptr, "Server_SendChat", nullptr, nullptr, Z_Construct_UFunction_ASP1PlayerController_Server_SendChat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASP1PlayerController_Server_SendChat_Statics::PropPointers), sizeof(SP1PlayerController_eventServer_SendChat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASP1PlayerController_Server_SendChat_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASP1PlayerController_Server_SendChat_Statics::Function_MetaDataParams) };
static_assert(sizeof(SP1PlayerController_eventServer_SendChat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASP1PlayerController_Server_SendChat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASP1PlayerController_Server_SendChat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASP1PlayerController::execServer_SendChat)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_SendChat_Implementation(Z_Param_Message);
	P_NATIVE_END;
}
// End Class ASP1PlayerController Function Server_SendChat

// Begin Class ASP1PlayerController
void ASP1PlayerController::StaticRegisterNativesASP1PlayerController()
{
	UClass* Class = ASP1PlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Multicast_ReceiveChat", &ASP1PlayerController::execMulticast_ReceiveChat },
		{ "Multicast_ShowResult", &ASP1PlayerController::execMulticast_ShowResult },
		{ "Server_SendChat", &ASP1PlayerController::execServer_SendChat },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASP1PlayerController);
UClass* Z_Construct_UClass_ASP1PlayerController_NoRegister()
{
	return ASP1PlayerController::StaticClass();
}
struct Z_Construct_UClass_ASP1PlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "SP1PlayerController.h" },
		{ "ModuleRelativePath", "SP1PlayerController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASP1PlayerController_Multicast_ReceiveChat, "Multicast_ReceiveChat" }, // 75725205
		{ &Z_Construct_UFunction_ASP1PlayerController_Multicast_ShowResult, "Multicast_ShowResult" }, // 1100281180
		{ &Z_Construct_UFunction_ASP1PlayerController_Server_SendChat, "Server_SendChat" }, // 549494244
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASP1PlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASP1PlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_CH4SP1PROJECT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASP1PlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASP1PlayerController_Statics::ClassParams = {
	&ASP1PlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASP1PlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ASP1PlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASP1PlayerController()
{
	if (!Z_Registration_Info_UClass_ASP1PlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASP1PlayerController.OuterSingleton, Z_Construct_UClass_ASP1PlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASP1PlayerController.OuterSingleton;
}
template<> CH4SP1PROJECT_API UClass* StaticClass<ASP1PlayerController>()
{
	return ASP1PlayerController::StaticClass();
}
ASP1PlayerController::ASP1PlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASP1PlayerController);
ASP1PlayerController::~ASP1PlayerController() {}
// End Class ASP1PlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_asnsu_Desktop_CH4_SP1PROJECT_CH4SP1PROJECT_Source_CH4SP1PROJECT_SP1PlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASP1PlayerController, ASP1PlayerController::StaticClass, TEXT("ASP1PlayerController"), &Z_Registration_Info_UClass_ASP1PlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASP1PlayerController), 3139458789U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_asnsu_Desktop_CH4_SP1PROJECT_CH4SP1PROJECT_Source_CH4SP1PROJECT_SP1PlayerController_h_663644812(TEXT("/Script/CH4SP1PROJECT"),
	Z_CompiledInDeferFile_FID_Users_asnsu_Desktop_CH4_SP1PROJECT_CH4SP1PROJECT_Source_CH4SP1PROJECT_SP1PlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_asnsu_Desktop_CH4_SP1PROJECT_CH4SP1PROJECT_Source_CH4SP1PROJECT_SP1PlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
