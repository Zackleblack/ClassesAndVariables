// Human.h File
#ifndef HUMAN_H
#define HUMAN_H

#include <string>
using namespace std;

class Human {
private:
	string Name;
	int Health;
	int Damage;

public:
	// Constructor
	Human(string name, int health = 10, int baseDamage = 4);

	// Methods
	void SayHello();
	void SetHealth(int byAmount);
	void SetDamage(int givenDamage);
	int GetHealth() const;
	int GetDamage() const;

};

#endif	// end of Human.H