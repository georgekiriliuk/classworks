#include "pch.h"
#include "Book.h"


Book::Book()
{
	name =" hjvgf";
	amount = 1234;
	author = "ig";
}
Book::Book(string name, int amount, string author) {
	this->name = name;
	this->amount = amount;
	this->author = author;
}


Book::~Book()
{
}
