#pragma once
using namespace std;
#include <iostream>
#include "Weapon.h"
class Characteristic
{
public:
	Characteristic(int strenght);
	int strenght;
	void getDamage(Weapon* sword, int strenght);
};

