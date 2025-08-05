#include "PriorityQueueLinkedList.h"
#include <iostream>

PriorityQueueLinkedList::PriorityQueueLinkedList() {
    front = nullptr;
}

PriorityQueueLinkedList::~PriorityQueueLinkedList() {
    while (front != nullptr) {
        Node* temp = front;
        front = front->next;
        delete temp;
    }
}

void PriorityQueueLinkedList::insert(int data) {
    Node* newNode = new Node{data, nullptr};

    if (!front || data > front->data) {
        newNode->next = front;
        front = newNode;
    } else {
        Node* curr = front;
        while (curr->next && curr->next->data >= data) {
            curr = curr->next;
        }
        newNode->next = curr->next;
        curr->next = newNode;
    }
}

int PriorityQueueLinkedList::getHighestPriority() {
    if (!front) return -1;
    return front->data;
}

int PriorityQueueLinkedList::extractHighestPriority() {
    if (!front) return -1;
    int val = front->data;
    Node* temp = front;
    front = front->next;
    delete temp;
    return val;
}

bool PriorityQueueLinkedList::isEmpty() {
    return front == nullptr;
}

void PriorityQueueLinkedList::display() {
    std::cout << "Priority Queue (Linked List): ";
    Node* temp = front;
    while (temp) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << "\n";
}

