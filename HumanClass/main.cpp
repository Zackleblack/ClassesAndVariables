// Main.cpp
#include <iostream>
#include "Human.h"
#include "HumanStruct.h"
using namespace std;


int main() {
	// --- Main Class ----
	Human hero("Zackle", 12, 5);	// Class information (Name, Health, Damage)

	hero.SayHello();	// Void Hello
	cout << "Class Health: " << hero.GetHealth() << endl;
	cout << "Class Damage: " << hero.GetDamage() << endl;

	hero.SetHealth(15);		// Void info
	hero.SetDamage(6);

	cout << "Updated Health: " << hero.GetHealth() << endl;		// Integers 
	cout << "Updated Damage: " << hero.GetDamage() << endl;

	cout << "\n";

	// ---- Struct Dummy -----
	HumanStruct structHuman;
	structHuman.Name = "Structural Dummy";
	structHuman.Health = 15;
	structHuman.Damage = 3;

	structHuman.SayHello();
	cout << "Dummy Health: " << structHuman.Health << endl;
	cout << "Dummy Damage: " << structHuman.Damage << endl;

	// ---- Barbarian ----
	
	Human barbarian("Barbarian", 15, 6); // Barbarian class

	barbarian.SayHello();
	cout << "Barbarian Health: " << barbarian.GetHealth() << endl;
	cout << "Barbarian Damage: " << barbarian.GetDamage() << endl;

	cout << "\nThe Barbarian looks at you \n";

	barbarian.Yell();

	barbarian.SwingWeapon(hero); {
		cout << "Zackle was in the way and was hit!";
		cout << "Zackle's Health was " << hero.GetHealth() << endl;
		
		hero.SetHealth(9); 

		cout << "Zackle's Health is now " << hero.GetHealth() << endl;

	}

	// ---- Shopkeeper ----

	

	return 0;
}
