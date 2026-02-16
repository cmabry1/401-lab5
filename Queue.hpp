#ifndef QUEUE_HPP
#define QUEUE_HPP

#include <iostream>
using namespace std;

class Queue {
private:
    int* arr;
    int capacity;
    int frontIndex;
    int rearIndex;
    int size;

public:

    Queue(int cap);

    ~Queue();

    void enqueue(int value);
    int dequeue();
    int front();
    bool isEmpty();
    bool isFull();
};

#endif
