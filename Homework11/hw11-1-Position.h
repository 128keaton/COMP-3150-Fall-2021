//
// Created by Keaton Burleson on 11/23/21.
//

#ifndef HOMEWORK11_POSITION_H
#define HOMEWORK11_POSITION_H


class Position {

public:
    Position(double latitude, double longitude);
    void display() const;
    double getLatitude() const;
    double getLongitude() const;

private:
    double latitude;
    double longitude;
};


#endif //HOMEWORK11_POSITION_H
