#include<stdio.h>
#include<math.h>
int main (){
int f=0;
int x[5]={1,5,2,15,6};
for(int i=0;i<5;i++){
    if(x[i]==1){
        f=1;
        break;
    }
}
if(f==1){
    printf("\nelement found");
}
else
    printf("\nelement not found");
}
