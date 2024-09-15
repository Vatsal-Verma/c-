#include<stdio.h>
#include<math.h>
#define size 100
typedef struct que{
    int x[size];
    int front;
    int rear;
};
void ini(struct que *a){
    a->front=0;
    a->rear=-1;
}
void isEmpty(struct que *a){
    if(a->front==0&&a->rear==-1){
        printf("\nQue is empty right now");
    }
}
void push(struct que *a,int el){
    if((a->rear-a->front)+1==size-1){
        printf("\nQue is Full can't enter any more data");
    }
    else{
        a->x[a->rear+1]=el;
        a->rear=a->rear+1 ;
    }
}
void isFull(struct que *a){
    if((a->rear-a->front)+1==size-1){
        printf("\nQue is full right now");
    }
}
void pop(struct que *a){
    int c;
    if(a->rear==-1){
        printf("\nQue is empty right now");
    }
    else{
        c=a->x[a->front];
        printf("\npoped value is:%d",c);
        a->front=a->front+1;
    }
}
int main(){
    struct que *s,a;
    int el;
    int y,n;
    s=&a;
    ini(s);
    printf("\nvalue of front:%d",s->front);
    printf("\nvalue of rear :%d",s->rear);
    isEmpty(s);
    isFull(s);
    printf("\nenter the number of elements to be pushed:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
    printf("\nenter the element to be pushed:");
    scanf("%d",&el);
    push(s,el);
    printf("\nvalue of front:%d",s->front);
    printf("\nvalue of rear :%d",s->rear);
    }
    printf("\nQueue Is :\n");
    printf("[");
    for(int j=0;j<n;j++){
        printf("%d,",s->x[j]);
    }
    printf("]");
    printf("\npress 1 if you want to preform Dequeue operation");
    scanf("%d",&y);
    if(y==1){
    pop(s);
    printf("\nvalue of front:%d",s->front);
    printf("\nvalue of rear :%d",s->rear);
    }
   printf("\n");
   printf("[");
   for(int k=s->front;k<=s->rear;k++){
       printf("%d,",s->x[k]);
   }
   printf("]");
    return 0;
}
