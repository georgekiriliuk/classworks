

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
string uppercase(string a) {
	for (int i = 0; i < a.length(); i++) {
		if (a[i] < 123 && a[i] > 96) {
			a[i] = a[i] - 32;
		}
	}
	return a;
}

int main()
{
	string a;
	cout << "Pick a word or a sentence" << endl;
	cin >> a;
	string d = uppercase(a);
	cout << d << endl;
}


