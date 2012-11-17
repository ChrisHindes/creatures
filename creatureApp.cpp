// This is the main driver for A05
#include <iostream>
#include <string>
#include <fstream>

#include "creature.h"
#include "demon.h"
#include "elf.h"
#include "human.h"
#include "cyberdemon.h"
#include "balrog.h"

using namespace std;

void printIntro();

int main () {
	int n=0, type=0, hitPoints=0, strength=0;
	Creature testCreature[8];
	Human testHuman[8];
	Elf testElf[8];
	Demon testDemon[8];
	Balrog testBalrog[8];
	Cyberdemon testCD[8];
	string fileName;
	ifstream inStream;
	bool fileFail=true;

	while(fileFail == true) {
		printIntro();
		getline(cin, fileName);
		cout<< "You've selected" << fileName << endl;
		inStream.open(fileName.c_str());
		if (inStream.fail()) {
			cout<< "The file you are trying to open has failed." << endl;
		}
		else {
			fileFail = false;
			cout<< "File has opened successfully" <<endl;
		}
		for (n; n<8; n++) {
				inStream>> type >> strength >> hitPoints;
				cout<< type << " " << strength <<" " <<hitPoints <<endl;
				switch(type) {
				case 0:
					testHuman[n].setStrength(strength);
					testHuman[n].setHitpoints(hitPoints);
					cout<< "Human with strength " << strength;
					cout<< " and hitpoints " << hitPoints << endl;
					break;
				case 1:
					testCD[n].setStrength(strength);
					testCD[n].setHitpoints(hitPoints);
					cout<< "Cyberdemon with strength " << strength;
					cout<< " and hitpoints " << hitPoints << endl;
					break;
				case 2:
					testBalrog[n].setStrength(strength);
					testBalrog[n].setHitpoints(hitPoints);
					cout<< "Balrog with strength " << strength;
					cout<< " and hitpoints " << hitPoints << endl;
					break;
				case 3:
					testElf[n].setStrength(strength);
					testElf[n].setHitpoints(hitPoints);
					cout<< "Balrog with strength " << strength;
					cout<< " and hitpoints " << hitPoints << endl;
					break;
				}

			}
	}
	cin>> fileName;
}



void printIntro() {
	cout<<"Welcome to the creature feature!" << endl;
	cout<< "Please enter in the name of the file you would";
	cout<< "like to open." << endl;
}


