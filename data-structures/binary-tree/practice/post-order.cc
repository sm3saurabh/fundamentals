#include <iostream>

#include "tree_node.hh"

void postOrder(Node* root) {
  if (!root) {
    return;
  }

  postOrder(root->left);
  postOrder(root->right);
  std::cout << root->data << std::endl;
}

int main() {
  auto root = createDefaultTestingTree();

  std::cout << "Post order for the default tree is " << std::endl;
  postOrder(root);
  std::cout << std::endl;
}