#include <iostream>
using namespace std;

class A{
    int a;
    public:
    void input(){
        cout<<"Enter value of a"<<endl;
        cin>>a;
    }
    friend void display(A obj);
};
void display(A obj){
    cout<<"Value of a is "<<obj.a;
}

int main(){
    A a1;
    a1.input();
    display(a1);
}