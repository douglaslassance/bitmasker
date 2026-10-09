// Copyright (c) 2017 Douglas Lassance

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FBitmaskerModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};