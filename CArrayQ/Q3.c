#include <stdio.h>
/*
Swarnima Bisht
500105696
B-6 
BTech Year 1, Sem 2
*/

//WAP in C to find the sum of all elements of an array

int main(){
    int n,arr[n],sum=0;
    printf("Enter number of elements in the array ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the element at position %d \n",i);
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("Sum of all elements in the array = %d ",sum);
}