

#include "pch.h"
#include <iostream>
#include <ctime>


using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
		int a;
		cout << "Введите большее число" << endl;
		cin >> a;
		int b;
		cout << "Введите меньшее число" << endl;
		cin >> b;
		int row[20];
		for (int i = 0; i < 20; i++) {
			row[i] = rand() % 100;
		}
		for (int i = 0; i < 20; i++) {
			if (row[i] < a && row[i] > b) {
				cout << row[i] << " ";
			}
		
		}
		cout << endl;
}

