// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Public/UObject/Class.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/Actor.h"
#include "Public/Tank.h"
#include "TankAIController.generated.h"

UCLASS()
class TANKFIGHTERS_API ATankAIController : public APlayerController
{
	GENERATED_BODY()


private:
	ATank* GetControlledAITank() const;

	virtual void BeginPlay() override;

	ATank* GetPlayerTank() const;
};
