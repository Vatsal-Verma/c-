#include<stdio.h>
#include<math.h>
struct node{
	int coef,exp;
	struct node *link;
};
traverse(struct node *start){
	struct node *temp;
	int sum=0,x;
	temp=start;
	printf("\n x:");
	scanf("%d",&x);
	while(temp!=NULL){
		sum=sum+(temp->coef)*(pow(x,temp->exp));
		temp=temp->link;
	}
	printf("%d",sum);
}
int main(){
struct node *ptr,*nptr,*start;
int ch;
	ptr=(struct node*)malloc(1*sizeof(struct node));
printf("enter coefficient part:");
fflush(stdin);
scanf("%d",&ptr->coef);
printf("enter exponent part:");
fflush(stdin);
scanf("%d",&ptr->exp);
start=ptr;
printf("want to new node if yes  then press 1:");
fflush(stdin);
scanf("%d",&ch);
while(ch==1){
	nptr=(struct node*)malloc(1*sizeof(struct node));
printf("enter coefficient part:");
fflush(stdin);
scanf("%d",&nptr->coef);
printf("enter exponent part:");
fflush(stdin);
scanf("%d",&nptr->exp);
ptr->link=nptr;
ptr=nptr;
printf("want to new node if yes  then press 1:");
fflush(stdin);
scanf("%d",&ch);
}
ptr->link=NULL;
traverse(start);
}
