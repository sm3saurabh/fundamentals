#ifndef LL_G_NODE_H
#define LL_G_NODE_H

template <class T>
class Node {
 public:
	T data;
	Node<T>* next;
	Node<T>(T data) : data(data) {}
};

#endif