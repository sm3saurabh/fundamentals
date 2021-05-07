#include <iostream>

using namespace std;

class Node {
 public:
  int data;
  Node* next;
};

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
  head = new Node();
  second = new Node();
  third = new Node();

  head->data = 1;       // assign data in first node
  head->next = second;  // Link first node with second

  second->data = 2;  // assign data to second node
  second->next = third;

  third->data = 3;  // assign data to third node
  third->next = nullptr;

  printList(head);

  return 0;
}