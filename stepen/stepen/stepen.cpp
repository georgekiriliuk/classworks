// stepen.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
		int a;
	int b;
	cout << "Введите число" << endl;
	cin >> a;
	cout << "Введите степень" << endl;
	cin >> b;
	int p=1;
	while (b > 0) {
		b--;
			p = p * a;
	} cout << p;
}

