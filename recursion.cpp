#include <iostream>
using namespace std;
//Factorial
int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n * factorial(n-1);
}

int main(){
    int N,fact=1;
    cout<<"Enter number for factorial ";
    cin>>N;
    for(int i=1;i<=N;i++){
        fact*=i;
    }
    cout<<"Factorial of "<<N<<" is "<<fact<<endl;
    cout<<factorial(N);

}