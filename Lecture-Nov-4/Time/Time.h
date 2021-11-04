
#ifndef TIME_H
#define TIME_H

class Time {
public:
	char m;
	int hour;
	int minute;
	void display();
	bool earlierThan(const Time &t);
};


#endif
