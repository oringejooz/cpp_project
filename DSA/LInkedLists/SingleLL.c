#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *createList(int n){
    struct node *head,*temp,*newnode;
    int data;
    head=(struct node*)malloc(sizeof(struct node));
    if(head==NULL){
        printf("NO MEMORY ALLOCATED");
        exit(1);
    }
    printf("Enter data of node 1 = ");
    scanf("%d",&data);
    head->data=data;
    head->next=NULL;
    temp=head;
    for(int i=1;i<n;i++){
        newnode=(struct node*)malloc(sizeof(struct node));
        if(newnode==NULL){
        printf("NO MEMORY ALLOCATED");
        exit(1);
        }
        else{
            printf("Enter data of node %d = ",i+1);
            scanf("%d",&newnode->data);
            temp->next=newnode;
            newnode->next=NULL;
            temp=temp->next;
        }
    }
    return head;
}

struct node *insertion_at_beginning(struct node *head,int value){
    struct node *temp,*newnode;
    if(head==NULL){
        printf("NO MEMORY ALLOCATED");
        exit(1);
    }
    temp=head;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL){
        printf("NO MEMORY ALLOCATED");
        exit(1);
    }
    newnode->data=value;
    newnode->next=temp;
    head=newnode;
    return head;
}

struct node *insert_at_end(struct node *head,int value){
    struct node *temp,*newnode;
    if(head==NULL){
        printf("NO MEMORY ALLOCATED");
        exit(1);
    }
    temp=head;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL){
        printf("NO MEMORY ALLOCATED");
        exit(1);
    }
    newnode->data=value;
    newnode->next=NULL;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
    return head;
}

struct node *Insert_before(struct node *head,int before,int value){
    struct node *temp,*newnode,*prev;
    if(head==NULL){
        printf("NO MEMORY ALLOCATED");
        exit(1);
    }
    temp=head;
    prev=head;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL){
        printf("NO MEMORY ALLOCATED");
        exit(1);
    }
    newnode->data=value;
    newnode->next=NULL;
    
    if(before==head->data){
       newnode->next=head;
       head=newnode;
    }
    else{
    while(temp->data!=before){
        temp=temp->next;
    }
    while(prev->next!=temp){
        prev=prev->next;
    }
    
    prev->next=newnode;
    newnode->next=temp;}
    return head;
}

struct node *Insert_After(struct node *head,int after,int value){
    struct node *temp,*newnode;
    if(head==NULL){
        printf("NO MEMORY ALLOCATED");
        exit(1);
    }
    temp=head;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL){
        printf("NO MEMORY ALLOCATED");
        exit(1);
    }
    newnode->data=value;
    newnode->next=NULL;
    while(temp->data!=after){
        temp=temp->next;
    }
    if(temp->next==NULL){
        temp->next=newnode;

    }
    else{
        newnode->next=temp->next;
        temp->next=newnode;
        
    }
    return head;
}   
    

struct node *DeleteBeginning(struct node *head){
    struct node *temp;
    temp=head;
    head=head->next;
    temp->next=NULL;
    free(temp);
    return head;
}

struct node *DeleteEnd(struct node *head){
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
    return head;
}

struct node *DeleteBefore(struct node *head,int before){
    struct node *temp,*prev,*ptr;
    temp=head;
    prev=head;
    ptr=head;
    while(temp->data!=before){
        temp=temp->next;
    }
    if(before==head->data){
        printf("Nothing to delete before first node");
    }
    else{
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
    return head;
}

struct node *DeleteAfter(struct node *head,int after){
    struct node *temp,*ptr;
    temp=head;
    
    while(temp->data!=after){
        temp=temp->next;
    }
    if(temp->next==NULL){
        printf("Nothing to delete after last node\n");
    }
    else{
      ptr=temp->next;
      temp->next=ptr->next;
      ptr->next=NULL;
      free(ptr);
    }
    return head;
}


void printList(struct node *head){
    struct node *temp;
    temp=head;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

struct node *Reversing(struct node *head){
    struct node *temp,*prev,*ptr;
    temp=head;
    prev=NULL;
    while(temp!=NULL){
        ptr=temp->next;
        temp->next=prev;
        prev=temp;
        temp=ptr;
    }
    head=prev;
    return head;
}


int main(){
    struct node *list1,*list2;
    list1=createList(5);
    printList(list1);
    //list1=insertion_at_beginning(list1,8);
    //printList(list1);
    //list1=insert_at_end(list1,10);
    //list1=Insert_before(list1,5,234);
    //printList(list1);
    //list1=DeleteBeginning(list1);
    //printList(list1);
    //list1=DeleteEnd(list1);
    //printList(list1);
    //list1=DeleteBefore(list1,8);
    //printList(list1);
    //list1=DeleteAfter(list1,10);
    //printList(list1);
    list1=Reversing(list1);
    printList(list1);

}