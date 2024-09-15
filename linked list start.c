#include<stdio.h>
#include<math.h>
struct Node{
int info;
struct Node *link;
};
void traverse(struct Node *start){
    printf("\n[");
    while(start!=NULL){
        printf("%d,",start->info);
        start=start->link;
    }

    printf("]");
}
void main(){
struct Node *ptr,*nptr,*sptr,*start;
int y;
ptr=(struct Node*)malloc(sizeof(struct Node));
printf("\nenter the information:");
scanf("%d",&ptr->info);
start=ptr;
while(1){
    printf("\ndo you want to enter more info?(y/n):");
    scanf("%d",&y);
    if(y==1){
        break;
    }
    nptr=(struct Node*)malloc(sizeof(struct Node));
    printf("\nenter the information:");
    scanf("%d",&nptr->info);

    ptr->link=nptr;
    ptr=nptr;
}
ptr->link=NULL;
traverse(start);
sptr=(struct Node*)malloc(sizeof(struct Node));
printf("\nenter the new info:");
scanf("%d",&sptr->info);
sptr->link=start;
start=sptr;
traverse(start);
}
