#include<stdio.h>
#include<math.h>
#define size 100
typedef struct cque{
    int x[size];
    int front;
    int rear;
};
void ini(struct cque *a){
    a->rear=-1;
    a->front=-1;
}
void isempty(struct cque *a){
    if(a->rear==-1&&a->front==-1){
        printf("\nque is empty");
    }
}
void isfull(struct cque *a){
    if((a->rear+1)%size==a->front){
        printf("\nque is full");
    }
}
void enque(struct cque *a,int el){
    int x;
    if((a->rear+1)%size==a->front){
        printf("\nunderflow");
    }
    else if(a->rear==-1&&a->front==-1){
        a->front=0;
        a->rear=0;
        a->x[a->rear]=el;


    }
    else{
        a->rear=(a->rear+1)%size;
        a->x[a->rear]=el;

    }
}
void main(){
struct cque a,*s;
int el,n;
s=&a;
ini(s);
printf("\nvalue of front:%d",s->front);
printf("\nvalue of rear:%d",s->rear);
isfull(s);
isempty(s);
printf("\nenter the number of elements to be inserted:");
scanf("%d",&n);
for(int i=1;i<=n;i++){
printf("\nenter the element to be entered:");
scanf("%d",&el);
enque(s,el);
}
printf("\n[");
for(int i=s->front;i<=s->rear;i++){
    printf("%d,",s->x[s->rear]);
}
printf("]");
printf("\nvalue of front:%d",s->front);
printf("\nvalue of rear:%d",s->rear);

}
