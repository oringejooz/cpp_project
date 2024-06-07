//Pointer to structures as arguments
#include <stdio.h>

struct point{
    int x;
    int y;
}p1={23,45},p2={56,90};

void print(struct point *ptr){
    printf("%d %d\n",ptr->x,(*ptr).y);
}

int main(){
    print(&p1);
    print(&p2);
    return 0;
}