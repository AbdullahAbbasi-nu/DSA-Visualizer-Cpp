#ifndef DEQUE_LINKED_LIST_H
#define DEQUE_LINKED_LIST_H

class DequeLinkedList {
private:
    struct Node {
        int data;
        Node* prev;
        Node* next;
        Node(int val) : data(val), prev(nullptr), next(nullptr) {}
    };
    Node* front;
    Node* rear;

public:
    DequeLinkedList();
    ~DequeLinkedList();

    void insertFront(int value);
    void insertRear(int value);
    void deleteFront();
    void deleteRear();
    void display();
    bool isEmpty();
};

#endif

