#include <iostream>
using namespace std;
//Unary - Preincrement

class Increase{
    int value=15;
    public:
    void operator ++(){//void operator ++(int) in case of post increment i.e inc++
        value=value+5;
    }
    void display(){
        cout<<"Value is "<<value<<endl;
    }
};

int main(){
    Increase inc;
    ++inc;
    inc.display();
}