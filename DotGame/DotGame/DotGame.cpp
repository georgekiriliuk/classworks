
#include "pch.h"
#include <iostream>
#include <conio.h>
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

	int move;
	int i = 0;
	int j = 0;
	arr[i][j] = '?';
	drawField(arr, 10);
	while (true) {
		move = _getch();
		switch (move) {
		case 72: {
			arr[i][j] = ' ';
			i -= 1;
			arr[i][j] = '?';
			return i, j;
			break;
		}
		case 80: {
			arr[i][j] = ' ';
			i += 1;
			arr[i][j] = '?';
			break;
		}
		case 77: {
			arr[i][j] = ' ';
			j += 1;
			arr[i][j] = '?';
			break;
		}
		case 75: {
			arr[i][j] = ' ';
			j -= 1;
			arr[i][j] = '?';
			break;
		}
		default: {
			break; 
		}
		}
		system("CLS");
		drawField(arr, 10);
	}
}
