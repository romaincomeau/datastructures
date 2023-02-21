#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

#define NODE_SIZE sizeof(node_t)

node_t* make_node(int x) {
  node_t* n = malloc(NODE_SIZE);
  n->val  = x;
  n->next = NULL;
  return n;
}

LinkedList* init_linked_list() {
  LinkedList* ll = malloc(sizeof(LinkedList*));
  ll->head = NULL;
  ll->tail = NULL;
  ll->size = 0;
  return ll;
}

void append_node(LinkedList* ll, node_t* n) {
  if(ll->tail == NULL) {
    ll->head = n;
    ll->tail = n;
  } else {
    ll->tail->next = n;
    ll->tail = n;
  }
}

void traverse_linked_list(LinkedList* ll) {
  node_t* curr = ll->head;
  printf("LinkedList(");
  while(curr != NULL) {
    printf("%d->", curr->val);
    curr = curr->next;
  }
  printf(")\n");
}
