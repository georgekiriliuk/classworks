// Switch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	cout << "Хотите узнать свое животное по китайскому календарю" << endl;
	string a;
	cin >> a;
	if (a == "yes") {
		cout << "ПРОДОЛЖИМ! Введите свой год рождения." << endl;
		int year;
		cin >> year;
		switch (year % 12) {
		case 4: {
			cout << "Вы Крыса" << endl;
			break;
		}
		case 5: {
			cout << "Вы Бык " << endl;
			break;
		}
		case 6: {
			cout << "Вы Тигр " << endl;
			break;
		}
		case 10: {
			cout << "Вы Лошадь " << endl;
			break;
		}
		case 11: {
			cout << "Вы Овца " << endl;
			break;
		}
		case 0: {
			cout << "Вы Обезьяна " << endl;
			break;
		}
		case 7: {
			cout << "Вы Кролик  " << endl;
			break;
		}
		case 8: {
			cout << "Вы Дракон" << endl;
			break;
		}
		case 9: {
			cout << "Вы Змея " << endl;
			break;
		}
		case 1: {
			cout << "Вы Петух " << endl;
			break;
		}
		case 2: {
			cout << "Вы Собака " << endl;
			break;
		}
		case 3: {
			cout << "Вы Свинья " << endl;
			break; }
		default: {
			cout << "Я не знаю" << endl;
		}
		}
	}
	else {
		cout << "ПОКА" << endl;
	}
	}
	