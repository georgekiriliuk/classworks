
#include "pch.h"
#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int main()
{
	srand(time(NULL));
	int ms[15];
	for (int i = 0; i < 15; ms[i++] = rand() % 46 - 10);
	for (int i = 0; i < 15; cout << ms[i++] << " ");
}

