#ifndef STACK_TASKS_H
#define STACK_TASKS_H
#include <iostream>
#include <stack>

#include "./structures/stack.h"
void task1();
int precedence(char op);
string infixToPostfix(const string& expression);
int calculatePostfix(const string& postfix);
void task2();
int isBalanced(const string& sequence);  // Function to check if a given
                                         // sequence of brackets is correct
#endif