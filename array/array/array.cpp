
#include "pch.h"
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	srand(time(NULL));
	LC_ALL("rus");
	int exampleArray[10];
	for (int i = 0; i < 10; i++) {
		exampleArray[i] = rand() % 100;
	}
	for (int i = 0; i < 10; i++) {
		cout << exampleArray[i] << " ";
	}cout << endl;

	for (int i = 0; i < 10; i++) {
		if (exampleArray[i] > 50) {
			cout << exampleArray[i] << " ";
		}
	
	}
	cout << endl;
}

