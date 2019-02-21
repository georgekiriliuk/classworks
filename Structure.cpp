

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
struct Time {
	int year;
	int month;
	int date;
	int hour;
	int minutes;
};

struct Ticket
{
	string name;
	int row;
	int seat;
	int amount;
	string street;
	int hn;
	Time time;
};
string timetoString(Time time) {
	string res = to_string(time.date) + "." + to_string(time.month) + "." + to_string(time.year) + "    " + to_string(time.hour) + ":" + to_string(time.minutes);
	return res;
}
string ticketoString1(Ticket inf) {
	string res1 = (inf.name)+ " - the name"  + "           " + to_string(inf.row) +"row" + "            " + to_string(inf.seat)+ "seat" + "    " + "  " + to_string(inf.amount)+ "hrn" + "   " + "   " +  inf.street + " - street" + "   " + to_string(inf.hn) + " - house number" + "    " + timetoString(inf.time);
	return res1;
}
int main()
{
	string a;
	cout << " Do you want to buy a ticket on a film Glass? ";
	cin >> a;
	if(a == "yes")
	{
		Time time;
		time.year = 1999;
		time.month = 12;
		time.date = 29;
		time.hour = 3;
		time.minutes = 0;
		Ticket ticket1;
		ticket1.name = "Glass";
		ticket1.row = 9;
		ticket1.seat = 7;
		ticket1.time = time;
		ticket1.amount = 100;
		ticket1.street = "Mikhail Grishko";
		ticket1.hn = 3;
		cout << ticketoString1(ticket1);
		cout << "                     " << endl;
		cout << "Now you can see on your screen the name of the film, your row, your seat, the cost of the ticket and the date, that includes: the date, the month, the year and also there is a time: hours and minutes, in appropriate order." << endl;
	}
	else {
		cout << "Goodbye! Have a nica day";
	}
		system("pause");
}

