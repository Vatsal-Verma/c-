#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
int info;
struct Node *link;
};
void traverse(struct Node *start){
    printf("\n[");
    while(start->link!=NULL){
        printf("%d,",start->info);
        start=start->link;
    }
    printf("%d",start->info);
    printf("]");
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
    scanf("%d",&nptr->info);
    ptr->link=nptr;
    ptr=nptr;

}
ptr->link=NULL;
traverse(start);
sptr=(struct Node*)malloc(sizeof(struct Node));
printf("\nenter the new info");
scanf("%d",&sptr->info);
sptr->link=NULL;
nptr->link=sptr;
traverse(start);
}
