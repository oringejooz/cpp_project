#include <stdio.h>
#include <stdlib.h>
//Self Referential Structures-Structures in which one or more pointers points to the structure of the same type
/*
struct self{
    int p;
    struct self *ptr;
};

*/

struct code{
    int i;
    char c;
    struct code *ptr;
}v1,v2;

void print(){
    struct code *temp;
    temp=&v1;
    while(temp!=NULL){
        printf("%d %c\t",temp->i,temp->c);
        temp=temp->ptr;
    }
}

int main(){
    v1.i=1;
    v1.c='A';
    v1.ptr=&v2;
    v2.i=2;
    v2.c='B';
    v2.ptr=NULL;
    
    print();
}