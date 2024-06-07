#include <stdio.h>
void PrintList(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void BubbleSort(int arr[],int n){
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

}

int main(){
    int arr[]={23,3,14,5,15,90,34,45};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("Array Before Sorting = ");
    PrintList(arr,n);
    BubbleSort(arr,n);
    printf("Array After Sorting = ");
    PrintList(arr,n);
}