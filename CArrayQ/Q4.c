#include <stdio.h>
/*
Swarnima Bisht
500105696
B-6 
BTech Year 1, Sem 2
*/

//WAP in C to copy the elements of one array into another array
int main(){
    int n,arr1[n],arr2[n];
    printf("Enter number of elements in the arrays ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the element at position %d \n",i);
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<n;i++){
        arr2[i]=arr1[i];
    }
    printf("Elements in array 1 = ");
    for(int i=0;i<n;i++){
        printf("%d ",arr1[i]);
    }
    printf("Elements in array 2 = ");
    for(int i=0;i<n;i++){
        printf("%d ",arr2[i]);
    }
}