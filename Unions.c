#include <stdio.h>
#include <string.h>
union abc
    {
       double a;
       char b[41];
       
    };

int main(){
    abc a1;
    strcpy(a1.b,"Swarnima");
    printf("%d",sizeof(a1));
}
