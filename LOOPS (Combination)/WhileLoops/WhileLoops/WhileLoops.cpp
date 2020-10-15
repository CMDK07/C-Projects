#include <string>
#include <iostream>

using namespace std;

int main() 
{
	bool guessed = false;

	while (!guessed) 
	{
		int guess;
		cout << "How many leaves?" << endl;
		cin >> guess;

		if (guess == 14)
			guessed = true;

		else
			cout << "NO! TRY AGAIN! :(" << endl;

	}
	cout << "Yes! You win!" << endl;
}