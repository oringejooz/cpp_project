#include <stdio.h>
#include <stdlib.h>

struct node{
    int coeff;
    int power;
    struct node *next;
};

void CreateList(int x, int y,struct node **temp){
    struct node *r, *z;
    z=*temp;
    if(z==NULL){

        r=(struct node *)malloc(sizeof(struct node));
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

void add(struct node *poly1,struct node *poly2,struct node *poly){
    while(poly1->next&&poly2->next){
        if(poly1->power > poly2->power){
            poly->power=poly1->power;
            
        }
    }

}
