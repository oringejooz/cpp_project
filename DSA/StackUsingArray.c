#include <stdio.h>
#define max_size 100

int stack[max_size];
int top=-1;

int isempty(){
    if(top<0){
        return 1;
    }
    else{return 0;}
}

int isFull(){
        if(top>=max_size){
            return 1;
        }
        else{return 0;}
}

void push(int element) {
    if (isFull()) {
        printf("Stack is Overflow\n");
    }
    stack[++top] = element;
}

int pop() {
    if (isempty()) {
        printf("Stack is UNderflow\n");
        return -1;
    }
    return stack[top--];
}

void display()
{
    for(int i=top ; i>-1 ; i--) printf("%d \n",stack[i]);
	printf("\n\n");
}

int main(){
    push(10);
    push(2);
    push(21);
    display();
    printf("Popped element is %d\n", pop());
    display();
}