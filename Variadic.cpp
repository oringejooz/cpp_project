#include <iostream>
using namespace std;

void print(){}
//A function that prints the arguments
template <typename a,typename... b>

void print(a v1,b... v2){
    cout<<v1<<" ";
    print(v2...);
}

int main(){
    print("hello",1,2.3,1.3);
}