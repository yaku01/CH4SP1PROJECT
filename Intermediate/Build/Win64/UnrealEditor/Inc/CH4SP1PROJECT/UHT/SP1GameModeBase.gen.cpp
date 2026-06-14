// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CH4SP1PROJECT/SP1GameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSP1GameModeBase() {}

// Begin Cross Module References
CH4SP1PROJECT_API UClass* Z_Construct_UClass_ASP1GameModeBase();
CH4SP1PROJECT_API UClass* Z_Construct_UClass_ASP1GameModeBase_NoRegister();
CH4SP1PROJECT_API UClass* Z_Construct_UClass_ASP1PlayerState_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_CH4SP1PROJECT();
// End Cross Module References

// Begin Class ASP1GameModeBase Function CheckAnswer
struct Z_Construct_UFunction_ASP1GameModeBase_CheckAnswer_Statics
{
	struct SP1GameModeBase_eventCheckAnswer_Parms
	{
		FString Input;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "SP1GameModeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Input;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASP1GameModeBase_CheckAnswer_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SP1GameModeBase_eventCheckAnswer_Parms, Input), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASP1GameModeBase_CheckAnswer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SP1GameModeBase_eventCheckAnswer_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASP1GameModeBase_CheckAnswer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASP1GameModeBase_CheckAnswer_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASP1GameModeBase_CheckAnswer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASP1GameModeBase_CheckAnswer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASP1GameModeBase_CheckAnswer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASP1GameModeBase, nullptr, "CheckAnswer", nullptr, nullptr, Z_Construct_UFunction_ASP1GameModeBase_CheckAnswer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASP1GameModeBase_CheckAnswer_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASP1GameModeBase_CheckAnswer_Statics::SP1GameModeBase_eventCheckAnswer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASP1GameModeBase_CheckAnswer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASP1GameModeBase_CheckAnswer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASP1GameModeBase_CheckAnswer_Statics::SP1GameModeBase_eventCheckAnswer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASP1GameModeBase_CheckAnswer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASP1GameModeBase_CheckAnswer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASP1GameModeBase::execCheckAnswer)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->CheckAnswer(Z_Param_Input);
	P_NATIVE_END;
}
// End Class ASP1GameModeBase Function CheckAnswer

// Begin Class ASP1GameModeBase Function CheckGameEnd
struct Z_Construct_UFunction_ASP1GameModeBase_CheckGameEnd_Statics
{
	struct SP1GameModeBase_eventCheckGameEnd_Parms
	{
		ASP1PlayerState* PS;
		FString Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "SP1GameModeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PS;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASP1GameModeBase_CheckGameEnd_Statics::NewProp_PS = { "PS", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SP1GameModeBase_eventCheckGameEnd_Parms, PS), Z_Construct_UClass_ASP1PlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASP1GameModeBase_CheckGameEnd_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SP1GameModeBase_eventCheckGameEnd_Parms, Result), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASP1GameModeBase_CheckGameEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASP1GameModeBase_CheckGameEnd_Statics::NewProp_PS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASP1GameModeBase_CheckGameEnd_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASP1GameModeBase_CheckGameEnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASP1GameModeBase_CheckGameEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASP1GameModeBase, nullptr, "CheckGameEnd", nullptr, nullptr, Z_Construct_UFunction_ASP1GameModeBase_CheckGameEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASP1GameModeBase_CheckGameEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASP1GameModeBase_CheckGameEnd_Statics::SP1GameModeBase_eventCheckGameEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASP1GameModeBase_CheckGameEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASP1GameModeBase_CheckGameEnd_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASP1GameModeBase_CheckGameEnd_Statics::SP1GameModeBase_eventCheckGameEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASP1GameModeBase_CheckGameEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASP1GameModeBase_CheckGameEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASP1GameModeBase::execCheckGameEnd)
{
	P_GET_OBJECT(ASP1PlayerState,Z_Param_PS);
	P_GET_PROPERTY(FStrProperty,Z_Param_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CheckGameEnd(Z_Param_PS,Z_Param_Result);
	P_NATIVE_END;
}
// End Class ASP1GameModeBase Function CheckGameEnd

// Begin Class ASP1GameModeBase Function GenerateSecretNumbers
struct Z_Construct_UFunction_ASP1GameModeBase_GenerateSecretNumbers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "SP1GameModeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASP1GameModeBase_GenerateSecretNumbers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASP1GameModeBase, nullptr, "GenerateSecretNumbers", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASP1GameModeBase_GenerateSecretNumbers_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASP1GameModeBase_GenerateSecretNumbers_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASP1GameModeBase_GenerateSecretNumbers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASP1GameModeBase_GenerateSecretNumbers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASP1GameModeBase::execGenerateSecretNumbers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GenerateSecretNumbers();
	P_NATIVE_END;
}
// End Class ASP1GameModeBase Function GenerateSecretNumbers

// Begin Class ASP1GameModeBase Function ResetGame
struct Z_Construct_UFunction_ASP1GameModeBase_ResetGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "SP1GameModeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASP1GameModeBase_ResetGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASP1GameModeBase, nullptr, "ResetGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASP1GameModeBase_ResetGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASP1GameModeBase_ResetGame_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASP1GameModeBase_ResetGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASP1GameModeBase_ResetGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASP1GameModeBase::execResetGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetGame();
	P_NATIVE_END;
}
// End Class ASP1GameModeBase Function ResetGame

// Begin Class ASP1GameModeBase
void ASP1GameModeBase::StaticRegisterNativesASP1GameModeBase()
{
	UClass* Class = ASP1GameModeBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CheckAnswer", &ASP1GameModeBase::execCheckAnswer },
		{ "CheckGameEnd", &ASP1GameModeBase::execCheckGameEnd },
		{ "GenerateSecretNumbers", &ASP1GameModeBase::execGenerateSecretNumbers },
		{ "ResetGame", &ASP1GameModeBase::execResetGame },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASP1GameModeBase);
UClass* Z_Construct_UClass_ASP1GameModeBase_NoRegister()
{
	return ASP1GameModeBase::StaticClass();
}
struct Z_Construct_UClass_ASP1GameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SP1GameModeBase.h" },
		{ "ModuleRelativePath", "SP1GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecretNumbers_MetaData[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "SP1GameModeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SecretNumbers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SecretNumbers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASP1GameModeBase_CheckAnswer, "CheckAnswer" }, // 430423170
		{ &Z_Construct_UFunction_ASP1GameModeBase_CheckGameEnd, "CheckGameEnd" }, // 831308008
		{ &Z_Construct_UFunction_ASP1GameModeBase_GenerateSecretNumbers, "GenerateSecretNumbers" }, // 3631299011
		{ &Z_Construct_UFunction_ASP1GameModeBase_ResetGame, "ResetGame" }, // 4196380704
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASP1GameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASP1GameModeBase_Statics::NewProp_SecretNumbers_Inner = { "SecretNumbers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASP1GameModeBase_Statics::NewProp_SecretNumbers = { "SecretNumbers", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASP1GameModeBase, SecretNumbers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecretNumbers_MetaData), NewProp_SecretNumbers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASP1GameModeBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASP1GameModeBase_Statics::NewProp_SecretNumbers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASP1GameModeBase_Statics::NewProp_SecretNumbers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASP1GameModeBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASP1GameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_CH4SP1PROJECT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASP1GameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASP1GameModeBase_Statics::ClassParams = {
	&ASP1GameModeBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASP1GameModeBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASP1GameModeBase_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASP1GameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ASP1GameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASP1GameModeBase()
{
	if (!Z_Registration_Info_UClass_ASP1GameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASP1GameModeBase.OuterSingleton, Z_Construct_UClass_ASP1GameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASP1GameModeBase.OuterSingleton;
}
template<> CH4SP1PROJECT_API UClass* StaticClass<ASP1GameModeBase>()
{
	return ASP1GameModeBase::StaticClass();
}
ASP1GameModeBase::ASP1GameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASP1GameModeBase);
ASP1GameModeBase::~ASP1GameModeBase() {}
// End Class ASP1GameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_asnsu_Desktop_CH4_SP1PROJECT_CH4SP1PROJECT_Source_CH4SP1PROJECT_SP1GameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASP1GameModeBase, ASP1GameModeBase::StaticClass, TEXT("ASP1GameModeBase"), &Z_Registration_Info_UClass_ASP1GameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASP1GameModeBase), 1923146602U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_asnsu_Desktop_CH4_SP1PROJECT_CH4SP1PROJECT_Source_CH4SP1PROJECT_SP1GameModeBase_h_3569062154(TEXT("/Script/CH4SP1PROJECT"),
	Z_CompiledInDeferFile_FID_Users_asnsu_Desktop_CH4_SP1PROJECT_CH4SP1PROJECT_Source_CH4SP1PROJECT_SP1GameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_asnsu_Desktop_CH4_SP1PROJECT_CH4SP1PROJECT_Source_CH4SP1PROJECT_SP1GameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
