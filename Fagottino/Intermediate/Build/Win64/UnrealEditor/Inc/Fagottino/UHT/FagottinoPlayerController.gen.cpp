// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Fagottino/FagottinoPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFagottinoPlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
FAGOTTINO_API UClass* Z_Construct_UClass_AFagottinoPlayerController();
FAGOTTINO_API UClass* Z_Construct_UClass_AFagottinoPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_Fagottino();
// End Cross Module References

// Begin Class AFagottinoPlayerController
void AFagottinoPlayerController::StaticRegisterNativesAFagottinoPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFagottinoPlayerController);
UClass* Z_Construct_UClass_AFagottinoPlayerController_NoRegister()
{
	return AFagottinoPlayerController::StaticClass();
}
struct Z_Construct_UClass_AFagottinoPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "FagottinoPlayerController.h" },
		{ "ModuleRelativePath", "FagottinoPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Context to be used for player input */" },
#endif
		{ "ModuleRelativePath", "FagottinoPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Context to be used for player input" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFagottinoPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFagottinoPlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFagottinoPlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFagottinoPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFagottinoPlayerController_Statics::NewProp_InputMappingContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFagottinoPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFagottinoPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Fagottino,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFagottinoPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFagottinoPlayerController_Statics::ClassParams = {
	&AFagottinoPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AFagottinoPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AFagottinoPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFagottinoPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AFagottinoPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFagottinoPlayerController()
{
	if (!Z_Registration_Info_UClass_AFagottinoPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFagottinoPlayerController.OuterSingleton, Z_Construct_UClass_AFagottinoPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFagottinoPlayerController.OuterSingleton;
}
template<> FAGOTTINO_API UClass* StaticClass<AFagottinoPlayerController>()
{
	return AFagottinoPlayerController::StaticClass();
}
AFagottinoPlayerController::AFagottinoPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFagottinoPlayerController);
AFagottinoPlayerController::~AFagottinoPlayerController() {}
// End Class AFagottinoPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jacop_Documents_GitHub_Firestarter_GameJam_Fagottino_Source_Fagottino_FagottinoPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFagottinoPlayerController, AFagottinoPlayerController::StaticClass, TEXT("AFagottinoPlayerController"), &Z_Registration_Info_UClass_AFagottinoPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFagottinoPlayerController), 1700774819U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jacop_Documents_GitHub_Firestarter_GameJam_Fagottino_Source_Fagottino_FagottinoPlayerController_h_3179634448(TEXT("/Script/Fagottino"),
	Z_CompiledInDeferFile_FID_Users_jacop_Documents_GitHub_Firestarter_GameJam_Fagottino_Source_Fagottino_FagottinoPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jacop_Documents_GitHub_Firestarter_GameJam_Fagottino_Source_Fagottino_FagottinoPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
