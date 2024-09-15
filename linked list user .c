#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
int info;
struct Node *link;
};
void traverse(struct Node *start){
    printf("\n[");

    while(start!=NULL){
        printf("%d,",start->info);
        start=start->link;
    }

    printf("\b]");
}
void main(){
struct Node *ptr,*start,*nptr,*sptr;
char y;
ptr=(struct Node*)malloc(sizeof(struct Node));
printf("\nenter number to be entered:");
scanf("%d",&ptr->info);
start=ptr;
while(1){
     printf("\ndo you want to create a new node(y/n)?:");
    fflush(stdin);
    scanf("%c",&y);
    if(y=='n'){
        break;
    }
    nptr=(struct Node*)malloc(sizeof(struct Node));
    printf("\nenter the value:");
    fflush(stdin);
    scanf("%d",&nptr->info);
    ptr->link=nptr;
    ptr=nptr;

}
ptr->link=NULL;
traverse(start);

}
