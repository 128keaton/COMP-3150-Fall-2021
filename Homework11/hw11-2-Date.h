#ifndef DATE_H
#define DATE_H

class Date {
public:
	Date(const int, const int);
	void display() const;
	int daysUntil(const Date & d) const;
	int getMonth() const;
	int getDay() const;
	void set(const int, const int);

private:
	int day = 1;
	static const int daysPerMonth[13];
};

#endif