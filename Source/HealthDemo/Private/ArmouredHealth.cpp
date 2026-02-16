// Fill out your copyright notice in the Description page of Project Settings.


#include "ArmouredHealth.h"

/**
* Here is the CPP file where we will put our logic
* A slight hint to help you is 
* UHealth::Damage will call the base class (UHealths) damage funtion not the Armoured Health Damage
* 
*/
void UArmouredHealth::TakeDamage(int Damage)
{
	
	if (Armoured_Health >= Damage) {
		Armoured_Health -= Damage;
		UE_LOG(LogTemp, Warning, TEXT("Armoured Health took damage"));
	}
	else {
		Damage -= Armoured_Health;
		Armoured_Health = 0;
		Super::TakeDamage(Damage);

	}
	
}
	