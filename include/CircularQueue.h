#ifndef CIRCULAR_QUEUE_H
#define CIRCULAR_QUEUE_H

class CircularQueue {
private:
    int* arr;
    int size;
    int front;
    int rear;

public:
    CircularQueue(int size);
    ~CircularQueue();

    bool isFull() const;
    bool isEmpty() const;
    void enqueue(int value);
    int dequeue();
    void display() const;
};

#endif // CIRCULAR_QUEUE_H

