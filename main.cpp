#include "Queue.hpp"

int main() {
    Queue q(5);

    cout << "Is queue empty? " << q.isEmpty() << endl;

    // Enqueue elements
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Front element: " << q.front() << endl;

    // Dequeue elements
    cout << "Dequeued: " << q.dequeue() << endl;
    cout << "Dequeued: " << q.dequeue() << endl;

    cout << "Front element after dequeue: " << q.front() << endl;

    cout << "Is queue empty? " << q.isEmpty() << endl;

    q.dequeue();
    cout << "Is queue empty after removing all? " << q.isEmpty() << endl;

    return 0;
}
