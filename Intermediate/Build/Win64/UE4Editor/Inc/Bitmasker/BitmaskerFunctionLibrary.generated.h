// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BITMASKER_BitmaskerFunctionLibrary_generated_h
#error "BitmaskerFunctionLibrary.generated.h already included, missing '#pragma once' in BitmaskerFunctionLibrary.h"
#endif
#define BITMASKER_BitmaskerFunctionLibrary_generated_h

#define kick_Plugins_Bitmasker_Source_Bitmasker_Public_BitmaskerFunctionLibrary_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEnumCount) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Bitmask); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UBitmaskerFunctionLibrary::EnumCount(Z_Param_Bitmask); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFlipEnum) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Bitmask); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Enum); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UBitmaskerFunctionLibrary::FlipEnum(Z_Param_Bitmask,Z_Param_Enum); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveEnum) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Bitmask); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Enum); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UBitmaskerFunctionLibrary::RemoveEnum(Z_Param_Bitmask,Z_Param_Enum); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddEnum) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Bitmask); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Enum); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UBitmaskerFunctionLibrary::AddEnum(Z_Param_Bitmask,Z_Param_Enum); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasEnum) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Bitmask); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Enum); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBitmaskerFunctionLibrary::HasEnum(Z_Param_Bitmask,Z_Param_Enum); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToBitmask) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Enum); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UBitmaskerFunctionLibrary::ToBitmask(Z_Param_Enum); \
		P_NATIVE_END; \
	}


#define kick_Plugins_Bitmasker_Source_Bitmasker_Public_BitmaskerFunctionLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEnumCount) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Bitmask); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UBitmaskerFunctionLibrary::EnumCount(Z_Param_Bitmask); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFlipEnum) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Bitmask); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Enum); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UBitmaskerFunctionLibrary::FlipEnum(Z_Param_Bitmask,Z_Param_Enum); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveEnum) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Bitmask); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Enum); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UBitmaskerFunctionLibrary::RemoveEnum(Z_Param_Bitmask,Z_Param_Enum); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddEnum) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Bitmask); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Enum); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UBitmaskerFunctionLibrary::AddEnum(Z_Param_Bitmask,Z_Param_Enum); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasEnum) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Bitmask); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Enum); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBitmaskerFunctionLibrary::HasEnum(Z_Param_Bitmask,Z_Param_Enum); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToBitmask) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Enum); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UBitmaskerFunctionLibrary::ToBitmask(Z_Param_Enum); \
		P_NATIVE_END; \
	}


#define kick_Plugins_Bitmasker_Source_Bitmasker_Public_BitmaskerFunctionLibrary_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBitmaskerFunctionLibrary(); \
	friend BITMASKER_API class UClass* Z_Construct_UClass_UBitmaskerFunctionLibrary(); \
public: \
	DECLARE_CLASS(UBitmaskerFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Bitmasker"), NO_API) \
	DECLARE_SERIALIZER(UBitmaskerFunctionLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define kick_Plugins_Bitmasker_Source_Bitmasker_Public_BitmaskerFunctionLibrary_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUBitmaskerFunctionLibrary(); \
	friend BITMASKER_API class UClass* Z_Construct_UClass_UBitmaskerFunctionLibrary(); \
public: \
	DECLARE_CLASS(UBitmaskerFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Bitmasker"), NO_API) \
	DECLARE_SERIALIZER(UBitmaskerFunctionLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define kick_Plugins_Bitmasker_Source_Bitmasker_Public_BitmaskerFunctionLibrary_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBitmaskerFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBitmaskerFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBitmaskerFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBitmaskerFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBitmaskerFunctionLibrary(UBitmaskerFunctionLibrary&&); \
	NO_API UBitmaskerFunctionLibrary(const UBitmaskerFunctionLibrary&); \
public:


#define kick_Plugins_Bitmasker_Source_Bitmasker_Public_BitmaskerFunctionLibrary_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBitmaskerFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBitmaskerFunctionLibrary(UBitmaskerFunctionLibrary&&); \
	NO_API UBitmaskerFunctionLibrary(const UBitmaskerFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBitmaskerFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBitmaskerFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBitmaskerFunctionLibrary)


#define kick_Plugins_Bitmasker_Source_Bitmasker_Public_BitmaskerFunctionLibrary_h_14_PRIVATE_PROPERTY_OFFSET
#define kick_Plugins_Bitmasker_Source_Bitmasker_Public_BitmaskerFunctionLibrary_h_11_PROLOG
#define kick_Plugins_Bitmasker_Source_Bitmasker_Public_BitmaskerFunctionLibrary_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	kick_Plugins_Bitmasker_Source_Bitmasker_Public_BitmaskerFunctionLibrary_h_14_PRIVATE_PROPERTY_OFFSET \
	kick_Plugins_Bitmasker_Source_Bitmasker_Public_BitmaskerFunctionLibrary_h_14_RPC_WRAPPERS \
	kick_Plugins_Bitmasker_Source_Bitmasker_Public_BitmaskerFunctionLibrary_h_14_INCLASS \
	kick_Plugins_Bitmasker_Source_Bitmasker_Public_BitmaskerFunctionLibrary_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define kick_Plugins_Bitmasker_Source_Bitmasker_Public_BitmaskerFunctionLibrary_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	kick_Plugins_Bitmasker_Source_Bitmasker_Public_BitmaskerFunctionLibrary_h_14_PRIVATE_PROPERTY_OFFSET \
	kick_Plugins_Bitmasker_Source_Bitmasker_Public_BitmaskerFunctionLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	kick_Plugins_Bitmasker_Source_Bitmasker_Public_BitmaskerFunctionLibrary_h_14_INCLASS_NO_PURE_DECLS \
	kick_Plugins_Bitmasker_Source_Bitmasker_Public_BitmaskerFunctionLibrary_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID kick_Plugins_Bitmasker_Source_Bitmasker_Public_BitmaskerFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
