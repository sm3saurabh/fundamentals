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

Node<int>* getNthNode(Node<int>* head, int n) {
	int count = 0;

	while (head) {
		if (count == n) {
			return head;
		}
		head = head ->next;
		count++;
	}

	return nullptr;
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

	auto thirdNode = getNthNode(head, 8);

	if (thirdNode) {
		cout << "Eight node of the above linked list is " << thirdNode->data << endl;
	} else {
		cout << "Requested node could not be sent" << endl;
	}

	return 0;
}