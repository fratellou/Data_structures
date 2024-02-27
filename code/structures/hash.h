#ifndef HASH_H
#define HASH_H

#include <iostream>
#include <vector>
using namespace std;

class HashTableNode {
 public:
  string key;
  string element;
  HashTableNode* next;

  HashTableNode(const string& k, const string& val)
      : key(k), element(val), next(nullptr) {}
};

class HashTable {
 private:
  int capacity;
  int size;
  float loadThreshold;  // a parameter that determines when to re-hash
  vector<HashTableNode*> table;
  int printErrors = 1;  // A flag to control error message printing

  void rehash();

 public:
  HashTable(int initialCapacity = 100, float loadFactor = 0.75)
      : capacity(initialCapacity), size(0), loadThreshold(loadFactor) {
    table.resize(capacity, nullptr);
  }

  ~HashTable() {
    for (int i = 0; i < capacity; ++i) {
      HashTableNode* current = table[i];
      while (current) {
        HashTableNode* temp = current;
        current = current->next;
        delete temp;
      }
    }
  }

  void setPrintErrorsFalse() { printErrors = 0; }
  void setPrintErrorsTrue() { printErrors = 1; }
  int getPrintErrors() const { return printErrors; }

  int hash_calc(const string& key) const;
  void set(const string& key, const string& value);
  const string del(const string& key);
  const string get(const string& key) const;
};
#endif
