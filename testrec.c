#include<stdio.h>
#include<math.h>
void tower(int n,char a,char b,char c){
    if(n==1){
        printf("\t%c-->%c",a,c);
    }
    else{
        tower(n-1,a,c,b);
        tower(1,a,b,c);
        tower(n-1,b,a,c);
    }
}
void main(){
    char a,b,c;
    int n;
    printf("\nenter the number of discs:");
    scanf("%d",&n);
    tower(n,'A','B','C');
}
