#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	//int a = 10;
	//int *p = &a;
	//cout << *p << endl;
	int n = 10;
	int *arr = new int[n];
	for (int i = 0; i < n; i++) {
		arr[i] = i + 1;
		cout << &(arr[i]) << endl;
	}
}
