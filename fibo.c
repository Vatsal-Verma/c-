#include<stdio.h>
#include<math.h>
int main(){
int f1=0,f2=1,f3,i,n;
printf("\nenter the limit:");
scanf("%d",&n);
if(n==1){
    printf(",%d, ",f1);
}
else if(n==2){
    printf(",%d, ",f2);
}
else{
    printf(",%d ,%d",f1,f2);
    for(i=2;i<n;i++){
        f3=f1+f2;
        f1=f2;
        f2=f3;
        printf(",%d ,",f3);
    }
}
return 0;
}
