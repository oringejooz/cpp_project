/*
Swarnima Bisht 
500105696
UPES,Dehradun

Create a list with the elements 8,9,11,21,7. Add any element after 21. and add element 2 before 8 and 23 at the last
*/

#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

void insertatbeginning(struct node **head_ref, int new_data){
    struct node* new_node = (struct node*)malloc(sizeof(struct node*));
    new_node->data=new_data;
    new_node->next=(*head_ref);
    (*head_ref)=new_node;
}
void insertafter(struct node* prev_node, int new_data){
    if (prev_node==NULL)
    {
        printf("PREVIOUS NODE CANNOT BE NULL.");
        return ;
    }
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data=new_data;
    new_node->next=prev_node->next;
    prev_node->next=new_node;
}
void insertatlast(struct node **head_ref, int new_data){
    struct node*new_node=(struct node*)malloc(sizeof(struct node));
    struct node*last=*head_ref;
    new_node->data=new_data;
    new_node->next=NULL;
    if (*head_ref==NULL){
        *head_ref=new_node;
        return ;
    }
    while (last->next!=NULL){
        last=last->next;}
    last->next=new_node;
    return ;
    
}
void printlist(struct node* Node){
    while(Node != NULL){
        printf("%d ",Node->data);
        Node=Node->next;
    }
}
int main(){
    struct node*head=NULL;
    insertatbeginning(&head,7);
    insertatbeginning(&head,21);
    insertatbeginning(&head,11);
    insertafter(head->next,99);
    insertatbeginning(&head,9);
    insertatbeginning(&head,8);
    insertatbeginning(&head,2);
    insertatlast(&head,23);
    printlist(head);
}