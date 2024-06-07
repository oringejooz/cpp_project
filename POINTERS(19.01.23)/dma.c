#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,n;
    printf("Enter number of integers - ");
    scanf("%d",&n);
    int *ptr=(int *)malloc(n * sizeof(int));
    if(ptr==NULL){
        printf("NO MEMORY ALLOCATED");
        exit(1);
    }
    for(i=0;i<n;i++){
        printf("Enter integer number %d - ",i+1);
        scanf("%d",ptr+i);
    }
    for(i=0;i<n;i++){
        printf("%d\t",*(ptr+i));
    }
}
