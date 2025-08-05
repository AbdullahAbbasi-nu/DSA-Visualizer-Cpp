#include "CircularQueue.h"
#include <iostream>
using namespace std;

CircularQueue::CircularQueue(int size) {
    this->size = size;
    arr = new int[size];
    front = -1;
    rear = -1;
}

CircularQueue::~CircularQueue() {
    delete[] arr;
}

bool CircularQueue::isFull() const {
    return (front == (rear + 1) % size);
}

bool CircularQueue::isEmpty() const {
    return (front == -1);
}

void CircularQueue::enqueue(int value) {
    if (isFull()) {
        cout << "Queue is full\n";
        return;
    }
    if (isEmpty()) front = 0;
    rear = (rear + 1) % size;
    arr[rear] = value;
}

int CircularQueue::dequeue() {
    if (isEmpty()) {
        cout << "Queue is empty\n";
        return -1;
    }
    int value = arr[front];
    if (front == rear) front = rear = -1;
    else front = (front + 1) % size;
    return value;
}

void CircularQueue::display() const {
    if (isEmpty()) {
        cout << "Queue is empty\n";
        return;
    }
    int i = front;
    cout << "Queue: ";
    while (true) {
        cout << arr[i] << " ";
        if (i == rear) break;
        i = (i + 1) % size;
    }
    cout << endl;
}

