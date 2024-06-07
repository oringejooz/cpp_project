#include <stdio.h>
#include <stdlib.h>

// Define the stack node structure
struct StackNode {
    int data;
    struct StackNode* next;
};

// Define the stack structure
struct Stack {
    struct StackNode* top;
};

// Function to create a new stack node
struct StackNode* newStackNode(int data) {
    struct StackNode* stackNode = (struct StackNode*)malloc(sizeof(struct StackNode));
    stackNode->data = data;
    stackNode->next = NULL;
    return stackNode;
}

// Function to check if the stack is empty
int isEmpty(struct Stack* stack) {
    return stack->top == NULL;
}

// Function to push an element onto the stack
void push(struct Stack* stack, int data) {
    struct StackNode* stackNode = newStackNode(data);
    stackNode->next = stack->top;
    stack->top = stackNode;
    printf("%d pushed to stack\n", data);
}

// Function to pop an element from the stack
int pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        return -1;
    }
    struct StackNode* temp = stack->top;
    int data = temp->data;
    stack->top = stack->top->next;
    free(temp);
    return data;
}

// Function to peek at the top element of the stack
int peek(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        return -1;
    }
    return stack->top->data;
}

// Main function to test the stack implementation
int main() {
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->top = NULL;

    push(stack, 1);
    push(stack, 2);
    push(stack, 3);

    printf("%d popped from stack\n", pop(stack));

    printf("Top element is %d\n", peek(stack));

    return 0;
}
