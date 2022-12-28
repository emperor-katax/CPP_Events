#include "Item_01.h"

AItem_01::AItem_01(){
	PrimaryActorTick.bCanEverTick = true;
}

void AItem_01::BeginPlay(){
	Super::BeginPlay();	
}

void AItem_01::Tick(float DeltaTime){
	Super::Tick(DeltaTime);
}

 // //////////////////////////////////////////////////////////
void AItem_01::SetupValues(FString name, int id){
	UE_LOG(LogTemp, Warning, TEXT("ktx --SetupValues------------ SetupValues"));
	SetDetails(name, id);
	
	UE_LOG(LogTemp, Warning, TEXT("ktx --SetupValues------------ SkillControl"));
	SkillControl(); // <-- event run
	UE_LOG(LogTemp, Warning, TEXT("ktx --SetupValues------------ SkillControl_Implementation"));
	SkillControl_Implementation(); // <-- local c++ run	
	
	UE_LOG(LogTemp, Warning, TEXT("ktx --SetupValues------------ SkillSet"));
	SkillSet(); // <-- event run
	
	UE_LOG(LogTemp, Warning, TEXT("ktx --SetupValues------------ SkillMAX"));
	bool tempA = SkillMAX(); // 
	UE_LOG(LogTemp, Warning, TEXT("ktx --SetupValues------------ SkillMAX_Implementation"));
	bool tempB = SkillMAX_Implementation(); // 
}

void AItem_01::Check_01() {
	// dispatche delegate event - can get bind in BP
	UE_LOG(LogTemp, Warning, TEXT("ktx --Check_01------------ OnImpact.Broadcast()"));
	OnImpact.Broadcast();

	OnReciveHealth.Broadcast(12.45);
}


bool AItem_01::isActive() {
	return false;
}

bool AItem_01::isExtra() {
	return false;
}


void AItem_01::SkillControl_Implementation() {
	UE_LOG(LogTemp, Warning, TEXT("ktx ++++++ inside SkillControl_Implementation")); // <-- not running
}

bool AItem_01::SkillMAX_Implementation() {
	UE_LOG(LogTemp, Warning, TEXT("ktx ++++++ inside SkillMAX_Implementation"));
	return false;
}

