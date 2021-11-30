//
// Created by Keaton Burleson on 11/23/21.
//

#include <iostream>
#include <iomanip>
#include <cmath>
#include "hw11-1-Position.h"

using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;
using std::abs;

Position::Position(double latitude, double longitude) {
    if (latitude <= 90.0 && latitude >= -90) {
        this->latitude = latitude;
    } else {
        cout << "Invalid latitude" << endl;
        this->latitude = 0.0;
    }

    if (longitude <= 180.0 && longitude >= -180.0) {
        this->longitude = longitude;
    } else {
        cout << "Invalid longitude" << endl;
        this->longitude = 0.0;
    }
}

double Position::getLatitude() const {
    return this->latitude;
}

double Position::getLongitude() const {
    return this->longitude;
}

void Position::display() const {
    const char latitudeCharacter = (latitude >= 0 ? 'N' : 'S');
    const char longitudeCharacter = (longitude >= 0 ? 'E' : 'W');

    cout << fixed << setprecision(2);
    cout << abs(this->latitude) << ' ' << latitudeCharacter <<  ", ";
    cout << abs(this->longitude) <<  ' ' << longitudeCharacter << endl;
}
