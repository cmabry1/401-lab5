#include "Queue.hpp"

Queue::Queue(int cap) {
    capacity = cap;
    arr = new int[capacity];
    frontIndex = 0;
    rearIndex = -1;
    size = 0;
}

Queue::~Queue() {
    delete[] arr;
}

void Queue::enqueue(int value) {
    if (isFull()) {
        cout << "Queue is full. Cannot enqueue " << value << endl;
        return;
    }

    rearIndex = (rearIndex + 1) % capacity;
    arr[rearIndex] = value;
    size++;
}

int Queue::dequeue() {
    if (isEmpty()) {
        cout << "Queue is empty. Cannot dequeue." << endl;
        return -1;
    }

    int value = arr[frontIndex];
    frontIndex = (frontIndex + 1) % capacity;
    size--;
    return value;
}

int Queue::front() {
    if (isEmpty()) {
        cout << "Queue is empty." << endl;
        return -1;
    }

    return arr[frontIndex];
}

bool Queue::isEmpty() {
    return size == 0;
}

bool Queue::isFull() {
    return size == capacity;
}
