#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

typedef struct stack {
    char *data;
    int top;
    int max_size;
} Stack;

Stack *createStack(int size) {
    Stack *s = (Stack*)malloc(sizeof(Stack));
    s->data = (char*)malloc(sizeof(char) * size);
    s->top = -1;
    s->max_size = size;
    return s;
}

int isFull(Stack *s) {
    return (s->top == s->max_size - 1);
}

int isEmpty(Stack *s) {
    return (s->top == -1);
}

void push(Stack *s, char ch) {
    if (isFull(s)) {
        printf("Stack overflow.\n");
        return;
    }
    s->top++;
    s->data[s->top] = ch;
}

char pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack underflow.\n");
        return '\0';
    }
    char ch = s->data[s->top];
    s->top--;
    return ch;
}

int precedence(char ch) {
    switch (ch) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
        default:
            return -1;
    }
}

void infixToPostfix(char *infix, char *postfix) {
    Stack *s = createStack(MAX_SIZE);
    int i = 0, j = 0;
    while (infix[i] != '\0') {
        if ((infix[i] >= 'a' && infix[i] <= 'z') || (infix[i] >= 'A' && infix[i] <= 'Z')) {
            postfix[j] = infix[i];
            j++;
        }
        else if (infix[i] == '(') {
            push(s, infix[i]);
        }
        else if (infix[i] == ')') {
            while (!isEmpty(s) && s->data[s->top] != '(') {
                postfix[j] = pop(s);
                j++;
            }
            if (!isEmpty(s) && s->data[s->top] == '(') {
                pop(s);
            }
            else {
                printf("Invalid expression.\n");
                return;
            }
        }
        else {
            while (!isEmpty(s) && precedence(infix[i]) <= precedence(s->data[s->top])) {
                postfix[j] = pop(s);
                j++;
            }
            push(s, infix[i]);
        }
        i++;
    }
    while (!isEmpty(s)) {
        if (s->data[s->top] == '(') {
            printf("Invalid expression.\n");
            return;
        }
        postfix[j] = pop(s);
        j++;
    }
    postfix[j] = '\0';
}

int main() {
    char infix[MAX_SIZE], postfix[MAX_SIZE];
    printf("Enter an infix expression: ");
    fgets(infix, MAX_SIZE, stdin);
    infixToPostfix(infix, postfix);
    printf("Postfix expression: %s\n", postfix);
    return 0;
}
