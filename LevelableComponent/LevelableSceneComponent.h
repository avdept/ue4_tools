// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "LevelableSceneComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent, DisplayName="LevelableSceneComponent") )
class REPLACE_THIS_WITH_YOUR_APP_NAME_API ULevelableSceneComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	ULevelableSceneComponent();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LevelableObject | Properties") int objectLevel = 1;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite) class UStaticMeshComponent* LevelableMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LevelableObject | Levels") TMap<int, UStaticMesh*> levelsMap;
	UFUNCTION(BlueprintCallable) void setLevel(int newLevel);


public:
	virtual void OnRegister() override;
	bool hasLevelSet();
	void changeLevel(int level);
};
