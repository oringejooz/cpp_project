#include <iostream>
using namespace std;
//Revisiting pointers with Arrow operator - Dereferencing
class Complex{
    int real,imaginary;
    public:
    void setData(int a,int b){
        real = a;
        imaginary = b;
    }
    void getData(){
        cout<<"The real part is "<<real<<endl;
        cout<<"The imaginary part is "<<imaginary<<endl;
    }
};

int main(){
    Complex c1;
    Complex *ptr = &c1;
    ptr->setData(23,51);//it is the same as =(*ptr).setData(23,51);
    ptr->getData();//it is the same as =(*ptr).getData();
}