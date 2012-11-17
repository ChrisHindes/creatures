/* This is the file creature.h
This is the interface for the class Creature
and it inlcudes the base damage done by all the creatures as well as the common
private member variables */
#ifndef CREATURE_H
#define CREATURE_H

#include <iostream>
#include <string>

using namespace std;

class Creature
{
    private:
		int type;				// 0, human, 1 cyberdemon, 2 balrog, 3 elf
        int strength;           // how much damage it can inflict
        int hitpoints;          // how much damage it can sustain
		
    public:
        // initialize to human, strength 10, hit points 10
        Creature(); 

        // initialize to new strength, and new hit 
        Creature(int newStrength, int newHit);

        //accessor functions
		int getStrength() const;
		int getHitspoints() const;
		string getSpecies();	//this returns the name of the creature
		
		//mutator functions
		void setStrength(int newStrength);
		void setHitpoints(int newHitpoints);

        // returns amount of damage this creature inflicts in one round of combat 
        int getDamage();
};

#endif
