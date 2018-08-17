// Fill out your copyright notice in the Description page of Project Settings.

#include "Bitmasker.h"
#include "BitmaskerFunctionLibrary.h"

int32 UBitmaskerFunctionLibrary::ToBitmask(uint8 Enum) {
	return 1 << Enum;
}

bool UBitmaskerFunctionLibrary::HasEnum(int32 Bitmask, uint8 Enum) {
	int32 Byte = ToBitmask(Enum);
	return (Bitmask & Byte) == Byte;
}

int32 UBitmaskerFunctionLibrary::AddEnum(int32 Bitmask, uint8 Enum) {
	return Bitmask | ToBitmask(Enum);
}

int32 UBitmaskerFunctionLibrary::RemoveEnum(int32 Bitmask, uint8 Enum) {
	return Bitmask & (~ToBitmask(Enum));
}

int32 UBitmaskerFunctionLibrary::FlipEnum(int32 Bitmask, uint8 Enum) {
	return Bitmask ^ ToBitmask(Enum);
}

int32 UBitmaskerFunctionLibrary::EnumCount(int32 Bitmask) {
	int32 val = Bitmask;
	int count = 0;

	while (val > 0)
	{
		if ((val & 1) != 0)
		{
			count++;
		}

		val = val >> 1;
	}
	return count;
}


