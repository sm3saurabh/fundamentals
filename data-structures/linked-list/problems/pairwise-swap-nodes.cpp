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

void swapNodes(Node<int>* head) {
	
}

void swapNodesRecursively(Node<int>* head) {

}

Node<int>* createTestList() {
	Node<int>* head = nullptr;

	push(&head, 12);
	push(&head, 2);
	push(&head, 23);
	push(&head, 69);
	push(&head, 45);
	push(&head, 13);

	return head;
}

void testNormalSwapping() {
	auto head = createTestList();

	cout << "Before pairwise swapping" << endl;
	printList(head);

	cout << "After pairwise swapping" << endl;
	swapNodes(head);
	printList(head);
	deleteWhole(&head);
}

int main() {
	testNormalSwapping();
}

