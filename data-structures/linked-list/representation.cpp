#include <iostream>
#include "node.h"

using namespace std;

void printList(Node* head) {
  while (head) {
    cout << head->data << endl;
    head = head->next;
  }
}

int main() {
  Node* head = nullptr;
  Node* second = nullptr;
  Node* third = nullptr;

  // allocate 3 nodes in the heap
  head = new Node(1);
  second = new Node(2);
  third = new Node(3);

  head->next = second;  // Link first node with second


  second->next = third;

  third->next = nullptr;

  printList(head);

  return 0;
}