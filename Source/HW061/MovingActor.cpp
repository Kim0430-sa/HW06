// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingActor.h"

// Sets default values
AMovingActor::AMovingActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComp"));
	SetRootComponent(StaticMeshComp);

	MoveSpeed = 100.f;
	MaxRange = 150.f;
	Direction = 1;
}

// Called when the game starts or when spawned
void AMovingActor::BeginPlay()
{
	Super::BeginPlay();
	
	StartLocation = GetActorLocation();
}

// Called every frame
void AMovingActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//GetActorForwardVector() : ������ �� ���� ���͸� ��ȯ. FVector(1.0f, 0.f, 0.f
	FVector DeltaLocation = GetActorForwardVector() * DeltaTime * MoveSpeed * Direction;
	AddActorLocalOffset(DeltaLocation);

	// ���� ������ ��ġ ���Ϳ� ��ŸƮ ��ġ ���͸� ���� ���ο� ���Ͱ��� ����
	FVector V3 = StartLocation - GetActorLocation();
	// �׷��� ������ ���̸� ���ϸ� ��� �� ��ŸƮ ������ �� ���� ������ �Ÿ��� �ƴ� �Ͱ� ����
	float Distance = V3.Length();

	if (Distance >= MaxRange)
	{
		//StartLocation = GetActorLocation();
		Direction *= -1;
	}
}

