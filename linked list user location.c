#include<stdio.h>
#include<math.h>
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
void insertion(struct Node *start,int loc){
    struct Node *sptr;
    int count=1;
    sptr=(struct Node*)malloc(sizeof(struct Node));
    printf("\Ennter the information of sptr:");
    scanf("%d",&sptr->info);
    while(count!=loc-1){
        start=start->link;
        count++;
    }
    sptr->link=start->link;
    start->link=sptr;


}
void main(){
    struct Node *ptr,*nptr,*start;
    char y;
    int loc;
    ptr=(struct Node*)malloc(sizeof(struct Node));
    printf("\nenter the info:");
    scanf("%d",&ptr->info);
    start=ptr;
    while(1){
        printf("\ndo you want to create a new node?(y/n):");
        fflush(stdin);
        scanf("%c",&y);
        if(y=='n'){
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
        printf("\nenter the location of the node:");
        scanf("%d",&loc);
        insertion(start,loc);
        traverse(start);
}
