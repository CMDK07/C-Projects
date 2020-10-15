#include <iostream>
#include <string> 
#include <thread>
#include <chrono>
#include <stdlib.h>

#include "player.h"
#include "enemy.h"

using namespace std;

void delayScroll(int delayMS, int lineCount);
character* generateEnemy();
void encounterEnemy(character *player, character *enemy);
void fightDecisions(character *player);

void delayScroll(int delayMS, int lineCount)
{
	for (int i = 0; i < lineCount; i++)
	{
		cout << "" << endl;
		this_thread::sleep_for(chrono::milliseconds(delayMS));
	}
}

character* generateEnemy()
{
	int r = rand() % 6;
	if (r == 1)
	{
		character *e = new enemy(" Thuris", "A mythical beast found as a fossil and regenerated as a supervillain");
		e->setStats(1);
		return e;
	}
	else if (r == 2)
	{
		character *f = new enemy(" R.O.B.", "A robot with fighting and flying abilities");
		f->setStats(1);
		return f;
	}
	else if (r == 3)
	{
		character *g = new enemy(" Nick", "A normal human with spiky arms");
		g->setStats(1);
		return g;
	}
	else if (r == 4)
	{
		character *h = new enemy(" President Nixon", "A former and regenerated U.S. President who wants to use evil for good");
		h->setStats(2);
		return h;
	}
	else if (r == 5)
	{
		character *i = new enemy(" 0100110001111", "A piece of binary that is ordered to kill everyone in the world");
		i->setStats(1);
		return i;
	}
	else
	{
		character *j = new enemy(" Red the Pirate", "A pirate who has thrist of blood... LITERALLY");
		j->setStats(1);
		return j;
	}
}

void encounterEnemy(character *player, character *enemy)
{
	while (player->isAlive() && enemy->isAlive())
	{
		player->fight(enemy);
		enemy->fight(player);
		delayScroll(10, 1);
	}
	fightDecisions(player);
	
	
}

