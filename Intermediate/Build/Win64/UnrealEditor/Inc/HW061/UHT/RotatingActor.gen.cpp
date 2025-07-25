// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HW061/RotatingActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRotatingActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
HW061_API UClass* Z_Construct_UClass_ARotatingActor();
HW061_API UClass* Z_Construct_UClass_ARotatingActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_HW061();
// End Cross Module References

// Begin Class ARotatingActor
void ARotatingActor::StaticRegisterNativesARotatingActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARotatingActor);
UClass* Z_Construct_UClass_ARotatingActor_NoRegister()
{
	return ARotatingActor::StaticClass();
}
struct Z_Construct_UClass_ARotatingActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RotatingActor.h" },
		{ "ModuleRelativePath", "RotatingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComp_MetaData[] = {
		{ "Category", "RotatingActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RotatingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoSpeed_MetaData[] = {
		{ "Category", "RotatingActor" },
		{ "ModuleRelativePath", "RotatingActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RoSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARotatingActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARotatingActor_Statics::NewProp_StaticMeshComp = { "StaticMeshComp", nullptr, (EPropertyFlags)0x0144000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARotatingActor, StaticMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComp_MetaData), NewProp_StaticMeshComp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARotatingActor_Statics::NewProp_RoSpeed = { "RoSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARotatingActor, RoSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoSpeed_MetaData), NewProp_RoSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARotatingActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotatingActor_Statics::NewProp_StaticMeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotatingActor_Statics::NewProp_RoSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARotatingActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARotatingActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_HW061,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARotatingActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARotatingActor_Statics::ClassParams = {
	&ARotatingActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ARotatingActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ARotatingActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARotatingActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ARotatingActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARotatingActor()
{
	if (!Z_Registration_Info_UClass_ARotatingActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARotatingActor.OuterSingleton, Z_Construct_UClass_ARotatingActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARotatingActor.OuterSingleton;
}
template<> HW061_API UClass* StaticClass<ARotatingActor>()
{
	return ARotatingActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARotatingActor);
ARotatingActor::~ARotatingActor() {}
// End Class ARotatingActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_a_Desktop_git_HW061_Source_HW061_RotatingActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARotatingActor, ARotatingActor::StaticClass, TEXT("ARotatingActor"), &Z_Registration_Info_UClass_ARotatingActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARotatingActor), 116499072U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_a_Desktop_git_HW061_Source_HW061_RotatingActor_h_1137523472(TEXT("/Script/HW061"),
	Z_CompiledInDeferFile_FID_Users_a_Desktop_git_HW061_Source_HW061_RotatingActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_a_Desktop_git_HW061_Source_HW061_RotatingActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
