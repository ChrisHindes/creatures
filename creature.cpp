#include <iostream>
#include <string>

using namespace std;

#include "creature.h"

Creature::Creature () {
	strength = 10;
	hitpoints = 10;
	type = 0;
}

Creature::Creature(int newStrength, int newHit) {
	strength = newStrength;
	hitpoints = newHit;
}

int Creature::getStrength() const {
	return strength;
}

int Creature::getHitspoints() const{
	return hitpoints;
}

void Creature::setStrength(int newStrength) {
	strength = newStrength;
}

void Creature:: setHitpoints(int newHitpoints) {
	hitpoints = newHitpoints;
}

int Creature::getDamage() {
	int damage;
	// all creatures inflict damage which is a random number up to their strength
    damage = (rand() % strength) + 1;
    cout << getSpecies() << " attacks for " << damage << " points!" << endl;
	return damage;
}

string Creature::getSpecies() {
	return "Creature";
}


