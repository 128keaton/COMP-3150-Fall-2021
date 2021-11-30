//
// Created by Keaton Burleson on 11/23/21.
//

#ifndef HOMEWORK11_ITEM_H
#define HOMEWORK11_ITEM_H


class Item {
public:
    Item(int);
    static void setPercentOff(int percentOff);
    void setPrice(int price);
    static int getPercentOff();
    double getSalePrice() const;

private:
    static int percentOff;
    int price;
};


#endif //HOMEWORK11_ITEM_H
