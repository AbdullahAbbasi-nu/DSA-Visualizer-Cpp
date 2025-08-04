#include "StackArray.h"
#include <iostream>

StackArray::StackArray(int size) {
    capacity = size;
    arr = new int[capacity];
    top = -1;
}

StackArray::~StackArray() {
    delete[] arr;
}

void StackArray::push(int value) {
    if (top >= capacity - 1) {
        std::cout << "Stack overflow\n";
        return;
    }
    arr[++top] = value;
}

void StackArray::pop() {
    if (isEmpty()) {
        std::cout << "Stack underflow\n";
        return;
    }
    top--;
}

int StackArray::peek() const {
    if (isEmpty()) return -1;
    return arr[top];
}

bool StackArray::isEmpty() const {
    return top == -1;
}

