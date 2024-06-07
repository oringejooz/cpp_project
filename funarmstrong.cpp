#include <iostream>
#include <stdarg.h>
using namespace std;

int add(int args,...){
    int i=0,sum=0;
    va_list *ap;
    va_start(*ap,args);
    for(i=0;i<args;i++){
        sum+=va_arg(*ap,int);
    }
    va_end(*ap);
    return sum;
}
