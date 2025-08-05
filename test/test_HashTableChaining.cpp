#include "HashTableChaining.h"

using namespace std;

int main() {
    HashTableChaining<int, string> ht;

    ht.insert(1, "One");
    ht.insert(11, "Eleven"); // same bucket as 1
    ht.insert(2, "Two");

    ht.display();

    string result;
    if (ht.search(11, result)) {
        cout << "Found key 11 with value: " << result << "\n";
    } else {
        cout << "Key 11 not found\n";
    }

    ht.remove(11);
    cout << "After removing key 11:\n";
    ht.display();

    return 0;
}

