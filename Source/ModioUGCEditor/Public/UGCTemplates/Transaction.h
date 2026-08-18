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
#include "Transaction.generated.h"


/**
 * 
 */
UCLASS()
class MODIOUGCEDITOR_API UTransaction : public UObject
{
	GENERATED_BODY()
	
public:

	void Begin();
	void Finish();
	void Cancel();

	int32 Add(class UTransactionStep* Step);

private:

	void ClearBuffer();

private:

	UPROPERTY()
	TArray<TObjectPtr<class UTransactionStep>> Buffer;

};
