// string-iter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string a;
	cin >> a;
	for (int i = 0; i < a.length(); i++) 
		if(a[i] >= 97 && a[i] <=122)
		{
			a[i] -= 32;
		}
	else {
	a[i] = a[i];
	}
	cout << a << endl;
}
