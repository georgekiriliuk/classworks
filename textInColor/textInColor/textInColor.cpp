// textInColor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
 
void InColor(string color, string text){
	color = "color 0 " + text;
	system(("color 0" + text).c_str());
	cout << text;
}

int main()
{
	string cl;
	string co;
	cin >> co;
	//cout << co;
	cin >> cl;
	InColor(cl, co);
	//cout 