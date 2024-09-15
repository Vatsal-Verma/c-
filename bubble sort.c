#include<stdio.h>
#include<math.h>
void main(){
int arr[10]={3,2,1};
int i,j,c;
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
                if(arr[j]>arr[j+i]){
                    c=arr[j];
                    arr[j]=arr[j+i];
                    arr[j+i]=c;
                }
            }
        }
for(i=0;i<3;i++){
    printf("%d,",arr[i]);
}
}
