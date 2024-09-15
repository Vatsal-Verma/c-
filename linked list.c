#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int data;
    struct Node * next;
};
void traversal(struct Node *ptr){
    printf("\n[");
    while(ptr!=NULL){
    printf("%d,",ptr->data);
    ptr=ptr->next;
    }
    printf("\b]");
}
void main(){
    struct Node *first;
    struct Node *second;
    struct Node *third;

    first=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));

    first->data=1;
    first->next=second;

    second->data=2;
    second->next=third;

    third->data=3;
    third->next=NULL;

    traversal(first);
}
