#include<stdio.h>
#include<math.h>
#define size 100
typedef struct que{
int x[size];
int rear;
int front;
};
void ini(struct que *a){
    a->rear=-1;
    a->front=0;
}
void isempty(struct que *a){
    if(a->rear==-1&&a->front==0){
        printf("\nque is empty");
    }
}
void isfull(struct que *a){
    if((a->rear-a->front)+1==size-1){
        printf("\nque is full");
    }
}
void push(struct que *a,int el){
    if((a->rear-a->front)+1==size-1){
        printf("\noverflow");
    }
    else{
        a->x[a->rear+1]=el;
        a->rear=a->rear+1;
    }
}
void pop(struct que *a){
    int c;
    if(a->rear==0&&a->front==-1){
        printf("\nunderflow");
    }
    else{
        c=a->x[a->front];
        a->front=a->front+1;
        printf("\npopped element is :%d",c);
    }
}
void main(){
struct que a,*s;
int el,y,n;
s=&a;
ini(s);
printf("\nvalue of rear:%d",s->rear);
printf("\nvalue of front:%d",s->front);
isempty(s);
isfull(s);
printf("\nenter the number of elements to be pushed:");
scanf("%d",&n);
for(int i=1;i<=n;i++){
printf("\nenter the element to be pushed:");
scanf("%d",&el);
push(s,el);
}
printf("\n[");
for(int i=1;i<n;i++){
    printf("%d,",s->x[i]);
}
printf("]");
printf("\ndo you want to perform deque?:");
scanf("%d",&y);
if(y==1){
    pop(s);
}
printf("\n[");
for(int i=s->front;i<n;i++){
    printf("%d,",s->x[i]);
}
printf("]");
getch();
}
