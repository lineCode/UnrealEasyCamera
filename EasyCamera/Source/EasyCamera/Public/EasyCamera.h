/* Copyright 2023 by Sulley. All Rights Reserved.
 * This plugin is free and open-sourced to Unreal users / developers and the whole game community.
 * I will keep updating this plugin, but it might be a little slow as I am not a full-time developer.
 * If you find bugs or you have some suggestions / comments on this plugin, feel free to email me at qinghonghan97@gmail.com.
 * If you want to further customize this plugin, feel free to pull it down and modify as whatever you want.
 * Hope you enjoy EasyCamera!
 */


#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FEasyCameraModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
