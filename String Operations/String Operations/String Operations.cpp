#include <iostream>
#include <string>

using namespace std;

int main()
{
	string userName;
	cout << "What's your name?" << endl;
	getline(cin, userName);

	string story =
		"Once upon a time, there was\n"
		"a person named charname, and he dabbed.\n";

	int index;
	index = story.find("charname");

	while (index != -1)
	{
		story.replace(index, 8, userName);
		index = story.find("charname");
	}

	cout << story << endl;
}