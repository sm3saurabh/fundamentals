#ifndef STACK_ARRAY_H
#define STACK_ARRAY_H

#include <iostream>
#define MAX 1000

class OverflowError {};
class UnderflowError {};

template <typename T>
class StackNode {
 public:
  T data;
  StackNode<T>* next;
  StackNode<T>(T data) : data(data){};
};

template <typename T>
class Stack {
  StackNode<T>* top;

 public:
  Stack() : top(nullptr) {}

  void push(T element) {
    if (top < MAX) {
      auto temp = new StackNode(element);
      temp->next = top;
      top = temp;
    } else {
      std::cout << "Overflow occurred";
      throw OverflowError();
    }
  }

  void pop() {
    if (isEmpty()) {
      std::cout << "Underflow occurred";
      throw UnderflowError();
    } else {
      StackNode<T>* temp = top;
      top = top->next;
      delete temp;
    }
  }

  T peek() {
    if (isEmpty()) {
      std::cout << "Underflow occurred";
      throw UnderflowError();
    } else {
      return top->data;
    }
  }

  bool isEmpty() { return !top; }
};

#endif