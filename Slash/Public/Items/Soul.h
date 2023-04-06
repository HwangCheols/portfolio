// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/Item.h"
#include "Soul.generated.h"

/**
 * 
 */
UCLASS()
class SLASH_API ASoul : public AItem
{
	GENERATED_BODY()

public:
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;

public:
	FORCEINLINE int32 GetSoul() const { return Soul; }
	FORCEINLINE void SetSoul(int32 NumberOfSoul) { Soul = NumberOfSoul; }
protected:
	virtual void OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;

private:
	UPROPERTY(EditAnywhere, Category = "Soul Propertices")
	int32 Soul;

	UPROPERTY(EditAnywhere)
	double DesiredZ;

	UPROPERTY(EditAnywhere)
	float DriftRate = -15.f;
};
