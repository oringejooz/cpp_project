#include <stdio.h>
#include <string.h>
struct abc{
    int id;
    char name[50];
    char address[60];

};

int main(){
    struct abc e1;
    e1.id=2021034;
    e1.address[60] ="ABCD";
    e1.name[50] = "Swarnima";

    printf("%d %s %s",e1.id,e1.address[60],e1.name[50]);
}

/*int main(){
    char arr[10] = "Swarnima";
    int a= printf("%s",arr);
    printf(" %d",a);
}*/
