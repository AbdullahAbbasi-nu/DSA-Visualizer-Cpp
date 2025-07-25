#include <iostream>
#include "../include/Queue.h"
using namespace std;

// Circular array-based queue
template <typename T>
QueueArray<T>::QueueArray() {
    front = 0;
    rear = -1;
    count = 0;
}

template <typename T>
void QueueArray<T>::enqueue(T val) {
    if (isFull()) {
        cout << "Queue overflow.\n";
        return;
    }
    rear = (rear + 1) % MAX_SIZE;
    arr[rear] = val;
    count++;
}

template <typename T>
void QueueArray<T>::dequeue() {
    if (isEmpty()) {
        cout << "Queue underflow.\n";
        return;
    }
    front = (front + 1) % MAX_SIZE;
    count--;
}

template <typename T>
T QueueArray<T>::peek() {
    if (isEmpty()) {
        cout << "Queue is empty.\n";
        return T();
    }
    return arr[front];
}

template <typename T>
bool QueueArray<T>::isEmpty() {
    return count == 0;
}

template <typename T>
bool QueueArray<T>::isFull() {
    return count == MAX_SIZE;
}

// Linked list-based queue
template <typename T>
QueueLinked<T>::QueueLinked() {
    front = rear = nullptr;
}

template <typename T>
QueueLinked<T>::~QueueLinked() {
    while (!isEmpty()) {
        dequeue();
    }
}

template <typename T>
void QueueLinked<T>::enqueue(T val) {
    Node* newNode = new Node{val, nullptr};
    if (rear == nullptr) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
}

template <typename T>
void QueueLinked<T>::dequeue() {
    if (isEmpty()) {
        cout << "Queue underflow.\n";
        return;
    }
    Node* toDelete = front;
    front = front->next;
    if (front == nullptr) rear = nullptr;
    delete toDelete;
}

template <typename T>
T QueueLinked<T>::peek() {
    if (isEmpty()) {
        cout << "Queue is empty.\n";
        return T();
    }
    return front->data;
}

template <typename T>
bool QueueLinked<T>::isEmpty() {
    return front == nullptr;
}

// Explicit instantiation
template class QueueArray<int>;
template class QueueLinked<int>;

