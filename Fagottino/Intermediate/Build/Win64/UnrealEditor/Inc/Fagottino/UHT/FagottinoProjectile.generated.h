// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FagottinoProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef FAGOTTINO_FagottinoProjectile_generated_h
#error "FagottinoProjectile.generated.h already included, missing '#pragma once' in FagottinoProjectile.h"
#endif
#define FAGOTTINO_FagottinoProjectile_generated_h

#define FID_Users_jacop_Documents_GitHub_Firestarter_GameJam_Fagottino_Source_Fagottino_FagottinoProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_Users_jacop_Documents_GitHub_Firestarter_GameJam_Fagottino_Source_Fagottino_FagottinoProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFagottinoProjectile(); \
	friend struct Z_Construct_UClass_AFagottinoProjectile_Statics; \
public: \
	DECLARE_CLASS(AFagottinoProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Fagottino"), NO_API) \
	DECLARE_SERIALIZER(AFagottinoProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_jacop_Documents_GitHub_Firestarter_GameJam_Fagottino_Source_Fagottino_FagottinoProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFagottinoProjectile(AFagottinoProjectile&&); \
	AFagottinoProjectile(const AFagottinoProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFagottinoProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFagottinoProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFagottinoProjectile) \
	NO_API virtual ~AFagottinoProjectile();


#define FID_Users_jacop_Documents_GitHub_Firestarter_GameJam_Fagottino_Source_Fagottino_FagottinoProjectile_h_12_PROLOG
#define FID_Users_jacop_Documents_GitHub_Firestarter_GameJam_Fagottino_Source_Fagottino_FagottinoProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_jacop_Documents_GitHub_Firestarter_GameJam_Fagottino_Source_Fagottino_FagottinoProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_jacop_Documents_GitHub_Firestarter_GameJam_Fagottino_Source_Fagottino_FagottinoProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_jacop_Documents_GitHub_Firestarter_GameJam_Fagottino_Source_Fagottino_FagottinoProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FAGOTTINO_API UClass* StaticClass<class AFagottinoProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_jacop_Documents_GitHub_Firestarter_GameJam_Fagottino_Source_Fagottino_FagottinoProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
