#include <string>
#include "balrog.h"
using namespace std;

Balrog::Balrog() {
}
Balrog::Balrog(int newStrength, int newHit) {
	setStrength(newStrength);
	 setHitpoints(newHit);
}
string Balrog::getSpecies() {
	return "Balrog";
}
int Balrog::getDamage() {
	int damage = Demon::getDamage();
	int damage2 = (rand() % getStrength()) + 1;
        cout << "Balrog speed attack inflicts " << damage2
             << " additional damage points!" << endl;
        damage = damage + damage2;
		return damage;
}
