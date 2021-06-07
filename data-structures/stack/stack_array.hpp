#ifndef STACK_ARRAY_H
#define STACK_ARRAY_H

#include <iostream>
#define MAX 1000

class OverflowError{};
class UnderflowError{};

template <typename T>
class Stack {
  int top;
  T arr[MAX];

 public:
	Stack(): top(-1) {};

	void push(T element) {
		if (top < MAX) {
			arr[++top] = element;
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
			--top;
		}
	}

	T peek() {
		if (isEmpty()) {
			std::cout << "Underflow occurred";
			throw UnderflowError();
		} else {
			return arr[top];
		}
	}

	bool isEmpty() {
		return top < 0;
	}
};

#endif