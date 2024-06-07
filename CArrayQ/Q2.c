#include <stdio.h>
/*
Swarnima Bisht
500105696
B-6 
BTech Year 1, Sem 2
*/

/*WAP in C to read n number of values in an array and display it in reverse order*/
int main(){
    int n,arr[n];
    printf("Enter number of elements in the array ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the element at position %d \n",i);
        scanf("%d",&arr[i]);
    }
    int j=1;
    do{
        printf("%d ",arr[n-j]);
        j++;
    }while(j<=n);
}