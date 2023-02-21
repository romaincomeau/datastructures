#include "linked_list.h"
#include <stdio.h>

int main() {

  linked_list_t *ll = init_linked_list();

  for (int i = 0, n = 10; i < n; i++) {
    node_t *temp = make_node(i);
    append_node(ll, temp);
  }

  node_t *replace = make_node(42);
  node_t *prepend = make_node(22);
  set_head(ll, replace);
  prepend_node(ll, prepend);

  delete(ll, 0);
  to_string(ll);
  printf("linked_list size: %d\n", ll->size);

  return 0;
}
