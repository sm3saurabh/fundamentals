#include <iostream>
#include "node.h"

using namespace std;

void push(Node** head, int key) {
  Node* temp = new Node(key);
  temp->next = *head;
  *head = temp;
}

void insert_after(Node* prev, int key) {
  if (!prev) {
    cout << "Given prev node can not be null";
    return;
  }

  Node* temp = new Node(key);

  temp->next = prev->next;
  prev->next = temp;
}

void append(Node** head, int key) {
  Node* temp = new Node(key);
  temp->next = nullptr;
  Node* last = *head;

  if (*head == nullptr) {
    *head = temp;
    return;
  }

  while (last->next) {
    last = last->next;
  }

  last->next = temp;
}

void printList(Node* head) {
  while (head) {
    cout << head->data << endl;
    head = head->next;
  }
}

int main() {

  Node* head = nullptr;

  push(&head, 5);
  push(&head, 4);
  push(&head, 3);
  push(&head, 2);
  push(&head, 1);

  append(&head, 10);
  append(&head, 15);
  append(&head, 20);

  printList(head);

  return 0;
}