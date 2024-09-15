#include<stdio.h>
#include<math.h>
int search(int x[],int beg,int end,int el,int size){
if(beg<=end){
    int mid=(beg+end)/2;
    if(el==x[mid]){
        return mid;
    }

else{
    if(el>x[mid]){
        search(x,mid+1,end,el,size);
    }
   else
        search(x,beg,mid-1,el,size);

}
}
return -1;
}
int main(){
int x[5]={1,2,3,4,6};                                   // binary searching can only be applied on sorted array.
int b=search(x,0,4,4,5);
printf("%d",b);
return 0;
}

