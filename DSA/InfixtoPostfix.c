#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max_size 100

int stack[max_size],postfix[max_size],top=-1;

void push(int item){
    if(top>=max_size-1){
        printf("Stack Overflow");
    }
    else{
        stack[++top]=item;
    }
}

int pop(){
    if(top<0){
        printf("Stack Underflow");
        exit(1);
    }
    return stack[top--];
}

int is_operator(char symbol){
    if (symbol=='+'||symbol=='-'||symbol=='*'||symbol=='/'||symbol=='^'){
        return 1;
    }
    else{return 0;}
}

int precedence(char symbol){
    switch(symbol){
        case '^':return 3;

        case '*':
        case '/':
            return 2;

        case '+':
        case '-':
            return 1;
        
        default:return 0;

    }
}

void infix_to_postfix(char infix[]){
    int i,j;
    char symbol;

    for(i=0,j=0;infix[i]!='\0';i++){
        symbol=infix[i];
        if(symbol==' '||symbol=='\t'){
            continue;
        }
    }
    if (symbol=='('){
        push(symbol);
    }
    if(symbol==')'){
        while(stack[top]!='('){
            postfix[j++]=pop();
        }
        pop();
    }
    else if(is_operator(symbol)){
        while(precedence(symbol)<=precedence(stack[top])){
            postfix[j++]=pop();
        }
        push(symbol);
    }
    else{
        postfix[j++]=symbol;
    }
    while(top!=-1){
        postfix[j++]=pop();
    }
    postfix[j]='\0';

    printf("Postfix Expression = %s",postfix);
}

int main(){
    char infix[max_size];
    printf("Enter infix expression = ");
    fgets(infix,max_size,stdin);
    infix_to_postfix(infix);
    return 0;

}