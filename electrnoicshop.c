#include<stdio.h>
#include<math.h>
int func(int key[],int dri[],int n,int m,int b){
    int bus;
    int y[n];
    int max;
    int new;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            max=key[i]+dri[j];
            if(max<=b){
                for(int i=0;i<n;i++){
                    y[i]=max;
                }
             }
            }
        }
    new=y[0];
    for(int i=0;i<n;i++){
        if(max<y[i]){
            max=y[i];
        }
    }
    if(max<b)
    return max;
    else {
    return -1;
    }
}

void input(int x[],int n){
    for(int i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
}
int main(){
    int b, n, m;
    int k;
    scanf("%d %d %d",&b,&n,&m);
    int key[n];
    input(key,n);
    int dri[m];
    input(dri,m);

    k=func(key,dri,n,m,b);
    printf("%d",k);
   return 0;
}
