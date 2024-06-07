#include <iostream>
using namespace std;

class abc{
    protected:
    int a;
    abc(){cout<<"\n This is constructor 1";};
    ~abc(){cout<<"\n This is deconstructor 1";};
};

class pqr:public abc{
    protected:
    int b;
    pqr(){cout<<"\n This is constructor 2";}
    ~pqr(){cout<<"\n This is deconstructor 2";};
};
class xyz:public pqr{
    public:
    xyz(){
        a=100;
        b=20;
        cout<<"\n"<<a<<" "<<b<<" "<<"Sum = "<<a+b;
    };
    ~xyz(){cout<<"\n This is deconstructor 3";};
};

int main(){
    xyz a1;
}