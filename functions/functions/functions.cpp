// functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
int min(int a, int b, int c) {
	if (a < b && a < c) {
		return a;
	}
	else if(b < a && b < c) {
		return b;
	}
	else {
		return c;
	}
	
}
int main()
{
	int d = min(123, 125, 654);
	cout << d << endl;
	
}

