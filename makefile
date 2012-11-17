# Author: Chris Hindes
# MakeFile for COP3330 A05

creatureApp : creatureApp.o  creature.o demon.o elf.o human.o cyberdemon.o balrog.o
	g++ creatureApp.o creature.o demon.o elf.o human.o cyberdemon.o balrog.o -o creatureApp
creatureApp.o : creatureApp.cpp
	g++ -c creatureApp.cpp
creature.o : creature.o
	g++ -c creature.cpp
demon.o : demon.cpp
	g++ -c demon.cpp
elf.o : elf.cpp
	g++ -c elf.cpp
human.o : human.cpp
	g++ -c human.cpp
cyberdemon.o : cyberdemon.cpp
	g++ -c cyberdemon.cpp
balrog.o : balrog.cpp
	g++ -c balrog.cpp
clean :
	rm -f *.o 
