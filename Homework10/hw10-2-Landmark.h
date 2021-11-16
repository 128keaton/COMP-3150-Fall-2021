//
// Created by Keaton Burleson on 11/15/21.
//

#ifndef HOMEWORK10_HW10_2_LANDMARK_H
#define HOMEWORK10_HW10_2_LANDMARK_H


class Landmark {
    double x;
    double y;

public:
    Landmark(double x, double y);

    void display() const;
    bool within(double distance, const Landmark other) const;
};


#endif //HOMEWORK10_HW10_2_LANDMARK_H
