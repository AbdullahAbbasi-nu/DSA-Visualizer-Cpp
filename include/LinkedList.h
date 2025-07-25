#ifndef LINKEDLIST_H
#define LINKEDLIST_H

class LinkedList {
private:
    struct Node {
        int data;
        Node* next;
    };
    Node* head;
public:
    LinkedList();
    ~LinkedList();
    void insertAtEnd(int val);
    void deleteByValue(int val);
    void display();
};

#endif

