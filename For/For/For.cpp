

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	cout << "Pick a number" << endl;
	int a;
	cin >> a;
	int sum=0;
	for (int i = 0; i < a; i++) {
		cout << i << endl;
		sum = sum + i +1;
	}
	cout << sum << endl;
	return 0;
}

