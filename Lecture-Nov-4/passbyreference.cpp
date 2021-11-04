#include <iostream>
using std::cout;

#include <iomanip>
using std::setw;

template<typename T>
void square(T &r) {
	r *= r;
}

void display(const Time &t) {
	cout << t.hour << ':' << t.minute << t.m << "m\n";
}
