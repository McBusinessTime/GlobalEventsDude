// Fill out your copyright notice in the Description page of Project Settings.

#include "GlobalEventsDude.h"
#include "EventDudeGameInstance.h"


UEventDudeGameInstance::UEventDudeGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	//GlobalEventHandler = NewObject<UGlobalEventHandler>();
	GlobalEventHandler = ObjectInitializer.CreateDefaultSubobject<UGlobalEventHandler>(this, TEXT("GlobalEventHandler"));
}

