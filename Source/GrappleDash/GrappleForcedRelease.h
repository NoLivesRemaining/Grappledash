// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GrappleForcedRelease.generated.h"



UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GRAPPLEDASH_API UGrappleForcedRelease : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UGrappleForcedRelease();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	bool isHooked;

	void StartGrapple();
	void EndGrapple();
	void UpdateGrapple();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stamina")
	float MaxHookStrength;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stamina")
	float CurrentHookStrength;
	UPROPERTY(EditAnywhere, Category = "Stamina")
	float StrengthDrain;

		
};
