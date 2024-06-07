#include <iostream>
using namespace std;
//Print first 50 no.s using recursion
int fun(int n){
    if(n==1||n==0){
        return 1;
    }
    cout<<n<<" ";
    return fun(n-1);
    
}        

int main(){
    int N=50;
    cout<<fun(N);

}