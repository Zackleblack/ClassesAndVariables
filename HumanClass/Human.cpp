// Human.cpp
#include <iostream>
#include "Human.h"

Human::Human(string name, int health, int baseDamage)
	: Name(name), Health(health), Damage(baseDamage) {
}

void Human::SayHello() {
	cout << "Hello, my name is " << Name << "!" << endl;
}

void Human::SetHealth(int byAmount) {
	Health = byAmount;
}

void Human::SetDamage(int givenDamage) {
	Damage = givenDamage;
}

int Human::GetHealth() const {
	return Health;
}

int Human::GetDamage() const {
	return Damage;
}