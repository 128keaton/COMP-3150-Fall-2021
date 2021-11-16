#include "hw10-2-Landmark.h"

#include <iostream>
using std::cout;

int main()
{
	Landmark a = {1.0, 2.0}, b = {2.0, 2.5};
	b.display();
	cout << '\n' << a.within(1.4, b) << '\n' << a.within(1.4, {2.5, 2.0});
}