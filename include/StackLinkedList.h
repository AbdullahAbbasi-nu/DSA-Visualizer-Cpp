#ifndef STACKLINKEDLIST_H
#define STACKLINKEDLIST_H

struct Node {
    int data;
    Node* next;
};

class StackLinkedList {
private:
    Node* top;

public:
    StackLinkedList();
    ~StackLinkedList();
    void push(int value);
    void pop();
    int peek() const;
    bool isEmpty() const;
};

#endif

