#include <iostream>
#include <thread>
using namespace std;

void fun1(){
    cout<<"thread 1\n";
}
void fun2(){
    cout<<"thread 2\n";
}

int main(){
    thread t1(fun1);
    thread t2(fun2);
    t1.join();
    t2.join();
}


