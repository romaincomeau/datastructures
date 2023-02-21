#include "linked_list.h"

int main() {

  LinkedList* ll = init_linked_list();

  for(int i = 0, n = 10; i < n; i++) {
    node_t* temp = make_node(i);
    append_node(ll, temp);
  }

  node_t* replace = make_node(42);
  set_head(ll, replace);
  traverse_linked_list(ll);

  return 0;
}
