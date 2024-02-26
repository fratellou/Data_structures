#ifndef STACK_TASKS_H
#define STACK_TASKS_H
#include <iostream>
#include "./structures/stack.h"
#include <stack>
void task1();
int precedence(char op);
string infixToPostfix(const string& expression);
int calculatePostfix(const string& postfix);
void task5();
int isBalanced(const string& sequence); // Function to check if a given sequence of brackets is correct
#endif