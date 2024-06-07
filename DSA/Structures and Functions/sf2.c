//Call by reference
#include <stdio.h>

struct charset{
    char s;
    int i;
};

void keyVal(char *x,int *i){
    scanf("%c %d",x,i);
}

int main(){
    struct charset c1;
    keyVal(&c1.s,&c1.i);
    printf("%c %d",c1.s,c1.i);
    return 0;
}