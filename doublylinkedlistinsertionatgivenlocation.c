#include<stdio.h>
#include<math.h>
#include<stdlib.h>
struct Node{
int info;
struct Node *pre,*next;
};
void traverse(struct Node *start){
    printf("\n[");
    while(start!=NULL){
        printf("%d,",start->info);
        start=start->next;
    }
    printf("\b]");
}
void insert(struct Node **start,int loc){
struct Node *sptr,*temp;
temp=*start;
sptr=(struct Node*)malloc(sizeof(struct Node));
printf("\nenter the information of the new node:");
scanf("%d",&sptr->info);
int count=0;
while(count!=loc){
    temp=temp->next;
    count++;
}
(temp->pre)->next=sptr;
sptr->pre=(temp)->pre;
sptr->next=temp;
}
int main(){
struct Node *temp,*start,*ptr,*nptr;
int y,loc;
ptr=(struct Node*)malloc(sizeof(struct Node));
printf("\nenter the information:");
scanf("%d",&ptr->info);
start=ptr;
while(1){
    printf("\ndo you want to create a new node:");
    scanf("%d",&y);
    if(y==1){
        break;
    }
    nptr=(struct Node*)malloc(sizeof(struct Node));
    printf("\nenter the inforamtion of the new node:");
    scanf("%d",&nptr->info);
    nptr->pre=ptr;
    ptr->next=nptr;
    ptr=nptr;
}
ptr->next=NULL;
traverse(start);
printf("\nenter the location:");
scanf("%d",&loc);
insert(&start,loc);
traverse(start);

}
