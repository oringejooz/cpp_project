#include <stdio.h>
//WAP to sort an array in ascending and descending order(Bubble Sort)
int main(){
    int arr[]={23,51,2,16,34,57,8};
    int t;
    int l=sizeof(arr)/sizeof(arr[0]);
    printf("Array before sorting = ");
    for(int i=0;i<l;i++){
        printf("%d ",arr[i]);
    }
    for(int i=0;i<l;i++){
        for(int j=i+1;j<l;j++){
            if(arr[i]>arr[j]){
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
    printf("\nArray after sorting(Ascending) = ");
    for(int i=0;i<l;i++){
        printf("%d ",arr[i]);
    }

    for(int i=0;i<l;i++){
        for(int j=i+1;j<l;j++){
            if(arr[i]<arr[j]){
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
    printf("\nArray after sorting(Descending) = ");
    for(int i=0;i<l;i++){
        printf("%d ",arr[i]);
    }

}