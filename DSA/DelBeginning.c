#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *ptr;
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