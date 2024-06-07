/*
Swarnima Bisht 
500105696
UPES,Dehradun

Create a list with the elements 8,9,11,21,7. Add any element after 21. and add element 2 before 8 and 23 at the last
*/

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
}*head;

void createlist(int n){
    struct Node *newNode,*temp;
    int data,i;
    head = (struct Node *)malloc(sizeof(struct Node));
    if(head==NULL){
        printf("Memory not allocated ");
        exit(0);
    }
    printf("ENter first element = ");
    scanf("%d",&data);
    head->data=data;
    head->next=NULL;
    temp=head;
    for(i=2,i<=n,i++){
        newNode=(struct Node*)malloc(sizeof(struct Node*));
        if(newNode == NULL){
            printf("Memory could not be allocated !!!");
            break;
        }
        printf("ENter element of node %d = ",i);
        scanf("%d",&data);
        newNode->data=data;
        newNode->next=NULL;

        temp->next=newNode;
        temp=temp->next;
    }
}

void insertNewNodeatEnd(int data){
    struct Node *newNode,*temp;
    newNode = (struct Node*)malloc(sizeof(struct Node*));
    if(newNode==NULL){
        printf("Memory not allocated ");
        exit(0);
    }
    else{
        newNode->data=data;
        newNode->next=NULL;
        temp=head;
        while(temp!=NULL && temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
    }
}

void insertatbeginning(struct Node **head_ref, int new_data){
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node*));
    new_node->data=new_data;
    new_node->next=(*head_ref);
    (*head_ref)=new_node;
}

void insertAfter(){
    struct Node *newNode,
}


int main(){
    int n=5;
    createlist(n);
    insertNewNodeatEnd(23);


}



