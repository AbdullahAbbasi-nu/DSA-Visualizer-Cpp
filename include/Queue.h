#ifndef QUEUE_H
#define QUEUE_H

template <typename T>
class QueueArray {
private:
    static const int MAX_SIZE = 100;
    T arr[MAX_SIZE];
    int front, rear, count;
public:
    QueueArray();
    void enqueue(T val);
    void dequeue();
    T peek();
    bool isEmpty();
    bool isFull();
};

template <typename T>
class QueueLinked {
private:
    struct Node {
        T data;
        Node* next;
    };
    Node* front;
    Node* rear;
public:
    QueueLinked();
    ~QueueLinked();
    void enqueue(T val);
    void dequeue();
    T peek();
    bool isEmpty();
};

#endif

