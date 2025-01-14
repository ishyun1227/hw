#include "MyActor.h"
#include <random>

using namespace std;

AMyActor::AMyActor() {
	PrimaryActorTick.bCanEverTick = true;

	XY.X = 0;
	XY.Y = 0;
}

void AMyActor::BeginPlay(){
	Super::BeginPlay();
	move();
}

void AMyActor::Tick(float DeltaTime){
	Super::Tick(DeltaTime);
}

void AMyActor::move() {
	UE_LOG(LogTemp, Warning, TEXT("(%.2f,%.2f)"), XY.X, XY.Y);
	for (int i = 0; i < 10; i++) {
		XY.X += step();
		XY.Y += step();
		UE_LOG(LogTemp, Warning, TEXT("(%.2f,%.2f)"), XY.X, XY.Y);
	}

}

int32_t AMyActor::step() {
		random_device rd;
		mt19937 gen(rd());
		uniform_int_distribution<int> dis(0, 1);
		return dis(gen);	
}