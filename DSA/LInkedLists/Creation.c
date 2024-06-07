//Creation of a linked list

#include <stdio.h>

#include <stdlib.h>



struct node

{

	int data;

	struct node *next;

}*head;



void createList(int n){

	struct node *newnode,*temp;
    head=(struct node*)malloc(sizeof(struct node));

    if(head==NULL){printf("NO MEMORY ALLOCATED");}

	printf("Enter the Data of First NOde = ");

	scanf("%d",&head->data);
    head->next=NULL;
    temp=head;

	for(int i = 2;i<=n;i++)

	{

		newnode=(struct node *)malloc(sizeof(struct node));
        if(newnode==NULL){printf("NO MEMORY ALLOCATED");}

		printf("Enter the element of node %d = ",i);

		scanf("%d",&newnode->data);

        newnode->next=NULL;

		temp->next=newnode;

		temp=temp->next;

	}

	

}



void printList(struct node **headref){

	struct node *temp;

	temp=*headref;

	while(temp!=NULL){

		printf("%d\t",temp->data);

		temp=temp->next;

	}

	

}



int main(){

	createList(5);

	printList(&head);}