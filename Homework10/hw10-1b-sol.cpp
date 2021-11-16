//
// Created by Keaton Burleson on 11/15/21.
//

#include <iostream>
using std::cout;
using std::endl;

struct Line{
    double m;
    double b;

    Line(double m, double b) {
        this->m = m;
        this->b = b;
    }
};

double solveForX(double y, const Line *line);

int main() {
    double y = 21;
    const Line *line = new Line(2, 7);

    double x = solveForX(y, line);
    cout << "Given that y = " << y << ", m = " << line->m << ", and b = " << line->b << ", then ";
    cout << "x = " << x << endl;
}


double solveForX(double y, const Line *line) {
    // y = mx + b
    // divide y by m and subtract b

    const double m = line->m;
    const double b = line->b;

    return (y/m) - b;
}