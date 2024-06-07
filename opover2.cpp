#include <iostream>
using namespace std;

class B{
    int b;
    public:
    void input(int b){
        this->b=b;
    }
    B operator +(B obj){
        B temp;
        temp.b =b+ obj.b;
        return temp;
    }
    void display(){
        cout<<"Output = "<<b<<endl;
    }
};
int main(){
    B b1,b2,sum;
    b1.input(10);
    b2.input(20);
    sum=b1+b2;
    sum.display();
}