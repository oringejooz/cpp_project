//Passing array of structures as an argument
#include <stdio.h>
struct abc{
    char a;
    int b;
}arr[]={{'a',1},{'b',2},{'c',3}};

void print(struct abc *ptr,int n){
    for(int i=0;i<n;i++){
        printf("%c %d\t",(ptr+i)->a,(ptr+i)->b);
    }

}

int main(){
    int n=sizeof(arr)/sizeof(arr[0]);
    print(arr,n);
}