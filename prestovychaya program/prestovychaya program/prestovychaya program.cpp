// prestovychaya program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	cout << "Do you want to go out?" << endl;
	string a;
	cin >> a;
	while (a != "yes" ) {
		cout << "do you want to go out?" << endl;
		cin >> a;
	}
	return 0;
}
