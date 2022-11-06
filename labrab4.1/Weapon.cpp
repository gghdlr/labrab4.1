#include "Weapon.h"
#include <iostream>
using namespace std;
Weapon::Weapon(string name, int damage, int weight) {
	this->name = name;
	this->damage=damage;
	this->weight = weight;
}
string Weapon::getName() {
	return name;
}
int Weapon::getDamage() {
	return damage;
}
int Weapon::getWeight()
{
	return weight;
}
void Weapon::setDamage(int damage) {
	if (damage > 5) {
		cout << "strong weapon" << "\n";
	}
	else {
		cout << "weak weapon" << "\n";
	}
}

