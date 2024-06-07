#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
}*head,*s,*t,*f,*fif;

void deletebeg(){
    struct node *temp;
    temp=head;
    head=head->next;
    temp->next=NULL;
    free(temp);
}

void deletelast(){
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

void deleteAfter(int after){
    struct node *temp,*prev;
    temp=head;
    while(temp->data!=after){ 
        temp=temp->next;
    }
    prev=temp;
    temp=temp->next;
    prev->next=temp->next;
    temp->next=NULL;
    free(temp);
}


void deleteBefore(int before){
    struct node *temp,*prev,*ptr;
    temp=head;
    prev=head;
    ptr=head;
    while(temp->data!=before){
        temp=temp->next;
    }
    while(prev->next!=temp){
        prev=prev->next;
    }
    while(ptr->next!=prev){
        ptr=ptr->next;
    }
    ptr->next=temp;
    prev->next=NULL;
    free(prev);
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
    f=(struct node*)malloc(sizeof(struct node));
    fif=(struct node*)malloc(sizeof(struct node));
    head->data=5;
    s->data=7;
    t->data=3;
    f->data=8;
    fif->data=10;
    head->next=s;
    s->next=t;
    t->next=f;
    f->next=fif;
    fif->next=NULL;
    printlist();
    deleteAfter(7);
    printlist();
    deleteBefore(8);
    printlist();
}
