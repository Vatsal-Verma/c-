#include<stdio.h>
#include<math.h>
void sort(int x[]){
    int c;
for(int i=0;i<5;i++){
    for(int j=i+1;j<5;j++){
        if(x[i]>x[j]){
            c=x[i];
            x[i]=x[j];
            x[j]=c;
        }
    }
}
printf("\nsorted array was:");
for(int i=0;i<5;i++){
    printf("%d,",x[i]);
}
}
void input(){
    int x[5],med,mean,i,sum=0;
printf("\nenter the numbers:");
for(i=0;i<5;i++){
    scanf("%d",&x[i]);
}
printf("\nsorted array was:");
for(i=0;i<5;i++){
    printf("%d,",x[i]);
}
sort(x);
for(i=0;i<5;i++){
   sum=sum+x[i];
}

med=x[(5/2)];
mean=sum/5;
printf("\n%d",mean);
printf("\n%d",med);

}
int main(){
    input();
    return 0;
}
