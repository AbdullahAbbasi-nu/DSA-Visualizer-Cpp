#ifndef STACKARRAY_H
#define STACKARRAY_H

class StackArray {
private:
    int* arr;
    int top;
    int capacity;

public:
    StackArray(int size = 100);
    ~StackArray();
    void push(int value);
    void pop();
    int peek() const;
    bool isEmpty() const;
};

#endif

