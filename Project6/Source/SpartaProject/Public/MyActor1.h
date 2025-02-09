// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor1.generated.h"

UCLASS()
class SPARTAPROJECT_API AMyActor1 : public AActor
{
	GENERATED_BODY()
	
public:	
	AMyActor1();

protected:
	virtual void BeginPlay() override;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item|Components")
	USceneComponent* SceneRoot;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item|Components")
	UStaticMeshComponent* StaticMeshComp;
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = "Item|Properties")
	float RotationSpeed;

public:	
	virtual void Tick(float DeltaTime) override;

};
