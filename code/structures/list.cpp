#include "list.h"
using namespace std;

// A function that creates an empty linked list
LinkedList LinkedList::createEmptyLinkedList() {
    return LinkedList();
}

// Function to add an element to the beginning of the list
void LinkedList::add(const string& data) {
  Node* newNode = new Node(data);
  if (head == nullptr) {
    head = newNode;
  } else {
    newNode->next = head;
    head = newNode;
  }
}

// Function that adds a new node with a value to the end of the linked list
void LinkedList::addToEnd(const string& data) {
    Node* newNode = new Node(data);
    if (head == nullptr) {
        head = newNode;
    } else {
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }
}

// Function to remove the first element from the list
void LinkedList::remove(string& element) {
  if (head == nullptr) {
    element = "";
    if (getPrintErrors()) cerr << "Error: List is empty\n";
  } else {
    Node* temp = head;
    element = temp->element;
    head = head->next;

    // Delete the node, which will invoke the Node destructor and free the
    // string element
    delete temp;
  }
}

// Function to remove the first occurrence of a specific value from the list
int LinkedList::removeByValue(const string& value) {
  if (head == nullptr) {
    if (getPrintErrors()) cerr << "Error: List is empty.";
    return 0;
  }
  Node* current = head;
  Node* previous = nullptr;
  // Traverse the list to find the specified value
  while (current != nullptr && current->element != value) {
    previous = current;
    current = current->next;
  }

  if (current == nullptr) {
    if (getPrintErrors()) cerr << "Error: The element was not found." << endl;
    return 0;
  }

  if (previous == nullptr) {
    head = head->next;
    delete current;
    return 1;
  } else {
    // Remove the node with the specified value
    if (previous == nullptr) {
      head = current->next;
    } else {
      previous->next = current->next;

      // Delete the node, which will invoke the Node destructor and free the
      // string element
      delete current;
      return 1;
    }
  }
  return 0;
}

// Function to search for the index of a specific value in the list
int LinkedList::search(const string& value) {
  Node* current = head;
  int index = 0;

  // Traverse the list to find the specified value
  while (current != nullptr && current->element != value) {
    current = current->next;
    index++;
  }

  if (current == nullptr) {
    if (getPrintErrors()) cerr << "Error: Value not found.\n";
    return -1;
  } else {
    return index;
  }
}

// Function to print the elements of the list
void LinkedList::print() {
  Node* current = head;
  while (current != nullptr) {
    cout << current->element << " ";
    current = current->next;
  }
  cout << endl;
}
