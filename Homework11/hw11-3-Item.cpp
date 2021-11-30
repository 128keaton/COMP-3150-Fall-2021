//
// Created by Keaton Burleson on 11/23/21.
//

#include "hw11-3-Item.h"

int Item::percentOff = 0;

Item::Item(const int price) : price(price) {
}

void Item::setPercentOff(const int newPercentOff) {
    if (newPercentOff > 0 && newPercentOff < 99) {
        Item::percentOff = newPercentOff;
    }
}

int Item::getPercentOff() {
    return Item::percentOff;
}

void Item::setPrice(const int newPrice) {
    if (newPrice >= 0) {
        this->price = newPrice;
        return;
    }

    this->price = 0;
}

double Item::getSalePrice() const {
    return (double) this->price - ((double) this->price * (double) Item::percentOff / 100.0);
}

