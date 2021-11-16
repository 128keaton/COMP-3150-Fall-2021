//
// Created by Keaton Burleson on 11/15/21.
//

#include <iostream>
using std::cout;
using std::endl;

void mix(double &x, double &y);

int main() {
    double x = 2.0;
    double y = 3.0;

    mix(x, y);

    cout << x << endl;
    cout << y << endl;
}

void mix(double &x, double &y) {
    double avg = x + y / 2;

    x = avg;
    y = avg;
}