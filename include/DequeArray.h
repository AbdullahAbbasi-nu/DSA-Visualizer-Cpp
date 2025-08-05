#ifndef DEQUEARRAY_H
#define DEQUEARRAY_H

class DequeArray {
private:
    int* arr;
    int front, rear, size, capacity;

public:
    DequeArray(int capacity);
    ~DequeArray();

    bool isFull() const;
    bool isEmpty() const;

    void insertFront(int value);
    void insertRear(int value);
    void deleteFront();
    void deleteRear();
    int getFront() const;
    int getRear() const;
    void display() const;
};

#endif // DEQUEARRAY_H

