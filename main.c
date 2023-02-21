#include "linked_list.h"

int main() {

  LinkedList* ll = init_linked_list();

  for(int i = 0, n = 1000000; i < n; i++) {
    node_t* temp = make_node(i);
    append_node(ll, temp);
  }

  traverse_linked_list(ll);

  return 0;
}
