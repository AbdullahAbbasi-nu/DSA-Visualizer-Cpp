#include "../include/DoublyLinkedList.h"
#include <iostream>
using namespace std;

DoublyLinkedList::DoublyLinkedList() : head(nullptr), tail(nullptr) {}

DoublyLinkedList::~DoublyLinkedList() {
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

void DoublyLinkedList::insertAtHead(int value) {
    Node* newNode = new Node(value);
    newNode->next = head;
    if (head) head->prev = newNode;
    head = newNode;
    if (!tail) tail = newNode;
}

void DoublyLinkedList::insertAtTail(int value) {
    Node* newNode = new Node(value);
    newNode->prev = tail;
    if (tail) tail->next = newNode;
    tail = newNode;
    if (!head) head = newNode;
}

void DoublyLinkedList::deleteFromHead() {
    if (!head) return;
    Node* temp = head;
    head = head->next;
    if (head) head->prev = nullptr;
    else tail = nullptr;
    delete temp;
}

void DoublyLinkedList::deleteFromTail() {
    if (!tail) return;
    Node* temp = tail;
    tail = tail->prev;
    if (tail) tail->next = nullptr;
    else head = nullptr;
    delete temp;
}

void DoublyLinkedList::displayForward() {
    Node* curr = head;
    while (curr) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

void DoublyLinkedList::displayBackward() {
    Node* curr = tail;
    while (curr) {
        cout << curr->data << " ";
        curr = curr->prev;
    }
    cout << endl;
}

