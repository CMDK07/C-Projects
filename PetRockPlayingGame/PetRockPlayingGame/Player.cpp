#include "Player.h"
#include <stdlib.h>

using namespace std;

void player::fight(character *other)
{
	bool repeat = false;
	int option = 0;
	cout << "Then what will you do?" << endl;
	cout << "1. Fight" << endl;
	cout << "2. Recover" << endl;
	cout << "3. Run Away Now" << endl;
	cout << ">";
	cin >> option;
	cout << "\n";
	if (option == 1)
	{
		other->currentHealth -= damage;
		cout << name << " hit " << other->name << " for " << damage << " damage." << endl;
		cout << other->name << " is at " << other->currentHealth << " out of " << other->totalHealth << " health." << endl;
	}
	else if (option == 2)
	{
		currentHealth = currentHealth + 15;
		cout << "The only thing to heal yourself in the future is with radioactive breadsticks, which give you 15 health. \nNow your health is currently at " << currentHealth << ".\n" << endl;
	}

	// It will show an abort error if our choose option #3. Please ignore it.

	else if (option == 3) 
	{
		cout << "Why would you leave right now? I will close the game!" << endl;
		terminate();
	}
	else
	{
		while (!repeat) { cout << "YOU HACKED THE GAME! WHY YOU MONSTER 1646GEGERGESRGVEGVWERGBWERGBWEG9B1WGR1WR1CG91ER9B19EWR1191GB9E1C1R919W191 9R9181BY81DTW18K1O981 YOU HACKED THE GAME!WHY YOU MONSTER 1646GEGERGESRGVEGVWERGBWERGBWEG9B1WGR1WR1CG91ER9B19EWR1191GB9E1C1R919W191 9R9181BY81DTW18K1O981 YOU HACKED THE GAME! WHY YOU MONSTER 1646GEGERGESRGVEGVWERGBWERGBWEG9B1WGR1WR1CG91ER9B19EWR1191GB9E1C1R919W191 9R9181BY81DTW18K1O981 YOU HACKED THE GAME!WHY YOU MONSTER 1646GEGERGESRGVEGVWERGBWERGBWEG9B1WGR1WR1CG91ER9B19EWR1191GB9E1C1R919W191 9R9181BY81DTW18K1O981 YOU HACKED THE GAME! WHY YOU MONSTER 1646GEGERGESRGVEGVWERGBWERGBWEG9B1WGR1WR1CG91ER9B19EWR1191GB9E1C1R919W191 9R9181BY81DTW18K1O981 YOU HACKED THE GAME!WHY YOU MONSTER 1646GEGERGESRGVEGVWERGBWERGBWEG9B1WGR1WR1CG91ER9B19EWR1191GB9E1C1R919W191 9R9181BY81DTW18K1O981 YOU HACKED THE GAME! WHY YOU MONSTER 1646GEGERGESRGVEGVWERGBWERGBWEG9B1WGR1WR1CG91ER9B19EWR1191GB9E1C1R919W191 9R9181BY81DTW18K1O981 YOU HACKED THE GAME!WHY YOU MONSTER 1646GEGERGESRGVEGVWERGBWERGBWEG9B1WGR1WR1CG91ER9B19EWR1191GB9E1C1R919W191 9R9181BY81DTW18K1O981 YOU HACKED THE GAME! WHY YOU MONSTER 1646GEGERGESRGVEGVWERGBWERGBWEG9B1WGR1WR1CG91ER9B19EWR1191GB9E1C1R919W191 9R9181BY81DTW18K1O981 YOU HACKED THE GAME!WHY YOU MONSTER 1646GEGERGESRGVEGVWERGBWERGBWEG9B1WGR1WR1CG91ER9B19EWR1191GB9E1C1R919W191 9R9181BY81DTW18K1O981 YOU HACKED THE GAME! WHY YOU MONSTER 1646GEGERGESRGVEGVWERGBWERGBWEG9B1WGR1WR1CG91ER9B19EWR1191GB9E1C1R919W191 9R9181BY81DTW18K1O981 YOU HACKED THE GAME!WHY YOU MONSTER 1646GEGERGESRGVEGVWERGBWERGBWEG9B1WGR1WR1CG91ER9B19EWR1191GB9E1C1R919W191 9R9181BY81DTW18K1O981 YOU HACKED THE GAME! WHY YOU MONSTER 1646GEGERGESRGVEGVWERGBWERGBWEG9B1WGR1WR1CG91ER9B19EWR1191GB9E1C1R919W191 9R9181BY81DTW18K1O981 YOU HACKED THE GAME!WHY YOU MONSTER 1646GEGERGESRGVEGVWERGBWERGBWEG9B1WGR1WR1CG91ER9B19EWR1191GB9E1C1R919W191 9R9181BY81DTW18K1O981 YOU HACKED THE GAME! WHY YOU MONSTER 1646GEGERGESRGVEGVWERGBWERGBWEG9B1WGR1WR1CG91ER9B19EWR1191GB9E1C1R919W191 9R9181BY81DTW18K1O981 YOU HACKED THE GAME!WHY YOU MONSTER 1646GEGERGESRGVEGVWERGBWERGBWEG9B1WGR1WR1CG91ER9B19EWR1191GB9E1C1R919W191 9R9181BY81DTW18K1O981 YOU HACKED THE GAME! WHY YOU MONSTER 1646GEGERGESRGVEGVWERGBWERGBWEG9B1WGR1WR1CG91ER9B19EWR1191GB9E1C1R919W191 9R9181BY81DTW18K1O981 YOU HACKED THE GAME! WHY YOU MONSTER 1646GEGERGESRGVEGVWERGBWERGBWEG9B1WGR1WR1CG91ER9B19EWR1191GB9E1C1R919W191 9R9181BY81DTW18K1O981" << endl; }
		terminate();
	}
}

void player::setStats(int level)
{
	int baseStat = 2 * level;
	int x = rand() % baseStat + 1;

	damage = x;
	currentHealth = totalHealth = x * 3;
}

bool player::isAlive()
{
	if (currentHealth > 0)
		return true;
	else
		cout << "You have just died! Thanks for playing! :D" << endl;
		return false;
}
 