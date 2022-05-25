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
	srand((unsigned int) time(0));

	//generate random number
	CPU = rand() % (100 + 1 - 1) + 1;

	//cout << CPU; *debug output
	

	//Player instruction output
	cout << "Hello!\n\n";
	cout << "The CPU generates a number between 1 and 100.\n";
	cout << "Guess the number which the CPU has picked.\n";
	cout << "If you guess the number correctly within 10 tries, you win!";

	//Game start
	do {
		//cout << Loop << ". try\n"; // *debug output
		Loop++;
		cout << "Type in your number:";
		cin >> Player;
		if (Player == CPU)
		{
			cout << "You are the winner!\n";
			Condition = true;
		}
		else if (Player > CPU)
		{
			cout << "The number you are looking for is smaller. Please try again.\n";
		}
		else if (Loop == 10)
		{
			Loop++;
			Condition = true;
		}
		else
		{
			cout << "The number you are looking for is bigger. Please try again.\n";
		}
	} while (Condition == false);

	//Game won/lost?
	if (Loop <= 10)
	{
		cout << "You took " << Loop << " tries and managed to find the correct number.\n";
		cout << "\nCongratulations!\n" << "If you want to play again, please click on this programs' file again.\n";
	}
	else if (Loop == 11)
	{
		cout << "You took " << Loop-- << " tries, but you didn't managed to find the correct number.\n";
		cout << "\nAww, too bad!\n" << "If you want to try again, please click on this programs' file again.\n";
	}

	//Game end
	cout << "\nThank you for playing!\n\n";

	cout << "\nPress the ENTER key to exit...\n";

	cin.ignore();
	cin.get();

}