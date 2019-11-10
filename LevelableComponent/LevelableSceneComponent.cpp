// Fill out your copyright notice in the Description page of Project Settings.


#include "LevelableSceneComponent.h"
#include "Components/BoxComponent.h"

// Sets default values for this component's properties
ULevelableSceneComponent::ULevelableSceneComponent()
{
	LevelableMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LevelableMesh"));
	if (hasLevelSet()) {
		LevelableMesh->SetStaticMesh(levelsMap[objectLevel]);
	}
}

void ULevelableSceneComponent::setLevel(int newLevel) {
	objectLevel = newLevel;
	if (hasLevelSet()) {
		LevelableMesh->SetStaticMesh(levelsMap[objectLevel]);
	}
}

bool ULevelableSceneComponent::hasLevelSet() {
	return this->levelsMap.Contains(this->objectLevel);
}

void ULevelableSceneComponent::OnRegister() {
	Super::OnRegister();
}
