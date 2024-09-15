#include<stdio.h>
#include<math.h>
#include<stdlib.h>
struct Node{
int info;
struct Node *pre,*next;
};
void traverse(struct Node *start){
    struct Node *temp;
    temp=start;
    printf("\n[");
    do{
        printf("%d,",temp->info);
        temp=temp->next;
    }while(temp!=start);
    printf("]");
}
int main(){
struct Node *start,*ptr,*nptr;
int y;
ptr=(struct Node*)malloc(sizeof(struct Node));
printf("\nenter the information of ptr;");
scanf("%d",&ptr->info);
ptr->pre=NULL;
while(1){
    nptr=(struct Node*)malloc(sizeof(struct Node));
    printf("\ndo you want to create a new node:");
    scanf("%d",&y);
    if(y==1){
        break;
    }
    printf("\nenter the new node:");
    scanf("%d",&nptr->info);
    ptr->next=nptr;
    nptr->pre=ptr;
    ptr=nptr;
}
ptr->next=start;
traverse(start);
return 0;
}
