// Classes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include<string>
#include <iostream>
using namespace std;
class Cat {
private:
	string name;
	int age;
	double weight;
public:
	Cat() {
		name = "None";
		age = -1;
		weight = 9082734;
	}
	Cat(string name, int age, double weight) {
		this->name = name;
		this->age = age;
		this->weight = weight;
	}
	Cat(string name) {
		this->name = name;
		this->age = age;
		this->weight = weight;
	}
	void sayMeow() {
		cout << name << " said "<< "Meow!" << endl;
	}
	void sayvodka() {
		cout << name <<"    " << "said"<< "     " << "GIVE ME VODKA" << "       " << "zhalatelno nashey" << endl;
	}
};

int main()
{
	Cat cat1("dadia petia", 13, 19296);
	cat1.sayMeow();
	Cat cat2("dadia kolia", 2, 12843766);
	cat2.sayvodka();
}