#include<stdio.h>
#include<stdlib.h>
int main(){
int a=10;
int *b;
int **c;
b=&a;
c=&b;
printf("%d\n",*b);
printf("%d",*c);
return 0;
}
