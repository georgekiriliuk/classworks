// distance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	float x1, x2, y1, y2;
	cout << "Введите координаты первой точки:" << endl;
	cin >> x1;
	cin >> y1;
	cout << "Введите координаты второй точки:" << endl;
	cin >> x2;
	cin >> y2;
	cout << "Расстояние между точками:" <<sqrt(pow((x2-x1), 2) + pow((y2- y1), 2))  << endl;
}

