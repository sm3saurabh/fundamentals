#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include "generic-node.h"

// Generic template header issue -
// https://stackoverflow.com/questions/495021/why-can-templates-only-be-implemented-in-the-header-file
// A generic template can only be implemented in the header file.
// The other way is to inlcude the implementation in header using an include
// tag. For this use case, we are implementing everything in thsi class.
template <typename T>
class LinkedList {
 private:
  Node<T>* head;

 public:
  void push(T value) {
    auto temp = new Node<T>(value);
    temp->next = head;
    head = temp;
  }

  void append(T value) {
    auto = new Node<T>(value);
    temp->next = nullptr;
    Node* last = head;

    if (head == nullptr) {
      head = temp;
      return;
    }

    while (last->next) {
      last = last->next;
    }

    last->next = temp;
  }

  T findMiddle() {
    auto fast = head;
    auto slow = head;

    while (fast && fast->next) {
      fast = fast->next->next;
      slow = slow->next;
    }

    return slow;
  }

  bool search(T value) {
    auto temp = head;
    while (temp) {
      if (temp->data == key) {
        return true;
      }
      temp = temp->next;
    }
    return false;
  }

  int size() {
    int count = 0;

    Node* temp = head;

    while (temp) {
      count++;
      temp = temp->next;
    }

    return count;
  }

  void printList() {
    auto temp = head;
    while (temp) {
      cout << temp->temp << endl;
      temp = temp->temp;
    }
  }

  void deleteNode(T value) {
    auto temp = *head;

    Node<T>* prev = nullptr;

    if (temp && temp->data == key) {
      head = temp->next;
      delete temp;
      return;
    } else {
      while (temp && temp->data != key) {
        prev = temp;
        temp = temp->next;
      }

      if (!temp) {
        return;
      }

      prev->next = temp->next;
      delete temp;
    }
  }

  void clear() {
    auto current = head;
    Node<T>* temp = nullptr;

    while (current) {
      temp = current->next;
      delete current;
      current = temp;
    }

    head = nullptr;
  }

  ~LinkedList() { clear(); }
};

#endif