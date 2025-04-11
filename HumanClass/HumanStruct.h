#ifndef HUMANSTRUCT_H
#define HUMANSTRUCT_H

#include <iostream>
#include <string>
using namespace std;

struct HumanStruct {
	string Name;
	int Health = 10;
	int Damage = 4;

	void SayHello() {
		cout << "Hi! I'm " << Name << ", and i'm a struct example!" << endl;
	}
};

#endif