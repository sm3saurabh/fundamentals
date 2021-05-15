#include <iostream>
#include "../generic-node.h"

using namespace std;

void printList(Node<int>* head) {
  while (head) {
    cout << head->data << endl;
    head = head->next;
  }
}

void push(Node<int>** head, int key) {
  auto temp = new Node(key);
  temp->next = *head;
  *head = temp;
}

