#include "../include/CircularLinkedList.h"
#include <iostream>
using namespace std;

int main() {
    CircularLinkedList list;

    list.insert(10);
    list.insert(20);
    list.insert(30);

    list.display();  // Should print: 10 20 30

    list.remove(20);
    list.display();  // Should print: 10 30

    cout << "Found 10: " << list.search(10) << endl;  // 1 (true)
    cout << "Found 40: " << list.search(40) << endl;  // 0 (false)

    return 0;
}

