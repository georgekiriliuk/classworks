

#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	ifstream ifs;
    int words[11];
	ifs.open("C:\\Users\\Admin\\Desktop\\text.txt");
	for (int i = 0; i < 11; i++) {
		ifs >> words[i];
	}
	for (int i = 0; i < 11; i++) {
		cout << words[i];
	}
	ifs.close();
}