
#include "pch.h"
#include <iostream>
using namespace std;
void drawField(char(*field)[10], int h) {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cout << field[i][j];
		}
		cout << endl;
	}
}

int main()
{
	char arr[10][10];
	int x = 0; int y = 0;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			arr[i][j] = ' ';
		}
	}
	drawField(arr, 10);
}
