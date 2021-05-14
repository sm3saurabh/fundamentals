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

Node<int>* getNthNodeFromEnd(Node<int>* head, int n) {

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

	auto thirdNode = getNthNodeFromEnd(head, 3);

	if (thirdNode) {
		cout << "Third node from the end is " << thirdNode->data << endl;
	} else {
		cout << "Eighth node from the end could not be found" << endl;
	}

	auto eigthNode = getNthNodeFromEnd(head, 8);

	if (eigthNode) {
		cout << "Eighth node from the end is " << thirdNode->data << endl;
	} else {
		cout << "Requested node could not be sent" << endl;
	}

	return 0;
}