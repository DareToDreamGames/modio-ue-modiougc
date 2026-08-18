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
#include "Widgets/SCompoundWidget.h"

/**
 * 
 */
class MODIOUGCEDITOR_API SUGCTemplateCategoryTile : public SCompoundWidget
{
public:

	SLATE_BEGIN_ARGS(SUGCTemplateCategoryTile)
	{}
	SLATE_ARGUMENT(TSharedPtr<struct FUGCTemplateCategoryView>, CategoryInfo)
	SLATE_END_ARGS()

	/** Constructs this widget with InArgs */
	void Construct(const FArguments& InArgs);

	FString GetCategory() const;

private:

	void GenerateImageBrush();

	TSharedPtr<struct FUGCTemplateCategoryView> CategoryInfo;
	TSharedPtr<class FDeferredCleanupSlateBrush> BackgroundBrush;
	
};
