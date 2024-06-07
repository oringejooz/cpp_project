#include <iostream>
using namespace std;

class A{
    protected:
    int a;
};
class B{
    protected:
    int b;
};
class C: public A,B{
    public:
    C(){};
    C(int x,int y){
        a=x;
        b=y;
        cout<<"Area = "<<a*b;
    };
};

int main(){
    C dimensions(24,45);

}