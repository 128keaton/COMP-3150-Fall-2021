#include "hw11-2-Date.h"

#include <iostream>
using std::cout;

#include <iomanip>
using std::setw;
using std::setfill;

const int Date::daysPerMonth[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

Date::Date(const int month, const int day)
{
	set(month, day);
}

void Date::display() const
{
	cout << setfill('0') << setw(2) << this->getMonth() << '/' << setw(2) << this->getDay() << '\n';
}

int Date::daysUntil(const Date & d) const
{
	if (d.day > day) {
        return (d.day - day) + 1;
    }

    return 0;
}

int Date::getMonth() const
{
	int currentDays = this->day;
    int currentMonth = 0;

    while(currentDays > 0) {
        const int daysInMonth = Date::daysPerMonth[currentMonth];

        if (currentDays > daysInMonth) {
            currentDays -= daysInMonth;
            currentMonth++;
        } else {
            currentDays = 0;
        }
    }

    return currentMonth - 1;
}

int Date::getDay() const
{
    int currentDays = this->day;
    int currentMonth = this->getMonth();
    int totalDays = 0;


    for(int i = 0; i <= currentMonth; i++) {
        totalDays += Date::daysPerMonth[i];
    }

    return currentDays - totalDays;
}

void Date::set(const int month, const int newDay)
{
	if (month < 1 ||
	    month > 12 ||
        newDay < 1 ||
        newDay > daysPerMonth[month])
		throw 0;

    this->day = newDay;

    for (int i = 0; i <= month; i++) {
        this->day += Date::daysPerMonth[i];
    }
}
