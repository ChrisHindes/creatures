#include <iostream>
#include <string>
#include "demon.h"

using namespace std;

//default constructor
Demon::Demon() {
}
//constructor with set hitpoints and strength
Demon::Demon(int newStrength, int newHit) {
	setStrength(newStrength);
	 setHitpoints(newHit);
}
string Demon::getSpecies() {
	return "Demon";
}
int Demon::getDamage() {
	int damage = Creature::getDamage();
	if ((rand() % 100) < 5)
        {
            damage = damage + 50;
            cout << "Demonic attack inflicts 50 additional damage points!" 
                 << endl;
        }
	return damage;
}
