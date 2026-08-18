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
#include "TransactionStep.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class MODIOUGCEDITOR_API UTransactionStep : public UObject
{
	GENERATED_BODY()
	
public:

	virtual void Revert() PURE_VIRTUAL(UTransactionStep::Revert, );

};

/**
 *
 */
UCLASS()
class MODIOUGCEDITOR_API UTransactionStepCreateFile : public UTransactionStep
{
	GENERATED_BODY()

public:
	virtual void Revert() override;

	static UTransactionStepCreateFile* Make(FString InFilename);

private:

	FString Filename;
};

/**
 *
 */
UCLASS()
class MODIOUGCEDITOR_API UTransactionStepCreatePlugin : public UTransactionStep
{
	GENERATED_BODY()

public:
	virtual void Revert() override;

	static UTransactionStepCreatePlugin* Make(TSharedPtr<class IPlugin> InPlugin);

private:

	TSharedPtr<class IPlugin> Plugin;
};

/**
 *
 */
UCLASS()
class MODIOUGCEDITOR_API UTransactionStepRenameFile : public UTransactionStep
{
	GENERATED_BODY()

public:
	virtual void Revert() override;

	static UTransactionStepRenameFile* Make(FString InOldName, FString InNewName);

private:
	
	FString OldName;
	FString NewName;

};