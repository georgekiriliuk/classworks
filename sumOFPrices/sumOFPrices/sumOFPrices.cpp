
#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
 int n = 12;
 int *money = new int[n];  int *shaurma = new int[n]; int *sosiskivteste = new int[n];
 int  i = 0;
 int b = 0;
 int c = 0;
 for (; i < n; i++) {
	 shaurma[i] = 50000 + rand() % 1000000;
 }
 for (; b < n; b++) {
	 sosiskivteste[b] = 50000 + rand() % 1000000;
 }

	for (; c < n; c++) {
		money[c] = shaurma[c] + sosiskivteste[c];
		cout << money[c] << "    " <<endl;
	}
	
}
