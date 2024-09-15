#include <stdio.h>
#include <stdlib.h>

struct Node{
    int info;
    struct node *next;
};
void push(struct Node **top){
struct Node *ptr;
int el;
ptr=(struct Node*)malloc(sizeof(struct Node));
if(ptr==NULL){
    printf("\noverflow");
}
else{
    printf("\nentered the element to be enterted:");
    fflush(stdin);
    scanf("%d",&el);
    ptr->info=el;
    ptr->next=*top;
    *top=ptr;
    traverse(*top);
}

}
void pop(struct Node **top){
int x;
if(*top==NULL){
    printf("\nunderflow");
}
else{
    x=(*top)->info;
    *top=(*top)->next;
}
printf("\ndeleted element:%d",x);
}
void traverse(struct Node *top){
while(top!=NULL){
    printf("%d,",top->info);
    top=top->next;
}
}
int main(){
struct Node *top=NULL;
int y;
while(1){
push(&top);
printf("\ndo you want to create a new node:");
scanf("\n%d",&y);
if(y==0)
    break;
}
pop(&top);
}
