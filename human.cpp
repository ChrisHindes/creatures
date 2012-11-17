#include <string>
#include "human.h"
using namespace std;

Human::Human() : Creature() {
	//deliberately empty
}
Human::Human(int newStrength, int newHit) 
	: Creature(newStrength, newHit) {
		//empty
}
	 
string Human::getSpecies() {
	return "Human";
}
int Human::getDamage() {
	return Creature::getDamage();
}