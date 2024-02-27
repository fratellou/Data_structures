#include "stack_tasks.h"
using namespace std;

int main() {
  task1();
  task2();
  return 0;
}

void task1() {
  string infixExpression = "(2*3-(7/(4+3)))";

  cout << "1. Инфиксная запись: " << infixExpression << endl;
  string postfixExpression = infixToPostfix(infixExpression);
  cout << "Постфиксная запись: " << postfixExpression << endl;

  cout << "Результат вычисления: " << calculatePostfix(postfixExpression)
       << endl
       << endl;
}

int precedence(char op) {
  if (op == '+' || op == '-') return 1;
  if (op == '*' || op == '/') return 2;
  return 0;
}

string infixToPostfix(const string& expression) {
  string postfix;
  Stack operators;

  for (char c : expression) {
    if (isdigit(c))
      postfix += c;
    else if (c == '(')
      operators.push(c);
    else if (c == ')') {
      // Extract the operators from the stack and add them to the postfix
      // expression until the opening parenthesis is encountered
      while (operators.size != 0 && operators.head->data != '(') {
        postfix += operators.head->data;
        operators.pop();
      }
      operators.pop();
    } else {
      // Extracting operators from the stack while the priority of the current
      // operator is less than or equal to the priority of the operator at the
      // top of the stack
      while (operators.size != 0 &&
             precedence(c) <= precedence(operators.head->data)) {
        postfix += operators.head->data;
        operators.pop();
      }
      operators.push(c);
    }
  }

  // Adding the remaining operators from the stack to the postfix expression
  while (operators.size != 0) {
    postfix += operators.head->data;
    operators.pop();
  }

  return postfix;
}

int calculatePostfix(const string& postfix) {
  Stack operands;

  for (char c : postfix) {
    if (isdigit(c))
      operands.push(c);
    else {
      int operand2 = operands.head->data - '0';
      operands.pop();
      int operand1 = operands.head->data - '0';
      operands.pop();

      switch (c) {
        case '+':
          operands.push((operand1 + operand2) + '0');
          break;
        case '-':
          operands.push((operand1 - operand2) + '0');
          break;
        case '*':
          operands.push((operand1 * operand2) + '0');
          break;
        case '/':
          operands.push((operand1 / operand2) + '0');
          break;
      }
    }
  }

  return operands.head->data - '0';
}

void task2() {
  string sequence = "({[]})";
  cout << "2. Последовательность: " << sequence << endl;
  if (isBalanced(sequence)) {
    cout << "Скобки сбалансированы." << endl;
  } else {
    cout << "Скобки не сбалансированы." << endl;
  }
}

// Function to check if a given sequence of brackets is correct
int isBalanced(const string& sequence) {
  Stack brackets;

  for (char bracket : sequence) {
    if (bracket == '(' || bracket == '[' || bracket == '{') {
      // Opening bracket, add to the stack
      brackets.push(bracket);
    } else if (bracket == ')' || bracket == ']' || bracket == '}') {
      // Closing  bracket, check compliance
      if (brackets.head == NULL) {
        // If the stack is empty, the brackets are not matched
        return 0;
      } else if ((bracket == ')' && brackets.head->data == '(') ||
                 (bracket == ']' && brackets.head->data == '[') ||
                 (bracket == '}' && brackets.head->data == '{')) {
        // If the brackets are matched, removing it from the stack
        brackets.pop();
      } else {
        // The brackets are not matched
        return 0;
      }
    }
  }

  // If the stack is empty after processing the string, the brackets are
  // balanced
  if (brackets.size == 0) {
    return 1;
  }
  return 0;
}