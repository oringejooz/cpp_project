#include <stdio.h>
void PrintList(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void InsertionSort(int arr[],int n){
    int i,j,temp;
    for(i=0;i<n;i++){
        temp=arr[i];
        j=i-1;
        while(j>=0 && temp<=arr[j]){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}

int main(){
    int arr[]={23,12,34,6,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("Before Sorting Array :");
    PrintList(arr,n);
    InsertionSort(arr,n);
    printf("After Sorting Array :");
    PrintList(arr,n);
}