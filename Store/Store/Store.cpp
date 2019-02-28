
#include "pch.h"
#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
struct Good 
{
	string name;
	float price;
	int count;
};

void Add(Good goods[150], int &size)
{
	cout << "Adding:\n";
	cout << "Name:\n";
	cin >> goods[size].name;
	cout << "Price:\n";
	cin >> goods[size].price;
	cout << "Count:\n";
	cin >> goods[size].count;
	size++;
}


void Print(Good goods[150], int size)
{
	cout << "X--------------------------X\n";
	cout << "| Name   | Price  | Count  | \n";
	cout << "X--------------------------X\n";
	for (int i = 0; i < size; i++)
	{
		cout << "|";
		cout.width(8);
		cout << goods[i].name << "|";
		cout.width(8);
		cout << goods[i].price << "|";
		cout.width(8);
		cout << goods[i].count << "|";
		cout << "   " << endl;
		cout << "X--------------------------X\n";
	}
}
int main()
{
	struct Good goods[150];
	int size = 0;


	while (true)
	{
		system("cls");
		Print(goods, size);
		int menu;
		cout << "Menu:\n 1.Add\n\n >";
		cin >> menu;
		if (menu == 1)
		{
			Add(goods, size);
		}
		else 
		{
			break;
		}
	}


}

