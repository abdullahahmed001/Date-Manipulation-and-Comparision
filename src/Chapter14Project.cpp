//============================================================================
// Name        : Chapter14Project.cpp
// Author      : Abdullah Ahmed
// Version     :
// Copyright   : Don't steal my program
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Date.hpp"
using namespace std;

int main() {

	Date todaysDate;
	todaysDate.setYear(2021);
	todaysDate.setMonth(12);
	todaysDate.setDay(31);

	cout << "Today's date is: " << todaysDate << endl;
	todaysDate++;
	cout << "Today's date after increment is: " << todaysDate << endl;
	todaysDate--;
	cout << "Today's date after decrement is: " << todaysDate << endl;

	Date testDate;
	testDate.setYear(2021);
	testDate.setMonth(03);
	testDate.setDay(31);

	if (todaysDate < testDate)
	{
		cout << "Today is less than test" << endl;
	}
	else if (todaysDate > testDate)
	{
		cout << "Today is greater than test" << endl;
	}
	else if(todaysDate == testDate)
	{
		cout << "The two dates are equal" << endl;
	}
	else
	{
		cout << "Something went wrong with your logical operator overload functions" << endl;
	}
	cout << "Program ending, have a nice day!" << endl; // prints Program ending, have a nice day!
	return 0;
}
