//Linked Lists
#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
void printlist(struct Node *n){
    while(n!=0){
        printf("%d\t",n->data);
        n=n->next;
    }
}
int main(){
    struct Node *head,*second,*third;
    head=NULL;
    second=NULL;
    third=NULL;
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    head->next=second;
    head->data=8;
    second->data=10;
    second->next=third;
    third->data=12;
    third->next=NULL;
    printlist(head);
}
