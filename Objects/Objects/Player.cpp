#include "player.h"
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

player::player()
{
	name = "Default";
}

player::player(string theName)
{
	name = theName;
}

void player::Greet()
{
	cout << "Hey there " << name << "!" << endl;
}