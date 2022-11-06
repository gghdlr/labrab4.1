#pragma once
using namespace std;
#include <iostream>
class Weapon
{
	friend class Characteristic;
private:
	string name;
	int damage;
	int weight;
public:
	Weapon(string name, int damage, int weight);
	Weapon();
	string getName();
	int getDamage();
	int getWeight();
	void setDamage(int damage);	
};

