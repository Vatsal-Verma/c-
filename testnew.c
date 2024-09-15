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
void insert(struct Node *start,int loc){
    int count=1;
    struct Node *sptr;
    sptr=(struct Node*)malloc(sizeof(struct Node));
    printf("\nenter the information of sptr:");
    scanf("%d",&sptr->info);
    while(count!=loc){
        start=start->link;
        count++;
    }
    sptr->link=start->link;
    start->link=sptr;
}
void main(){
struct Node *ptr,*nptr,*start;
int y;
int loc;
ptr=(struct Node*)malloc(sizeof(struct Node));
printf("\nenter the info:");
scanf("%d",&ptr->info);
start=ptr;
while(1){
printf("\ndo you want to create a new node:");
scanf("%d",&y);
if(y==1){
    break;
}
nptr=(struct Node*)malloc(sizeof(struct Node));
printf("\nEnter the Info:");
scanf("%d",&nptr->info);
ptr->link=nptr;
ptr=nptr;
}
ptr->link=NULL;
traverse(start);
printf("\nenter the position of the element to be inserted:");
scanf("%d",&loc);
insert(start,loc);
traverse(start);
}
