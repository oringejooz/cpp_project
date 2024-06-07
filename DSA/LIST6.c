/*
Swarnima Bisht 
500105696
UPES,Dehradun

Create LinkedList and print elements in reverse order
*/

#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node* next;
};

void reversePrint(struct Node* head) {
  if (head == NULL) return;

  reversePrint(head->next);
  printf("%d ", head->data);
}

int main() {
  struct Node* head = NULL;
  struct Node* second = NULL;
  struct Node* third = NULL;

  head = (struct Node*)malloc(sizeof(struct Node));
  second = (struct Node*)malloc(sizeof(struct Node));
  third = (struct Node*)malloc(sizeof(struct Node));

  head->data = 1;
  head->next = second;

  second->data = 2;
  second->next = third;

  third->data = 3;
  third->next = NULL;

  reversePrint(head);

}


