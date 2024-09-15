#include<stdio.h>
#include<math.h>
struct Node{
int info;
struct Node *link;
};
void traverse(struct Node *start){
    struct Node *temp;
    temp=start;
    while(temp!=NULL){
        printf("%d,",temp->info);
        temp=temp->link;
    }
}
int main(){
    struct Node *ptr,*nptr,*start;
    int y;
    ptr=(struct Node*)malloc(sizeof(struct Node));
    printf("\n enter the information of the node:");
    scanf("%d",&ptr->info);
    start=ptr;
    while(1){
        printf("\ndo you want to create a node:");
        scanf("%d",&y);
        if(y==1){
            break;
        }
        nptr=(struct Node*)malloc(sizeof(struct Node));
        printf("\n enter the information of nptr:");
        scanf("%d",&nptr->info);
        ptr->link=nptr;
        ptr=nptr;
    }
    ptr->link=NULL;
    traverse(start);

return 0;
}
