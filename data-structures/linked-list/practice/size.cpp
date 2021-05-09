#include <iostream>
#include "../node.h"

using namespace std;

void printList(Node* head) {
  while (head) {
    cout << head->data << endl;
    head = head->next;
  }
}

void push(Node** head, int key) {
  Node* temp = new Node(key);
  temp->next = *head;
  *head = temp;
}

int size(Node* head) {
  int count = 0;

  Node* temp = head;

  while (temp) {
    count++;
    temp = temp->next;
  }

  return count;
}

int sizeRecursive(Node* head) {
  return !head ? 0 : 1 + size(head->next);
}

int main() {
  Node* head = nullptr;

  push(&head, 5);
  push(&head, 4);
  push(&head, 3);
  push(&head, 2);
  push(&head, 1);

  cout << "List" << endl;

  printList(head);

  cout << "List size iterative" << size(head) << endl;
  cout << "List size recursive" << sizeRecursive(head) << endl;

  return 0;
}