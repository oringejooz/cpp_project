#include <iostream>
using namespace std;

void fib(int n){
     int i=0,j=1,sum;
     cout<<i<<endl<<j<<endl;
     sum=i+j;
     for(int x=2;x<=n;x++){
        cout<<sum<<endl;
        i=j;
        j=sum;
        sum=i+j;
     }
}

int main(){
    int n;
    cin>>n;
    fib(n);
}