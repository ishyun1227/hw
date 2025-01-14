// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include <random>
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class TEST345_API AMyActor : public AActor
{
	GENERATED_BODY()

	FVector2D XY;

public:	
	AMyActor();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	void move();

	int32_t step();

};

//class XY {
//private:
//	int X;
//	int Y;
//
//public:
//	XY() : X(0), Y(0) {}
//
//	XY(int a, int b) : X(a), Y(b) {}
//
//	int getX() const {
//		return X;
//	}
//	int getY() const {
//		return Y;
//	}
//	void setX(int a) {
//		X = a;
//	}
//	void setY(int a) {
//		Y = a;
//	}
//	void setXY(int a, int b) {
//		X = a; Y = b;
//	}
//};
//
//class Character {
//private:
//	XY xy;
//
//public:
//	Character() : xy() {}
//
//	Character(XY a) : xy(a) {}
//
//	XY& getXY() { //xy 안에
//		return xy;
//	}
//
//	void setXY(XY& ab) {
//		xy = ab;
//	}
//};
//
//class moveXY { //클래스 안에
//private:
//public:
//	int step() {
//		std::random_device rd;
//		std::mt19937 gen(rd());
//		std::uniform_int_distribution<int> dis(0, 1);
//		return dis(gen);
//	}
//	void moveXYRandom1(XY& a) {
//		int newX = a.getX() + step();
//		int newY = a.getY() + step();
//		a.setXY(newX, newY);
//	}
//	void move(Character& a) {
//		for (int i = 0; i < 10; i++) {
//			moveXYRandom1(a.getXY());
//			UE_LOG(LogTemp, Warning, TEXT("Current Position: (%d, %d)"),
//				a.getXY().getX(), a.getXY().getY());
//		}
//	}
//};

