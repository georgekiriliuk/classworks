
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

string sayhello(string name) {
	name = name + "kelvin";
	cout << "Hello," << name << endl;
	return name;
}
int main()
{
	string name;
	cin >> name;
	sayhello(name);
	cout << name;   