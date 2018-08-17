// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Bitmasker.h"
#include "Bitmasker.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1Bitmasker() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();

	BITMASKER_API class UFunction* Z_Construct_UFunction_UBitmaskerFunctionLibrary_AddEnum();
	BITMASKER_API class UFunction* Z_Construct_UFunction_UBitmaskerFunctionLibrary_EnumCount();
	BITMASKER_API class UFunction* Z_Construct_UFunction_UBitmaskerFunctionLibrary_FlipEnum();
	BITMASKER_API class UFunction* Z_Construct_UFunction_UBitmaskerFunctionLibrary_HasEnum();
	BITMASKER_API class UFunction* Z_Construct_UFunction_UBitmaskerFunctionLibrary_RemoveEnum();
	BITMASKER_API class UFunction* Z_Construct_UFunction_UBitmaskerFunctionLibrary_ToBitmask();
	BITMASKER_API class UClass* Z_Construct_UClass_UBitmaskerFunctionLibrary_NoRegister();
	BITMASKER_API class UClass* Z_Construct_UClass_UBitmaskerFunctionLibrary();
	BITMASKER_API class UPackage* Z_Construct_UPackage__Script_Bitmasker();
	void UBitmaskerFunctionLibrary::StaticRegisterNativesUBitmaskerFunctionLibrary()
	{
		UClass* Class = UBitmaskerFunctionLibrary::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "AddEnum", (Native)&UBitmaskerFunctionLibrary::execAddEnum },
			{ "EnumCount", (Native)&UBitmaskerFunctionLibrary::execEnumCount },
			{ "FlipEnum", (Native)&UBitmaskerFunctionLibrary::execFlipEnum },
			{ "HasEnum", (Native)&UBitmaskerFunctionLibrary::execHasEnum },
			{ "RemoveEnum", (Native)&UBitmaskerFunctionLibrary::execRemoveEnum },
			{ "ToBitmask", (Native)&UBitmaskerFunctionLibrary::execToBitmask },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 6);
	}
	UFunction* Z_Construct_UFunction_UBitmaskerFunctionLibrary_AddEnum()
	{
		struct BitmaskerFunctionLibrary_eventAddEnum_Parms
		{
			int32 Bitmask;
			uint8 Enum;
			int32 ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UBitmaskerFunctionLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AddEnum"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x14022401, 65535, sizeof(BitmaskerFunctionLibrary_eventAddEnum_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ReturnValue, BitmaskerFunctionLibrary_eventAddEnum_Parms), 0x0010000000000580);
			UProperty* NewProp_Enum = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Enum"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(Enum, BitmaskerFunctionLibrary_eventAddEnum_Parms), 0x0010000000000080);
			UProperty* NewProp_Bitmask = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Bitmask"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Bitmask, BitmaskerFunctionLibrary_eventAddEnum_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Bitmask"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BitmaskerFunctionLibrary.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBitmaskerFunctionLibrary_EnumCount()
	{
		struct BitmaskerFunctionLibrary_eventEnumCount_Parms
		{
			int32 Bitmask;
			int32 ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UBitmaskerFunctionLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EnumCount"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x14022401, 65535, sizeof(BitmaskerFunctionLibrary_eventEnumCount_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ReturnValue, BitmaskerFunctionLibrary_eventEnumCount_Parms), 0x0010000000000580);
			UProperty* NewProp_Bitmask = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Bitmask"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Bitmask, BitmaskerFunctionLibrary_eventEnumCount_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Bitmask"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BitmaskerFunctionLibrary.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBitmaskerFunctionLibrary_FlipEnum()
	{
		struct BitmaskerFunctionLibrary_eventFlipEnum_Parms
		{
			int32 Bitmask;
			uint8 Enum;
			int32 ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UBitmaskerFunctionLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FlipEnum"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x14022401, 65535, sizeof(BitmaskerFunctionLibrary_eventFlipEnum_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ReturnValue, BitmaskerFunctionLibrary_eventFlipEnum_Parms), 0x0010000000000580);
			UProperty* NewProp_Enum = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Enum"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(Enum, BitmaskerFunctionLibrary_eventFlipEnum_Parms), 0x0010000000000080);
			UProperty* NewProp_Bitmask = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Bitmask"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Bitmask, BitmaskerFunctionLibrary_eventFlipEnum_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Bitmask"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BitmaskerFunctionLibrary.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBitmaskerFunctionLibrary_HasEnum()
	{
		struct BitmaskerFunctionLibrary_eventHasEnum_Parms
		{
			int32 Bitmask;
			uint8 Enum;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UBitmaskerFunctionLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("HasEnum"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x14022401, 65535, sizeof(BitmaskerFunctionLibrary_eventHasEnum_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, BitmaskerFunctionLibrary_eventHasEnum_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, BitmaskerFunctionLibrary_eventHasEnum_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, BitmaskerFunctionLibrary_eventHasEnum_Parms), sizeof(bool), true);
			UProperty* NewProp_Enum = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Enum"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(Enum, BitmaskerFunctionLibrary_eventHasEnum_Parms), 0x0010000000000080);
			UProperty* NewProp_Bitmask = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Bitmask"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Bitmask, BitmaskerFunctionLibrary_eventHasEnum_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Bitmask"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BitmaskerFunctionLibrary.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBitmaskerFunctionLibrary_RemoveEnum()
	{
		struct BitmaskerFunctionLibrary_eventRemoveEnum_Parms
		{
			int32 Bitmask;
			uint8 Enum;
			int32 ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UBitmaskerFunctionLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("RemoveEnum"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x14022401, 65535, sizeof(BitmaskerFunctionLibrary_eventRemoveEnum_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ReturnValue, BitmaskerFunctionLibrary_eventRemoveEnum_Parms), 0x0010000000000580);
			UProperty* NewProp_Enum = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Enum"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(Enum, BitmaskerFunctionLibrary_eventRemoveEnum_Parms), 0x0010000000000080);
			UProperty* NewProp_Bitmask = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Bitmask"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Bitmask, BitmaskerFunctionLibrary_eventRemoveEnum_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Bitmask"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BitmaskerFunctionLibrary.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBitmaskerFunctionLibrary_ToBitmask()
	{
		struct BitmaskerFunctionLibrary_eventToBitmask_Parms
		{
			uint8 Enum;
			int32 ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UBitmaskerFunctionLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ToBitmask"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x14022401, 65535, sizeof(BitmaskerFunctionLibrary_eventToBitmask_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ReturnValue, BitmaskerFunctionLibrary_eventToBitmask_Parms), 0x0010000000000580);
			UProperty* NewProp_Enum = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Enum"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(Enum, BitmaskerFunctionLibrary_eventToBitmask_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Conversions"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BitmaskerFunctionLibrary.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBitmaskerFunctionLibrary_NoRegister()
	{
		return UBitmaskerFunctionLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UBitmaskerFunctionLibrary()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintFunctionLibrary();
			Z_Construct_UPackage__Script_Bitmasker();
			OuterClass = UBitmaskerFunctionLibrary::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100080;

				OuterClass->LinkChild(Z_Construct_UFunction_UBitmaskerFunctionLibrary_AddEnum());
				OuterClass->LinkChild(Z_Construct_UFunction_UBitmaskerFunctionLibrary_EnumCount());
				OuterClass->LinkChild(Z_Construct_UFunction_UBitmaskerFunctionLibrary_FlipEnum());
				OuterClass->LinkChild(Z_Construct_UFunction_UBitmaskerFunctionLibrary_HasEnum());
				OuterClass->LinkChild(Z_Construct_UFunction_UBitmaskerFunctionLibrary_RemoveEnum());
				OuterClass->LinkChild(Z_Construct_UFunction_UBitmaskerFunctionLibrary_ToBitmask());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UBitmaskerFunctionLibrary_AddEnum(), "AddEnum"); // 3731317192
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UBitmaskerFunctionLibrary_EnumCount(), "EnumCount"); // 3097386463
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UBitmaskerFunctionLibrary_FlipEnum(), "FlipEnum"); // 840215870
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UBitmaskerFunctionLibrary_HasEnum(), "HasEnum"); // 1421403643
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UBitmaskerFunctionLibrary_RemoveEnum(), "RemoveEnum"); // 1082756388
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UBitmaskerFunctionLibrary_ToBitmask(), "ToBitmask"); // 3798069912
				static TCppClassTypeInfo<TCppClassTypeTraits<UBitmaskerFunctionLibrary> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BitmaskerFunctionLibrary.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/BitmaskerFunctionLibrary.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBitmaskerFunctionLibrary, 3949218901);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBitmaskerFunctionLibrary(Z_Construct_UClass_UBitmaskerFunctionLibrary, &UBitmaskerFunctionLibrary::StaticClass, TEXT("/Script/Bitmasker"), TEXT("UBitmaskerFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBitmaskerFunctionLibrary);
	UPackage* Z_Construct_UPackage__Script_Bitmasker()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/Bitmasker")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000080);
			FGuid Guid;
			Guid.A = 0x58051874;
			Guid.B = 0x660517C7;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
