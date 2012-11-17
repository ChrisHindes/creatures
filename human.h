#ifndef HUMAN_H
#define HUAMN_H

#include <string>
#include "creature.h"

class Human : public Creature {
public:
	//build human with default strength and hitpoints
	Human();
	//initialize human with strength newStength and hitpoint newHit
	Human(int newStrength, int newHit);
	int getDamage();
	string getSpecies();
};


#endif