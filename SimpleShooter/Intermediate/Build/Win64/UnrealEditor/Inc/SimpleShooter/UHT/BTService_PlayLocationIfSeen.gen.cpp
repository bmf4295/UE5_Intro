// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleShooter/BTService_PlayLocationIfSeen.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_PlayLocationIfSeen() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTService_BlackboardBase();
SIMPLESHOOTER_API UClass* Z_Construct_UClass_UBTService_PlayLocationIfSeen();
SIMPLESHOOTER_API UClass* Z_Construct_UClass_UBTService_PlayLocationIfSeen_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleShooter();
// End Cross Module References

// Begin Class UBTService_PlayLocationIfSeen
void UBTService_PlayLocationIfSeen::StaticRegisterNativesUBTService_PlayLocationIfSeen()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTService_PlayLocationIfSeen);
UClass* Z_Construct_UClass_UBTService_PlayLocationIfSeen_NoRegister()
{
	return UBTService_PlayLocationIfSeen::StaticClass();
}
struct Z_Construct_UClass_UBTService_PlayLocationIfSeen_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BTService_PlayLocationIfSeen.h" },
		{ "ModuleRelativePath", "BTService_PlayLocationIfSeen.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_PlayLocationIfSeen>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTService_PlayLocationIfSeen_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTService_BlackboardBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleShooter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_PlayLocationIfSeen_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTService_PlayLocationIfSeen_Statics::ClassParams = {
	&UBTService_PlayLocationIfSeen::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_PlayLocationIfSeen_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTService_PlayLocationIfSeen_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTService_PlayLocationIfSeen()
{
	if (!Z_Registration_Info_UClass_UBTService_PlayLocationIfSeen.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTService_PlayLocationIfSeen.OuterSingleton, Z_Construct_UClass_UBTService_PlayLocationIfSeen_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTService_PlayLocationIfSeen.OuterSingleton;
}
template<> SIMPLESHOOTER_API UClass* StaticClass<UBTService_PlayLocationIfSeen>()
{
	return UBTService_PlayLocationIfSeen::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_PlayLocationIfSeen);
UBTService_PlayLocationIfSeen::~UBTService_PlayLocationIfSeen() {}
// End Class UBTService_PlayLocationIfSeen

// Begin Registration
struct Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_BTService_PlayLocationIfSeen_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTService_PlayLocationIfSeen, UBTService_PlayLocationIfSeen::StaticClass, TEXT("UBTService_PlayLocationIfSeen"), &Z_Registration_Info_UClass_UBTService_PlayLocationIfSeen, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTService_PlayLocationIfSeen), 1720772474U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_BTService_PlayLocationIfSeen_h_1664321304(TEXT("/Script/SimpleShooter"),
	Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_BTService_PlayLocationIfSeen_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_BTService_PlayLocationIfSeen_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
