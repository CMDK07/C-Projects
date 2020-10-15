#include <iostream>
#include <string>

using namespace std;

void stringChanger(string aString);

void stringChanger(string aString)
{
	aString = "New";
}

void stringChanger(string * aString);

void stringChanger(string * aString)
{
	*aString = "New";
}

int main()
{
	string testString = "Old";
	string *pointer;
	pointer = &testString;

	cout << pointer << endl;
	cout << *pointer << endl;

	cout << "The string is " << testString << endl;

	stringChanger(testString);

	cout << "The string is " << testString << endl;

	stringChanger(&testString);

	cout << "The string is " << testString << endl;
}