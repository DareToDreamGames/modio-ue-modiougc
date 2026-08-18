/*
 *  Copyright (C) 2024-2026 mod.io Pty Ltd. <https://mod.io>
 *
 *  This file is part of the mod.io UE Plugin.
 *
 *  Distributed under the MIT License. (See accompanying file LICENSE or
 *   view online at <https://github.com/modio/modio-ue/blob/main/LICENSE>)
 *
 */

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UGCTemplateSettings.generated.h"

USTRUCT()
struct FUGCTemplateCategoryView
{
	GENERATED_BODY()

public:

	UPROPERTY(EditDefaultsOnly, Config, Category = "Category")
	FString Category;

	UPROPERTY(EditDefaultsOnly, Config, Category = "Category")
	FText DisplayName;

	UPROPERTY(EditDefaultsOnly, config, Category = "Category", meta = (MetaClass = "/Script/Engine.Texture2D"))
	FSoftObjectPath Image;

};

/**
 * 
 */
UCLASS(Config = Editor, defaultconfig)
class MODIOUGCEDITOR_API UUGCTemplateSettings : public UObject
{
	GENERATED_BODY()

public:

	UPROPERTY(EditDefaultsOnly, Config, Category = "Settings")
	TArray<FUGCTemplateCategoryView> Categories;

	UPROPERTY(EditDefaultsOnly, Config, Category = "Settings")
	bool bDisplayUGCTemplateMenus = true;
	
};
