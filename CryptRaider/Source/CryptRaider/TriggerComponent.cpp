// Fill out your copyright notice in the Description page of Project Settings.


#include "TriggerComponent.h"


UTriggerComponent::UTriggerComponent(){
    PrimaryComponentTick.bCanEverTick = true;
}

void UTriggerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction){
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
    AActor* res = GetAcceptableActor();
    if(res){
        UPrimitiveComponent* Component = Cast<UPrimitiveComponent>(res->GetRootComponent());
        if(Component){
            Component->SetSimulatePhysics(false);
            res->AttachToComponent(this,FAttachmentTransformRules::KeepWorldTransform);
        }
        Mover->SetShouldMove(true);
    }else{
        Mover->SetShouldMove(false);
    }
   
}

// Called when the game starts
void UTriggerComponent::BeginPlay()
{
	Super::BeginPlay();
}

AActor* UTriggerComponent::GetAcceptableActor() const{
    
    TArray<AActor*> Actors;
    GetOverlappingActors(Actors);
    for(AActor* Actor: Actors){
        if(Actor->ActorHasTag(UnlockTag) && !Actor->ActorHasTag("Grabbed") ){
            return Actor;
        }
    }
    return nullptr;
}

void UTriggerComponent::SetMover(UMover* NewMover){
    Mover = NewMover;
}
