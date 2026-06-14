// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CH4SP1PROJECT/SP1PlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSP1PlayerState() {}

// Begin Cross Module References
CH4SP1PROJECT_API UClass* Z_Construct_UClass_ASP1PlayerState();
CH4SP1PROJECT_API UClass* Z_Construct_UClass_ASP1PlayerState_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
UPackage* Z_Construct_UPackage__Script_CH4SP1PROJECT();
// End Cross Module References

// Begin Class ASP1PlayerState Function GetCurrentAttempts
struct Z_Construct_UFunction_ASP1PlayerState_GetCurrentAttempts_Statics
{
	struct SP1PlayerState_eventGetCurrentAttempts_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "SP1PlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASP1PlayerState_GetCurrentAttempts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SP1PlayerState_eventGetCurrentAttempts_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASP1PlayerState_GetCurrentAttempts_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASP1PlayerState_GetCurrentAttempts_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASP1PlayerState_GetCurrentAttempts_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASP1PlayerState_GetCurrentAttempts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASP1PlayerState, nullptr, "GetCurrentAttempts", nullptr, nullptr, Z_Construct_UFunction_ASP1PlayerState_GetCurrentAttempts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASP1PlayerState_GetCurrentAttempts_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASP1PlayerState_GetCurrentAttempts_Statics::SP1PlayerState_eventGetCurrentAttempts_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASP1PlayerState_GetCurrentAttempts_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASP1PlayerState_GetCurrentAttempts_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASP1PlayerState_GetCurrentAttempts_Statics::SP1PlayerState_eventGetCurrentAttempts_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASP1PlayerState_GetCurrentAttempts()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASP1PlayerState_GetCurrentAttempts_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASP1PlayerState::execGetCurrentAttempts)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentAttempts();
	P_NATIVE_END;
}
// End Class ASP1PlayerState Function GetCurrentAttempts

// Begin Class ASP1PlayerState Function GetMaxAttempts
struct Z_Construct_UFunction_ASP1PlayerState_GetMaxAttempts_Statics
{
	struct SP1PlayerState_eventGetMaxAttempts_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "SP1PlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASP1PlayerState_GetMaxAttempts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SP1PlayerState_eventGetMaxAttempts_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASP1PlayerState_GetMaxAttempts_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASP1PlayerState_GetMaxAttempts_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASP1PlayerState_GetMaxAttempts_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASP1PlayerState_GetMaxAttempts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASP1PlayerState, nullptr, "GetMaxAttempts", nullptr, nullptr, Z_Construct_UFunction_ASP1PlayerState_GetMaxAttempts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASP1PlayerState_GetMaxAttempts_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASP1PlayerState_GetMaxAttempts_Statics::SP1PlayerState_eventGetMaxAttempts_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASP1PlayerState_GetMaxAttempts_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASP1PlayerState_GetMaxAttempts_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASP1PlayerState_GetMaxAttempts_Statics::SP1PlayerState_eventGetMaxAttempts_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASP1PlayerState_GetMaxAttempts()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASP1PlayerState_GetMaxAttempts_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASP1PlayerState::execGetMaxAttempts)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMaxAttempts();
	P_NATIVE_END;
}
// End Class ASP1PlayerState Function GetMaxAttempts

// Begin Class ASP1PlayerState Function IncrementAttempts
struct Z_Construct_UFunction_ASP1PlayerState_IncrementAttempts_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "SP1PlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASP1PlayerState_IncrementAttempts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASP1PlayerState, nullptr, "IncrementAttempts", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASP1PlayerState_IncrementAttempts_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASP1PlayerState_IncrementAttempts_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASP1PlayerState_IncrementAttempts()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASP1PlayerState_IncrementAttempts_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASP1PlayerState::execIncrementAttempts)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IncrementAttempts();
	P_NATIVE_END;
}
// End Class ASP1PlayerState Function IncrementAttempts

// Begin Class ASP1PlayerState Function IsFinished
struct Z_Construct_UFunction_ASP1PlayerState_IsFinished_Statics
{
	struct SP1PlayerState_eventIsFinished_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "SP1PlayerState.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ASP1PlayerState_IsFinished_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SP1PlayerState_eventIsFinished_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASP1PlayerState_IsFinished_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SP1PlayerState_eventIsFinished_Parms), &Z_Construct_UFunction_ASP1PlayerState_IsFinished_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASP1PlayerState_IsFinished_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASP1PlayerState_IsFinished_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASP1PlayerState_IsFinished_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASP1PlayerState_IsFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASP1PlayerState, nullptr, "IsFinished", nullptr, nullptr, Z_Construct_UFunction_ASP1PlayerState_IsFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASP1PlayerState_IsFinished_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASP1PlayerState_IsFinished_Statics::SP1PlayerState_eventIsFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASP1PlayerState_IsFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASP1PlayerState_IsFinished_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASP1PlayerState_IsFinished_Statics::SP1PlayerState_eventIsFinished_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASP1PlayerState_IsFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASP1PlayerState_IsFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASP1PlayerState::execIsFinished)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsFinished();
	P_NATIVE_END;
}
// End Class ASP1PlayerState Function IsFinished

// Begin Class ASP1PlayerState Function ResetState
struct Z_Construct_UFunction_ASP1PlayerState_ResetState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "SP1PlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASP1PlayerState_ResetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASP1PlayerState, nullptr, "ResetState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASP1PlayerState_ResetState_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASP1PlayerState_ResetState_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASP1PlayerState_ResetState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASP1PlayerState_ResetState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASP1PlayerState::execResetState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetState();
	P_NATIVE_END;
}
// End Class ASP1PlayerState Function ResetState

