#ifndef HASH_TASKS_H
#define HASH_TASKS_H
#include "./structures/hash.h"
using namespace std;

// a class for storing and managing cached values
class Cache {
private:
    HashTable hashTable;

public:
    Cache(int capacity = 100) : hashTable(capacity) {}

    // A method for adding a value to the cache by key
    void addToCache(const string& key, const string& value) {
        hashTable.set(key, value);
    }

    // Method for getting the value from the cache by key
    string getFromCache(const string& key) const {
        return hashTable.get(key);
    }

    // A method for deleting a value from the cache by key
    void removeFromCache(const string& key) {
        hashTable.del(key);
    }
};

#endif