#include <iostream>
#include <queue>

#include "tree_node.hh"

void levelOrder(Node* root) {
  if (!root) {
    return;
  }

  std::queue<Node*> q;

  q.push(root);

  while (!q.empty()) {
    auto temp = q.front();
    q.pop();

    std::cout << temp->data << std::endl;

    if (temp->left) {
      q.push(temp->left);
    }

    if (temp->right) {
      q.push(temp->right);
    }
  }

  
}

int main() {
  auto root = createDefaultTestingTree();

  std::cout << "Level order for the default tree is " << std::endl;
  levelOrder(root);
  std::cout << std::endl;
}