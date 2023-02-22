#include <stdlib.h>

#include "tree.h"
#define TREE_SIZE sizeof(tree_t)

tree_t* tree_init(int n) {
  tree_t* root = malloc(TREE_SIZE);
  root->val = n;
  root->left = NULL;
  root->right = NULL;
  return root;
}
