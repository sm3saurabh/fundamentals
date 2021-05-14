#include <iostream>
#include <stack>
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

bool isListPallindrome(Node<int>* head) {
	stack<int> st;

	auto temp = head;

	while (temp) {
		st.push(temp->data);
		temp = temp->next;
	}

	temp = head;

	while (temp) {
		int data = st.top();
		if (temp->data != data) {
			return false;
		}
		temp = temp->next;
		st.pop();
	}

	return true;
}

void testPositivePallindrome() {
	Node<int>* head = nullptr;

	push(&head, 1);
	push(&head, 2);
	push(&head, 3);
	push(&head, 2);
	push(&head, 1);

	string pal;

	if (isListPallindrome(head)) {
		pal = "true";
	} else {
		pal = "false";
	}

	cout << "Is the list pallindrome " << pal << endl;
}

void testNegativePallindrome() {
	Node<int>* head = nullptr;

	push(&head, 1);
	push(&head, 2);
	push(&head, 3);
	push(&head, 2);
	push(&head, 3);
	push(&head, 28);

	string pal;

	if (isListPallindrome(head)) {
		pal = "true";
	} else {
		pal = "false";
	}

	cout << "Is the list pallindrome " << pal << endl;
}



int main() {

	testPositivePallindrome();

	testNegativePallindrome();

	return 0;
}



