#include<stdio.h>
#include<math.h>
void main(){
int x[100],sum,f=0;
printf("\nenter the array:");
for(int i=0;i<5;i++){
    scanf("%d",&x[i]);
}
for(int i=0;i<5;i++){
    sum=0;
    sum=sum+x[i];
    if(sum==x[i]){
        f=1;
        break;
    }
}
if(f==1)
printf("\ntrue");
else
    printf("\nfalse");
}
