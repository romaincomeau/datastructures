typedef struct node_t {
  int val;
  struct node_t* next;
} node_t;


typedef struct LinkedList {
  node_t* head;
  node_t* tail;
  int  size;
} LinkedList;

node_t* make_node(int);
void  append_node(LinkedList*, node_t*);
void  set_head(LinkedList*, node_t*);
void  traverse_linked_list(LinkedList*);
LinkedList* init_linked_list();
