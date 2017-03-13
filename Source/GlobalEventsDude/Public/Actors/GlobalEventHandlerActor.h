// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "GlobalEventHandlerActor.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLevelEventDelegate_OnCameraDataReceived, FRotator, camRotation);

UCLASS(meta = (BlueprintSpawnableComponent), Category = "Global Events")
class GLOBALEVENTSDUDE_API AGlobalEventHandlerActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGlobalEventHandlerActor();

	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "Camera Events")
		FLevelEventDelegate_OnCameraDataReceived OnCameraDataReceived;

};
