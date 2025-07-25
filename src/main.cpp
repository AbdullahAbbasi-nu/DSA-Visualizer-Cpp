#include <iostream>
#include "../include/LinkedList.h"
using namespace std;

int main() {
    LinkedList list;
    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);
    list.display();

    list.deleteByValue(20);
    list.display();

    return 0;
}

