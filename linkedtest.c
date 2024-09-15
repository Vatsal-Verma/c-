#include<stdio.h>
#include<math.h>
typedef struct Node{
int info;
struct Node *next;
};
void traversal(struct Node *start){
    printf("\n[");
    while(start->next!=NULL){
        printf("%d,",start->info);
        start=start->next;
    }
    printf("%d",start->info);
    printf("]");
}
void main(){
struct Node *start,*ptr,*nptr;
int y;
ptr=(struct Node*)malloc(sizeof(struct Node));
printf("\nenter info:");
scanf("%d",&ptr->info);
start=ptr;
while(1){
    printf("\ndo you want to continue adding up the data?:");
    scanf("%d",&y);
    if(y==1){
        break;
    }
    nptr=(struct Node*)malloc(sizeof(struct Node));
    printf("\nenter the info:");
    scanf("%d",&nptr->info);
    ptr->next=nptr;
    ptr=nptr;
}
ptr->next=NULL;
traversal(start);
}
