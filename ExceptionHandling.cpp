#include <iostream>
using namespace std;

/*int main(){
    float numerator,denominator;
    cout<<"Enter numerator and denominator "<<endl;
    cin>>numerator>>denominator;
    float result;
    try{
    if(denominator==0){
        throw denominator;
       }
    result = numerator/denominator;//Exception happens here
    }
    catch(float denominator){
        cout<<"Exception 1: Divide by zero not allowed"<<endl;
    }
    cout<<"Division is "<<result<<endl;

}*/

class abc{

   int a;

  pubilc:

  abc(){a = 100;}



  void operator ~(int){a++;}

   

   void out(){cout<<a;}

};

int main(){

  abc a1;

  ~a1;

  a1.out();

}