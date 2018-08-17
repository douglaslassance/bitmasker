// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "BitmaskerFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class BITMASKER_API UBitmaskerFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintPure, Category = "Conversions")
		static int32 ToBitmask(uint8 Enum);

	UFUNCTION(BlueprintPure, Category = "Bitmask")
		static bool HasEnum(int32 Bitmask, uint8 Enum);

	UFUNCTION(BlueprintPure, Category = "Bitmask")
		static int32 AddEnum(int32 Bitmask, uint8 Enum);

	UFUNCTION(BlueprintPure, Category = "Bitmask")
		static int32 RemoveEnum(int32 Bitmask, uint8 Enum);

	UFUNCTION(BlueprintPure, Category = "Bitmask")
		static int32 FlipEnum(int32 Bitmask, uint8 Enum);

	UFUNCTION(BlueprintPure, Category = "Bitmask")
		static int32 EnumCount(int32 Bitmask);
	
};
