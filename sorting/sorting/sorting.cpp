// sorting.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	int *a= new int[10];
	int i =0;
	for ( i = 0; i < 10; i++) {
		a[i] = rand() % 100000;
		cout << a[i]<< endl;
	}
	cout << "i = " << i << endl;
	int c = a[i];
	for (c = 0; a[i] < 10;c++) {
		int b = 0;
		if (b < a[i]) {
			b = b;
		}
		else {
			int j = 0;
			int temp = a[j];
			a[i] = a[j];
			a[i] = temp;

		}
	}
}
