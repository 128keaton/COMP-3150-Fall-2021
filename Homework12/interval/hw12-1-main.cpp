#include "hw12-1-Interval.h"

#include <iostream>
using std::cout;

int main()
{
	const Interval a(1, 5), b(3, 10), c(7, 9);
	Interval d(1, 8);

	a.display();  // should print [1, 5]

	(a + b).display();  // should print [1, 10]
	(c + a).display();  // should print [1, 9]
	(b + c).display();  // should print [3, 10]

	cout << (d + c == a + c) << '\n';  // should print 1
	cout << (d + b != b + a) << '\n';  // should print 0
	cout << (a <= b) << '\n';          // should print 0
	cout << (a < d) << '\n';           // should print 1
	cout << (b >= c) << '\n';          // should print 1
	cout << (a > a) << '\n';           // should print 0

	d += b;
	b.display();  // should print [3, 10]
	d.display();  // should print [1, 10]
}