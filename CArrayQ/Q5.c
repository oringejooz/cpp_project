/*
Swarnima Bisht
500105696
B-6 
BTech Year 1, Sem 2
*/

//WAP in C to count the total number of duplicate elements in an array
#include <stdio.h>

int main(){
    int arr[]={1,2,3,3,45,6,6};
    int ctr=0;
    int l=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<l;i++){
        for(int j=i+1;j<l;j++){
            if(arr[i]==arr[j]){
                printf("%d ",arr[j]);
                ctr++;
            }
        }
    }
    printf("\n No. of duplicate elements = %d",ctr);

}