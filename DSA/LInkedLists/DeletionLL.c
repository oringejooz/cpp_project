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

void printlist(){
    struct node *temp;
    temp=head;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void DeleteBeginning(){
    struct node *temp;
    temp=head;
    head=head->next;
    head->prev=NULL;
    free(temp);
}

void DeleteLast(){
    struct node *temp,*prev;
    temp=head;
    prev=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    while(prev->next!=temp){
        prev=prev->next;
    }
    prev->next=NULL;
    free(temp); 

}

void DeleteAfter(int after){
    struct node *temp,*prev;
    temp=head;
    while(temp->data!=after){
        temp=temp->next;
    }
    prev=temp;
    temp=temp->next;
    prev->next=temp->next;
    prev=prev->next;
    prev->prev=temp->prev;
    temp->prev=NULL;
    temp->next=NULL;
    free(temp);
}

void DeleteBefore(int before){
    struct node *temp,*prev,*ptr;
    temp=head;
    while(temp->data!=before){
        temp=temp->next;
    }
    prev=temp->prev;
    temp->prev=prev->prev;
    ptr=prev;
    prev=prev->prev;
    prev->next=temp;
    ptr->next=NULL;
    ptr->prev=NULL;
    free(ptr);

}

int main(){
    CreateList(5);
    printlist();
    DeleteBeginning();
    printlist();
    DeleteLast();
    printlist();
    DeleteAfter(3);
    printlist();
    DeleteBefore(4);
    printlist();
}