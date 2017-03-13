// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine/GameInstance.h"
#include "GlobalEventHandler.h"
#include "EventDudeGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class GLOBALEVENTSDUDE_API UEventDudeGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	UEventDudeGameInstance(const FObjectInitializer& ObjectInitializer);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Global Event Handler")
		UGlobalEventHandler* GlobalEventHandler;
	
	
};
