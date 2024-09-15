#include<stdio.h>
#include<math.h>
int fibo(int n){
    if(n<=1){
        return n;
    }
    else{
        return fibo(n-1)+fibo(n-2);
    }
}
int main(){
    int i,n,result;
    printf("\nenter the limit:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        result=fibo(i);
        printf(" %d ",result);
    }
return 0;
}
