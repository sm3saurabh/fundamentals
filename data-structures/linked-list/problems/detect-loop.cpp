#include <iostream>
#include <unordered_set>

#include "../generic-node.h"

using namespace std;

bool isLoopPresentHashing(Node<int>* head) {
  unordered_set<Node<int>*> set;

  while (head) {
    auto el = set.find(head);

    if (el == set.end()) {
      set.insert(head);
      head = head->next;
    } else {
      return true;
    }
  }

  return false;
}

bool isLoopPresentFlyodCycle(Node<int>* head) {
	auto rabbit = head;
	auto hare = head;

	while (hare && rabbit && rabbit->next) {
		rabbit = rabbit->next->next;
		hare = hare->next;

		if (rabbit == hare) {
			return true;
		}
	}

	return false;
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

	// Loop is present in the list
  cout << "is loop present "
       << "hashing way -> " << isLoopPresentHashing(head)
       << " floyd cycle way -> " << isLoopPresentFlyodCycle(head) << endl;


	fifth->next = nullptr;

	// Loop is no longer present
	cout << "is loop present "
       << "hashing way -> " << isLoopPresentHashing(head)
       << " floyd cycle way -> " << isLoopPresentFlyodCycle(head) << endl;		 

  return 0;
}