//Первое занятие. Ввод и вывод. Переменные

#include "pch.h"
#include <iostream> // библиотека
#include <cmath>
using namespace std;

int main() // начало программы 
{
	setlocale(LC_ALL, "rus"); // подключение языка
	cout << " Введитe перве число" << endl;
	int h;
	cin >> h;
	cout << " Введитe второе число" << endl;
	int a;
	cin >> a;
	cout << "Площадь треугольника: " <<h*a*1/2 << endl;
	cout << "С какой высоты вы падаете?" << endl;
	cin >> h;
	cout << " С какой высоты вы падаете?" << endl;
	int g;
	cin >> g;
	cout << "ваше земное ускорение" << endl;
	int u;
	cin >> u;
	cout << "Конечная скорость: " <<sqrt(2*h*g) << endl;
} // конец

