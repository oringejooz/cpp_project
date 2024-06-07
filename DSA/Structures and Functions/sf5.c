//Returning a structure variable from a function
#include <stdio.h>

struct point{
    int x;
    int y;
}p1={23,45},p2={56,90};

struct point edit(struct point p){
    (p.x)++;
    p.y=p.y + 5;
    return p;
}
void print(struct point *ptr){
    printf("%d %d\n",ptr->x,(*ptr).y);
}

int main(){
    print(&p1);
    print(&p2);
    p1=edit(p1);
    p2=edit(p2);
    print(&p1);
    print(&p2);
    return 0;
}
