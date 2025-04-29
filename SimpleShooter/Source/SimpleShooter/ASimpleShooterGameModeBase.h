// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ASimpleShooterGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class SIMPLESHOOTER_API AASimpleShooterGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

	public:
	virtual void PawnKilled(APawn* PawnKilled);
	
};
