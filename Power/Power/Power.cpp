// Power.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int a;
	int b;
	cout << "Pick a number" << endl;
		cin >> a;
		cout << "Pick a power" << endl;
		cin >> b;
		cout << pow(a, b);

}