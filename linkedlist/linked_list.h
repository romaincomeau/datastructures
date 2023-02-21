typedef struct node_t {
  int val;
  struct node_t* next;
} node_t;


typedef struct linked_list_t {
  node_t* head;
  node_t* tail;
  int  size;
} linked_list_t;

node_t* make_node(int);
void delete(linked_list_t*, int);
void append_node(linked_list_t*, node_t*);
void prepend_node(linked_list_t*, node_t*);
void set_head(linked_list_t*, node_t*);
void to_string(linked_list_t*);
linked_list_t* init_linked_list();
