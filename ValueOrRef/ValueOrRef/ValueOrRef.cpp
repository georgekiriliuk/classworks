#include "pch.h"
#include <iostream>
using namespace std;
void swap(int &e, int &f) {
	int b = e;
	int a = f;
	f = b; e = a;
}
int main()
{
	int e; int f;
	cout << "Pick a number" << endl;
	cin >> e;
	cout << "Pick a second number" << endl;
	cin >> f;
	swap(e, f);
	cout << e << "  " << f << endl;

}

