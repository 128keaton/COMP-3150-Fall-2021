//
// Created by Keaton Burleson on 11/30/21.
//

#include "hw12-1-Interval.h"

Interval::Interval(int begin, int end) {
    this->begin = begin;
    this->end = end;
}

void Interval::display() const {
    cout << "[" << begin << ", " << end << "]" << endl;
}

Interval operator+(const Interval &a, const Interval &b) {
    int begin = a.begin;
    int end = b.end;

    if (b.begin < begin) {
        begin = b.begin;
    }

    if (a.end > end) {
       end = a.end;
    }

    return {begin, end};
}

bool operator==(const Interval &a, const Interval &b) {
   return a.begin == b.begin && a.end == b.end;
}

bool operator!=(const Interval &a, const Interval &b) {
    return !(a == b);
}

bool operator<=(const Interval &a, const Interval &b) {
    return (a < b) && (a.begin == b.begin) && (a.end == b.end);
}

bool operator<(const Interval &a, const Interval &b) {
    return (a.begin >= b.begin) && (a.end <= b.end);
}

bool operator>=(const Interval &a, const Interval &b) {
    return (b.begin >= a.begin) && (a.end >= b.end);
}

bool operator>(const Interval &a, const Interval &b) {
    return (b.begin > a.begin) && (b.end < a.end);
}

Interval &Interval::operator+=(const Interval &b) {
    ((*this) = (*this + b));
    return *this;
}


