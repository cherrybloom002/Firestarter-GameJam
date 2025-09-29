// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Fagottino/FagottinoGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFagottinoGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
FAGOTTINO_API UClass* Z_Construct_UClass_AFagottinoGameMode();
FAGOTTINO_API UClass* Z_Construct_UClass_AFagottinoGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Fagottino();
// End Cross Module References

// Begin Class AFagottinoGameMode
void AFagottinoGameMode::StaticRegisterNativesAFagottinoGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFagottinoGameMode);
UClass* Z_Construct_UClass_AFagottinoGameMode_NoRegister()
{
	return AFagottinoGameMode::StaticClass();
}
struct Z_Construct_UClass_AFagottinoGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FagottinoGameMode.h" },
		{ "ModuleRelativePath", "FagottinoGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFagottinoGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFagottinoGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Fagottino,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFagottinoGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFagottinoGameMode_Statics::ClassParams = {
	&AFagottinoGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFagottinoGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AFagottinoGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFagottinoGameMode()
{
	if (!Z_Registration_Info_UClass_AFagottinoGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFagottinoGameMode.OuterSingleton, Z_Construct_UClass_AFagottinoGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFagottinoGameMode.OuterSingleton;
}
template<> FAGOTTINO_API UClass* StaticClass<AFagottinoGameMode>()
{
	return AFagottinoGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFagottinoGameMode);
AFagottinoGameMode::~AFagottinoGameMode() {}
// End Class AFagottinoGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_acer_Desktop_Projects_Unreal_Firestarter_GameJam_Fagottino_Source_Fagottino_FagottinoGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFagottinoGameMode, AFagottinoGameMode::StaticClass, TEXT("AFagottinoGameMode"), &Z_Registration_Info_UClass_AFagottinoGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFagottinoGameMode), 2584180228U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_acer_Desktop_Projects_Unreal_Firestarter_GameJam_Fagottino_Source_Fagottino_FagottinoGameMode_h_3818541667(TEXT("/Script/Fagottino"),
	Z_CompiledInDeferFile_FID_Users_acer_Desktop_Projects_Unreal_Firestarter_GameJam_Fagottino_Source_Fagottino_FagottinoGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_acer_Desktop_Projects_Unreal_Firestarter_GameJam_Fagottino_Source_Fagottino_FagottinoGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
