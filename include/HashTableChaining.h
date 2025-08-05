#ifndef HASHTABLECHAINING_H
#define HASHTABLECHAINING_H

#include <iostream>
#include <list>
#include <vector>

using namespace std;

template<typename K, typename V>
class HashTableChaining {
private:
    static const int TABLE_SIZE = 10;
    vector<list<pair<K, V>>> table;

    int hashFunction(K key) const {
        return key % TABLE_SIZE;
    }

public:
    HashTableChaining() {
        table.resize(TABLE_SIZE);
    }

    void insert(K key, V value) {
        int index = hashFunction(key);
        for (auto& pair : table[index]) {
            if (pair.first == key) {
                pair.second = value;
                return;
            }
        }
        table[index].emplace_back(key, value);
    }

    bool search(K key, V& value) const {
        int index = hashFunction(key);
        for (const auto& pair : table[index]) {
            if (pair.first == key) {
                value = pair.second;
                return true;
            }
        }
        return false;
    }

    void remove(K key) {
        int index = hashFunction(key);
        table[index].remove_if([key](const pair<K, V>& pair) {
            return pair.first == key;
        });
    }

    void display() const {
        for (int i = 0; i < TABLE_SIZE; ++i) {
            cout << "[" << i << "]: ";
            for (const auto& pair : table[i]) {
                cout << "(" << pair.first << ", " << pair.second << ") ";
            }
            cout << "\n";
        }
    }
};

#endif

