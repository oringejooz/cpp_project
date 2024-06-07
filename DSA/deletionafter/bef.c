//Deleting a node after another node
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
}*head;

void createList(int n){
    struct node *newnode,*temp;
    int data,i;
    head=(struct node*)malloc(sizeof(struct node));
    if(head==NULL){
        printf("No memory allocated\n");
    }
    printf("Enter the data of first node = ");
    scanf("%d",&data);
    head->data=data;
    head->next=NULL;
    temp=head;
    for(i=2;i<=n;i++){
        newnode=(struct node*)malloc(sizeof(struct node*));
        if(newnode==NULL){
            printf("No memory allocated");
        }
    }

}

void deleteafter(struct node **head_ref,int after){
    struct node *ptr,*temp;
    ptr=NULL;
    if(head_ref==NULL){
        printf("NO MEMORY ALLOCATED");
    }
    temp=head_ref;
    while(temp->data!=after){
        temp=temp->next;
        if(temp=)
    }
}