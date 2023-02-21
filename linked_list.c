#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>

#define NODE_SIZE sizeof(node_t)

node_t *make_node(int x) {
  node_t *n = malloc(NODE_SIZE);
  n->val = x;
  n->next = NULL;
  return n;
}

linked_list_t *init_linked_list() {
  linked_list_t *ll = malloc(sizeof(linked_list_t));
  ll->head = NULL;
  ll->tail = NULL;
  ll->size = 0;
  return ll;
}

void append_node(linked_list_t *ll, node_t *n) {
  if (ll->tail == NULL) {
    ll->head = n;
    ll->tail = n;
  } else {
    ll->tail->next = n;
    ll->tail = n;
  }
  ll->size++;
}

void set_head(linked_list_t *ll, node_t *n) {
  n->next = ll->head->next;
  ll->head = n;
}

void prepend_node(linked_list_t *ll, node_t *n) {
  n->next = ll->head;
  ll->head = n;
  ll->size++;
}

void delete (linked_list_t *ll, int index) {
  if (index >= ll->size) {
    printf("!!! index out of bounds !!!\n");
    printf("!!! EXITING !!!\n");
    exit(1);
  } else {
    if (index == 0) {       // head
      void* addr = ll->head;
      if(ll->size == 1) {
        ll->head = NULL;
        ll->tail = NULL;
      } else if (ll->size == 2) {
        ll->head = ll->head->next;
        ll->tail = ll->head;
      } else {
        ll->head = ll->head->next;
      }
      ll->size--;
      free(addr);
    } else if (index == ll->size - 1) {  //tail
      if(ll->head->next == NULL) {
        free(ll->head->next);
        ll->head->next = NULL;
      } else {
        node_t* cursor = ll->head;
        while(cursor->next->next != NULL) {
          cursor = cursor->next;
        }
        free(cursor->next->next);
        cursor->next = NULL;
        ll->size--;
      }
    } else { // in between
      printf("between indexes not ready yet\n");
      printf("!!! EXITING !!!\n");
      exit(1);
    }
  }
}

void to_string(linked_list_t *ll) {
  node_t *curr = ll->head;
  printf("linked_list_t(");
  while (curr != NULL) {
    printf("%d, ", curr->val);
    curr = curr->next;
  }
  printf("null)\n");
}
