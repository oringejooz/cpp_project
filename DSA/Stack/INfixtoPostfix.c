#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max_exp_size =100
int precedence(char ch){
    switch(ch){
        case '+':
        case '-':
        return 1;
        case '*':
        case '/':
        return 2;
        case '^':
        return 3;

        default:return -1;
    }
}


