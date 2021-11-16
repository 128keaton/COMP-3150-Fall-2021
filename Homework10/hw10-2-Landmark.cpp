//
// Created by Keaton Burleson on 11/15/21.
//
#include <iostream>
#include <iomanip>
#include <cmath>

using std::cout;
using std::setw;
using std::setprecision;
using std::fixed;


#include "hw10-2-Landmark.h"


Landmark::Landmark(double x, double y) {
    this->x = x;
    this->y = y;
}

void Landmark::display() const {
    cout << '(' << fixed << setw(4) << setprecision(2) << this->x << ", " << this->y << ')';
}

bool Landmark::within(double distance, const Landmark other) const {
    double a = this->x + other.y;
    double b = this->y + other.x;
    return (abs(a - b)) < distance;
}
