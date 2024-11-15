#include  <iomanip>
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

constexpr int FIELD_WIDTH  = 10;
constexpr int FIELD_HEIGHT = 10;

int main() {
	//srand(unsigned(time(0)));


	const int treasureX = rand() % FIELD_WIDTH;
	const int treasureY = rand() % FIELD_HEIGHT;

	cout << "Treasure is here: " << treasureX << "," << treasureY << endl;

	int pirateX = 0, pirateY = 0;
	string pirateName;
	char inputdirection;

	cout << "Hello, stranger! What is your name? : ";
	cin >> pirateName;

	cout << "Welcome on island, " << pirateName << endl;
	cout << "You can walk around using 'w', 's', 'a', 'd' keys\n";

	bool isGameRanning = true;
	while (isGameRanning)
	{
		cout << "Choose your direction: ";
		cin >> inputdirection;

		switch (inputdirection)
		{
		case 'w':
		{
			pirateY++;
			if (pirateY > FIELD_HEIGHT) {
				pirateY = 0;
			}
			break;
		}
		case 'a':
		{
			pirateX--;
			if (pirateX < 0) {
				pirateX = FIELD_WIDTH;
			}
			break;
		}
		case 's':
		{
			pirateY--;
			if (pirateY < 0) {
				pirateY = FIELD_HEIGHT;
			}
			break;
		}
		case 'd':
		{
			pirateX++;
			if (pirateX > FIELD_WIDTH) {
				pirateX = 0;
			}
			break;
		}
		case 'q':
		{
			cout << "Are you tired? Understand. See you." << endl;
			isGameRanning = false;
			continue;
		}
		default:
			break;
		}


		cout << endl << pirateName << ", your are at [" << pirateX << ", " << pirateY << "]" << endl;

		if (treasureX == pirateX && treasureY == pirateY) {
			cout << "You`ve found the treasure!!" << endl;
			isGameRanning = false;
		}

		else {
			cout << "Not here, looser" << endl;
		}

	}
	system("pause");

}
