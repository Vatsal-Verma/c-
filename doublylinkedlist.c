#include<stdio.h>
#include<math.h>
typedef struct Node{
    int info;
    int pre;
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
void rev_traverse(struct Node *start){
    struct Node *temp;
    temp=start;
    printf("\n[");
    while(temp->link!=NULL){
        temp=temp->link;
    }
    while(temp!=start){
        printf("%d,",temp->info);
        temp=temp->pre;
    }
    printf(" %d",start->info);
printf("]");
}
int main(){
struct Node *ptr,*nptr,*start;
char y;
ptr=(struct Node*)malloc(sizeof(struct Node));
printf("\nenter the info:");
scanf("%d",&ptr->info);
ptr->pre=NULL;
start=ptr;
while(1){
    printf("\ndo you want to create a new node?(y/n):");
    fflush(stdin);
    scanf("%c",&y);
    if(y=='n'){
        break;
    }
    nptr=(struct Node*)malloc(sizeof(struct Node));
    printf("\nenter the information of the new node:");
    scanf("%d",&nptr->info);
    ptr->link=nptr;
    nptr->pre=ptr;
    ptr=nptr;
}
ptr->link=NULL;

rev_traverse(start);
    return 0;
}
