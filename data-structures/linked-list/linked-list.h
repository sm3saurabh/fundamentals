#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include "generic-node.h"

template<typename T>
class LinkedList {
 private:
  Node<T>* head;

 public:
  void push(T value);
  void append(T value);
  T findMiddle();
  bool search(T value);
  T size();
  void printList();
  void deleteNode(T value);
  void clear();
};

template<typename T>
void LinkedList<T>::push(T value) {}

void LinkedList<T>::append(T value) {}

T LinkedList<T>::findMiddle() {}

bool LinkedList<T>::search(T value) {}

T LinkedList<T>::size() {}

void LinkedList<T>::printList() {}

void LinkedList<T>::deleteNode(T value) {}

void LinkedList<T>::clear() {}

#endif