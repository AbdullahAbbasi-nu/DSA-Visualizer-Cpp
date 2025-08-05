#ifndef CIRCULAR_LINKED_LIST_H
#define CIRCULAR_LINKED_LIST_H

class CircularLinkedList {
private:
    struct Node {
        int data;
        Node* next;
        Node(int val) : data(val), next(nullptr) {}
    };

    Node* tail;  // Points to the last node, which links back to head

public:
    CircularLinkedList();
    ~CircularLinkedList();

    void insert(int value);      // Insert at the end
    void remove(int value);      // Remove by value
    void display();              // Print all elements
    bool search(int value);      // Check if a value exists
};

#endif

