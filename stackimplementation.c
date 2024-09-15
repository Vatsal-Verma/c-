#include<stdio.h>
#include<math.h>
#define size 10
struct stack{
  int x[size];
  int top;
};
void ini(struct stack *a){
    a->top=-1;               //a.top
}
void isEmpty(struct stack *a){
    if(a->top==-1){
        printf("\n empty");
    }
}
void isFull(struct stack *a){
    if(a->top==size-1){
        printf("\nfull stack");
    }
}
void push(struct stack *a,int el){
    if(a->top==size-1){
        printf("\noverflow");
    }
    else{
        a->x[a->top+1]=el;
        a->top=a->top+1;
    }
}
void pop(struct stack *a,int el){
    int c;
    if(a->top==-1){
        printf("\nunderflow");
    }
    else{
        c=a->x[a->top];
        a->top=a->top-1;
        printf("\n%d",c);
    }

}
int main(){
    struct stack a,*s;
    int el;
    s=&a;
    ini(s);
    isEmpty(s);
    printf("\nenter the element to be pushed:");
    scanf("%d",&el);
    push(s,el);
    printf("\nvalue of top is:%d",s->top);
    printf("\nenter the element to be poped:");
    scanf("%d",&el);
    pop(s,el);
    printf("\nvalue of top is:%d",s->top);
    return 0;
}







