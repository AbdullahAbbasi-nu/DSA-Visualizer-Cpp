#include <iostream>
#include "../include/Stack.h"
using namespace std;

// Array-based stack
template <typename T>
StackArray<T>::StackArray() {
    top = -1;
}

template <typename T>
void StackArray<T>::push(T val) {
    if (top >= MAX_SIZE - 1) {
        cout << "Stack overflow.\n";
        return;
    }
    arr[++top] = val;
}

template <typename T>
void StackArray<T>::pop() {
    if (isEmpty()) {
        cout << "Stack underflow.\n";
        return;
    }
    --top;
}

template <typename T>
T StackArray<T>::peek() {
    if (isEmpty()) {
        cout << "Stack is empty.\n";
        return T();
    }
    return arr[top];
}

template <typename T>
bool StackArray<T>::isEmpty() {
    return top == -1;
}

// Linked list-based stack
template <typename T>
StackLinked<T>::StackLinked() {
    top = nullptr;
}

template <typename T>
StackLinked<T>::~StackLinked() {
    while (!isEmpty()) {
        pop();
    }
}

template <typename T>
void StackLinked<T>::push(T val) {
    Node* newNode = new Node{val, top};
    top = newNode;
}

template <typename T>
void StackLinked<T>::pop() {
    if (isEmpty()) {
        cout << "Stack underflow.\n";
        return;
    }
    Node* toDelete = top;
    top = top->next;
    delete toDelete;
}

template <typename T>
T StackLinked<T>::peek() {
    if (isEmpty()) {
        cout << "Stack is empty.\n";
        return T();
    }
    return top->data;
}

template <typename T>
bool StackLinked<T>::isEmpty() {
    return top == nullptr;
}

// Explicit instantiation
template class StackArray<int>;
template class StackLinked<int>;

