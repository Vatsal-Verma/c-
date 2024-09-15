#include<stdio.h>
#include<math.h>
int main(){
int i=10,j=12,k=6;
int n,s=0,a;
int count=0;
for(int e=i;e<=j;e++){
    n=e;
    while(n>0){
        a=n%10;
        s=s*10+a;
        n=n/10;
    }
    if(abs(n-s)%k==0){
        count++;
    }
    s=0;
}
printf("%d",count);
return 0;
}
