// NumberGame.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <random>
#include <stdio.h>
#include <ctime>
#include <Windows.h>
using namespace std;


int main() {
	int Player;
	int CPU;
	int Loop = 0;
	bool Condition = false;
	string Language;

	//Random number generator start
	srand((unsigned int)time(0));

	//generate random number
	CPU = rand() % (100 + 1 - 1) + 1;

	//cout << CPU; *debug output

	LANGID Lang = GetSystemDefaultLangID();
	switch (PRIMARYLANGID(Lang))
	{
	case LANG_ENGLISH:
		Language = "en";
		break;

	case LANG_GERMAN:
		Language = "de";
		break;
	}

	//Player instruction output English
	if (Language == "en")
	{
		cout << "Hello!\n\n";
		cout << "The CPU generates a number between 1 and 100.\n";
		cout << "Guess the number which the CPU has picked.\n";
		cout << "If you guess the number correctly within 10 tries, you win!\n\n";
		cout << "Good luck!\n\n";
	}

	//Player instruction output German
	if (Language == "de")
	{ 
		cout << "Hallo!\n\n";
		cout << "Der Computer wird eine Zahl zwischen 1 und 100 generieren.\n";
		cout << "Versuche, die vom Computer generierte Zahl zu erraten.\n";
		cout << "Wenn du die Zahl innerhalb von 10 Versuchen erraten kannst, hast du gewonnen!\n\n";
		cout << "Viel Gl\201ck!\n\n";
	}

	//Game start
	do {
		//cout << Loop << ". try\n"; // *debug output
		Loop++;
		if (Language == "en")
		{
			cout << "Type in your number:\n";
		}
		if (Language == "de")
		{
			cout << "Tippe deine Zahl ein:\n";
		}
		cin >> Player;
		if (Player == CPU)
		{
			if (Language == "en")
			{
				cout << "Strike!\n\n";
			}
			if (Language == "de")
			{
				cout << "Getroffen!\n\n";
			}
			Condition = true;
		}
		else if (Player > CPU)
		{
			if (Language == "en")
			{
				cout << "The number you are looking for is smaller. Please try again.\n\n";
			}
			if (Language == "de")
			{
				cout << "Die gesuchte Zahl ist kleiner. Versuch's nochmal.\n\n";
			}
		}
		else if (Loop == 10)
		{
			Loop++;
			Condition = true;
		}
		else
		{
			if (Language == "en")
			{
				cout << "The number you are looking for is bigger. Please try again.\n\n";
			}
			if (Language == "de")
			{
				cout << "Die gesuchte Zahl ist gr\224\341er. Versuch's nochmal.\n\n";
			}
		}
	} while (Condition == false);

	//Game won/lost?
	if (Loop <= 10)
	{
		if (Language == "en")
		{
			cout << "Congratulations!\n\n";
			cout << "You took " << Loop << " tries and managed to find the correct number.\n\n";
			cout << "If you want to play again, please click on this programs' file again.\n\n";
		}
		if (Language == "de")
		{
			cout << "Gl\201ckwunsch!\n\n";
			cout << "Du hast " << Loop << " Versuche gebraucht, um die richtige Zahl zu erraten.\n\n";
			cout << "Wenn du nochmal spielen m\224chtest, klicke wieder auf die Datei von diesem Programm.\n\n";
		}
	}
	else if (Loop == 11)
	{
		if (Language == "en")
		{
			cout << "Aww, too bad...\n\n";
			cout << "You took " << Loop - 1 << " tries, but you didn't managed to find the correct number.\n\n";
			cout << "If you want to try again, please click on this programs' file again.\n\n";
		}
		if (Language == "de")
		{
			cout << "Oh, wie schade...\n\n";
			cout << "Du hast " << Loop - 1 << " Versuche gebraucht und hast nicht die richtige Zahl gefunden.\n\n";
			cout << "Wenn du es nochmal versuchen m\224chtest, klicke wieder auf die Datei von diesem Programm.\n\n";
		}
	}

	//Game end
	if (Language == "en")
	{
		cout << "Thank you for playing!\n\n";
		cout << "Press the ENTER key to exit...\n";
	}
	if (Language == "de")
	{
		cout << "Danke f\201r's Spielen!\n\n";
		cout << "Dr\201cke die ENTER Taste zum Beenden...\n";
	}

	cin.ignore();
	cin.get();

}