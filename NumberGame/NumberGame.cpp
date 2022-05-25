// NumberGame.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <random>
#include <stdio.h>
#include <ctime>
using namespace std;


int main() {
	int Player;
	int CPU;
	int Loop = 0;
	bool Condition = false;


	//Random number generator start
	srand((unsigned int)time(0));

	//generate random number
	CPU = rand() % (100 + 1 - 1) + 1;

	//cout << CPU; *debug output


	//Player instruction output
	cout << "Hello!\n\n";
	cout << "The CPU generates a number between 1 and 100.\n";
	cout << "Guess the number which the CPU has picked.\n";
	cout << "If you guess the number correctly within 10 tries, you win!\n\n";

	//Game start
	do {
		//cout << Loop << ". try\n"; // *debug output
		Loop++;
		cout << "Type in your number:\n";
		cin >> Player;
		if (Player == CPU)
		{
			cout << "You are the winner!\n\n";
			Condition = true;
		}
		else if (Player > CPU)
		{
			cout << "The number you are looking for is smaller. Please try again.\n\n";
		}
		else if (Loop == 10)
		{
			Loop++;
			Condition = true;
		}
		else
		{
			cout << "The number you are looking for is bigger. Please try again.\n\n";
		}
	} while (Condition == false);

	//Game won/lost?
	if (Loop <= 10)
	{
		cout << "Congratulations!\n\n";
		cout << "You took " << Loop << " tries and managed to find the correct number.\n\n";
		cout << "If you want to play again, please click on this programs' file again.\n\n";
	}
	else if (Loop == 11)
	{
		cout << "Aww, too bad!\n\n";
		cout << "You took " << Loop - 1 << " tries, but you didn't managed to find the correct number.\n\n";
		cout << "If you want to try again, please click on this programs' file again.\n\n";
	}

	//Game end
	cout << "Thank you for playing!\n\n";

	cout << "Press the ENTER key to exit...\n";

	cin.ignore();
	cin.get();

}