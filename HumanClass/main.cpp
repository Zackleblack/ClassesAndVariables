// Main.cpp
#include <iostream>
#include "Human.h"
using namespace std;

int main() {
	Human hero("Steve", 12, 5);

	hero.SayHello();
	cout << "Current Health: " << hero.GetHealth() << endl;
	cout << "Current Damage: " << hero.GetDamage() << endl;

	hero.SetHealth(15);
	hero.SetDamage(6);

	cout << "Updated Health: " << hero.GetHealth() << endl;
	cout << "Updated Damage: " << hero.GetDamage() << endl;

	return 0;
}
