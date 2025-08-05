#ifndef PRIORITY_QUEUE_ARRAY_H
#define PRIORITY_QUEUE_ARRAY_H

class PriorityQueueArray {
private:
    int size;
    int capacity;
    int* arr;

public:
    PriorityQueueArray(int cap = 100);
    ~PriorityQueueArray();

    void insert(int data);
    int getHighestPriority();
    int extractHighestPriority();
    bool isEmpty();
    void display();
};

#endif

