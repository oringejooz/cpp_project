#include <stdio.h>
#include <stdlib.h>

struct Node{
    int coeff;
    int exp;
    struct Node*ptr;
};

void CreateList(struct Node **headref){
    struct Node* head,*temp,*newnode;
    int i = 0;
    head=*headref;
    if(head==NULL){
        printf("NO MEMORY ALLOCATED");
    }
    else{
        printf("Enter coefficient = ");
        scanf("%d",&head->coeff);
        printf("Enter power = ");
        scanf("%d",&head->exp);
        head->ptr=NULL;
        temp=head;
        while(i!=1){
            newnode=(struct Node *)malloc(sizeof(struct Node));
            if(newnode==NULL){
            printf("NO MEMORY ALLOCATED");
            }
            printf("Enter coefficient = ");
            scanf("%d",&newnode->coeff);
            printf("Enter power = ");
            scanf("%d",&newnode->exp);
            temp->ptr=newnode;
            newnode->ptr=NULL;
            temp=temp->ptr;
            printf("Enter 0 to add more terms 1 to stop = ");
            scanf("%d",&i);
        }
    }
    

}

void display(struct Node **headref){
    struct Node*temp;
    temp=*headref;
    if(temp==NULL){
        printf("NO MEMORY ALLOCATED");
    }
    else{
        while(temp!=NULL){
            printf("%d^%d",temp->coeff,temp->exp);
            temp=temp->ptr;
        }
    }

}

int main(){
    struct Node *head1,*head2;
    head1=(struct Node *)malloc(sizeof(struct Node));
    head2=(struct Node *)malloc(sizeof(struct Node));
    CreateList(&head1);
    CreateList(&head2);
    display(&head1);
    
}