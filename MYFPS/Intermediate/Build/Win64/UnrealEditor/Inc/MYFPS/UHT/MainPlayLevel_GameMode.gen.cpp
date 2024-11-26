// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MYFPS/MainPlayLevel_GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainPlayLevel_GameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
MYFPS_API UClass* Z_Construct_UClass_AMainPlayLevel_GameMode();
MYFPS_API UClass* Z_Construct_UClass_AMainPlayLevel_GameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_MYFPS();
// End Cross Module References

// Begin Class AMainPlayLevel_GameMode
void AMainPlayLevel_GameMode::StaticRegisterNativesAMainPlayLevel_GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMainPlayLevel_GameMode);
UClass* Z_Construct_UClass_AMainPlayLevel_GameMode_NoRegister()
{
	return AMainPlayLevel_GameMode::StaticClass();
}
struct Z_Construct_UClass_AMainPlayLevel_GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MainPlayLevel_GameMode.h" },
		{ "ModuleRelativePath", "MainPlayLevel_GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainPlayLevel_GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMainPlayLevel_GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_MYFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayLevel_GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainPlayLevel_GameMode_Statics::ClassParams = {
	&AMainPlayLevel_GameMode::StaticClass,
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
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayLevel_GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMainPlayLevel_GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMainPlayLevel_GameMode()
{
	if (!Z_Registration_Info_UClass_AMainPlayLevel_GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainPlayLevel_GameMode.OuterSingleton, Z_Construct_UClass_AMainPlayLevel_GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMainPlayLevel_GameMode.OuterSingleton;
}
template<> MYFPS_API UClass* StaticClass<AMainPlayLevel_GameMode>()
{
	return AMainPlayLevel_GameMode::StaticClass();
}
AMainPlayLevel_GameMode::AMainPlayLevel_GameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMainPlayLevel_GameMode);
AMainPlayLevel_GameMode::~AMainPlayLevel_GameMode() {}
// End Class AMainPlayLevel_GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_code_MYFPS_MYFPS_Source_MYFPS_MainPlayLevel_GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMainPlayLevel_GameMode, AMainPlayLevel_GameMode::StaticClass, TEXT("AMainPlayLevel_GameMode"), &Z_Registration_Info_UClass_AMainPlayLevel_GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainPlayLevel_GameMode), 2384993408U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_code_MYFPS_MYFPS_Source_MYFPS_MainPlayLevel_GameMode_h_1001892056(TEXT("/Script/MYFPS"),
	Z_CompiledInDeferFile_FID_code_MYFPS_MYFPS_Source_MYFPS_MainPlayLevel_GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_code_MYFPS_MYFPS_Source_MYFPS_MainPlayLevel_GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
