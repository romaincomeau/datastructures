typedef struct tree_t {
  int val;
  struct tree_t* left;
  struct tree_t* right;
} tree_t;

tree_t* tree_init(int);
