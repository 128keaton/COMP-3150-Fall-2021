//
// Created by Keaton Burleson on 11/15/21.
//

#ifndef HOMEWORK10_HW10_3_MONEY_H
#define HOMEWORK10_HW10_3_MONEY_H


class Money {
    unsigned int dollars;
    unsigned int cents;

public:
    Money();
    Money(unsigned int dollars, unsigned int cents);
    Money(float dollars);
    void display() const;
};


#endif //HOMEWORK10_HW10_3_MONEY_H
