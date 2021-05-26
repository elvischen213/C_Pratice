#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

struct list{
    struct node *top;
    int size;
};

typedef struct node NODE;
typedef struct list LIST;

int isEmpty(LIST*);
void push(LIST *, int);
int pop(LIST *);

int main(){
    LIST *list;
    list = (LIST *)malloc(sizeof(LIST));   
    list->top = NULL;
    push(list, 1);
    push(list, 2);
    push(list, 13);
    push(list, 33);
    push(list, 66);
    while(isEmpty(list)){
        printf("%d\n", pop(list));
    }

    return 0;
}

int isEmpty(LIST* list){
    if (list->top == NULL){
        printf("list is empty\n");
        return 0;
    }
    else
        return 1;
}

void push(LIST *list,int num){
    NODE *newnode;
    newnode = (NODE *)malloc(sizeof(NODE));
    newnode->data = num;   
    newnode->next = list->top;   
    list->top = newnode;
}

int pop(LIST *list){
    int tmp;
    NODE *head = list->top;
    if(list==NULL){
        printf("list is empty!");
        return -1;
    }
    else{
        list->top = list->top->next;
        tmp = head->data;
        free(head);
        return tmp;
    }
}