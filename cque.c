#include<stdio.h>
#define size 100
typedef struct cqueue{
	int front, rear,x[size];
}cque;
void initialise(cque *cq){
	cq->front=-1;
	cq->rear=-1;
}
int isempty(cque *cq){
	if(cq->front==-1&&cq->rear==-1){
		return 1;

	}
	return 0;
}
int isfull(cque *cq){
	if((cq->rear+1)%size==cq->front){
		return 1;

	}
	return 0;
}
void display(cque *cq){
	int i;
	printf("\ncurrent queue");
	printf("\n================\n");
	for(i=cq->front;i<=cq->rear;i++){
		fflush(stdin);
		if(i==-1)
		{

		}
		else
		printf(" %d ",cq->x[i]);
	}
	printf("\n================\n");
}
void enque(cque *cq){
	int element;
	if(isfull(cq)){
		printf("\noverflow\n");
	}
	else if(isempty(cq)){
		printf("\nenter element to be inserted\n");
		fflush(stdin);
		scanf("%d",&element);
		cq->front=0;
		cq->rear=0;
		cq->x[cq->rear]=element;
		printf("\nelement inserted \n");
			display(cq);
	}
	else{
			printf("\nenter element to be inserted\n");
		fflush(stdin);
		scanf("%d",&element);
		cq->rear=(cq->rear+1)%size;
		cq->x[cq->rear]=element;
			printf("\nelement inserted \n");
				display(cq);
	}
}
void deque(cque *cq){
	int element;
	if(isempty(cq)){
		printf("\nunderflow\n");
	}
	else if(cq->front==cq->rear){
	element=cq->x[cq->front];
	cq->front=-1;
	cq->rear=-1;
	printf("\ndeleted element: %d",element);
	fflush(stdin);
		display(cq);
	}
	else{
			element=cq->x[cq->front];
			cq->front=(cq->front+1)%size;
			printf("\ndeleted element: %d",element);
			fflush(stdin);
			display(cq);
	}
}

void main(){
	cque a,*cq;
	int choice,k;
	cq=&a;
	initialise(cq);

	printf("\n front : %d  rear : %d\n",cq->front,cq->rear);
	while(1){
	printf("\n\t\t\t\t=======main menu=======");
	printf("\n\t\t\t\t=======1. enque=======");
	printf("\n\t\t\t\t=======2. deque=======");
	printf("\n\t\t\t\t=====enter choice :====");
	scanf("%d",&choice);
	if(choice==1)
	{
	enque(cq);
	printf("\n front : %d  rear : %d\n",cq->front,cq->rear);
}
else{

	deque(cq);
	printf("\n front : %d  rear : %d\n",cq->front,cq->rear);
}
	printf("\npress 1 to continue:\n");
	fflush(stdin);
	scanf("%d",&k);
	if(k!=1)
	break;
}
}
