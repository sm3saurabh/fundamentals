#include <iostream>

#include "tree_node.hh"

void postOrder(Node* root) {
  if (!root) {
    return;
  }

  std::cout << root->data << std::endl;
  postOrder(root->left);
  postOrder(root->right);
}

int main() {
  auto root = createDefaultTestingTree();

  std::cout << "Pre order for the default tree is " << std::endl;
  postOrder(root);
  std::cout << std::endl;
}