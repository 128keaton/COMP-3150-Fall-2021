//
// Created by Keaton Burleson on 11/30/21.
//

#include "hw12-2-Queue.h"

Queue::Queue() = default;

Queue::Queue(const Queue & a): head(nullptr)
{
    Node *node = a.head;
    while (node != nullptr)
    {
        enqueue(node->i);
        node = node->next;
    }
}

Queue::~Queue() {
    auto* current = this->head;
    Node* next;

    while (current != nullptr) {
        next = current->next;
        delete current;
        current = next;
    }
}

void Queue::enqueue(int i) {
    Node *newNode = (Node *) (malloc(sizeof(Node)));
    newNode->i = i;
    newNode->next = nullptr;

    if (this->head == nullptr) {
        this->head = newNode;
    } else {
        this->tail->next = newNode;
    }

    this->tail = newNode;
}

int Queue::dequeue() {
    if (isEmpty()) {
        return -1;
    }

    auto *headNode = this->head;

    int i = headNode->i;
    this->head = headNode->next;

    if (this->head == nullptr) this->tail = nullptr;

    delete headNode;

    return i;
}

bool Queue::isEmpty() {
    return this->head == nullptr && this->tail == nullptr;
}

Queue &Queue::operator=(Queue b) {
    std::swap(this->head, b.head);

    return *this;
}

bool operator==(const Queue &a, const Queue &b) {
    return a.tail->i == b.tail->i && a.head->i == b.head->i;
}

bool operator!=(const Queue &a, const Queue &b) {
    return !(a == b);
}