void fightDecisions(character *player)
{
	bool repeat = false;
	if (player->isAlive())
	{
		character *anEnemy = generateEnemy();
		int option = 0;
		cout << "You encounter a(n)" << anEnemy->name << "! What will you do?" << endl;
		cout << "1. Encounter" << endl;
		cout << "2. Run Away" << endl;
		cout << ">";
		cin >> option;

		if (option == 1)
			encounterEnemy(player, anEnemy);
		else if (option == 2)
			cout << "Actually. if you chose to run, then you are very cowardous, so I have to quit the game. I don't deal \nwith chickens." << endl;

		// It will show an abort error if you die or you choose option #2. Please ignore it.

		else if ( option != 1 || 2 )
		
			while (!repeat) { cout << "YOU HACKED THE GAME! WHY YOU MONSTER 1646GEGERGESRGVEGVWERGBWERGBWEG9B1WGR1WR1CG91ER9B19EWR1191GB9E1C1R919W191 9R9181BY81DTW18K1O981 YOU HACKED THE GAME!WHY YOU MONSTER 1646GEGERGESRGVEGVWERGBWERGBWEG9B1WGR1WR1CG91ER9B19EWR1191GB9E1C1R919W191 9R9181BY81DTW18K1O981 YOU HACKED THE GAME! WHY YOU MONSTER 1646GEGERGESRGVEGVWERGBWERGBWEG9B1WGR1WR1CG91ER9B19EWR1191GB9E1C1R919W191 9R9181BY81DTW18K1O981 YOU HACKED THE GAME!WHY YOU MONSTER 1646GEGERGESRGVEGVWERGBWERGBWEG9B1WGR1WR1CG91ER9B19EWR1191GB9E1C1R919W191 9R9181BY81DTW18K1O981 YOU HACKED THE GAME! WHY YOU MONSTER 1646GEGERGESRGVEGVWERGBWERGBWEG9B1WGR1WR1CG91ER9B19EWR1191GB9E1C1R919W191 9R9181BY81DTW18K1O981 YOU HACKED THE GAME!WHY YOU MONSTER 1646GEGERGESRGVEGVWERGBWERGBWEG9B1WGR1WR1CG91ER9B19EWR1191GB9E1C1R919W191 9R9181BY81DTW18K1O981 YOU HACKED THE GAME! WHY YOU MONSTER 1646GEGERGESRGVEGVWERGBWERGBWEG9B1WGR1WR1CG91ER9B19EWR1191GB9E1C1R919W191 9R9181BY81DTW18K1O981 YOU HACKED THE GAME!WHY YOU MONSTER 1646GEGERGESRGVEGVWERGBWERGBWEG9B1WGR1WR1CG91ER9B19EWR1191GB9E1C1R919W191 9R9181BY81DTW18K1O981 YOU HACKED THE GAME! WHY YOU MONSTER 1646GEGERGESRGVEGVWERGBWERGBWEG9B1WGR1WR1CG91ER9B19EWR1191GB9E1C1R919W191 9R9181BY81DTW18K1O981 YOU HACKED THE GAME!WHY YOU MONSTER 1646GEGERGESRGVEGVWERGBWERGBWEG9B1WGR1WR1CG91ER9B19EWR1191GB9E1C1R919W191 9R9181BY81DTW18K1O981 YOU HACKED THE GAME! WHY YOU MONSTER 1646GEGERGESRGVEGVWERGBWERGBWEG9B1WGR1WR1CG91ER9B19EWR1191GB9E1C1R919W191 9R9181BY81DTW18K1O981 YOU HACKED THE GAME!WHY YOU MONSTER 1646GEGERGESRGVEGVWERGBWERGBWEG9B1WGR1WR1CG91ER9B19EWR1191GB9E1C1R919W191 9R9181BY81DTW18K1O981 YOU HACKED THE GAME! WHY YOU MONSTER 1646GEGERGESRGVEGVWERGBWERGBWEG9B1WGR1WR1CG91ER9B19EWR1191GB9E1C1R919W191 9R9181BY81DTW18K1O981 YOU HACKED THE GAME!WHY YOU MONSTER 1646GEGERGESRGVEGVWERGBWERGBWEG9B1WGR1WR1CG91ER9B19EWR1191GB9E1C1R919W191 9R9181BY81DTW18K1O981 YOU HACKED THE GAME! WHY YOU MONSTER 1646GEGERGESRGVEGVWERGBWERGBWEG9B1WGR1WR1CG91ER9B19EWR1191GB9E1C1R919W191 9R9181BY81DTW18K1O981 YOU HACKED THE GAME!WHY YOU MONSTER 1646GEGERGESRGVEGVWERGBWERGBWEG9B1WGR1WR1CG91ER9B19EWR1191GB9E1C1R919W191 9R9181BY81DTW18K1O981 YOU HACKED THE GAME! WHY YOU MONSTER 1646GEGERGESRGVEGVWERGBWERGBWEG9B1WGR1WR1CG91ER9B19EWR1191GB9E1C1R919W191 9R9181BY81DTW18K1O981 YOU HACKED THE GAME! WHY YOU MONSTER 1646GEGERGESRGVEGVWERGBWERGBWEG9B1WGR1WR1CG91ER9B19EWR1191GB9E1C1R919W191 9R9181BY81DTW18K1O981" << endl; }
			terminate();
		}
};

int main()
{
	bool repeat = false;
	srand(time(NULL));
	string intro =

		"H@b                    d@b______________________________________________________   \n"
		"H@@EEEEEEEEEEEEEEEEEEEH@@                                                      /   \n"
		"H@@EEEEEEEEEEEEEEEEEEEH@@                                                     /    \n"
		"H@@EEEEEEEEEEEEEEEEEEEH@@____________________________________________________/     \n"
		"H@P                  `H@@                                                          \n"
		"                      T@                                                           \n"


		"SENURA'S FUTURE";

	cout << intro << endl;

	string playerName;

	cout << "What is your human's (nick)name?" << endl;
	cout << "> ";
	getline(cin, playerName);
	cout << "Excellent! Let's get started with " << playerName << "'s amazing \nfuturisitc adventure with your Lightening Fire Sword!" << endl;
	this_thread::sleep_for(chrono::milliseconds(2500));
	delayScroll(10, 30);

	cout << "By the way, type the number choice, NOT the answer choice itself. \nAlso, the enemies have made copies themselves so the adventure \nwill continue on until you're dead. \nThanks and have fun!  :D" << endl;
	this_thread::sleep_for(chrono::milliseconds(5000));
	delayScroll(10, 30);

	character *petRock = new player(playerName, "Just a regular Fight.");
	petRock->setStats(7);

	fightDecisions(petRock);

	
}