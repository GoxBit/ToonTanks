// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BasePawn.generated.h"

UCLASS()
class TOONTANKS_API ABasePawn : public APawn
{
	GENERATED_BODY()
	
public:
	// Sets default values for this pawn's properties
	ABasePawn();

	

    UPROPERTY(VisibleInstanceOnly)
    int32 instanceOnlyInt = 12;

	UPROPERTY(VisibleDefaultsOnly)
	int32 VisibleDefaultOnlyInt = 5;

	UPROPERTY(EditDefaultsOnly)
	int32 EditDefaultInt = 9;
	
    UPROPERTY(EditInstanceOnly)
    int32 EditInstanceInt = 9;
		 
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float speed = 400.f;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
private:	

    UPROPERTY(VisibleAnywhere,Category = "Super Duper Variables", BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
    int32 VisibleAnywhereInt = 12;

    UPROPERTY(EditAnywhere, Category = "Super Duper Variables", meta = (AllowPrivateAccess = "true"))
    int32 EditAnywhereInt = 22;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	class UCapsuleComponent* CapsuleComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* BaseMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* TurretMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	USceneComponent* projectileSpawnPoint;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
