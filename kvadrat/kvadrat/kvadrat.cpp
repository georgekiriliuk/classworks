// kvadrat.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cmath>;
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
float a;
	float b;
	float c;
	cout << "Pick a first number" << endl;
	cin >> a;
	cout << "Pick a second number" << endl;
	cin >> b;
	cout << "Pick a third number" << endl;
	cin >> c;
	float D= b * b - 4 * a*c;
	if (D >= 0) {
		float X1 = (-b - sqrt(D)) / (2 * a);
		float X2 = (-b + sqrt(D)) / (2 * a);
		cout << "The first root:" << X1 << endl;
		cout << "The second root:" << X2 << endl;
	}
	
	else {
		cout << "Oops, there is a mistake" << endl;
	}
	return 0;
}

