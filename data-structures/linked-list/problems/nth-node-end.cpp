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

int size(Node<int>* head) {
  int count = 0;

  auto temp = head;

  while (temp) {
    count++;
    temp = temp->next;
  }

  return count;
}

Node<int>* getNthNodeFromEnd(Node<int>* head, int n) {
  int len = size(head);

  if (n > len) {
    return nullptr;
  }

  int k = len - n;

  for (int i = 0; i < k; i++) {
    head = head->next;
  }

  return head;
}

Node<int>* getNthNodeFromEndTwoPointers(Node<int>* head, int n) {
  auto first = head;
  auto second = head;

  for (int i = 0; i < n; i++) {
    first = first->next;

    if (!first) {
      return nullptr;
    }
  }

  while (first) {
    first = first->next;
    second = second->next;
  }

  return second;
}

void testNormalApproach(Node<int>* head) {
	cout << endl << "Testing normal approach" << endl;

  auto thirdNode = getNthNodeFromEnd(head, 3);

  if (thirdNode) {
    cout << "Third node from the end is " << thirdNode->data << endl;
  } else {
    cout << "Eighth node from the end could not be found" << endl;
  }

  auto eigthNode = getNthNodeFromEnd(head, 8);

  if (eigthNode) {
    cout << "Eighth node from the end is " << eigthNode->data << endl;
  } else {
    cout << "Requested node could not be sent" << endl;
  }
}

void testTwoPointerApproach(Node<int>* head) {
	cout << endl << "Testing two pointer approach" << endl;

	auto thirdNode = getNthNodeFromEndTwoPointers(head, 3);

  if (thirdNode) {
    cout << "Third node from the end is " << thirdNode->data << endl;
  } else {
    cout << "Eighth node from the end could not be found" << endl;
  }

  auto eigthNode = getNthNodeFromEndTwoPointers(head, 8);

  if (eigthNode) {
    cout << "Eighth node from the end is " << eigthNode->data << endl;
  } else {
    cout << "Requested node could not be sent" << endl;
  }
}

int main() {
  Node<int>* head = nullptr;

  push(&head, 1);
  push(&head, 2);
  push(&head, 3);
  push(&head, 4);
  push(&head, 5);
  push(&head, 6);

  printList(head);

  testNormalApproach(head);

  testTwoPointerApproach(head);

  return 0;
}