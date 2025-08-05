#ifndef MAXHEAP_H
#define MAXHEAP_H

#include <vector>
#include <iostream>
using namespace std;

class MaxHeap {
private:
    vector<int> data;

    void heapifyUp(int index);
    void heapifyDown(int index);

public:
    void insert(int value);
    int extractMax();          // Removes and returns the max element
    int getMax() const;        // Returns the max element
    bool isEmpty() const;
    void display() const;      // Display all elements
};

#endif

