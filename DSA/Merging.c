/*Merging 2 Linked Lists
Swarnima Bisht
SAP ID- 500105696
*/

#include<stdio.h>
#include<stdlib.h>


struct node
{
	int data;
	struct node* next;
};

void printlist(struct node **headref){
    struct node *temp;
    temp=*headref;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void createList(int n,struct node **headref){
    struct node *head,*temp,*newnode;
    head=*headref;
    if(head==NULL){
        printf("NO MEMORY ALLOCATED");

    }
    else{
        printf("Enter the value of node 1 = ");
        scanf("%d",&head->data);    
    }
    head->next=NULL;
    temp=head;
    for(int i=2;i<=n;i++){
        newnode=(struct node *)malloc(sizeof(struct node));
        if(newnode==NULL){
            printf("NO MEORY ALLOCATED");

        }
        else{
            printf("ENter value of node %d = ",i);
            scanf("%d",&newnode->data);
                temp->next=newnode;
                newnode->next=NULL;
                temp=temp->next;
            
        }


    }

}

void mergelist(struct node **headref1,struct node **headref2){
    struct node *temp1,*temp2;
    temp1=*headref1;
    temp2=*headref2;
    while(temp1->next!=NULL){
        temp1=temp1->next;
    }
    temp1->next=temp2;
    
}

int main()
{
    struct node *head1,*head2;
    head1=(struct node *)malloc(sizeof(struct node));
    head1->next=NULL;
    head2=(struct node *)malloc(sizeof(struct node));
    head2->next=NULL;
    createList(3,&head1);
    createList(2,&head2);
    printlist(&head1);
    printlist(&head2);
    mergelist(&head1,&head2);
    printlist(&head1);
    
    


}