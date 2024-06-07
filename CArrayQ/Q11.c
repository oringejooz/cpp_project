/*
Swarnima Bisht
500105696
B-6 
BTech Year 1, Sem 2
*/
#include <stdio.h>
//WAP to replace an element in a list and insert it at the end of the list 
int main(){
    int n,temp;
    printf("Enter no. of elements = ");
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
        printf("\nEnter element no. %d = ",i+1);
        scanf("%d",&arr[i]);
    }
    int num;
    printf("\nEnter no. to be inserted = ");
    scanf("%d",&num);
    

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    
    }
    printf("\nUN-Modified list = ");
    for(int i =0;i<n;i++){
        printf("%d ",arr[i]);
        
    }
    arr[n-1]=num;
    printf("\nModified list = ");

    for(int i =0;i<n;i++){
        printf("%d ",arr[i]);
        
    }

}