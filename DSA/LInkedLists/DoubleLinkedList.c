#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next,*prev;
}*head;//Global declaration
//CREATION

void CreateList(int n){
 struct node *newnode,*temp,*prev;
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

int main(){
    CreateList(3);
    printlist();
}