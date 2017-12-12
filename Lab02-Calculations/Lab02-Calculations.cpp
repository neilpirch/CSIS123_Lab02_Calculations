// Lab02-Calculations.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	double length;
	double width;
	double perimeter;
	double area;

	cout << endl << "Enter the length value:  ";
	cin >> length;
	cout << endl << "Enter the  width value:  ";
	cin >> width;
	cout << endl;

	perimeter = 2 * (length + width);
	area = length * width;

	cout << endl;
	cout << "  Perimeter:  " << perimeter << endl;
	cout << "Square area:  " << area << endl;

	cout << endl;
	system("pause");
    return 0;
}

