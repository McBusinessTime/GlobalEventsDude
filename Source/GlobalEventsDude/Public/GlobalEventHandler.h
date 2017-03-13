// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Object.h"
#include "GlobalEventHandler.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLevelEventDelegate_OnCameraDataReceived_Global, FRotator, camRotation);

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent), Category = "Global Events")
class GLOBALEVENTSDUDE_API UGlobalEventHandler : public UObject
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "Camera Events")
		FLevelEventDelegate_OnCameraDataReceived_Global OnPoopShoes;
	
	
};
