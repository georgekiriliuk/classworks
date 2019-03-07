#include<pch.h>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	float a, b, c, D, x, x1, x2;
	cout << "Решение квадратного уравнения" << endl << "Введите переменные a, b и c" << endl;
	cin >> a >> b >> c;
	D = b * b - 4 * a*c;
	cout << "Дискриминант равен " << D << endl;
	if (D < 0)
		cout << "Уравнение не имеет решений" << endl;
	if (D == 0)
	{
		cout << "Уравнение имеет одно решение" << endl;
		x = -b / (2 * a);
		cout << "x=" << x;
	}
	if (D > 0)
	{
		cout << "Уравнение имеет два решения" << endl;
		x1 = (-b + sqrt(D)) / (2 * a);
		x2 = (-b - sqrt(D)) / (2 * a);
		cout << "x1=" << x1 << ", " << "x2=" << x2 << endl;
	}
}

