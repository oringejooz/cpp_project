#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *prev,*next;
};

struct node *CreateList(int n){
    struct node *head=(struct node *)malloc(sizeof(struct node));
    if(head==NULL){
        printf("NO MEMORY ALLOCATED");
        exit(1);
    }
    struct node *temp,*newnode;
    printf("Enter value of node 1 = ");
    scanf("%d",&head->data);
    temp=head;
    head->prev=NULL;
    head->next=NULL;
    for(int i=2;i<=n;i++){
        newnode=(struct node*)malloc(sizeof(struct node));
        if(newnode==NULL){
        printf("NO MEMORY ALLOCATED");
        exit(1);
        }
    
            printf("Enter data of node %d = ",i);
            scanf("%d",&newnode->data);
            temp->next=newnode;
            newnode->next=NULL;
            newnode->prev=temp;
            temp=temp->next;
    }
    return head;
}

struct node *Reversal(struct node *head){
    struct node *temp,*ptr;
    ptr=NULL;
    temp=head;
    while(temp!=NULL){
        ptr=temp->prev;
        temp->prev=temp->next;
        temp->next=ptr;
        temp=temp->prev;
    }
    if(ptr!=NULL){
        head=ptr->prev;
    }
    return head;
}

void printList(struct node *head){
    struct node *temp;
    temp=head;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

int main(){
    struct node *List1;
    List1=CreateList(5);
    printList(List1);
    List1=Reversal(List1);
    printList(List1);
}