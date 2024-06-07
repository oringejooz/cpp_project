#include <stdio.h>
#include <stdlib.h>

#define max_size 100;

int BinaryTree[max_size];

int root(int key){
    if(BinaryTree[0]!=NULL){
        printf("Root exists");
    }
    else{
        BinaryTree[0]=key;
    }
}

