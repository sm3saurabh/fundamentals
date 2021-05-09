#ifndef LL_NODE_H
#define LL_NODE_H

class Node {
  public:
    int data;
    Node* next;
    Node(int data): data(data) {}
};

#endif