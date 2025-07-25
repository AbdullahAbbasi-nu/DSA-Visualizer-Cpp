#ifndef STACK_H
#define STACK_H

template <typename T>
class StackArray {
private:
    static const int MAX_SIZE = 100;
    T arr[MAX_SIZE];
    int top;
public:
    StackArray();
    void push(T val);
    void pop();
    T peek();
    bool isEmpty();
};

template <typename T>
class StackLinked {
private:
    struct Node {
        T data;
        Node* next;
    };
    Node* top;
public:
    StackLinked();
    ~StackLinked();
    void push(T val);
    void pop();
    T peek();
    bool isEmpty();
};

#endif

