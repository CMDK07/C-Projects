#include <string>
#include <iostream>
using namespace std;

int main()
{
	string nationalLandmark,
		weaponChoice,
		enemyName,
		protaganistName,
		reasonOfDeath,
		famousCelebrity,
		settingPlace;

	int settingYear;
	char doorLetter;
	double millilitersOfSalt;
	bool ifEnemyIsAlive;
	
	
	
	cout << "What is your favorite landmark in America? (Happy 7/4!)" << endl;
	getline(cin, nationalLandmark);
	cout << "What is your favorite type of weapon? (It could be literally anything)" << endl;
	getline(cin, weaponChoice);
	cout << "Type in a name that you despise the most." << endl;
	getline(cin, enemyName);
	cout << "Type in your name or a name that feels heroic to you." << endl;
	getline(cin, protaganistName);
	cout << "QUICK! TYPE ABOUT HOW A PERSON COULD DIE IN THE WORLD RIGHT NOW!" << endl;
	getline(cin, reasonOfDeath);
	cout << "Type a famous celebrity's name!" << endl;
	getline(cin, famousCelebrity);
	cout << "What city/state does this national landmark reside in?" << endl;
	getline(cin, settingPlace);
	cout << "Type a random, also legit, year that first came to your mind." << endl;
	cin >> settingYear;
	cout << "Type an English lettter." << endl;
	cin >> doorLetter;
	cout << "Think about this... how much milliliters of salt would you put into your savory lunch?" << endl;
	cin >> millilitersOfSalt;
	cout << "(type 1 for true or type 0 for false) The Burj Khalifa is the tallest monument ever." << endl;
	cin >> ifEnemyIsAlive;

	cout << "The hero(ine) of this magical story named " << protaganistName << " ventures out of his stone home in " << settingPlace << " during "<< settingYear << "." << endl;
	cout << "He was strolling around his neighborhood until he found a weird colored door, with the letter " << doorLetter << "." << endl;
	
	switch (doorLetter)
	{
	case 'a':
		cout << "For which that letter, A, stands for Awesomeness. ";
		break;
	case 'b':
		cout << "For which that letter, B, stands for Beauty. ";
		break;
	case 'c':
		cout << "For which that letter, C, stands for Cunning. ";
		break;
	case 'd':
		cout <<	"For which that letter, D, stands for Deceitful. ";
		break;
	case 'e':
		cout <<	"For which that letter, E, stands for Éclaircissement. ";
		break;
	case 'f':
		cout <<	"For which that letter, F, stands for Funny. ";
		break;
	case 'g':
		cout << "For which that letter, G, stands for Godly. ";
		break;
	case 'h':
		cout << "For which that letter, H, stands for Humaneness. ";
		break;
	case 'i':
		cout << "For which that letter, I, stands for Insincere. ";
		break;
	case 'j':
		cout << "For which that letter, J, stands for Joy. ";
		break;
	case 'k':
		cout << "For which that letter, K, stands for Knout. ";
		break;
	case 'l':
		cout << "For which that letter, L, stands for Losing. ";
		break;
	case 'm':
		cout << "For which that letter, M, stands for Might. ";
		break;
	case 'n':
		cout << "For which that letter, N, stands for Nice. ";
		break;
	case 'o':
		cout << "For which that letter, O, stands for Open. ";
		break;
	case 'p':
		cout << "For which that letter, P, stands for Presuasive. ";
	break;
    case 'q':
		cout << "For which that letter, Q, stands for Quarrel. ";
	   break;
	case 'r':
		cout << "For which that letter, R, stands for Reckless. ";
		break;
	default:
		cout << "Actually, that letter doesn't mean much... ";
		break;

	}

	cout << " He went through the door and found his worst enemy, which was " << enemyName << "." << endl;
	cout << "They battled and battled and " << protaganistName << " won the battle against " << enemyName << " with his power of " << reasonOfDeath << "." << endl;
	cout << "Weirdly though, they fought on " << nationalLandmark << " with " << protaganistName << "'s " << weaponChoice << "." << endl;
	cout << "To celebrate, " << protaganistName << " celebrated with " << famousCelebrity << " who somehow brought " << millilitersOfSalt << " ml of salt. Weird..." << endl;
	cout << "Thanks for playing! The evil has been defeated by this most random hero(ine) ever! Or was he?" << endl;
		if ( ifEnemyIsAlive == true )
		{
			cout << "How did he survive, " << protaganistName << "?" << " In another day, he will defeat him again! (ʘᗩʘ') " << endl;
		}	else { cout << "Wait.. never mind... (☞ﾟ∀ﾟ)☞ " << endl; } }