#pragma once
#include<iostream>
#include<string>
using namespace std;
class Book
{
private:
	string name;
	int amount;
	string author;
public:
	Book();
	Book(string name, int amount, string author) {
		this->name = name;
		this->amount = amount;
		this->author = author;
	}
	~Book();
};

