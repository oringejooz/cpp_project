#include <iostream>
using namespace std;

class BaseClass{//Abstract Class
    public:
    int v1=1;
    virtual void display()=0;//Pure Virtual Function
    
};

class DerivedClass:public BaseClass{
    public:
    int v2=2;
    void display(){
        
        cout<<"Display derived class object v2 "<<v2<<endl;
    }

};

class DC2:public BaseClass{
    public:
    int v3=3;
    void display(){
        
        cout<<"Display derived class object v3 "<<v3<<endl;
    }

};

int main(){
    BaseClass *ptrB;
    DerivedClass obj1;
    DC2 obj2;
    ptrB=&obj1;
    ptrB->display();
    ptrB=&obj2;
    ptrB->display();

}