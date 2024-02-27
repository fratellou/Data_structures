#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
using namespace std;

class QueueNode {
 public:
  string data;
  QueueNode *next;

  QueueNode(const string &value) : next(nullptr) { data = value; }
};

class Queue {
 private:
  int size;
  int printErrors = 1;  // A flag to control error message printing

 public:
  QueueNode *head;
  QueueNode *tail;

  Queue() : size(0), head(nullptr), tail(nullptr) {}

  ~Queue() {
    while (head) {
      QueueNode *temp = head;
      head = head->next;
      delete temp;
    }
    tail = nullptr;
    size = 0;
  }

  void setPrintErrorsFalse() { printErrors = 0; }
  void setPrintErrorsTrue() { printErrors = 1; }
  int getPrintErrors() const { return printErrors; }

  void push(const string &element);
  const string pop();
};

#endif