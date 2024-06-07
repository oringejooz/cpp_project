#include <stdio.h>
//Structure Variable as arguments

struct point{
    int x;
    int y;
}p1={23,45},p2={56,90};

void print(struct point p){
    printf("%d %d\n",p.x,p.y);
}

int main(){
    print(p1);
    print(p2);
    return 0;
}
