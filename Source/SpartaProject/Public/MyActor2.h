// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor2.generated.h"

UCLASS()
class SPARTAPROJECT_API AMyActor2 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor2();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	USceneComponent* SceneRoot;
	UStaticMeshComponent* StaticMeshComp;

	FVector InitialLocation;
	bool bMovingRight = true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item|Properties")
	float MaxDistance;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item|Properties")
	float Speed;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
