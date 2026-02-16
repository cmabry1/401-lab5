#include "Queue.hpp"

// Constructor
Queue::Queue(int cap) {
    capacity = cap;
    arr = new int[capacity];
    frontIndex = 0;
    rearIndex = -1;
    size = 0;
}

// Destructor
Queue::~Queue() {
    delete[] arr;
}

// Add element to rear
void Queue::enqueue(int value) {
    if (isFull()) {
        cout << "Queue is full. Cannot enqueue " << value << endl;
        return;
    }

    rearIndex = (rearIndex + 1) % capacity;
    arr[rearIndex] = value;
    size++;
}

// Remove element from front
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

// Return front element
int Queue::front() {
    if (isEmpty()) {
        cout << "Queue is empty." << endl;
        return -1;
    }

    return arr[frontIndex];
}

// Check if empty
bool Queue::isEmpty() {
    return size == 0;
}

// Check if full
bool Queue::isFull() {
    return size == capacity;
}
