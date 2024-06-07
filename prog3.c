#include <stdio.h>
void pointer(){
    int a[5]={1,2,3,4,5};
    int *ptr;
    ptr = a;
    printf("%d\n%d\n%d\n%d\n%d\n",ptr[0],ptr[1],ptr[2],ptr[3],ptr[4]);
}
int main(){
    pointer();
    return 0;
}