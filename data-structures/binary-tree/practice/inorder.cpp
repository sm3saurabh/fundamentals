#include <iostream>

#include "tree_node.hh"


void inorder(Node* node) {
  if (!node) {
    return;
  }

  inorder(node->left);
  std::cout << " " << node->data;
  inorder(node->right);
}

int main() {
  auto root = createDefaultTestingTree();

  std::cout << "Inorder of the default tree is " << std::endl;

  inorder(root);

  return 0;
}