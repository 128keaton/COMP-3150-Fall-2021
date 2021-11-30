#include "hw11-3-Item.h"

#include <iostream>
using std::cout;

int main()
{
	Item milk(80), tofu(60);
	Item::setPercentOff(25);
	cout << milk.getSalePrice()
	     << ' '
	     << tofu.getSalePrice()
	     << '\n';
}