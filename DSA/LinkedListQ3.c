//WAP to take and print the elements of a linkedlist.Take Input from the user
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *ptr;
};

void printlist(struct node *n){
    while(n!=NULL){
        printf("%d\t",n->data);
        n=n->ptr;
    }
}

int main(){
    struct node *h,*s,*t,*u;
    h=NULL;
    s=NULL;
    t=NULL;
    u=NULL;
    h=(struct node*)malloc(sizeof(struct node));
    s=(struct node*)malloc(sizeof(struct node));
    t=(struct node*)malloc(sizeof(struct node));
    u=(struct node*)malloc(sizeof(struct node));
    h->ptr=s;
    h->data=5;
    s->data=10;
    s->ptr=t;
    t->data=15;
    t->ptr=u;
    u->data=20;
    u->ptr=NULL;
    printlist(h);
}
