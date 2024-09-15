#include<stdio.h>
#include<math.h>
#define size 10
struct que{
int x[size];
int rear;
int front;
};
void ini(struct que *s){
s->front=0;
s->rear=-1;
}
void isempty(struct que *s){
if((s->rear-s->front)+1==0)
    printf("\nque is empty");
}
void isfull(struct que *s){
if(s->rear=size-1){
    printf("\nque is full");
}
}
void enque(struct que *s){
    int a;
    printf("\nenterd the value to be entered");
    scanf("%d",&a);
    if(s->rear==size-1){
        printf("\nque is full");
    }
    else{
        s->rear=s->rear+1;
        s->x[s->rear]=a;
    }
}
void deque(struct que *s){
    int y;
    if((s->front-s->rear)+1==0){
        printf("\nque is empty");
    }
    else{
        y=s->x[s->rear];
        s->rear=s->rear-1;
        printf("\ndque element is :%d",y);
    }
}

int main(){
struct que a,*s;
s=&a;
ini(s);
isempty(s);
isfull(s);
enque(s);
printf("\n[");
 for(int k=s->front;k<=s->rear;k++){
       printf("%d,",s->x[k]);
   }
printf("]");


return 0;
}
