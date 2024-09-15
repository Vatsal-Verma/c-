#include<stdio.h>
#include<math.h>
struct Node{
int info;
struct Node *link;
};
void traverse(struct Node *start){
    struct Node *temp;
    temp=start;
    printf("\n[");
    do{
        printf("%d,",temp->info);
        temp=temp->link;
    }while(temp!=start);
    printf("]");
}
void insert(struct Node *start){
struct Node *sptr,*temp;
temp=start;
sptr=(struct Node*)malloc(sizeof(struct Node));
printf("\nenter the value of sptr:");
scanf("%d",&sptr->info);
while(temp->link!=start){
    temp=temp->link;
}

temp->link=sptr;
sptr->link=start;
}
void dellink(struct Node **start){
    struct Node *temp,*temp1;
    temp=*start;
    temp1=*start;
    while(temp->link!=*start){
        temp=temp->link;
    }
    temp->link=temp1->link;
    *start=temp->link;
    free(temp1);
}

void insertbeg(struct Node **start){
    struct Node *temp1,*newptr;
    temp1=*start;
    newptr=(struct Node*)malloc(sizeof(struct Node));
    printf("\nenter the information of the new node:");
    scanf("%d",&newptr->info);
    while(temp1->link!=*start){
        temp1=temp1->link;
    }

    temp1->link=newptr;
    newptr->link=*start;
    *start=newptr;
}
void delend(struct Node **start){
    struct Node *temp,*temp1;
    temp=*start;
    temp1=*start;
    while(temp->link!=*start){
        temp=temp->link;
    }
    while(temp1->link!=temp){
        temp1=temp1->link;
    }
    temp1->link=*start;
    free(temp);
}
int main(){
struct Node *ptr,*start,*nptr;
int y;
ptr=(struct Node*)malloc(sizeof(struct Node));
printf("\nenter the information of the first node:");
scanf("%d",&ptr->info);
start=ptr;
while(1){
    printf("\ndo you want to create a new node?(y/n):");
    fflush(stdin);
    scanf("%d",&y);
    if(y==1){
        break;
    }
    nptr=(struct Node*)malloc(sizeof(struct Node));
    printf("\nenter the information of the node:");
    scanf("%d",&nptr->info);
    ptr->link=nptr;
    ptr=nptr;

}

ptr->link=start;
traverse(start);
insert(start);
traverse(start);
insertbeg(&start);
traverse(start);
printf("\nremove from the begining:\n");
dellink(&start);
traverse(start);
printf("\ndelete from the last:");
delend(&start);
traverse(start);
return 0;
}
