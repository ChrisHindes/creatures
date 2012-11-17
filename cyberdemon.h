#ifndef CYBERDEMON_H
#define CYBERDEMON_H

#include <string>
#include "demon.h"

class Cyberdemon : public Demon {
public:
	Cyberdemon();
	Cyberdemon(int newStrength, int newHit);
	string getSpecies();
};
#endif