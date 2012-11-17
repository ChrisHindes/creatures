#ifndef BALROG_H
#define BALROG_H

#include <string>
#include "demon.h"

class Balrog : public Demon {
public:
	//default constructor
	Balrog();
	//constructor with se strength and hitpoints
	Balrog(int newStrength, int newHit);
	int getDamage();
	string getSpecies();
};

#endif