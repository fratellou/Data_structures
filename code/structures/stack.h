#ifndef STACK_H
#define STACK_H

#include <iostream>
using namespace std;

class StackNode {
 public:
  char data;
  StackNode *next;

  StackNode(const char value) : next(nullptr) { data = value; }
};

class Stack {
 private:
  int printErrors = 1;  // A flag to control error message printing

 public:
 int size;
  StackNode *head;
  Stack() : size(0), head(nullptr) {}

  ~Stack() {
    while (head) {
      StackNode *temp = head;
      head = head->next;
      delete temp;
    }
    size = 0;
  }

  void setPrintErrorsFalse() { printErrors = 0; }
  void setPrintErrorsTrue() { printErrors = 1; }
  int getPrintErrors() const { return printErrors; }
  void push(const char element);
  char pop();
};

#endif
