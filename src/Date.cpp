/*
 * Date.cpp
 *
 *  Created on: Mar 24, 2023
 *      Author: abdullahahmed
 */

#include "Date.hpp"
#include <iomanip>
#include <string>
using namespace std;

Date::Date() {
	// TODO Auto-generated constructor stub
	this->day = 0;
	this->month = 0;
	this->year = 0;

}

Date::~Date() {
	// TODO Auto-generated destructor stub
}


int Date::numDaysInMonth()
{
	if (this->month == 2)
	{
		return 28;
	}
	else if (this->month == 4 or this->month == 6 or this->month == 9 or this->month == 11)
	{
		return 30;
	}
	else
	{
		return 31;
	}
}



bool Date::operator++(int day)
{
	if (this->day == 0 or this->month == 0 or this->year == 0)
	{
		return false;
	}
	this->day++;

	if (this->day > numDaysInMonth())
	{
		this->month++;
		this->day = 1;
	}

	if (this->month > 12)
	{
		this->year++;
		this->month = 1;
	}
	return true;
}

bool Date::operator--(int day)
{
	if (this->day == 0 or this->month == 0 or this->year == 0)
	{
			return false;
	}
	this->day--;
	if (this->day == 0)
	{
		this->month--;
		this->day = numDaysInMonth();
	}

	if(this->month == 0)
	{
		this->year--;
		this->month = 12;
		this->day = numDaysInMonth();
	}
	return true;
}

bool Date::operator==(const Date& rightDate)
{
	if (this->day == rightDate.day and this->month == rightDate.month and this->year == rightDate.year)
	{
		return true;
	}
	else
	{
		return false;
	}
}

ostream &operator<<(ostream &myOutput, const Date& dateObject)
{
	if (dateObject.day == 0 || dateObject.month == 0 || dateObject.year == 0)
	{
		myOutput << "Invalid date sent";
	}
	else
	{
		myOutput << setw(2) << setfill('0') << dateObject.month << "/" << setw(2) << setfill('0')
			<< dateObject.day << "/" << setw(2) << setfill('0') << dateObject.year;
	}
	return myOutput;
}
bool Date::operator<(const Date& rightDate)
{
	if (this->year < rightDate.year)
	{
		return true;
	}

	else if (this->year == rightDate.year and this->month < rightDate.month)
	{
		return true;
	}

	else if (this->year == this->month and this->day < rightDate.day)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Date::operator>(const Date& rightDate)
{
	if (this->year > rightDate.year)
	{
		return true;
	}
	else if(this->year == rightDate.year and this->month > rightDate.month)
	{
		return true;
	}
	else if(this->year == this->month and this->day > rightDate.day)
	{
		return true;
	}
	else
	{
		return false;
	}
}


int Date::getDay() const {
	return day;
}

bool Date::setDay(int day) {
	if (this->year == 0 or this->month == 0)
	{
		return false;
	}
	if (this->month == 0)
	{
		this->day = 0;
		return true;
	}
	else if (day < 1 or day > 31)
	{
		return false;
	}

	else if (day < 1 or day > 30)
	{
		return false;
	}

	else if (day < 1 or day > 28)
	{
			return false;
	}
	else
	{
		this->day = day;
		return true;
	}

}

int Date::getMonth() const {
	return month;
}

bool Date::setMonth(int month) {
	if (this->year == 0)
	{
		return false;
	}
	else if (month < 1 or month > 12)
	{
		return false;
	}
	else
	{
		this->month = month;
		return true;
	}

}

int Date::getYear() const {
	return year;
}

bool Date::setYear(int year) {
	if (year < 1 or year > 9999)
	{
		return false;
	}
	else
	{
		this->year = year;
		return true;
	}

}
