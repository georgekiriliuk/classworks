

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a;
	cout << "Введите число для фактoриала" << endl;
	cin >> a;
	if (a>0){
		int p = 1;
		while (a > 0) {
			p = p * a;
			a = a - 1;
		} cout << p;

	}
	else {
		cout << "Nope" << endl;
	}
}