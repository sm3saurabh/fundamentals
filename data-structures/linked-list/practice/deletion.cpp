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

void deleteNode(Node** head, int key) {
  Node* temp = *head;

  Node* prev = nullptr;

  if (temp && temp->data == key) {
    *head = temp->next;
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

int main() {
  Node* head = nullptr;

  push(&head, 5);
  push(&head, 4);
  push(&head, 3);
  push(&head, 2);
  push(&head, 1);

  cout << endl << "List before deletion" << endl;

  printList(head);

  deleteNode(&head, 3);

  cout << endl << "List after deletion" << endl;
  printList(head);

  return 0;
}