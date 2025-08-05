#include "PriorityQueueArray.h"
#include <iostream>

PriorityQueueArray::PriorityQueueArray(int cap) {
    capacity = cap;
    size = 0;
    arr = new int[capacity];
}

PriorityQueueArray::~PriorityQueueArray() {
    delete[] arr;
}

void PriorityQueueArray::insert(int data) {
    if (size >= capacity) {
        std::cout << "Queue is full.\n";
        return;
    }

    arr[size++] = data;
}

int PriorityQueueArray::getHighestPriority() {
    if (isEmpty()) return -1;

    int maxIndex = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }
    return arr[maxIndex];
}

int PriorityQueueArray::extractHighestPriority() {
    if (isEmpty()) return -1;

    int maxIndex = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    int maxVal = arr[maxIndex];
    for (int i = maxIndex; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
    return maxVal;
}

bool PriorityQueueArray::isEmpty() {
    return size == 0;
}

void PriorityQueueArray::display() {
    std::cout << "Priority Queue (Array): ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}

