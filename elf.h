#ifndef ELF_H
#define ELF_H

#include "creature.h"
#include <string>

class Elf : public Creature {
public:
	//default constructor
	Elf();
	//constructor with set strength and hitpoints
	Elf(int newStrength, int newHit);
	//redefined get damage
	int getDamage();
	//redefined getSpecies
	string getSpecies();
};

#endif