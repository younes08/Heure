// Heure.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "DateH.h"
#include "Hour.h"

using namespace date;
using namespace std;

int main()
{
	DateH d(5, 55, 21, 8, 12, 2000);
	DateH* d1 = new DateH(5, 60, 50, 8, 12, 2000);
	Hour *h2 = new Hour();
	Hour h1(8, 2, 99);
	h2->print();
	h1.print();
	cout << (h1 > *h2) << endl;
	d.print();
	d1->print();
	d1->Hour::print();
	cout << (*d1 > d) << endl;
	cout << d.Hour::operator>(*d1);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
