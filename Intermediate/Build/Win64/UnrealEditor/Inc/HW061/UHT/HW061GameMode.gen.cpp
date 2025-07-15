// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HW061/HW061GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHW061GameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
HW061_API UClass* Z_Construct_UClass_AHW061GameMode();
HW061_API UClass* Z_Construct_UClass_AHW061GameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_HW061();
// End Cross Module References

// Begin Class AHW061GameMode
void AHW061GameMode::StaticRegisterNativesAHW061GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHW061GameMode);
UClass* Z_Construct_UClass_AHW061GameMode_NoRegister()
{
	return AHW061GameMode::StaticClass();
}
struct Z_Construct_UClass_AHW061GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "HW061GameMode.h" },
		{ "ModuleRelativePath", "HW061GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHW061GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AHW061GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_HW061,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHW061GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHW061GameMode_Statics::ClassParams = {
	&AHW061GameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHW061GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AHW061GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHW061GameMode()
{
	if (!Z_Registration_Info_UClass_AHW061GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHW061GameMode.OuterSingleton, Z_Construct_UClass_AHW061GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHW061GameMode.OuterSingleton;
}
template<> HW061_API UClass* StaticClass<AHW061GameMode>()
{
	return AHW061GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHW061GameMode);
AHW061GameMode::~AHW061GameMode() {}
// End Class AHW061GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_a_Desktop_git_HW061_Source_HW061_HW061GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHW061GameMode, AHW061GameMode::StaticClass, TEXT("AHW061GameMode"), &Z_Registration_Info_UClass_AHW061GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHW061GameMode), 3068794350U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_a_Desktop_git_HW061_Source_HW061_HW061GameMode_h_1358007919(TEXT("/Script/HW061"),
	Z_CompiledInDeferFile_FID_Users_a_Desktop_git_HW061_Source_HW061_HW061GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_a_Desktop_git_HW061_Source_HW061_HW061GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
