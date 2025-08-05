#ifndef VISUAL_SINGLY_LINKED_LIST_H
#define VISUAL_SINGLY_LINKED_LIST_H

#include <iostream>

struct VisualNode {
    int data;
    VisualNode* next;
    VisualNode(int value) : data(value), next(nullptr) {}
};

class VisualSinglyLinkedList {
private:
    VisualNode* head;

public:
    VisualSinglyLinkedList();
    ~VisualSinglyLinkedList();

    void insertAtEnd(int value);
    void deleteValue(int value);
    void display(); // Visualize
};

#endif

