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

linked_list_t* init_linked_list() {
  linked_list_t* ll = malloc(sizeof(linked_list_t*));
  ll->head = NULL;
  ll->tail = NULL;
  ll->size = 0;
  return ll;
}

void append_node(linked_list_t* ll, node_t* n) {
  if(ll->tail == NULL) {
    ll->head = n;
    ll->tail = n;
  } else {
    ll->tail->next = n;
    ll->tail = n;
  }
}

void set_head(linked_list_t* ll, node_t* n) {
  n->next = ll->head->next;
  ll->head = n;
}

void prepend_node(linked_list_t* ll, node_t* n) {
  n->next = ll->head;
  ll->head = n;
}

void traverse_linked_list(linked_list_t* ll) {
  node_t* curr = ll->head;
  printf("linked_list_t(");
  while(curr != NULL) {
    printf("%d->", curr->val);
    curr = curr->next;
  }
  printf(")\n");
 }
