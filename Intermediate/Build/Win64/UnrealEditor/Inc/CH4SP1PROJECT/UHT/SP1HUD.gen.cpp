// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CH4SP1PROJECT/SP1HUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSP1HUD() {}

// Begin Cross Module References
CH4SP1PROJECT_API UClass* Z_Construct_UClass_ASP1HUD();
CH4SP1PROJECT_API UClass* Z_Construct_UClass_ASP1HUD_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AHUD();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_CH4SP1PROJECT();
// End Cross Module References

// Begin Class ASP1HUD
void ASP1HUD::StaticRegisterNativesASP1HUD()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASP1HUD);
UClass* Z_Construct_UClass_ASP1HUD_NoRegister()
{
	return ASP1HUD::StaticClass();
}
struct Z_Construct_UClass_ASP1HUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "SP1HUD.h" },
		{ "ModuleRelativePath", "SP1HUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "SP1HUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoticeWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "SP1HUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoticeResultText_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "SP1HUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SP1HUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoticeWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SP1HUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ChatWidgetClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_NoticeWidgetClass;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NoticeResultText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChatWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NoticeWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASP1HUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASP1HUD_Statics::NewProp_ChatWidgetClass = { "ChatWidgetClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASP1HUD, ChatWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatWidgetClass_MetaData), NewProp_ChatWidgetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASP1HUD_Statics::NewProp_NoticeWidgetClass = { "NoticeWidgetClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASP1HUD, NoticeWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoticeWidgetClass_MetaData), NewProp_NoticeWidgetClass_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ASP1HUD_Statics::NewProp_NoticeResultText = { "NoticeResultText", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASP1HUD, NoticeResultText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoticeResultText_MetaData), NewProp_NoticeResultText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASP1HUD_Statics::NewProp_ChatWidget = { "ChatWidget", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASP1HUD, ChatWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatWidget_MetaData), NewProp_ChatWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASP1HUD_Statics::NewProp_NoticeWidget = { "NoticeWidget", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASP1HUD, NoticeWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoticeWidget_MetaData), NewProp_NoticeWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASP1HUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASP1HUD_Statics::NewProp_ChatWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASP1HUD_Statics::NewProp_NoticeWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASP1HUD_Statics::NewProp_NoticeResultText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASP1HUD_Statics::NewProp_ChatWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASP1HUD_Statics::NewProp_NoticeWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASP1HUD_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASP1HUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_CH4SP1PROJECT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASP1HUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASP1HUD_Statics::ClassParams = {
	&ASP1HUD::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASP1HUD_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASP1HUD_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASP1HUD_Statics::Class_MetaDataParams), Z_Construct_UClass_ASP1HUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASP1HUD()
{
	if (!Z_Registration_Info_UClass_ASP1HUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASP1HUD.OuterSingleton, Z_Construct_UClass_ASP1HUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASP1HUD.OuterSingleton;
}
template<> CH4SP1PROJECT_API UClass* StaticClass<ASP1HUD>()
{
	return ASP1HUD::StaticClass();
}
ASP1HUD::ASP1HUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASP1HUD);
ASP1HUD::~ASP1HUD() {}
// End Class ASP1HUD

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_asnsu_Desktop_CH4_SP1PROJECT_CH4SP1PROJECT_Source_CH4SP1PROJECT_SP1HUD_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASP1HUD, ASP1HUD::StaticClass, TEXT("ASP1HUD"), &Z_Registration_Info_UClass_ASP1HUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASP1HUD), 2881943348U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_asnsu_Desktop_CH4_SP1PROJECT_CH4SP1PROJECT_Source_CH4SP1PROJECT_SP1HUD_h_2474443701(TEXT("/Script/CH4SP1PROJECT"),
	Z_CompiledInDeferFile_FID_Users_asnsu_Desktop_CH4_SP1PROJECT_CH4SP1PROJECT_Source_CH4SP1PROJECT_SP1HUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_asnsu_Desktop_CH4_SP1PROJECT_CH4SP1PROJECT_Source_CH4SP1PROJECT_SP1HUD_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
