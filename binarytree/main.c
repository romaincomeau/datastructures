#include "tree.h"

int main () {

  tree_t* root = node_init(10);
  for(int i = 0, n = 20; i < 20; i++) {
    tree_t* node = node_init(i);
    insert(root, node);
  }
  
  to_string(root);
}
