#include <string>
#include <iostream>
#include "elf.h"
using namespace std;

Elf::Elf() : Creature() {
}
Elf::Elf(int newStrength, int newHit)
	: Creature(newStrength, newHit) {
	//empty
}
string Elf::getSpecies() {
	return "Elf";
}
int Elf::getDamage() {
	int damage;
	damage = Creature::getDamage();
	if ((rand() % 10) == 0)
        {
            cout << "Magical attack inflicts " << damage 
                 << " additional damage points!" << endl;
            damage = damage * 2; 
        }
	return damage;
}



