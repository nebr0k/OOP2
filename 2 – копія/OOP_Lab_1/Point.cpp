#include "Point.h"
#include <iostream>
using namespace std;


bool Point::Init(double f, double s, double f2, double s2)
{
	
		x = f;
		y = s;
		x2 = f2;
		y2 = s2;
		
		return true;
	
}


void Point::Display() const
{
	 cout << "first = " << abs(x) << " second = " << abs(y) << endl;

}

void Point::Read()
{
	double f;
	double s;
	double f2;
	double s2;


	
	do
	{
		cout << "Enter a valid value:" << endl;
		cout << " first = "; cin >> f;
		cout << " second = "; cin >> s;
		cout << " first = "; cin >> f2;
		cout << " second = "; cin >> s2;
		
	} while (!Init(f, s ,f2,s2));

}

double Point::tz1()
{
	
	return (x+x2)/2;
}
double Point::tz2()
{

	return (y + y2) / 2;
}double Point::tz3()
{
	if (x==y) {
		cout << "equality is equal" << endl;
		return true;
		
	}
	else
	{
		cout << "equality is not equal" << endl;
		return false;
	}
	
}