// Fill out your copyright notice in the Description page of Project Settings.
// CXPawn.h

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "CXPawn.generated.h"

UCLASS()
class CHATX_API ACXPawn : public APawn
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;

	virtual void PossessedBy(AController* NewController) override;

};