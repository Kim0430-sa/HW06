// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingActor.generated.h"

UCLASS()
class HW061_API AMovingActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(EditAnywhere)
	TObjectPtr<UStaticMeshComponent> StaticMeshComp;

	//MoveSpeed, MaxRange, StartLocation
	UPROPERTY(EditAnywhere)
	float MoveSpeed; //속도
	UPROPERTY(EditAnywhere)
	float MaxRange; //거리

	FVector StartLocation; //시작위치

	// 방향 
	int Direction;
};