// Begin Class ASP1PlayerState
void ASP1PlayerState::StaticRegisterNativesASP1PlayerState()
{
	UClass* Class = ASP1PlayerState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentAttempts", &ASP1PlayerState::execGetCurrentAttempts },
		{ "GetMaxAttempts", &ASP1PlayerState::execGetMaxAttempts },
		{ "IncrementAttempts", &ASP1PlayerState::execIncrementAttempts },
		{ "IsFinished", &ASP1PlayerState::execIsFinished },
		{ "ResetState", &ASP1PlayerState::execResetState },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASP1PlayerState);
UClass* Z_Construct_UClass_ASP1PlayerState_NoRegister()
{
	return ASP1PlayerState::StaticClass();
}
struct Z_Construct_UClass_ASP1PlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SP1PlayerState.h" },
		{ "ModuleRelativePath", "SP1PlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAttempts_MetaData[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "SP1PlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAttempts_MetaData[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "SP1PlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFinished_MetaData[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "SP1PlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentAttempts;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAttempts;
	static void NewProp_bIsFinished_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFinished;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASP1PlayerState_GetCurrentAttempts, "GetCurrentAttempts" }, // 801961038
		{ &Z_Construct_UFunction_ASP1PlayerState_GetMaxAttempts, "GetMaxAttempts" }, // 2071738224
		{ &Z_Construct_UFunction_ASP1PlayerState_IncrementAttempts, "IncrementAttempts" }, // 3457865528
		{ &Z_Construct_UFunction_ASP1PlayerState_IsFinished, "IsFinished" }, // 4142673118
		{ &Z_Construct_UFunction_ASP1PlayerState_ResetState, "ResetState" }, // 1723859293
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASP1PlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASP1PlayerState_Statics::NewProp_CurrentAttempts = { "CurrentAttempts", nullptr, (EPropertyFlags)0x0020080000000034, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASP1PlayerState, CurrentAttempts), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentAttempts_MetaData), NewProp_CurrentAttempts_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASP1PlayerState_Statics::NewProp_MaxAttempts = { "MaxAttempts", nullptr, (EPropertyFlags)0x0020080000000034, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASP1PlayerState, MaxAttempts), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAttempts_MetaData), NewProp_MaxAttempts_MetaData) };
void Z_Construct_UClass_ASP1PlayerState_Statics::NewProp_bIsFinished_SetBit(void* Obj)
{
	((ASP1PlayerState*)Obj)->bIsFinished = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASP1PlayerState_Statics::NewProp_bIsFinished = { "bIsFinished", nullptr, (EPropertyFlags)0x0020080000000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASP1PlayerState), &Z_Construct_UClass_ASP1PlayerState_Statics::NewProp_bIsFinished_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFinished_MetaData), NewProp_bIsFinished_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASP1PlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASP1PlayerState_Statics::NewProp_CurrentAttempts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASP1PlayerState_Statics::NewProp_MaxAttempts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASP1PlayerState_Statics::NewProp_bIsFinished,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASP1PlayerState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASP1PlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_CH4SP1PROJECT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASP1PlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASP1PlayerState_Statics::ClassParams = {
	&ASP1PlayerState::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASP1PlayerState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASP1PlayerState_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASP1PlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_ASP1PlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASP1PlayerState()
{
	if (!Z_Registration_Info_UClass_ASP1PlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASP1PlayerState.OuterSingleton, Z_Construct_UClass_ASP1PlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASP1PlayerState.OuterSingleton;
}
template<> CH4SP1PROJECT_API UClass* StaticClass<ASP1PlayerState>()
{
	return ASP1PlayerState::StaticClass();
}
void ASP1PlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_CurrentAttempts(TEXT("CurrentAttempts"));
	static const FName Name_MaxAttempts(TEXT("MaxAttempts"));
	static const FName Name_bIsFinished(TEXT("bIsFinished"));
	const bool bIsValid = true
		&& Name_CurrentAttempts == ClassReps[(int32)ENetFields_Private::CurrentAttempts].Property->GetFName()
		&& Name_MaxAttempts == ClassReps[(int32)ENetFields_Private::MaxAttempts].Property->GetFName()
		&& Name_bIsFinished == ClassReps[(int32)ENetFields_Private::bIsFinished].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASP1PlayerState"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASP1PlayerState);
ASP1PlayerState::~ASP1PlayerState() {}
// End Class ASP1PlayerState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_asnsu_Desktop_CH4_SP1PROJECT_CH4SP1PROJECT_Source_CH4SP1PROJECT_SP1PlayerState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASP1PlayerState, ASP1PlayerState::StaticClass, TEXT("ASP1PlayerState"), &Z_Registration_Info_UClass_ASP1PlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASP1PlayerState), 2932075651U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_asnsu_Desktop_CH4_SP1PROJECT_CH4SP1PROJECT_Source_CH4SP1PROJECT_SP1PlayerState_h_2247001809(TEXT("/Script/CH4SP1PROJECT"),
	Z_CompiledInDeferFile_FID_Users_asnsu_Desktop_CH4_SP1PROJECT_CH4SP1PROJECT_Source_CH4SP1PROJECT_SP1PlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_asnsu_Desktop_CH4_SP1PROJECT_CH4SP1PROJECT_Source_CH4SP1PROJECT_SP1PlayerState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
