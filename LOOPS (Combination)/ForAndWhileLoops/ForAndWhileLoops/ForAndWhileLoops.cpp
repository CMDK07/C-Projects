#include <string>
#include <iostream>
using namespace std;

int main() 
{
	bool onRollerCoaster = true;

	while (onRollerCoaster)
	{
		cout << "Ahhh!" << endl;
		onRollerCoaster = false;
	}
	
	int timesToRepeat = 5;

	for (int i = 0; i <= timesToRepeat; i++)
	{
		cout << i << endl;
	}
	
	for (int i = 0; i < 10; i++)
	{
		if (i == 2)
		{
			continue;
		}
		cout << i << endl;
	}
	
	while (true)
	{
		break;
	}

}