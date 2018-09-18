#include <iostream>
#include <string>
#include <time.h>  
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void doorGame() {
	int userDoorChoice;

	cout << "______________________________" << endl;
	cout << "||        Welcome to        ||" << endl;
	cout << "||   extreme door pickers   ||" << endl;
	cout << "||____________III___________||" << endl;

	cout << "Please pick a door: Door 1, Door 2, Door 3 ";
	cin >> userDoorChoice;

	if (userDoorChoice == 1) {
		cout << "You win 5 bucks!" << endl;
	}
	else if (userDoorChoice == 2) {
		cout << "You don't win anything!" << endl;
	}
	else if (userDoorChoice == 3) {
		cout << "You win a large chicken wearing a top hat!" << endl;
	}
	else
		//option not available
		cout << "Not available" << endl;
}

void randNum()
{

	int secret;
	int number;
	srand(time(NULL));
	secret = rand() % 10 + 1;

	cout << "Guess a number between 1 and 10: ";
	cin >> number;

	if (number == secret) {
		cout << "Congrats I guess..." << endl;
	}
	else if (number < 1 || number > 10) {
		randNum();
	}
	else if (number != secret) {
		cout << "Nope :(" << endl;
		randNum();
	}
}

void randomGame() {
	cout << "No game for you, here's a taco truck  instead!" << endl;

	cout << " ________________________________" << endl;
	cout << " |      DELGADO'S    TACOS      |" << endl;
	cout << " |______________________________|_" << endl;
	cout << " |   |      / \\           |    |  \\ " << endl;
	cout << " |   |      \\ /           |    |   \\ " << endl;
	cout << " |   |      /|\\           |    |    \\ " << endl;
	cout << " |   |_______|____________|    |___/_\\______" << endl;
	cout << " |   |____________________|    |    - |     |" << endl;
	cout << "_|_____________________________|      |____ |" << endl;
	cout << "||_/    \\______________________|______/    \\|" << endl;
	cout << "   | ## |                             | ## | " << endl;
	cout << "   \\____/                             \\____/ " << endl;
}

int main(){
	int pickGame;

	do {

		cout << "Please pick a game: Game 1 Game 2 Game 3" << endl;
		cin >> pickGame;

		if (pickGame == 1)
		{
			doorGame();
		}
		else if (pickGame == 2) 
		{
			randomGame();
		}
		else if (pickGame == 3)
		{
			randNum();
		}
		else if (pickGame >= 4)
		{
			cout << "Pick again FOOL!" << endl;
		}
	} while (pickGame != 4);

	system("pause");
	return 0;
}