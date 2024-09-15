#include<stdio.h>
#include<math.h>
#define size 10
struct stack{
int x[size];
int top;
};
void ini(struct stack *a){
    a->top=-1;
}
void isempty(struct stack *a){
    if(a->top==-1){
        printf("\nstack is empty");
    }
}
void main(){
struct stack a,*s;
s=&a;
ini(s);
printf("\n value of top:%d",s->top);
isempty();
getch();
}
