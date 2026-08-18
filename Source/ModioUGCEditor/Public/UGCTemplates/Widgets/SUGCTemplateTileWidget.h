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
#include "../UGCTemplateSubsystem.h"
#include "../../Engine/Public/Slate/DeferredCleanupSlateBrush.h"

class FUGCTemplateTileViewItem
{

};

/**
 * 
 */
class MODIOUGCEDITOR_API SUGCTemplateTileWidget : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SUGCTemplateTileWidget){}
	SLATE_ARGUMENT(FUGCTemplateInfo, TemplateInfo)
	SLATE_END_ARGS()

	/** Constructs this widget with InArgs */
	void Construct(const FArguments& InArgs);

private:

	FSlateBrush* BackgroundBrush;
	TSharedPtr<FDeferredCleanupSlateBrush> ThumbnailBrush;

	FUGCTemplateInfo TemplateInfo;
};
