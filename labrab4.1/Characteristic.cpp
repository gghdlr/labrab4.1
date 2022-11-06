#include "Characteristic.h"
#include <iostream>
using namespace std;
Characteristic::Characteristic(int strenght) {
this->strenght = strenght;
}
void Characteristic::getDamage(Weapon *sword, int strenght) {
	cout << sword->damage + strenght << "сила + урон оружия" << "\n";
}