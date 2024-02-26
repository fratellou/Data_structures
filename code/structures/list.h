#ifndef LIST_H
#define LIST_H

#include <iostream>
using namespace std;

// Node class to represent individual elements in the linked list
class Node {
 public:
  string element;
  Node* next;
  Node(const string& data) : element(data), next(nullptr) {}
};

// LinkedList class to encapsulate the linked list functionality
class LinkedList {
 private:
  int printErrors = 1;  // A flag to control error message printing

 public:
  Node* head;
  // Constructor to initialize an empty linked list
  LinkedList() : head(nullptr) {}

  // Destructor to free the memory allocated for the entire linked list
  ~LinkedList() {
    Node* current = head;
    while (current != nullptr) {
      Node* temp = current;
      current = current->next;
      delete temp;
    }
  }
  void setPrintErrorsFalse() { printErrors = 0; }
  void setPrintErrorsTrue() { printErrors = 1; }
  int getPrintErrors() { return printErrors; }
  LinkedList createEmptyLinkedList(); // a function that creates an empty linked list
  void add(const string& data); // a function that adds a new node with a value to the beginning of the linked list
  void addToEnd(const string& data); // a function that adds a new node with a value to the end of the linked list
  void remove(string& element); // Function to remove the first element from the list
  int removeByValue(const string& value); // Function to remove the first occurrence of a specific value from the list
  int search(const string& element); // Function to search for the index of a specific value in the list
  void print(); // Function to print the elements of the list
};

#endif