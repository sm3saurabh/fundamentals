#include <iostream>
#include "node.h"

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

Node* middle(Node* head) {
  Node* fast = head;
  Node* slow = head;

  while (fast && fast->next) {
    fast = fast->next->next;
    slow = slow->next;
  }

  return slow;
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

  cout << "List middle " << middle(head)->data << endl;

  return 0;
}