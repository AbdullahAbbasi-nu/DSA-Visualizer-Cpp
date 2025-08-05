#include "../include/CircularLinkedList.h"
#include <iostream>
using namespace std;

CircularLinkedList::CircularLinkedList() : tail(nullptr) {}

CircularLinkedList::~CircularLinkedList() {
    if (!tail) return;
    Node* current = tail->next;
    Node* nextNode;
    do {
        nextNode = current->next;
        delete current;
        current = nextNode;
    } while (current != tail->next);
    tail = nullptr;
}

void CircularLinkedList::insert(int value) {
    Node* newNode = new Node(value);
    if (!tail) {
        tail = newNode;
        tail->next = tail;
    } else {
        newNode->next = tail->next;
        tail->next = newNode;
        tail = newNode;
    }
}

void CircularLinkedList::remove(int value) {
    if (!tail) return;

    Node* current = tail->next;
    Node* prev = tail;
    do {
        if (current->data == value) {
            if (current == tail && current->next == tail) {
                delete current;
                tail = nullptr;
                return;
            }
            if (current == tail) tail = prev;
            prev->next = current->next;
            delete current;
            return;
        }
        prev = current;
        current = current->next;
    } while (current != tail->next);
}

void CircularLinkedList::display() {
    if (!tail) {
        cout << "List is empty" << endl;
        return;
    }
    Node* current = tail->next;
    do {
        cout << current->data << " ";
        current = current->next;
    } while (current != tail->next);
    cout << endl;
}

bool CircularLinkedList::search(int value) {
    if (!tail) return false;
    Node* current = tail->next;
    do {
        if (current->data == value) return true;
        current = current->next;
    } while (current != tail->next);
    return false;
}

