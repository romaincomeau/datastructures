#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

#define NODE_SIZE sizeof(node)

node* getNode(int x) {
  node* n = malloc(NODE_SIZE);
  n->val  = x;
  n->next = NULL;
  return n;
}

LinkedList* init() {
  LinkedList* ll = malloc(sizeof(LinkedList*));
  ll->head = NULL;
  ll->tail = NULL;
  ll->size = 0;
  return ll;
}

void insert(LinkedList* ll, node* n) {
  node* curr = ll->head;
  while(curr != NULL) {
    curr = curr->next;
  }
  curr = n;
}



int main() {
  LinkedList* ll = init();

  node* n0 = getNode(5);
  node* n1 = getNode(6);
  insert(ll, n0);
  insert(ll, n1);

  return 0;
}
