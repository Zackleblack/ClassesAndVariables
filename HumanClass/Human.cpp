// Human.cpp
#include <iostream>
#include "Human.h"

Human::Human(string name, int health, int baseDamage)
	: Name(name), Health(health), Damage(baseDamage) {
}

void Human::SayHello() {	// Say Hello to player
	cout << "Hello, my name is " << Name << "!" << endl;
}

void Human::SetHealth(int byAmount) {	// Set health Human
	Health = byAmount;
}

void Human::SetDamage(int givenDamage) {	// Sets the damage for Human
	Damage = givenDamage;
}

int Human::GetHealth() const {	// Grabs Health
	return Health;
}

int Human::GetDamage() const {	// Grabs Damage
	return Damage;
}