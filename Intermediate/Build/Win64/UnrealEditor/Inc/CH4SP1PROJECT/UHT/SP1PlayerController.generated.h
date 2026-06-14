// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SP1PlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CH4SP1PROJECT_SP1PlayerController_generated_h
#error "SP1PlayerController.generated.h already included, missing '#pragma once' in SP1PlayerController.h"
#endif
#define CH4SP1PROJECT_SP1PlayerController_generated_h

#define FID_Users_asnsu_Desktop_CH4_SP1PROJECT_CH4SP1PROJECT_Source_CH4SP1PROJECT_SP1PlayerController_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_ShowResult_Implementation(const FString& ResultText); \
	virtual void Multicast_ReceiveChat_Implementation(const FString& ChatMessage); \
	virtual void Server_SendChat_Implementation(const FString& Message); \
	DECLARE_FUNCTION(execMulticast_ShowResult); \
	DECLARE_FUNCTION(execMulticast_ReceiveChat); \
	DECLARE_FUNCTION(execServer_SendChat);


#define FID_Users_asnsu_Desktop_CH4_SP1PROJECT_CH4SP1PROJECT_Source_CH4SP1PROJECT_SP1PlayerController_h_12_CALLBACK_WRAPPERS
#define FID_Users_asnsu_Desktop_CH4_SP1PROJECT_CH4SP1PROJECT_Source_CH4SP1PROJECT_SP1PlayerController_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASP1PlayerController(); \
	friend struct Z_Construct_UClass_ASP1PlayerController_Statics; \
public: \
	DECLARE_CLASS(ASP1PlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CH4SP1PROJECT"), NO_API) \
	DECLARE_SERIALIZER(ASP1PlayerController)


#define FID_Users_asnsu_Desktop_CH4_SP1PROJECT_CH4SP1PROJECT_Source_CH4SP1PROJECT_SP1PlayerController_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASP1PlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASP1PlayerController(ASP1PlayerController&&); \
	ASP1PlayerController(const ASP1PlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASP1PlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASP1PlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASP1PlayerController) \
	NO_API virtual ~ASP1PlayerController();


#define FID_Users_asnsu_Desktop_CH4_SP1PROJECT_CH4SP1PROJECT_Source_CH4SP1PROJECT_SP1PlayerController_h_9_PROLOG
#define FID_Users_asnsu_Desktop_CH4_SP1PROJECT_CH4SP1PROJECT_Source_CH4SP1PROJECT_SP1PlayerController_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_asnsu_Desktop_CH4_SP1PROJECT_CH4SP1PROJECT_Source_CH4SP1PROJECT_SP1PlayerController_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_asnsu_Desktop_CH4_SP1PROJECT_CH4SP1PROJECT_Source_CH4SP1PROJECT_SP1PlayerController_h_12_CALLBACK_WRAPPERS \
	FID_Users_asnsu_Desktop_CH4_SP1PROJECT_CH4SP1PROJECT_Source_CH4SP1PROJECT_SP1PlayerController_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_asnsu_Desktop_CH4_SP1PROJECT_CH4SP1PROJECT_Source_CH4SP1PROJECT_SP1PlayerController_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CH4SP1PROJECT_API UClass* StaticClass<class ASP1PlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_asnsu_Desktop_CH4_SP1PROJECT_CH4SP1PROJECT_Source_CH4SP1PROJECT_SP1PlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
