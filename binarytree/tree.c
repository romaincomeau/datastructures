#include <stdlib.h>
#include <stdio.h>

#include "tree.h"
#define TREE_SIZE sizeof(tree_t)

tree_t* node_init(int n) {
  tree_t* node = malloc(TREE_SIZE);
  node->val = n;
  node->left = NULL;
  node->right = NULL;
  return node;
}

void display(tree_t* root) {
  if (root == NULL) {
    return;
  } else {
    printf("%d, ", root->val);
    display(root->left);
    display(root->right);
  }
}

void insert(tree_t* root, tree_t* node) {
  if(node->val < root->val) {
    // insert left
    if(root->left == NULL) {
      root->left = node;
    } else {
      insert(root->left, node);
    }
  } else {
    // insert right
    if(root->right == NULL) {
      root->right = node;
    } else {
      insert(root->right, node);
    }
  }
}

