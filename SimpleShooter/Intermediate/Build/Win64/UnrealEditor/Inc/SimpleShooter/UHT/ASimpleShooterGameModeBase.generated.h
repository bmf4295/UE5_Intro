// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ASimpleShooterGameModeBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIMPLESHOOTER_ASimpleShooterGameModeBase_generated_h
#error "ASimpleShooterGameModeBase.generated.h already included, missing '#pragma once' in ASimpleShooterGameModeBase.h"
#endif
#define SIMPLESHOOTER_ASimpleShooterGameModeBase_generated_h

#define FID_SimpleShooter_Source_SimpleShooter_ASimpleShooterGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAASimpleShooterGameModeBase(); \
	friend struct Z_Construct_UClass_AASimpleShooterGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AASimpleShooterGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SimpleShooter"), NO_API) \
	DECLARE_SERIALIZER(AASimpleShooterGameModeBase)


#define FID_SimpleShooter_Source_SimpleShooter_ASimpleShooterGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AASimpleShooterGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AASimpleShooterGameModeBase(AASimpleShooterGameModeBase&&); \
	AASimpleShooterGameModeBase(const AASimpleShooterGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AASimpleShooterGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AASimpleShooterGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AASimpleShooterGameModeBase) \
	NO_API virtual ~AASimpleShooterGameModeBase();


#define FID_SimpleShooter_Source_SimpleShooter_ASimpleShooterGameModeBase_h_12_PROLOG
#define FID_SimpleShooter_Source_SimpleShooter_ASimpleShooterGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SimpleShooter_Source_SimpleShooter_ASimpleShooterGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_SimpleShooter_Source_SimpleShooter_ASimpleShooterGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLESHOOTER_API UClass* StaticClass<class AASimpleShooterGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SimpleShooter_Source_SimpleShooter_ASimpleShooterGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
