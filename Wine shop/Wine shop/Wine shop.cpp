

#include "pch.h"
#include <string>
#include <iostream>

using namespace std;
class Wine
{
private: 
	string unlim;
public:
	void fillWine() {
		string a;
		cout << " Pick a type of wine, which type you would like to look, one a time, of a list: red, white, rose, sparkling " << endl;
		cin >> a;
		int b; int c; int d; int e;
		if (a == "red") {
			cout << "Pick a price for red wine" << endl;
		cin >> b;
			cout << " _____________________" << endl;
			cout << " | | | | | | | | | | | " << endl;
			cout << " |" << " age: 20, price:" << b << "| " << endl;
			cout << " | | | | | | | | | | |" << endl;
			 cout << " ~~~~~~~~~~~~~~~~~~~~~ " << endl;
		}
		else if (a == "white") {
			cout << "Pick a price for white wine" << endl;
			cin >> c;
			cout << " _____________________" << endl;
			cout << " | | | | | | | | | | |" << endl;
			cout << " |" << " age: 10, price:" << c << "| " << endl;
			cout << " | | | | | | | | | | |" << endl;
			 cout << " ~~~~~~~~~~~~~~~~~~~~~ " << endl;
		}
		else if (a == "rose") {
			cout << "Pick a price for rose wine" << endl;
			cin >> d;
			cout << " _____________________" << endl;
			cout << " | | | | | | | | | | |" << endl;
			cout << " |" << " age: 5, price:" << d << "| " << endl;
			cout << " | | | | | | | | | | |" << endl;
			cout << " ~~~~~~~~~~~~~~~~~~~~~ " << endl;
		}
		else if (a == "sparkling") {
			cout << "Pick a price for sparkling wine" << endl;
			cin >> e;
			cout << " _____________________" << endl;
			cout << " | | | | | | | | | | |" << endl;
			cout << " |" << " age: 15, price:" << e << "| " << endl;
			cout << " | | | | | | | | | | |" << endl;
			cout <<  " ~~~~~~~~~~~~~~~~~~~~~ " << endl;
		}
	}
	string name;
	int age;
	int price;
	Wine() {
		name = "dhfkuv";
		age = 0.0;
		price = 0.0;
	}
	Wine(string name, int age, int price) {
		this->name = name;
		this->age = age;
		this->price = price;
	}
};
class Shop
{
private:
public:
	string name1;
	Wine*menu = new Wine[10];
	Shop() {
		name1 = "lkjjsdfh";
	}
	Shop(string name1) {
		this->name1 = name1;
	}
	~Shop() {
		delete[] menu;
	}
	void fillallWine() {
		for (int i = 0; i < 10; i++) {
			menu[i].fillWine();
		}
	}
};

int main()
{
	Shop shop;
	shop.fillallWine();
}
