// Filtre.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
struct Worker {
	string name;
	int salary;
};
void show(Worker w) {
	cout << w.name << endl;
	cout << w.salary << endl;
}
void filter(Worker worker[], int size, int min, int max) {
	for (int i = 0; i < size; i++) {
		if (worker[i].salary > min && worker[i].salary < max)
		{ show(worker[i]); }
	}
}

int main()
{
   
}

