// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SP1PlayerState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CH4SP1PROJECT_SP1PlayerState_generated_h
#error "SP1PlayerState.generated.h already included, missing '#pragma once' in SP1PlayerState.h"
#endif
#define CH4SP1PROJECT_SP1PlayerState_generated_h

#define FID_Users_asnsu_Desktop_CH4_SP1PROJECT_CH4SP1PROJECT_Source_CH4SP1PROJECT_SP1PlayerState_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsFinished); \
	DECLARE_FUNCTION(execGetMaxAttempts); \
	DECLARE_FUNCTION(execGetCurrentAttempts); \
	DECLARE_FUNCTION(execResetState); \
	DECLARE_FUNCTION(execIncrementAttempts);


#define FID_Users_asnsu_Desktop_CH4_SP1PROJECT_CH4SP1PROJECT_Source_CH4SP1PROJECT_SP1PlayerState_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASP1PlayerState(); \
	friend struct Z_Construct_UClass_ASP1PlayerState_Statics; \
public: \
	DECLARE_CLASS(ASP1PlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CH4SP1PROJECT"), NO_API) \
	DECLARE_SERIALIZER(ASP1PlayerState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentAttempts=NETFIELD_REP_START, \
		MaxAttempts, \
		bIsFinished, \
		NETFIELD_REP_END=bIsFinished	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Users_asnsu_Desktop_CH4_SP1PROJECT_CH4SP1PROJECT_Source_CH4SP1PROJECT_SP1PlayerState_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASP1PlayerState(ASP1PlayerState&&); \
	ASP1PlayerState(const ASP1PlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASP1PlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASP1PlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASP1PlayerState) \
	NO_API virtual ~ASP1PlayerState();


#define FID_Users_asnsu_Desktop_CH4_SP1PROJECT_CH4SP1PROJECT_Source_CH4SP1PROJECT_SP1PlayerState_h_10_PROLOG
#define FID_Users_asnsu_Desktop_CH4_SP1PROJECT_CH4SP1PROJECT_Source_CH4SP1PROJECT_SP1PlayerState_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_asnsu_Desktop_CH4_SP1PROJECT_CH4SP1PROJECT_Source_CH4SP1PROJECT_SP1PlayerState_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_asnsu_Desktop_CH4_SP1PROJECT_CH4SP1PROJECT_Source_CH4SP1PROJECT_SP1PlayerState_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_asnsu_Desktop_CH4_SP1PROJECT_CH4SP1PROJECT_Source_CH4SP1PROJECT_SP1PlayerState_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CH4SP1PROJECT_API UClass* StaticClass<class ASP1PlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_asnsu_Desktop_CH4_SP1PROJECT_CH4SP1PROJECT_Source_CH4SP1PROJECT_SP1PlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
