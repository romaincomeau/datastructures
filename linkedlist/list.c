#include <stdio.h>
#include <stdlib.h>

#include "list.h"

#define NODE_SIZE sizeof(node_t)

node_t *make_node(int x) {
  node_t *n = malloc(NODE_SIZE);
  n->val = x;
  n->next = NULL;
  return n;
}

linked_list_t *init_linked_list() {
  linked_list_t* ll = malloc(sizeof(linked_list_t));
  ll->head = NULL;
  ll->tail = NULL;
  ll->length = 0;
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
  ll->length++;
}

void set_head(linked_list_t *ll, node_t *n) {
  n->next = ll->head->next;
  ll->head = n;
}

void prepend_node(linked_list_t *ll, node_t *n) {
  n->next = ll->head;
  ll->head = n;
  ll->length++;
}

void delete (linked_list_t *ll, int index) {
  if (index >= ll->length) {
    printf("!!! index out of bounds !!!\n");
    printf("!!! EXITING !!!\n");
    exit(1);
  } else {
    if (index == 0) {       // head
      void* addr = ll->head;
      if(ll->length == 1) {
        ll->head = NULL;
        ll->tail = NULL;
      } else if (ll->length == 2) {
        ll->head = ll->head->next;
        ll->tail = ll->head;
      } else {
        ll->head = ll->head->next;
      }
      ll->length--;
      free(addr);
    } else if (index == ll->length - 1) {  //tail
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
        ll->length--;
      }
    } else { // in between
      node_t* target = ll->head;
      for (int i = 1; i < index; i++) { // starting at 1 to stop just before the item to be deleted
        target = target->next;  
      }
      void* next_pointer = target->next->next;
      free(target->next);
      target->next = next_pointer;
    }
  }
}

void to_string(linked_list_t *ll) {
  node_t *curr = ll->head;
  printf("list (");
  while (curr != NULL) {
    printf("%d, ", curr->val);
    curr = curr->next;
  }
  printf("null)\n");
}
