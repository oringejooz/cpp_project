#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
}*head;

void insert(int data){
    struct node *newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=data;
    newNode->next=NULL;
    if(head==NULL){
        head=newNode;
    }
    else{
        struct node *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
    }
}

void insertLast(int data){
    struct node *ptr = (struct node*)malloc(sizeof(struct node)),*temp;
    ptr->data=data;
    ptr->next=NULL;
    temp=head;
    while(temp->next!=0){
        temp=temp->next;
    }
    temp->next=ptr;
}

void displaylist(){
    struct node *temp=head;
    if(head==NULL){
        printf("List is empty \n");

    }
    else{
        while(temp!=NULL){
            printf("%d\t",temp->data);
            temp=temp->next;
        }
    }
    printf("\n");
}

int main(){
    insert(3);
    insert(24);
    insert(4);
    displaylist();
    insertLast(44);
    displaylist();
}