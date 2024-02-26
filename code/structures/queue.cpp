#include "queue.h"
using namespace std;

// Push an element into the queue
void Queue::push(const string& element) {
  QueueNode *node = new QueueNode(element);

  if (!head) {
    head = node;
    tail = node;
  } else {
    tail->next = node;
    tail = node;
  }
  size++;
}

// Pop an element from the queue
const string Queue::pop() {
  if (!head) {
    if (getPrintErrors()) cerr << "Error: Queue is empty.";
    return "";
  } else {
    string val = head->data;
    QueueNode *temp = head;
    head = head->next;
    size--;

    if (!head) {
      tail = nullptr;
    }

    delete temp;
    return val;
  }
}