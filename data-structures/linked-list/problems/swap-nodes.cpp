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

void deleteWhole(Node<int>** head) {
  Node<int>* current = *head;
  Node<int>* temp = nullptr;

  while (current) {
    temp = current->next;
    delete current;
    current = temp;
  }

  *head = nullptr;
}

void swapNodes(Node<int>** head, int a, int b) {

}

Node<int>** createTestList() {
	Node<int>* head = nullptr;

	push(&head, 12);
	push(&head, 2);
	push(&head, 23);
	push(&head, 69);
	push(&head, 45);
	push(&head, 13);

	return &head;
}

void testNormalSwapping() {
	auto head = createTestList();

	cout << "Before swapping" << endl;
	printList(*head);

	cout << "After swapping 2 and 69" << endl;
	swapNodes(head, 2, 69);
	printList(*head);
	deleteWhole(head);
}


void testAAtHead() {
	auto head = createTestList();

	cout << "Before swapping" << endl;
	printList(*head);

	cout << "After swapping 13 and 23" << endl;
	swapNodes(head, 13, 23);
	printList(*head);
	deleteWhole(head);
}

void testBAtHead() {
	auto head = createTestList();

	cout << "Before swapping" << endl;
	printList(*head);

	cout << "After swapping 69 and 13" << endl;
	swapNodes(head, 69, 13);
	printList(*head);
	deleteWhole(head);
}

void testAAtTail() {
	auto head = createTestList();

	cout << "Before swapping" << endl;
	printList(*head);

	cout << "After swapping 12 and 69" << endl;
	swapNodes(head, 12,69);
	printList(*head);
	deleteWhole(head);
}

void testBAtTail() {
	auto head = createTestList();

	cout << "Before swapping" << endl;
	printList(*head);

	cout << "After swapping 45 and 12" << endl;
	swapNodes(head, 45, 12);
	printList(*head);
	deleteWhole(head);
}

int main() {
  testNormalSwapping();
	testAAtHead();
	testBAtHead();
	testAAtTail();
	testBAtTail();
}