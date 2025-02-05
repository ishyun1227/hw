// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "MyPawn.generated.h"

class USpringArmComponent;
class UCameraComponent;
struct FInputActionValue;

UCLASS()
class PROJECT7_API AMyPawn : public APawn
{
	GENERATED_BODY()

public:
	AMyPawn();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleAnywhere, Category = Sparta)
	UCapsuleComponent* Capsule;

	UPROPERTY(VisibleAnywhere, Category = Sparta)
	USkeletalMeshComponent* Mesh;

	UPROPERTY(VisibleAnywhere, Category = Sparta)
	UFloatingPawnMovement* Movement;

	UPROPERTY(VisibleAnywhere, Category = Sparta)
	USpringArmComponent* SpringArm;

	UPROPERTY(VisibleAnywhere, Category = Sparta)
	UCameraComponent* Camera;

	UFUNCTION()
	void Move(const FInputActionValue& value);
	UFUNCTION()
	void Look(const FInputActionValue& value);


};
