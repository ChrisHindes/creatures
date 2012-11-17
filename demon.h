#ifndef DEMON_H
#define DEMON_H

#include "creature.h"
#include <string>

class Demon : public Creature {
public:
	//default constructor
	Demon();
	//constructor with set hitpoints and strength
	Demon(int newStrength, int newHit);
	int getDamage();
	string getSpecies();
};
#endif
