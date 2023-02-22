#include <stdio.h>

#include "list.h"

int main() {

  linked_list_t *ll = init_linked_list();

  for (int i = 0, n = 10; i < n; i++) {
    node_t *temp = make_node(i);
    append_node(ll, temp);
  }


  to_string(ll);

  return 0;
}
