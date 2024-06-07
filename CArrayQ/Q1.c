#include <stdio.h>
/*
Swarnima Bisht
500105696
B-6 
BTech Year 1, Sem 2
*/

/*WAP in C to store elements in an array and print them
input 10 elements in the array*/

int main(){
    int n;
    
    printf("Enter number of elements in the array ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the element at position %d \n",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
}