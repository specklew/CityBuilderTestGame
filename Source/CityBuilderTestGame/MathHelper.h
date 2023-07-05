// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MathHelper.generated.h"

/**
 * 
 */
UCLASS()
class CITYBUILDERTESTGAME_API UMathHelper : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure, Category = "Math")
		static float my_erfinvf (float a);

	UFUNCTION(BlueprintPure, Category = "Math")
		static float my_logf (float a);
	
};
