typedef struct btree_t {
  int val;
  struct btree_t* left;
  struct btree_t* right;
} btree_t;

btree_t* btree_init(int);
