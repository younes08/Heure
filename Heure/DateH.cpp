#include <iostream>
#include <cassert>
#include "DateH.h"

using namespace date;
using namespace std;

DateH::DateH(unsigned int hr, unsigned int min, unsigned int sec, 
			unsigned int day, unsigned int month, unsigned int year)
			:Hour(hr, min, sec)
{
	assert(date_checker(day, month, year));

	if (date_checker(day, month, year))
	{
		this->day = day;
		this->month = month;
		this->year = year;
	}
	else cout << "Date typed is wrong!" << endl;
}

bool date::DateH::dummy_valid_date(unsigned int day, unsigned int month, unsigned int year)
{
	//check if range giving is at least acceptable 
	if (day > 31 || day < 1 ||
		month > 12 || month < 1 ||
		year < 1900)
		return false;
	return true;
}

bool date::DateH::is_leap(unsigned int year)
{
	//check if year is leap
	if (!year % 4) return true;
	return false;
}

unsigned int date::DateH::months_days(unsigned int month, unsigned int year)
{
	//if month is 2 check its number of days
	if (month == 2)
		if (is_leap(year)) return 29;
		else return 28;
	
	//if month is not february
	if ((month > 7 && !(month % 2) ||
		(month % 2) && month <= 7))
		return 31;
	else
		return 30;
}

bool date::DateH::date_checker(unsigned int day, unsigned int month, unsigned int year)
{
	unsigned int max_month = months_days(month, year);

	//check if the range is valid
	if (!dummy_valid_date(day, month, year)) return false;
	if (day > max_month) return false;

	return true;
}

bool date::DateH::operator>(const DateH& D) const
{
	unsigned int date1, date2;
	date1 = this->day * 100000000 + this->month * 1000000 + this->year * 10000;
	date2 = D.day * 100000000 + D.month * 1000000 + D.year * 10000;

	if (date1 > date2) return true;
	//if same dates check the hours 
	if (date1 == date2) return this->Hour::operator>(D);

	return false;
}

void date::DateH::print() const
{
	cout << this->day << "/" << this->month << "/" << this->year << "-";
	this->Hour::print();
}
