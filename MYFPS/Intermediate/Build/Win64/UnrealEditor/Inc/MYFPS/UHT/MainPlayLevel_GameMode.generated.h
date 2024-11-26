// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MainPlayLevel_GameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYFPS_MainPlayLevel_GameMode_generated_h
#error "MainPlayLevel_GameMode.generated.h already included, missing '#pragma once' in MainPlayLevel_GameMode.h"
#endif
#define MYFPS_MainPlayLevel_GameMode_generated_h

#define FID_code_MYFPS_MYFPS_Source_MYFPS_MainPlayLevel_GameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainPlayLevel_GameMode(); \
	friend struct Z_Construct_UClass_AMainPlayLevel_GameMode_Statics; \
public: \
	DECLARE_CLASS(AMainPlayLevel_GameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MYFPS"), NO_API) \
	DECLARE_SERIALIZER(AMainPlayLevel_GameMode)


#define FID_code_MYFPS_MYFPS_Source_MYFPS_MainPlayLevel_GameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMainPlayLevel_GameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMainPlayLevel_GameMode(AMainPlayLevel_GameMode&&); \
	AMainPlayLevel_GameMode(const AMainPlayLevel_GameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainPlayLevel_GameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainPlayLevel_GameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMainPlayLevel_GameMode) \
	NO_API virtual ~AMainPlayLevel_GameMode();


#define FID_code_MYFPS_MYFPS_Source_MYFPS_MainPlayLevel_GameMode_h_12_PROLOG
#define FID_code_MYFPS_MYFPS_Source_MYFPS_MainPlayLevel_GameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_code_MYFPS_MYFPS_Source_MYFPS_MainPlayLevel_GameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_code_MYFPS_MYFPS_Source_MYFPS_MainPlayLevel_GameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYFPS_API UClass* StaticClass<class AMainPlayLevel_GameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_code_MYFPS_MYFPS_Source_MYFPS_MainPlayLevel_GameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
