#include<stdio.h>
#include<math.h>
int fact(int n,int result){
    if(n==1||n==0){
        return result;
    }
    else{
        return fact(n-1,n*result);
    }
}
int main(){
    int result;
    result=fact(6,1);
    printf("\nresult is %d",result);
    return 0;
}
