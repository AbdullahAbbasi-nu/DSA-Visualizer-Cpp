#ifndef PRIORITY_QUEUE_LINKED_LIST_H
#define PRIORITY_QUEUE_LINKED_LIST_H

struct Node {
    int data;
    Node* next;
};

class PriorityQueueLinkedList {
private:
    Node* front;

public:
    PriorityQueueLinkedList();
    ~PriorityQueueLinkedList();

    void insert(int data);
    int getHighestPriority();
    int extractHighestPriority();
    bool isEmpty();
    void display();
};

#endif

