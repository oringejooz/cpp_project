/*
Swarnima Bisht
500105696
B-6 
BTech Year 1, Sem 2
*/

//WAP in C to input and find the sum of all elements in a 2D array 
#include <stdio.h>
 int main(){
    int n,m,sum=0;
    printf("Enter no. of Rows ");
    scanf("%d",&n);
    printf("\nEnter no. of Columns ");
    scanf("%d",&m);
    int arr[n][m];
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
         printf("Enter element %d %d = ",i+1,j+1);
         scanf("%d",&arr[i][j]);
         sum+=arr[i][j];
      }
    }
    printf("\nSum of all elements of array is = %d",sum);
 }