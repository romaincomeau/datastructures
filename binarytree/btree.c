#include <stdlib.h>

#include "btree.h"
#define BTREE_SIZE sizeof(btree_t)

btree_t* btree_init(int n) {
  btree_t* root = malloc(BTREE_SIZE);
  root->val = n;
  root->left = NULL;
  root->right = NULL;
  return root;
}
