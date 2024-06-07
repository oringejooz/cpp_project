#include <iostream>
using namespace std;

//'this' is a pointer. It represents the object invloving the member function
/*class A{
    int a;
    public:
    void set_(int a){
        a=a;
    }
    void get_(){
        cout<<"THe valur of a is "<<a<<endl;
    }
};

int main(){
    A a;
    a.set_(4);
    a.get_();
}*/
//We get garbage value for the above code since priority is given to local variable rather than class variable
class A{
    int a;
    public:
    /*void set_(int a){
        this->a=a;
    }*/
    A& set_(int a){
        this->a=a;
        return *this;
    }
    void get_(){
        cout<<"THe valur of a is "<<a<<endl;
    }
};

int main(){
    A a;
    a.set_(4);
    a.get_();
    //After returning "this" we can simply write a.set_(4).get_() 
}
//NOw we get 4