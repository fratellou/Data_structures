#include "stack.h"
using namespace std;

// This function pushes an element onto the stack
void Stack::push(const char element) {
  StackNode *node = new StackNode(element);
  if (!head) {
    head = node;
  } else {
    node->next = head;
    head = node;
  }
  size++;
}

// This function pops an element from the stack
char Stack::pop() {
  if (!head) {
    if (getPrintErrors()) cerr << "Error: Stack is empty.";
    return ' ';
  } else {
    char element = head->data;
    StackNode *temp = head;
    head = head->next;
    delete temp;
    size--;
    return element;
  }
}
