#include <iostream>
using namespace std;

//Binary Operator Overloading

class A{
    
    int a;
    public:
    void input(){
        cout<<"Enter number =";
        cin>>a;
    }
    A operator +(A obj){
        A temp;
        temp.a= a+ obj.a;
        return temp;
    }
    void output(){
        cout<<"Output is "<<a<<endl;
    }
};

int main(){
    A a1,a2,sum;
    a1.input();
    a2.input();
    sum= a1+a2;
    sum.output();
}