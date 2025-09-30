// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFagottino_init() {}
	FAGOTTINO_API UFunction* Z_Construct_UDelegateFunction_Fagottino_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Fagottino;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Fagottino()
	{
		if (!Z_Registration_Info_UPackage__Script_Fagottino.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Fagottino_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Fagottino",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xD6B2AF8C,
				0xA67F6155,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Fagottino.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Fagottino.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Fagottino(Z_Construct_UPackage__Script_Fagottino, TEXT("/Script/Fagottino"), Z_Registration_Info_UPackage__Script_Fagottino, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xD6B2AF8C, 0xA67F6155));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
