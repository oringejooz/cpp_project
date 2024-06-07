#include <iostream>
using namespace std;

class A{

   int a, b;

   public:

  A(){}

   friend void abc();

};

void abc(){

  A x;

  x.a = 100; x.b = 200;

  cout<<x.a+x.b;

}

int main(){A a1;abc();}