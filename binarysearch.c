#include<stdio.h>
#include<math.h>
int search(int x[],int el,int size){
int beg=0;
int end=size-1;
while(beg<=end){
    int mid=(beg+end)/2;
    if(x[mid]==el){
        return mid;
    }
    else if(x[mid]<el){
        beg=mid+1;
    }
    else{
        end=mid-1;
    }
}
return -1;
}
int main(){
int x[5]={1,2,3,4,6};                                   // binary searching can only be applied on sorted array.
int b=search(x,89,5);
printf("%d",b);
return 0;
}
