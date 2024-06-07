#include <iostream>
#include <thread>
using namespace std;

//Thread- An executing sequence of your program
/*Advantages of Thread - Sections of your program that are not interdependent allow threading
1)Context switching is very fast in threads(Context switching - 
The Context switching is a technique or method used by the operating system 
to switch a process from one state to another to execute its function using CPUs in the system)
2)Shared Resources- Use same stacks,same registers
*/
void sum(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    };
    cout<<sum<<endl;
}

void prod(int y){
    int prod=1;
    for(int i=1;i<=y;i++){
        prod*=i;
    };
    cout<<prod<<endl;
}

int main(){
    thread t1(sum,5);
    thread t2(prod,5);
    t1.join();
    t2.join();
}