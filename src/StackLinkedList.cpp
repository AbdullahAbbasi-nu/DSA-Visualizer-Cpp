#include "StackLinkedList.h"
#include <iostream>

StackLinkedList::StackLinkedList() {
    top = nullptr;
}

StackLinkedList::~StackLinkedList() {
    while (!isEmpty()) pop();
}

void StackLinkedList::push(int value) {
    Node* newNode = new Node{value, top};
    top = newNode;
}

void StackLinkedList::pop() {
    if (isEmpty()) {
        std::cout << "Stack underflow\n";
        return;
    }
    Node* temp = top;
    top = top->next;
    delete temp;
}

int StackLinkedList::peek() const {
    return isEmpty() ? -1 : top->data;
}

bool StackLinkedList::isEmpty() const {
    return top == nullptr;
}

