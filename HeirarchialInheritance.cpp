#include <iostream>
using namespace std;
//Base class
class abc{
    protected:
     int a;
};
class pqr:public abc{
    public:
    pqr(){
        a=100;
        cout << a <<endl;
    };
};
class xyz: public abc{
    public:
    xyz(){
        a=200;
        cout << a<<endl;
    };
};

int main(){
    pqr a1;
    xyz a2;
}
    



   