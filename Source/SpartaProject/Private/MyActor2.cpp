// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor2.h"

// Sets default values
AMyActor2::AMyActor2()
{
	PrimaryActorTick.bCanEverTick = true;
	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	SetRootComponent(SceneRoot);

	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMeshComp->SetupAttachment(SceneRoot);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Game/Resources/Shapes/Shape_Cube.Shape_Cube"));
	if (MeshAsset.Succeeded())
	{
		StaticMeshComp->SetStaticMesh(MeshAsset.Object);
	}

	static ConstructorHelpers::FObjectFinder<UMaterial> MaterialAsset(TEXT("/Game/Resources/Materials/M_Concrete_Grime.M_Concrete_Grime"));
	if (MaterialAsset.Succeeded())
	{
		StaticMeshComp->SetMaterial(0, MaterialAsset.Object);
	}

	MaxDistance = 80.0f; 
	Speed = 150.0f;

}

// Called when the game starts or when spawned
void AMyActor2::BeginPlay()
{
	Super::BeginPlay();

	InitialLocation = GetActorLocation();
	
}

// Called every frame
void AMyActor2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector CurrentLocation = GetActorLocation();

	
	if (bMovingRight)
	{
		CurrentLocation.Y += Speed * DeltaTime; 
		if (CurrentLocation.Y >= InitialLocation.Y + MaxDistance)
		{
			bMovingRight = false;
		}
	}
	else
	{
		CurrentLocation.Y -= Speed * DeltaTime;
		if (CurrentLocation.Y <= InitialLocation.Y - MaxDistance)
		{
			bMovingRight = true;
		}
	}

	SetActorLocation(CurrentLocation);
}

