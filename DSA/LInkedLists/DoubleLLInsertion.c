#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next,*prev;
}*head;//Global declaration
//CREATION

void CreateList(int n){
 struct node *newnode,*temp;
 head=(struct node *)malloc(sizeof(struct node));
 if(head==NULL){printf("NO MEMORY ALLOCATED");}
 printf("ENter data of first node = ");
 scanf("%d",&head->data);
 head->next=NULL;
 head->prev=NULL;
 temp=head;
 for(int i=2;i<=n;i++){
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL){printf("NO MEMORY ALLOCATED");}
    printf("ENTER DATA OF NODE %d = ",i);
    scanf("%d",&newnode->data);
    temp->next=newnode;
    newnode->next=NULL;
    newnode->prev=temp;
    temp=temp->next;
 }

}

void insertBeginning(int value){
    struct node *temp,*newnode;
    temp=head;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->prev=NULL;
    temp->prev=newnode;
    newnode->next=temp;
    head=newnode;

}

void inserLast(int value){
    struct node *temp,*newnode;
    temp=head;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->prev=NULL;
    newnode->next=NULL;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    newnode->prev=temp;
    temp->next=newnode;

}

void insertAfter(int after,int value){
    struct node *temp,*newnode;
    temp=head;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->prev=NULL;
    newnode->next=NULL;
    while(temp->data!=after){
        temp=temp->next;
    }
    newnode->prev=temp;
    newnode->next=temp->next;
    temp->next=newnode;
    temp=temp->next;
    temp->prev=newnode;
}

void insertBefore(int before,int value){
    struct node *temp,*newnode,*prev;
    temp=head;
    prev=head;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->prev=NULL;
    newnode->next=NULL;
    while(temp->data!=before){
        temp=temp->next;
    }
    while(prev->next!=temp){
        prev=prev->next;
    }
    newnode->next=temp;
    newnode->prev=prev;
    temp->prev=newnode;
    prev->next=newnode;

}

void printlist(){
    struct node *temp;
    temp=head;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

int main(){
    CreateList(3);
    printlist();
    insertBeginning(300);
    printlist();
    inserLast(56);
    printlist();
    insertAfter(6,80);
    printlist();
    insertBefore(6,90);
    printlist();

}
