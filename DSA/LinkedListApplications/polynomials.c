#include <stdio.h>
#include <stdlib.h>

struct poly{
    int coeff;
    int expo;
    struct poly *link;
};

struct poly *createpoly(int n){
    struct poly *temp,*newnode,*head;
    head=(struct poly*)malloc(sizeof(struct poly));
    if(head==NULL){
        printf("NO MEMORY ALLOCATED");
    }
    
    printf("Enter coefficient for term 1 = ");
    scanf("%d",&head->coeff);
    printf("Enter exponent for term 1 = ");
    scanf("%d",&head->expo);
    head->link=NULL;
    temp=head;

    for(int i=1;i<n;i++){
      newnode=(struct poly*)malloc(sizeof(struct poly));
      if(newnode==NULL){
        printf("NO MEMORY ALLOCATED");
        }  
      printf("Enter coefficient for term %d = ",i+1);
        scanf("%d",&newnode->coeff);
        printf("Enter exponent for term %d = ",i+1);
        scanf("%d",&newnode->expo);
        temp->link=newnode;
        newnode->link=NULL;
        temp=temp->link;
    }
    
   return head; 

}

struct poly *polyadd(struct poly *head1,struct poly *head2,struct poly * sum){
    struct poly *temp1,*temp2,*res;
    temp1=head1;
    temp2=head2;
    if(temp1!=NULL && temp2==NULL){
        sum=temp1;
        return sum;
    }
    else if(temp1==NULL && temp2!=NULL){
        sum=temp2;
        return sum;
    }
    while(temp1!=NULL && temp2!=NULL){
        if(sum==NULL){
            sum=(struct poly*)malloc(sizeof(struct poly));
            res=sum;
        }
        else{
            res=sum;
            res->link=(struct poly*)malloc(sizeof(struct poly));
            res=res->link;
        }
        
        if(temp1->expo>temp2->expo){
            res->coeff=temp1->coeff;
            res->expo=temp1->expo;
            temp1=temp1->link;
        }
        
        else if(temp1->expo<temp2->expo){
            res->coeff=temp2->coeff;
            res->expo=temp2->expo;
            temp2=temp2->link;
        }
        else{
            res->coeff=temp1->coeff+temp2->coeff;
            res->expo=temp1->expo;
            temp1=temp1->link;
            temp2=temp2->link;
        }
        
        while(temp1!=NULL){
            res->link=(struct poly*)malloc(sizeof(struct poly));
            res=res->link;
            res->coeff=temp1->coeff;
            res->expo=temp1->expo;
            temp1=temp1->link;
        }
        while(temp2!=NULL){
            res->link=(struct poly*)malloc(sizeof(struct poly));
            res=res->link;
            res->coeff=temp2->coeff;
            res->expo=temp2->expo;
            temp2=temp2->link;
        }
    }
    res->link=NULL;
    return sum;
    
}

void printPoly(struct poly *head){
    struct poly *temp;
    temp=head;
    while(temp!=NULL){
        printf("%dx^%d\t",temp->coeff,temp->expo);
        temp=temp->link;
    }
    printf("\n");
}

int main(){
    struct poly *poly1,*poly2,*polysum;
    printf("Enter Polynomial 1  \n\n");
    poly1=createpoly(3);
    printf("Enter Polynomial 2  \n\n");
    poly2=createpoly(3);
    printPoly(poly1);
    printPoly(poly2);
    polysum=polyadd(poly1,poly2,polysum);
    printPoly(polysum);
}























