#include <iostream>
using namespace std;

class ab{
    protected:
    int a=100;
    public:
    friend void fun1();
};

void fun1(){
    ab obj;
    cout<<obj.a;
}

int main(){
    fun1();
}
