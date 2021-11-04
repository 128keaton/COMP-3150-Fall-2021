#include <iostream>
using std::cout;

#include "Time.h"

int main() {
	Time start = {'p', 5, 30};
	start.display();

	Time end = {'p', 6, 0};
	end.display();

	cout << "Time earlier? " << (start.earlierThan(end) ? "yes" : "no")  << '\n';
}


