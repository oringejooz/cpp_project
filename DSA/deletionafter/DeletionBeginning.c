//Delete beginning

#include <stdio.h>

#include <stdlib.h>



struct node{

	int data;

	struct node *next;

}*head;



void createlist(int n){

	struct node *newnode,*temp;

	head=(struct node *)malloc(sizeof(struct node));

	if(head==NULL){printf("NO MEMORY ALLOCATED");}

	else{

		printf("ENter Data for First NODE = ");

		scanf("%d",&head->data);

		head->next=NULL;

		temp=head;

		for(int i=2;i<=n;i++){

			newnode=(struct node*)malloc(sizeof(struct node));

			if(newnode==NULL){printf("NO MEMORY ALLOCATED");}

			else{

				printf("ENter value of node %d = ",i);

				scanf("%d",&newnode->data);

				newnode->next=NULL;

				temp->next=newnode;

				temp=temp->next;

				

			}

		}

	}

}

void printList(struct node **headref){



	struct node *temp;



	temp=*headref;



	while(temp!=NULL){



		printf("%d\t",temp->data);



		temp=temp->next;



	}



	printf("\n");



}



void DeleteFirst(struct node *head){

	struct node *temp;

	if(head==NULL){printf("MEMORY NOT ALLOCATED");}

	temp=head;

	head=head->next;

	free(temp);

	

}



int main(){

	

	createlist(3);

	printList(&head);

	DeleteFirst(head);

	printList(&head);

}