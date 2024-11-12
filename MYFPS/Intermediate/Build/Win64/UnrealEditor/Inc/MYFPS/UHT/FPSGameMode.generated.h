// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FPSGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYFPS_FPSGameMode_generated_h
#error "FPSGameMode.generated.h already included, missing '#pragma once' in FPSGameMode.h"
#endif
#define MYFPS_FPSGameMode_generated_h

#define FID_MYFPS_MYFPS_Source_MYFPS_FPSGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSGameMode(); \
	friend struct Z_Construct_UClass_AFPSGameMode_Statics; \
public: \
	DECLARE_CLASS(AFPSGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MYFPS"), NO_API) \
	DECLARE_SERIALIZER(AFPSGameMode)


#define FID_MYFPS_MYFPS_Source_MYFPS_FPSGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFPSGameMode(AFPSGameMode&&); \
	AFPSGameMode(const AFPSGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSGameMode) \
	NO_API virtual ~AFPSGameMode();


#define FID_MYFPS_MYFPS_Source_MYFPS_FPSGameMode_h_12_PROLOG
#define FID_MYFPS_MYFPS_Source_MYFPS_FPSGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MYFPS_MYFPS_Source_MYFPS_FPSGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_MYFPS_MYFPS_Source_MYFPS_FPSGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYFPS_API UClass* StaticClass<class AFPSGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MYFPS_MYFPS_Source_MYFPS_FPSGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
