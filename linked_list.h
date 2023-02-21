typedef struct node {
  int val;
  struct node* next;
} node;


typedef struct LinkedList {
  node* head;
  node* tail;
  int  size;
} LinkedList;

node* getNode(int);
void  insert(LinkedList*, node*);
LinkedList* init();
