#include <iostream>
using namespace std;

void palin(int n){
    int r,sum=0,temp;
    temp=n;
    while(n>0){
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    
    if(temp==sum){
        cout<<"No. is Palindrome";
    }
    else{cout<<"No. is not Palindrome";}
}

int main(){
    int N;
    cout<<"Enter number to check Palindrome ";
    cin>>N;
    palin(N);
}