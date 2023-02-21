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

void append(LinkedList* ll, node* n) {
  if(ll->tail == NULL) {
    ll->head = n;
    ll->tail = n;
  } else {
    ll->tail->next = n;
    ll->tail = n;
  }
}

void traverse(LinkedList* ll) {
  node* curr = ll->head;
  printf("LinkedList(");
  while(curr != NULL) {
    printf("%d, ", curr->val);
    curr = curr->next;
  }
  printf(")\n");
}

int main() {

  LinkedList* ll = init();

  for(int i = 0, n = 1000000; i < n; i++) {
    node* temp = getNode(i);
    append(ll, temp);
  }

  // traverse(ll);

  return 0;
}
