#include "DequeArray.h"
#include <iostream>

DequeArray::DequeArray(int cap) : capacity(cap), size(0), front(0), rear(capacity - 1) {
    arr = new int[capacity];
}

DequeArray::~DequeArray() {
    delete[] arr;
}

bool DequeArray::isFull() const {
    return size == capacity;
}

bool DequeArray::isEmpty() const {
    return size == 0;
}

void DequeArray::insertFront(int value) {
    if (isFull()) {
        std::cout << "Deque is full\n";
        return;
    }
    front = (front - 1 + capacity) % capacity;
    arr[front] = value;
    size++;
}

void DequeArray::insertRear(int value) {
    if (isFull()) {
        std::cout << "Deque is full\n";
        return;
    }
    rear = (rear + 1) % capacity;
    arr[rear] = value;
    size++;
}

void DequeArray::deleteFront() {
    if (isEmpty()) {
        std::cout << "Deque is empty\n";
        return;
    }
    front = (front + 1) % capacity;
    size--;
}

void DequeArray::deleteRear() {
    if (isEmpty()) {
        std::cout << "Deque is empty\n";
        return;
    }
    rear = (rear - 1 + capacity) % capacity;
    size--;
}

int DequeArray::getFront() const {
    if (isEmpty()) {
        std::cout << "Deque is empty\n";
        return -1;
    }
    return arr[front];
}

int DequeArray::getRear() const {
    if (isEmpty()) {
        std::cout << "Deque is empty\n";
        return -1;
    }
    return arr[rear];
}

void DequeArray::display() const {
    if (isEmpty()) {
        std::cout << "Deque is empty\n";
        return;
    }
    std::cout << "Deque elements: ";
    for (int i = 0; i < size; i++) {
        int index = (front + i) % capacity;
        std::cout << arr[index] << " ";
    }
    std::cout << "\n";
}

