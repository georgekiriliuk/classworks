#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

struct River{
	string name;
	int length;
	bool warm;
};
void riv(River& inf, string n, int l, bool w)
{
	inf.name = n;
	inf.length = l;
	inf.warm = w;
}

int main()
{
	River info;
	string n; int l; bool w;
	cout << "The river's name" << endl;
	cin >> n;
	cout << "The river's length" << endl;
	cin >> l;
	cout << "Does the river warm? True or false" << endl;
	cin >> w;
	riv(info, n, l, w);
	River r1;
	River r2;
	riv(r1, "Don", 3000, true);
	cout << info.name << "   " << info.length << "   " << info.warm << endl;
}


