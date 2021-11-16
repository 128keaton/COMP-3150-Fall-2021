//
// Created by Keaton Burleson on 11/15/21.
//
#include <iostream>
#include <iomanip>
#include <cmath>

using std::cout;
using std::setw;
using std::setprecision;
using std::setfill;
using std::endl;

#include "hw10-3-Money.h"


Money::Money() {
    this->dollars = 0;
    this->cents = 0;
}

Money::Money(unsigned int dollars, unsigned int cents) {
    this->dollars = dollars;
    this->cents = cents;
}

Money::Money(float dollars) {
    this->dollars = (int) dollars;
    this->cents = floor(((dollars - (float) this->dollars) * 100) + 0.5);
}

void Money::display() const {
    cout << '$' << this->dollars << '.' << setw(2) << setfill('0') << this->cents << endl;
}