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
printf("]");
}
int main(){
struct Node *ptr,*nptr,*start;
char y;
 while(1){
    printf("do you want to create a new node?(y/n):");
    fflush(stdin);
    scanf("%c",&y);
    if(y=='n'){
        break;
    }
    ptr=(struct Node*)malloc(sizeof(struct Node));
    printf("\nenter the information of the node:");
    scanf("%d",&ptr->info);
    nptr=ptr;
    ptr->link=nptr;
    ptr=nptr;
 }
    ptr->link=NULL;
    traverse(start);
    return 0;
}
