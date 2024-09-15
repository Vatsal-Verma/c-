#include<stdio.h>

int main(){
    int n,*j,m;
    printf("\nenter the number of elements to be entered:");
    scanf("%d",&n);
    m=n;
    j=(int *)malloc(n*sizeof(int));
    printf("\nmemory has been allocated");
    for(int i=0;i<n;i++){
        printf("\nenter the x[%d] element:",i);
        scanf("%d",(j+i));
    }
    printf("\n[");
    for(int i=0;i<n;i++){
        printf("%d,",*(j+i));
    }
    printf("]");
    printf("\nenter the new allocated memory:");
    scanf("%d",&n);
    j=realloc(j,n);
    for(int i=m;i<n;i++){
        printf("\nenter the x[%d] element:",i);
        scanf("%d",(j+i));
    }
    printf("\n[");
    for(int i=0;i<n;i++){
        printf("%d,",*(j+i));
    }
    printf("]");

   return 0;
}
