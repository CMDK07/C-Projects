#include <iostream>
#include <string>
#include "Main.h"
using namespace std; 

int main()
{
	string myName;
	cout << "Enter your name." << endl;
	cin >> myName;
	cout << "Hey there " << myName << "!" << endl;
	
	string advice = "Use a sword and fight!";

	char questionMark = '?';
	
	int myHairCount = 69;
	
	double  twoPointTwo = 2.2;
	
	bool iAmRealCamper = false;
	
	cout << "My header file works!";
	cout << " I am a camper. Actually, this is " << iAmRealCamper << "." << endl;
	cout << twoPointTwo << " and " << twoPointTwo << endl;
	cout << "Welcome to my first program!" << endl;
	cout << "I am called the " << myName << endl; 
	cout << "I am not bald, though. I have " << myHairCount << " hairs.";
	cout << "My advice is: " << advice << questionMark << endl;
}