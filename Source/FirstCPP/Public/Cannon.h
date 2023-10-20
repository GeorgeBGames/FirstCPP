// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Cannon.generated.h"

UCLASS()
class FIRSTCPP_API ACannon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACannon();

	UPROPERTY(EditAnywhere, Category = "Appearance|Mesh")
	UStaticMesh* MeshAsset = nullptr;
	UStaticMeshComponent* MeshComponent = nullptr;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//Called when a value changes
	void OnConstruction(const FTransform& Transform) override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
