/*
Swarnima Bisht
500105696
B-6 
BTech Year 1, Sem 2
*/
#include <stdio.h>

//WAP to search an element in an array (binary search)

int main()
{
  int c, first, last, middle, n, search;
  int array[n];

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d elements \n", n);

  for (c = 0; c < n; c++){
    scanf("%d", &array[c]);}

  printf("Enter value to find\n");
  scanf("%d", &search);

  first = 0;
  last = n-1;
  middle = (first+last)/2;

  while (first <= last) {
    if (array[middle] < search)
      first = middle + 1;
    else if (array[middle] == search) {
      printf("Element %d is in the list at position %d.\n", search, middle+1);
      break;
    }
    else
      last = middle - 1;

    middle = (first + last)/2;
  }
  if (first > last)
    printf("Element %d is not in list\n", search);
}