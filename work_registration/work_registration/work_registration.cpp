// work_registration.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	cout << "Введите ваш возраст:" << endl;
	int a;
	cin >> a;
	if (a >= 14 && a <= 15) {
		cout << "Только с разришением родителей!!!!" << endl;
	}
	else if (a < 14) {
		cout << "Извини, не сегодня!!!" << endl;
	}
	else {
		cout << "Добро пожаловать!!!" << endl;
	}
	return 0;

}


