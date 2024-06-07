#include <iostream>
using namespace std;

union A{
    int a;
    char r[23];
};

int main(){
    A a1;
    cout<<sizeof(a1);
}