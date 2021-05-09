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

bool search(Node* head, int key) {
  while (head) {
    if (head->data == key) {
      return true;
    }
    head = head->next;
  }
  return false;
}

bool searchRecursive(Node* head, int key) {
  if (!head) return false;
  if (head->data == key) return true;

  return searchRecursive(head->next, key);
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

  cout << endl;

  cout << "List contains 4 " << search(head, 4) << endl;
  cout << "List contains recursive 4" << searchRecursive(head, 4) << endl;

  cout << "List contains 42 " << search(head, 42) << endl;
  cout << "List contains recursive 42" << searchRecursive(head, 42) << endl;
  return 0;
}