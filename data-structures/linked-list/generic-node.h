#ifndef LL_G_NODE_H
#define LL_G_NODE_H

template <typename T>
class Node {
 public:
	T data;
	Node* next;
	Node(T data) : data(data) {}
};

#endif