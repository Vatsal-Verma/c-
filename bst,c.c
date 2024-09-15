#include<stdio.h>
#include<conio.h>

typedef struct Node{
    struct Node *left;
    struct Node *right;
    int info;
}Node;

int main(){
    int ch;
    struct Node *root,*p,*q,*ptr,*nptr;
    root=NULL;
    do{
    ptr = (struct Node*)malloc(sizeof(struct Node));
    printf("\n enter the information:");
    scanf("%d",&ptr->info);
    ptr->left-NULL;
    ptr->right=NULL;
    if(root==NULL){
        root=ptr;
        nptr=ptr;
    }
    else{
        p=root;
        while(p!=NULL){
            if(ptr->info > p->info){
                q=p;
                p=p->right;
            }
            else{
                q=p;
                p=p->left;
            }
        }
        if(ptr->info > q->info){
            q->right=ptr;

        }
        else
        {
            q->left=ptr;
        }
        }
        printf("\n do you want to create another level? (y/n):");
        scanf("%d",&ch);
        if(ch==1){
            break;
        }
    }

        return 0;
    }

