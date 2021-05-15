#include <iostream>
#include<unordered_set>
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

void removeDuplicatesUnsorted(Node<int>* head) {
  auto outer = head;

  while (outer != nullptr) {
    auto current = head;
    Node<int>* prev = nullptr;

    while (current != nullptr) {
      if (current == outer) {
        prev = current;
        current = current->next;
        continue;
      }

      if (current->data == outer->data) {
        auto next = current->next;

        delete current;

        current = next;
        prev->next = current;

      } else {
        prev = current;
        current = current->next;
      }
    }

    outer = outer->next;
  }
}

void removeDuplicatesUnsortedHashing(Node<int>* head) {
	unordered_set<int> set;

	auto current = head;
	Node<int>* prev = nullptr;

	while (current) {
		auto el = set.find(current->data);
		if (el!= set.end()) {
			auto next = current->next;
			
			delete current;

			current  = next;
			prev->next = next;
		} else {
			set.insert(current->data);

			prev = current;
			current = current->next;
		}
	}
}

void testNestedLoop() {
  Node<int>* head = nullptr;

  cout << endl << "Testing remove duplicates using nested loop" << endl;

  push(&head, 23);
  push(&head, 42);
  push(&head, 11);
  push(&head, 23);
  push(&head, 37);
  push(&head, 42);
  push(&head, 11);

  printList(head);

  cout << endl;

  removeDuplicatesUnsorted(head);

  cout << "Remove duplicates has been called" << endl;

  printList(head);
}

void testHashing() {
  Node<int>* head = nullptr;

  cout << endl << "Testing remove duplicates using hashing" << endl;

  push(&head, 23);
  push(&head, 42);
  push(&head, 11);
  push(&head, 23);
  push(&head, 37);
  push(&head, 42);
  push(&head, 11);

  printList(head);

  cout << endl;

  removeDuplicatesUnsortedHashing(head);

  cout << "Remove duplicates hashing has been called" << endl;

  printList(head);
}

int main() {
  testNestedLoop();
  testHashing();
}