#include "DequeLinkedList.h"
#include <iostream>

DequeLinkedList::DequeLinkedList() : front(nullptr), rear(nullptr) {}

DequeLinkedList::~DequeLinkedList() {
    while (!isEmpty()) deleteFront();
}

bool DequeLinkedList::isEmpty() {
    return front == nullptr;
}

void DequeLinkedList::insertFront(int value) {
    Node* newNode = new Node(value);
    if (isEmpty()) {
        front = rear = newNode;
    } else {
        newNode->next = front;
        front->prev = newNode;
        front = newNode;
    }
}

void DequeLinkedList::insertRear(int value) {
    Node* newNode = new Node(value);
    if (isEmpty()) {
        front = rear = newNode;
    } else {
        newNode->prev = rear;
        rear->next = newNode;
        rear = newNode;
    }
}

void DequeLinkedList::deleteFront() {
    if (isEmpty()) {
        std::cout << "Deque is empty!\n";
        return;
    }
    Node* temp = front;
    front = front->next;
    if (front) front->prev = nullptr;
    else rear = nullptr;
    delete temp;
}

void DequeLinkedList::deleteRear() {
    if (isEmpty()) {
        std::cout << "Deque is empty!\n";
        return;
    }
    Node* temp = rear;
    rear = rear->prev;
    if (rear) rear->next = nullptr;
    else front = nullptr;
    delete temp;
}

void DequeLinkedList::display() {
    Node* curr = front;
    while (curr) {
        std::cout << curr->data << " ";
        curr = curr->next;
    }
    std::cout << "\n";
}

