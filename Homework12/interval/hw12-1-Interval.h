//
// Created by Keaton Burleson on 11/30/21.
//

#ifndef HOMEWORK12_HW12_1_INTERVAL_H
#define HOMEWORK12_HW12_1_INTERVAL_H

#include <iostream>

using std::cout, std::endl;

class Interval {
public:
    Interval(int begin, int end);
    void display() const;

    friend Interval operator+(const Interval& a, const Interval& b);
    friend bool operator==(const Interval& a, const Interval& b);
    friend bool operator!=(const Interval& a, const Interval& b);
    friend bool operator<=(const Interval& a, const Interval& b);
    friend bool operator<(const Interval& a, const Interval& b);
    friend bool operator>=(const Interval& a, const Interval& b);
    friend bool operator>(const Interval& a, const Interval& b);
    Interval& operator+=(const Interval& rhs);

private:
    int begin;
    int end;
};


#endif //HOMEWORK12_HW12_1_INTERVAL_H
