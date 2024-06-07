#include <iostream>
using namespace std;

class BaseClass{
    public:
    int v1;
    void display(){
        cout<<"Display base class object v1 "<<v1<<endl;
    }
};

class DerivedClass:public BaseClass{
    public:
    int v2;
    void display(){
        cout<<"Display base class object v1 "<<v1<<endl;
        cout<<"Display derived class object v2 "<<v2<<endl;
    }

};

int main(){
    BaseClass *Bptr;
    BaseClass obj1;
    DerivedClass obj2;
    Bptr=&obj2;//Pointing base class pointer to derived class
    //Bptr->v1=2300;
    //Bptr->v2=123;//Will throw error because the pointer is of base class
    Bptr->display();
    DerivedClass *Dptr;
    Dptr=&obj2;
    Dptr->v2=21;
    Dptr->display();
}