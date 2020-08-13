// Fill out your copyright notice in the Description page of Project Settings.


#include "NewActorComponent.h"
#include "GameFramework/Actor.h"

// Sets default values for this component's properties
UNewActorComponent::UNewActorComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UNewActorComponent::BeginPlay()
{
	Super::BeginPlay();

	//FString Log = TEXT("Hello!");
	//FString* PrtLog = &Log;	//	This is a pointer

	//Log.Len();	//	Direct haccess to the member

	////*PrtLog <- //	De-referencing has a lower precedence than the dot operator. = (*PrtLog).someStuff
	//PrtLog->Len();	//	Indirect access to the member

	////UE_LOG(LogTemp, Warning, TEXT("%s"), *Log);	//	This is an overloaded operator
	//UE_LOG(LogTemp, Warning, TEXT("%s"), **PrtLog);

	////UE_LOG(LogTemp, Display, TEXT("This is a Display!!"));
	////UE_LOG(LogTemp, Error, TEXT("This is an ERROR!!"));

	FString ActorName = GetOwner()->GetName();
	FString* PtrActorName = &ActorName;

	FString ObjectPosition = GetOwner()->GetActorLocation().ToString();
	//FString ObjectPosition = GetOwner()->GetActorTransform().ToString();	//	Returns rotation and scalee

	UE_LOG(LogTemp, Error, TEXT("Object Name Is: %s"), **PtrActorName);			//	Both ways work, one just let's you use the name in other places.
	//	UE_LOG(LogTemp, Error, TEXT("Object Name Is: %s"), *GetOwner()->GetName());
	UE_LOG(LogTemp, Warning, TEXT("%s Position is: %s "), **PtrActorName, *ObjectPosition);
	
}


// Called every frame
void UNewActorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

