// ifelse.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;



int main()
{

	setlocale(LC_ALL, "Russian");
	bool a = true;
	if (a) {
		cout << "true!!!!!" << endl;
	}
	string name;
	cout << "Как тебя зовут?" << endl;
	cin >> name;
	if (name == "george") {
		cout << "Привет!" << endl;
	}
	else {
		cout << "Уходи незнакомец!!" << endl;
	}
	
	return 0

