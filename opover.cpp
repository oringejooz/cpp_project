#include <iostream>
using namespace std;

class A{
    int a;
    public:
    void input(int a){
        this->a=a;
    }
    void operator ++(int){
        a++;
    }
    void display(){
        cout<<a;
    }
};
int main(){
    A a1;
    a1.input(5);
    a1++;
    a1.display();
}