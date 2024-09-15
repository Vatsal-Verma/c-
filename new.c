#include <stdio.h>
#include <stdlib.h>

struct node {
    int info;
    struct node *link;
};

void push(struct node **top) {
    struct node *ptr;
    int x;
    ptr = (struct node *)malloc(1 * sizeof(struct node));
    if (ptr == NULL) {
        printf("\nOverflow");
    } else {
        printf("\nelement to be inserted :");
        fflush(stdin);
        scanf("%d", &x);
        ptr->info = x;
        ptr->link = *top;
        *top = ptr;
        display(*top);

    }
}

void pop(struct node **top) {
    int x;

    if (*top == NULL) {
        printf("\nunderflow ");
    } else {
        x = (*top)->info;
        struct node *temp = *top;
        *top = (*top)->link;
        free(temp);
        fflush(stdin);
        printf("\nelement deleted : %d", x);
        display(*top);
    }
}

void display(struct node *top) {
    struct node *temp;
    temp = top;
    printf("\nCurrent stack");
    printf("\n================\n");
    while (temp != NULL) {
        printf(" %d", temp->info);
        fflush(stdin);
        temp = temp->link;
    }
    printf("\n================\n");
}

int main() {
    struct node *top = NULL;
    int choice;
    int k;
    while (1) {
        printf("\t\t\t\t\t==================\n");
        printf("\t\t\t\t\tMAIN MENU\n");
        printf("\t\t\t\t\t1.push\n");
        printf("\t\t\t\t\t2.pop\n");
        printf("\nEnter your choice :\n");
        scanf("%d", &choice);
        if (choice == 1) {
            push(&top);
        } else if (choice == 2) {
            pop(&top);
        } else {
            printf("\nINVALID CHOICE\n");
        }
        printf("\npress 1 to continue\n");
        fflush(stdin);
        scanf("%d", &k);
        if (k != 1)
            break;
    }
    
}
