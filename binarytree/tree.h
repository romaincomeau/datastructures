typedef struct tree_t {
  int val;
  struct tree_t* left;
  struct tree_t* right;
} tree_t;

tree_t* node_init(int);
void insert(tree_t*, tree_t*);
void to_string(tree_t*);
