#include <stdio.h>
void pointer(){
    int x =10;
    int *ptr;
    ptr=&x;
    printf("value of ptr = %p\n",ptr);
    printf("value of x = %d \n",x);
    printf("value of *ptr =%d\n",*ptr);
}

int main(){
    pointer();
    return 0;
}