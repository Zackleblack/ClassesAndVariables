// Human.h File
#ifndef HUMAN_H
#define HUMAN_H

#include <string>
using namespace std;

class Human {
private:	// What is private behind scenes
	string Name;
	int Health;
	int Damage;

public:	// What is Public to the player
	// Constructor
	Human(string name, int health = 10, int baseDamage = 4);

	// Void Methods Human 
	void SayHello();
	void SetHealth(int byAmount);
	void SetDamage(int givenDamage);
	int GetHealth() const;
	int GetDamage() const;
	
	// Barbarians
	void Yell();
	void SwingWeapon(Human& target);

	// Storekeeper
	void Welcome();
};

#endif	// end of Human.H