// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MYFPS/FPSGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
MYFPS_API UClass* Z_Construct_UClass_AFPSGameMode();
MYFPS_API UClass* Z_Construct_UClass_AFPSGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_MYFPS();
// End Cross Module References

// Begin Class AFPSGameMode
void AFPSGameMode::StaticRegisterNativesAFPSGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFPSGameMode);
UClass* Z_Construct_UClass_AFPSGameMode_NoRegister()
{
	return AFPSGameMode::StaticClass();
}
struct Z_Construct_UClass_AFPSGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FPSGameMode.h" },
		{ "ModuleRelativePath", "FPSGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFPSGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_MYFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPSGameMode_Statics::ClassParams = {
	&AFPSGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AFPSGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFPSGameMode()
{
	if (!Z_Registration_Info_UClass_AFPSGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPSGameMode.OuterSingleton, Z_Construct_UClass_AFPSGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFPSGameMode.OuterSingleton;
}
template<> MYFPS_API UClass* StaticClass<AFPSGameMode>()
{
	return AFPSGameMode::StaticClass();
}
AFPSGameMode::AFPSGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSGameMode);
AFPSGameMode::~AFPSGameMode() {}
// End Class AFPSGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_MYFPS_MYFPS_Source_MYFPS_FPSGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFPSGameMode, AFPSGameMode::StaticClass, TEXT("AFPSGameMode"), &Z_Registration_Info_UClass_AFPSGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPSGameMode), 2930708160U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MYFPS_MYFPS_Source_MYFPS_FPSGameMode_h_3125977107(TEXT("/Script/MYFPS"),
	Z_CompiledInDeferFile_FID_MYFPS_MYFPS_Source_MYFPS_FPSGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MYFPS_MYFPS_Source_MYFPS_FPSGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
