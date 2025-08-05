#include "VisualSinglyLinkedList.h"

VisualSinglyLinkedList::VisualSinglyLinkedList() {
    head = nullptr;
}

VisualSinglyLinkedList::~VisualSinglyLinkedList() {
    while (head != nullptr) {
        VisualNode* temp = head;
        head = head->next;
        delete temp;
    }
}

void VisualSinglyLinkedList::insertAtEnd(int value) {
    VisualNode* newNode = new VisualNode(value);
    if (head == nullptr) {
        head = newNode;
    } else {
        VisualNode* temp = head;
        while (temp->next != nullptr)
            temp = temp->next;
        temp->next = newNode;
    }
}

void VisualSinglyLinkedList::deleteValue(int value) {
    if (head == nullptr) return;

    if (head->data == value) {
        VisualNode* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    VisualNode* current = head;
    while (current->next && current->next->data != value)
        current = current->next;

    if (current->next) {
        VisualNode* temp = current->next;
        current->next = current->next->next;
        delete temp;
    }
}

void VisualSinglyLinkedList::display() {
    VisualNode* temp = head;
    while (temp != nullptr) {
        std::cout << "[" << temp->data << "] -> ";
        temp = temp->next;
    }
    std::cout << "NULL\n";
}

