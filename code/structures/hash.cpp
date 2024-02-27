#include "hash.h"
using namespace std;

// Function to calculate the hash value for a given key
int HashTable::hash_calc(const string& key) const {
  int hash_val = 0;
  for (int i = 0; i < (int)key.length(); i++) {
    hash_val += (int)key[i];
  }
  return hash_val % capacity;
}

// Function to insert or update a key-value pair in the hash table, eliminating
// duplicates
void HashTable::set(const string& key, const string& value) {
  int index = hash_calc(key);

  // Checking whether an element with such a key exists in the table
  HashTableNode* current = table[index];
  while (current != nullptr) {
    if (current->key == key) {
      // An element with such a key already exists, update the value and
      // terminate the function
      current->element = value;
      return;
    }
    current = current->next;
  }

  // There is no element with this key, adding a new element to the end of the
  // chain
  HashTableNode* newNode = new HashTableNode(key, value);
  if (table[index] == nullptr) {
    table[index] = newNode;
  } else {
    current = table[index];
    while (current->next != nullptr) {
      current = current->next;
    }
    current->next = newNode;
  }

  size++;

  // Checking whether it is necessary to perform hashing
  if ((float)size / capacity > loadThreshold) {
    rehash();
  }
}

// Function to delete a key-value pair from the hash table
const string HashTable::del(const string& key) {
  int index = hash_calc(key);
  if (table[index] == nullptr) {
    if (getPrintErrors()) cerr << "Error: key is empty.";
    return "";
  } else {
    HashTableNode* current = table[index];
    HashTableNode* prev = nullptr;
    while (current != nullptr) {
      if (current->key == key) {
        string element = current->element;
        if (prev == nullptr) {
          table[index] = current->next;
        } else {
          prev->next = current->next;
        }
        delete current;
        size--;
        return element;
      }
      prev = current;
      current = current->next;
    }
  }
  return "";
}

// Retrieves an element from the hash table based on the provided key
const string HashTable::get(const string& key) const {
  int index = hash_calc(key);
  HashTableNode* current = table[index];
  while (current != nullptr) {
    if (current->key == key) {
      return current->element;
    }
    current = current->next;
  }
  if (getPrintErrors()) cerr << "Error: key is empty";
  return "";
}

// Function to rehash the table when load factor is exceeded
void HashTable::rehash() {
  int newCapacity = capacity * 2;
  vector<HashTableNode*> newTable(newCapacity, nullptr);

  for (int i = 0; i < capacity; ++i) {
    HashTableNode* current = table[i];
    while (current) {
      HashTableNode* next = current->next;
      int index = hash_calc(current->key);
      current->next = newTable[index];
      newTable[index] = current;
      current = next;
    }
  }

  table = move(newTable);
  capacity = newCapacity;
}
