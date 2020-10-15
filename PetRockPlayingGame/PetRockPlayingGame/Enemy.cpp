#include "Enemy.h"

using namespace std;

void enemy::fight(character *other)
{
	other->currentHealth -= damage;
	cout << name << " hit " << other->name << " for " << damage << " damage.";
	cout << "\n" << other->name << " is at " << other->currentHealth << " health." << endl;
}

void enemy::setStats(int level)
{
	int baseStat = 2 * level;
	int x = rand() % baseStat + 1;

	damage = (int)x / 2;
	if (damage < 1)
		damage = 1;
	currentHealth = totalHealth = x * 2;
}

bool enemy::isAlive()
{
	if (currentHealth > 0)
		return true;
	else
		cout << "You have just killed the enemy! Congratulations and move on to the next one!" << endl;
		return false;
}
