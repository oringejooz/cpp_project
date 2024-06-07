#include <iostream>
using namespace std;

class A{
    protected:
    int a=10;
    public:
    virtual void fun1(){
        cout<<"This is object of base class "<<a<<endl;
    }   
};
class B:public A{
    int b=20;
    public:
    void fun1(){
        cout<<"THis is object of derived class "<<b<<endl;
    }
};
int main(){
    A *ptr;
    B b1;
    ptr=&a1;
    ptr->fun1();
    ptr=&b1;
    ptr->fun1();
}