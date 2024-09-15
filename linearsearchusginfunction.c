#include<stdio.h>
#include<math.h>
int func(int x[],int el,int size){
int f=0;
for(int i=0;i<size;i++){
    if(x[i]==el){
        f=1;
        break;
    }
}
if(f==1){
    return 1;
}
else{
    return -1;
}
}
int main(){
int x[5]={1,2,4,5,6};
int b=func(x,4,5);
if(b==1){
    printf("element has been found");
    }
return 0;
}
