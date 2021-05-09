#include<iostream>
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

void deleteWhole(Node** head) {
  Node* current = *head;
  Node* temp = nullptr;

  while (current) {
    temp = current->next;
    delete current;
    current = temp;
  }

  *head = nullptr;
}

int main() {
  Node* head = nullptr;

  push(&head, 5);
  push(&head, 4);
  push(&head, 3);
  push(&head, 2);
  push(&head, 1);

  cout << endl << "List before deletion" << endl;

  printList(head);

  deleteWhole(&head);

  cout << endl << "List after deletion" << endl;
  printList(head);

  return 0;
}
