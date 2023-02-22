#include <assert.h>
#include <stdlib.h>
#include  <stdio.h>

#include "../list.h"

int main() {
  printf("TEST LINKED LIST\n");
  printf("----------------------------------\n");
  linked_list_t* ll0 = init_linked_list(); 
  assert(ll0->head == NULL);
  assert(ll0->tail == NULL);
  assert(ll0->length == 0);
  append_node(ll0, make_node(1));
  assert(ll0->head->val == 1);
  assert(ll0->head == ll0->tail);
}
