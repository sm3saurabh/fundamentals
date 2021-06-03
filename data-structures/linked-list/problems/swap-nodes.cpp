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

void swapNodes(Node<int>** head, int a, int b) {

}

void testNormalSwapping() {
	Node<int>* head = nullptr;

	push(&head, 12);
	push(&head, 2);
	push(&head, 23);
	push(&head, 69);
	push(&head, 45);
	push(&head, 12);

	cout << "Before swapping" << endl;
	printList(head);

	cout << "After swapping 2 and 69" << endl;
	printList(head);
}


void testAAtHead() {
	Node<int>* head = nullptr;

	push(&head, 12);
	push(&head, 2);
	push(&head, 23);
	push(&head, 69);
	push(&head, 45);
	push(&head, 12);

	cout << "Before swapping" << endl;
	printList(head);

	cout << "After swapping 2 and 69" << endl;
	printList(head);
}

void testBAtHead() {
	Node<int>* head = nullptr;

	push(&head, 12);
	push(&head, 2);
	push(&head, 23);
	push(&head, 69);
	push(&head, 45);
	push(&head, 12);

	cout << "Before swapping" << endl;
	printList(head);

	cout << "After swapping 2 and 69" << endl;
	printList(head);
}

void testAAtTail() {
	Node<int>* head = nullptr;

	push(&head, 12);
	push(&head, 2);
	push(&head, 23);
	push(&head, 69);
	push(&head, 45);
	push(&head, 12);

	cout << "Before swapping" << endl;
	printList(head);

	cout << "After swapping 2 and 69" << endl;
	printList(head);
}

void testBAtTail() {
	Node<int>* head = nullptr;

	push(&head, 12);
	push(&head, 2);
	push(&head, 23);
	push(&head, 69);
	push(&head, 45);
	push(&head, 12);

	cout << "Before swapping" << endl;
	printList(head);

	cout << "After swapping 2 and 69" << endl;
	printList(head);
}

int main() {
  testNormalSwapping();
	testAAtHead();
	testBAtHead();
	testAAtTail();
	testBAtTail();
}