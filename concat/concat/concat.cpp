// concat.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	string a = "burger";
	string b = "king";
	string c = a + b;
	cout << c << endl;

}
