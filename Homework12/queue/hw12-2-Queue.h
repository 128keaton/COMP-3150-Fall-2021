//
// Created by Keaton Burleson on 11/30/21.
//

#ifndef HOMEWORK12_HW12_2_QUEUE_H
#define HOMEWORK12_HW12_2_QUEUE_H

#include <memory>
using std::swap;

class Queue {
public:
    Queue();
    Queue(const Queue & a);
    ~Queue();

    void enqueue(int i);
    int dequeue();
    bool isEmpty();

    Queue& operator=(Queue b);
    friend bool operator==(const Queue& a, const Queue& b);
    friend bool operator!=(const Queue& a, const Queue& b);

private:
    struct Node {
        int i;
        struct Node *next;
    } *head{}, *tail{};
};

#endif //HOMEWORK12_HW12_2_QUEUE_H
