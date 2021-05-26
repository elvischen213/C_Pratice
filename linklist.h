/* linklist.h*/

struct node{
    int data;
    struct node *next ;
};

typedef struct node NODE;

NODE *creatList(int *, int);
void printList(NODE *);
void freeList(NODE *);
void insertNode(NODE *, int);
NODE *searchNode(NODE *, int);
NODE *deleteNode(NODE *, NODE *);

