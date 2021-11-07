#include "Hour.h"
#include <iostream>
using namespace std;

date::Hour::Hour(unsigned int hr, unsigned int min, unsigned int sec)
{
	if (hr < 0 || hr > 23) hr = 0;
	if (min < 0 || min > 59) min = 0;
	if (sec < 0 || sec > 59) sec = 0;

	this->hr = hr;
	this->min = min;
	this->sec = sec;
}

void date::Hour::print() const
{
	if (this->hr < 10) cout << "0" << this->hr << ":";
	else cout << this->min << ":";

	if (this->min < 10) cout << "0" << this->min << ":";
	else cout << this->min << ":";

	if (this->sec < 10) cout << "0" << this->sec << endl;
	else cout << this->sec << endl;
}

bool date::Hour::operator>(const Hour& H) const
{
	unsigned int a, b;
	a = this->hr * 10000 + this->min * 1000 + this->sec * 100;
	b = H.hr * 10000 + H.min * 1000 + H.sec * 100;
	
	if (a > b) return true;
	else return false;
}




