// while.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a=20;
	while(a>=20 && a<=30) {
		cout << a << endl;
		a++;
	}
}

