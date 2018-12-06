// roulette.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int randomNumber = rand() % 50 + 1;
	cout << "Шарик попал на поле " << randomNumber << endl;
	int score = 0;
	if (randomNumber > 25) {
		cout << "You win. Congratulations!" << endl;
		score = score + 1;
	}
	else {
		cout << "You lose. Sorry, try again." << endl;
	}
	if (randomNumber >= 10 && 30 >= randomNumber) {
		cout << "Congrats. You win." << endl;
		score = score + 1;
	}
	else {
		cout << "Sorry, you lose." << endl;
	}
	if (randomNumber % 2 == 0) {
		cout << "You win. Thanks for playing." << endl;
		score = score + 1;
	}
	else{
		cout << "You lose. Try again." << endl;
	}
	cout << "You won in " << score << " games, congrats." << endl;
}
