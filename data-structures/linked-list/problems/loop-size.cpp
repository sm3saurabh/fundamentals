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
  auto temp = new Node<int>(key);
  temp->next = *head;
  *head = temp;
}

int loopSize(Node<int>* head) {
  auto rabbit = head;
  auto hare = head;

  while (hare && rabbit && rabbit->next) {
    
		rabbit = rabbit->next->next;
    hare = hare->next;

		// loop detected
		if (rabbit == hare) {
			// count the size of the loop
			int count = 1;
			while (hare->next != rabbit) {
				count++;
				hare = hare->next;
			}
			return count;
		}
  }

  return -1;
}

int main() {
  auto head = new Node<int>(1);

  auto second = new Node<int>(2);
  auto third = new Node<int>(3);
  auto fourth = new Node<int>(4);
  auto fifth = new Node<int>(5);

  head->next = second;
  second->next = third;
  third->next = fourth;
  fourth->next = fifth;
  fifth->next = third;

  auto size = loopSize(head);

  cout << "loop size is " << size << endl;

  return 0;
}
