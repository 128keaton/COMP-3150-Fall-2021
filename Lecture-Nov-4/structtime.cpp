#include <iostream>
using std::cout;

#include <iomanip>
using std::setw;
using std::setfill;


class Time {
public:
	char m;
	int hour;
	int minute;
	void display();
	bool earlierThan(const Time &t);
};


int main() {
	Time start = {'p', 5, 30};
	start.display();

	Time end = {'p', 6, 0};
	end.display();

	cout << "Time earlier? " << (start.earlierThan(end) ? "yes" : "no")  << '\n';
}


void Time::display() {
	cout << hour << ':' << setw(2) << setfill('0') << minute << m << "m\n";
}

bool Time::earlierThan(const Time &t) {
	return m < t.m ||
                        m == t.m && (hour % 12 < t.hour % 12 ||
				hour == t.hour && minute < t.minute);
}
