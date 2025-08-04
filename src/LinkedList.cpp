#include <iostream>
#include "../include/LinkedList.h"
using namespace std;

LinkedList::LinkedList() {
    head = nullptr;
}

LinkedList::~LinkedList() {
    Node* current = head;
    while (current != nullptr) {
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
    }
}

void LinkedList::insertAtEnd(int val) {
    Node* newNode = new Node{val, nullptr};
    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr)
            temp = temp->next;
        temp->next = newNode;
    }
}

void LinkedList::deleteByValue(int val) {
    if (head == nullptr) return;
    if (head->data == val) {
        Node* toDelete = head;
        head = head->next;
        delete toDelete;
        return;
    }
    Node* current = head;
    while (current->next != nullptr && current->next->data != val) {
        current = current->next;
    }
    if (current->next != nullptr) {
        Node* toDelete = current->next;
        current->next = current->next->next;
        delete toDelete;
    }
}

void LinkedList::display() {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

