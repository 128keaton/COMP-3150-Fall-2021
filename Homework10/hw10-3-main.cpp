#include "hw10-3-Money.h"

#include <iostream>
using std::cout;

int main()
{
	Money a(3, 45);
	Money b;
	Money c(2.01);

	a.display();
	b.display();
	c.display();
}