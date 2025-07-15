// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SpartaCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
struct FInputActionValue;

UCLASS()
class SPARTAPROJECT_API ASpartaCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ASpartaCharacter();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	USpringArmComponent* SpringArmComp;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	UCameraComponent* CameraComp;

protected:	
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	UFUNCTION()

	void Move(const FInputActionValue& Value);
	UFUNCTION()

	void Look(const FInputActionValue& Value);
	UFUNCTION()

	void StartJump(const FInputActionValue& Value);
	UFUNCTION()

	void StopJump(const FInputActionValue& Value);
	UFUNCTION()

	void StartSprint(const FInputActionValue& Value);
	UFUNCTION()

	void StopSprint(const FInputActionValue& Value);

private:
	float NormalSpeed;
	float SprintSpeedMultiplier;
	float SprintSpeed;

};
