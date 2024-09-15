#include<stdio.h>
#include<math.h>
int series(int n){
if(n==0){
    return n;
}
else
return series(n-1);

}
int main(){
int i,n,result;
printf("\nenter the limit:");
scanf("%d",&n);
for(i=5;i<=1;i++){
    result=series(i);
    printf(" %d" ,result);
}
return 0;
}
