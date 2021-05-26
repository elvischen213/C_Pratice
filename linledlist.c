#include<stdio.h>
#include<stdlib.h>

struct node{
    int value;
    struct node* next;
};
typedef struct node NODE;

struct list{
    NODE *head;
    int size;
};

typedef struct list LIST;

void printlist(struct list *);
void deleteNode(struct list *, int);
void insertNode(struct list *, int, int);
void addfront(struct list *, int data);
void addback(struct list *, int data);

int main(){
    struct node *zero;
    struct node *one;
    struct node *second;
    struct node *third;
    struct node *head;

    struct list *a_list;

    a_list = (struct list *)malloc(sizeof(struct list));
    zero = (struct node *)malloc(sizeof(struct node));
    one = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    head = (struct node *)malloc(sizeof(struct node));

    zero->value = 10;
    zero->next = one;
    one->value = 11;
    one->next = second;
    second->value = 12;
    second->next = third;
    third->value = 13;
    third->next = NULL;

    a_list->head = zero;

    printlist(a_list);
    deleteNode(a_list, 3);
    printf("\nafter delete index3:\n");
    printlist(a_list);
    insertNode(a_list, 1, 50);
    printf("\nafter insert index1:\n");
    printlist(a_list);
    addback(a_list, 50);
    printf("\nafter addback 50 :\n");
    printlist(a_list);
    addfront(a_list, 100);
    printf("\nafter addfornt 100 :\n");
    printlist(a_list);

    return 0;
}

void printlist(struct list* input){
    struct node* curr = input->head;
    while (curr != NULL){
        printf("%p -> %d\n", curr, curr->value);
        curr = curr->next;
    }
    printf("NULL\n");
    free(curr);
}

void deleteNode(struct list* input,int pos){
    if (pos==0){
        input->head = input->head->next;
        return;
    }
    struct node *i = input->head;
    for (int j = 0; j < pos - 1;j++){
        i = i->next;
    }
    i->next = i->next->next;
}

void addback(struct list* input,int data){
    struct node *curr = input->head;
    struct node *newNODE = (struct node *)malloc(sizeof(struct node));

    while (curr->next!=NULL)
        curr = curr->next;

    newNODE->next = NULL;
    curr->next = newNODE;
    newNODE->value = data;

    free(curr);
}

void addfront(struct list* input,int data){
    struct node *newNODE = (struct node *)malloc(sizeof(struct node));
    newNODE->value = data;
    newNODE->next = input->head;
    input->head = newNODE;
}

void insertNode(struct list* input,int pos,int data){
    struct node *curr = input->head;
    struct node *newNODE = (struct node *)malloc(sizeof(struct node));
    if(pos==0)
    {
        addfront(input, data);
        return;
    }
    for (int i = 0; i < pos - 1;i++)
        curr = curr->next;
    newNODE->value = data;
    newNODE->next = curr->next;
    curr->next = newNODE;
}