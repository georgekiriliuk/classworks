// Websites.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	ifstream ifs;
	ifs.open("C:\\Users\\Admin\\Desktop\\(Justin Bieber) Babie.txt");
	int arr[5][5];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			ifs >> arr[5][5];
		}
		cout << endl;
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

