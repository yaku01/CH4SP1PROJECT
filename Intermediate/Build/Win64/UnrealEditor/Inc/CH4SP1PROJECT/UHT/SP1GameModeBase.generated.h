// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SP1GameModeBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASP1PlayerState;
#ifdef CH4SP1PROJECT_SP1GameModeBase_generated_h
#error "SP1GameModeBase.generated.h already included, missing '#pragma once' in SP1GameModeBase.h"
#endif
#define CH4SP1PROJECT_SP1GameModeBase_generated_h

#define FID_Users_asnsu_Desktop_CH4_SP1PROJECT_CH4SP1PROJECT_Source_CH4SP1PROJECT_SP1GameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execResetGame); \
	DECLARE_FUNCTION(execCheckGameEnd); \
	DECLARE_FUNCTION(execCheckAnswer); \
	DECLARE_FUNCTION(execGenerateSecretNumbers);


#define FID_Users_asnsu_Desktop_CH4_SP1PROJECT_CH4SP1PROJECT_Source_CH4SP1PROJECT_SP1GameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASP1GameModeBase(); \
	friend struct Z_Construct_UClass_ASP1GameModeBase_Statics; \
public: \
	DECLARE_CLASS(ASP1GameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CH4SP1PROJECT"), NO_API) \
	DECLARE_SERIALIZER(ASP1GameModeBase)


#define FID_Users_asnsu_Desktop_CH4_SP1PROJECT_CH4SP1PROJECT_Source_CH4SP1PROJECT_SP1GameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASP1GameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASP1GameModeBase(ASP1GameModeBase&&); \
	ASP1GameModeBase(const ASP1GameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASP1GameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASP1GameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASP1GameModeBase) \
	NO_API virtual ~ASP1GameModeBase();


#define FID_Users_asnsu_Desktop_CH4_SP1PROJECT_CH4SP1PROJECT_Source_CH4SP1PROJECT_SP1GameModeBase_h_12_PROLOG
#define FID_Users_asnsu_Desktop_CH4_SP1PROJECT_CH4SP1PROJECT_Source_CH4SP1PROJECT_SP1GameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_asnsu_Desktop_CH4_SP1PROJECT_CH4SP1PROJECT_Source_CH4SP1PROJECT_SP1GameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_asnsu_Desktop_CH4_SP1PROJECT_CH4SP1PROJECT_Source_CH4SP1PROJECT_SP1GameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_asnsu_Desktop_CH4_SP1PROJECT_CH4SP1PROJECT_Source_CH4SP1PROJECT_SP1GameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CH4SP1PROJECT_API UClass* StaticClass<class ASP1GameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_asnsu_Desktop_CH4_SP1PROJECT_CH4SP1PROJECT_Source_CH4SP1PROJECT_SP1GameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
