#include <stdio.h>
#include <stdlib.h>

struct node{
    int coeff;
    int power;
    struct node* next;
};

void create(int x,int y,struct node **temp){
    struct node *r,*z;
    z=*temp;
    if(z==NULL){
        r=(struct node*)malloc(sizeof(struct node));
        r->coeff=x;
        r->power=y;
        *temp=r;
        r->next=(struct node*)malloc(sizeof(struct node));
        r=r->next;
        r->next=NULL;
    }
    else{
        r->coeff=x;
        r->power=y;
        r->next;
    }
}
void addition(struct node*poly1,struct node*poly2,struct node *poly){
    while(poly1->next && poly2->next){
        if(poly1->power>poly2->power){
            poly->power=poly1->power;
            poly->coeff=poly1->coeff;
            poly1=poly1->next;
        }
        else if (poly1->power<poly2->power){        
            poly->power=poly2->power;
            poly->coeff=poly2->coeff;
            poly2=poly2->next;
        }
        else{
            poly->power=poly1->power;
            poly->coeff=poly1->coeff + poly2->coeff;
            poly1=poly1->next;
            poly2=poly2->next;
        }
     
        poly->next = (struct node*)malloc(sizeof(struct node));
        poly = poly->next;
        poly->next = NULL;
    }
    
    while(poly1->next||poly2->next){
        if (poly1->next) {
            poly->power = poly1->power;
            poly->coeff = poly1->coeff;
            poly1 = poly1->next;
        }
        if (poly2->next) {
            poly->power = poly2->power;
            poly->coeff = poly2->coeff;
            poly2 = poly2->next;
        }
     
        poly->next=(struct node*)malloc(sizeof(struct node));
        poly = poly->next;
        poly->next = NULL;
    }
};


void show(struct node* Node){
    while (Node->next != NULL) {
        printf("%dx^%d", Node->coeff, Node->power);
        Node = Node->next;
        if (Node->coeff >= 0) {
            if (Node->next != NULL)
            printf("+");
        }
    }
}

int main()
{
    struct node *poly1 = NULL, *poly2 = NULL, *poly = NULL;
  
    
    create(6, 3, &poly1);
  
   
    create(1, 3, &poly2);
    
  
    printf("1st Number: ");
    show(poly1);
  
    printf("\n2nd Number: ");
    show(poly2);
  
    poly = (struct node*)malloc(sizeof(struct node));
  
 
    addition(poly1, poly2, poly);
  
    
    printf("\nAdded polynomial: ");
    show(poly);
}