#include <iostream>
using std::cout;

#include <iomanip>
using std::setw;
using std::setfill;

#include "Time.h"


void Time::display() {
	cout << hour << ':' << setw(2) << setfill('0') << minute << m << "m\n";
}

bool Time::earlierThan(const Time &t) {
	return m < t.m ||
                        m == t.m && (hour % 12 < t.hour % 12 ||
				hour == t.hour && minute < t.minute);
}
