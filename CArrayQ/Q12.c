/*
Swarnima Bisht
500105696
B-6 
BTech Year 1, Sem 2
*/
#include <stdio.h>
//WAP to delete an element in a list 
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
    printf("\nEnter no. to be deleted = ");
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
    
    for(int i =0;i<n;i++){
        if(arr[i]==num){
            arr[i]=0;
        }   
    }
    printf("\nModified list = ");
    for(int i =0;i<n;i++){
        printf("%d ",arr[i]);
        
    }

}