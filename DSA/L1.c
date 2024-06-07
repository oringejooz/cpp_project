#include<stdio.h>
#include<stdlib.h>
//Linked List Creation and Traversal
struct node{
    int data;
    struct node *next;
}*head;

void createList(int data){
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

//Insert At Beginning
void InsertBeginning(int value){
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=value;
    ptr->next=head;
    head=ptr;
    
}

void display(){
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
void insertEnd(int value){
    struct node *ptr=(struct node*)malloc(sizeof(struct node)),*temp;
    ptr->data=value;
    ptr->next=NULL;
    temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=ptr;
}



int main(){
    
    createList(10);
    createList(20);
    createList(40);
    display();
    InsertBeginning(3);
    display();
    insertEnd(7);
    display();
}