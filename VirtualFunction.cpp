#include <iostream>
using namespace std;

//Run Time Polymorphism Late Binding
class BaseClass{
    public:
    int v1=1;
    virtual void display(){
        cout<<"Display base class object v1 "<<v1<<endl;
    }
};

class DerivedClass:public BaseClass{
    public:
    int v2=2;
    void display(){
        cout<<"Display base class object v1 "<<v1<<endl;
        cout<<"Display derived class object v2 "<<v2<<endl;
    }

};

int main(){
    BaseClass *Bse;
    BaseClass objB;
    DerivedClass objD;
    Bse =&objB;
    Bse->display();//Will use the display function of the object of the class the pointer is pointing towards
    //By default display of the Base class was called but virtual function removes that limitation
}