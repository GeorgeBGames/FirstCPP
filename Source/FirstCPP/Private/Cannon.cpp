// Fill out your copyright notice in the Description page of Project Settings.


#include "Cannon.h"

// Sets default values
ACannon::ACannon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	MeshComponent->SetupAttachment(RootComponent);
}

void ACannon::OnConstruction(const FTransform& Transform) {
	if (MeshAsset) MeshComponent->SetStaticMesh(MeshAsset);

}

// Called when the game starts or when spawned
void ACannon::BeginPlay()
{
	Super::BeginPlay(); // Call Parent class's BeginPlay()
}

// Called every frame
void ACannon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

