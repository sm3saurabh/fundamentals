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

}

int main() {
  Node<int>* head = nullptr;

  cout << endl << "Testing remove duplicates" << endl;

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