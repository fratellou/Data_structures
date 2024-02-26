#ifndef LIST_TASKS_H
#define LIST_TASKS_H
#include <iostream>
#include <cassert>
#include "./structures/list.h"

string testRemoveFirstNode(LinkedList *myList); // A test to verify the removal of the first node from the linked list
string testRemoveValues(LinkedList* myList, const string value); // checking for the presence and removal of all nodes with the value from the linked list
#endif