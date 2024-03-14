#include <iostream>
#include <string>
#include <conio.h>

#include "GameManager.h"

using std::cout;
using std::cin;
using std::string;

int main()
{
	GameManager gameManger("Levels\\Level_1.level");

	gameManger.runGame();

	cout << "\nPress ENTER to continue...\n";
	_getch();
	return 0;
}