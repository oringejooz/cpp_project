#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
}*head,*s,*t;

void insertBeg(int value){
    struct node *temp,*newnode;
    temp=head;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL){printf("NO MEMORY ALLOCATED");}
    else{
        newnode->data=value;
        newnode->next=temp;
        head=newnode;

    }

}
void insertLast(int value){
    struct node *temp,*newnode;
    temp=head;
    
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL){printf("NO MEMORY ALLOCATED");}

    else{
        newnode->data=value;
        newnode->next=NULL;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
    }
    

}

void insertAfter(int value,int after){
    struct node *temp,*newnode;
    temp=head;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL){printf("NO MEMORY ALLOCATED");}
    else{
        newnode->data=value;
        newnode->next=NULL;
        while(temp->data!=after){
            temp=temp->next;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }
    
}

void insertBefore(int value,int before){
    struct node *temp,*newnode,*prev;
    temp=head;
    prev=head;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL){printf("NO MEMORY ALLOCATED");}
    else{
        newnode->data=value;
        newnode->next=NULL;
        
        while(temp->data!=before){
            temp=temp->next;
        }
        newnode->next=temp;
        while(prev->next!=temp){
            prev=prev->next;
        }
        prev->next=newnode;
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
    head=(struct node*)malloc(sizeof(struct node));
    s=(struct node*)malloc(sizeof(struct node));
    t=(struct node*)malloc(sizeof(struct node));
    head->data=5;
    s->data=7;
    t->data=3;
    head->next=s;
    s->next=t;
    t->next=NULL;
    printlist();
    insertBeg(22);
    printlist();
    insertLast(35);
    printlist();
    insertAfter(67,7);
    printlist();
    insertBefore(10,7);
    printlist();

}
