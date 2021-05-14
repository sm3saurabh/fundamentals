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

void removeDuplicates(Node<int>* head) {
	Node<int>* next = nullptr;
	auto current = head;

	while (current && current->next) {
		
		if (current->data == current->next->data) {
			next = current->next->next;
			delete current->next;
		} else {
			next = current->next;
		}

		current = next;
	}
}

int main() {
	Node<int>* head = nullptr;

	cout << endl << "Testing remove duplicates" << endl;

	push(&head, 67);
	push(&head, 67);
	push(&head, 60);
	push(&head, 43);
	push(&head, 43);
	push(&head, 21);
	push(&head, 11);
	push(&head, 11);
	push(&head, 11);

	printList(head);

	cout << endl;

	removeDuplicates(head);

	cout << "Remove duplicates has been called" << endl;

	printList(head);
}

