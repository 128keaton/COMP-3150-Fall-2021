#include "hw11-2-Date.h"

#include <iostream>
using std::cout;

int main()
{
	Date a(8, 17);
	Date b(11, 3);

	a.display();
	b.display();
	cout << a.daysUntil(b)
	     << ' '
	     << b.daysUntil(a)
	     << '\n';
}