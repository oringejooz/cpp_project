#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n,digits,orig,arm=0,r;
    cout<<"Enter number of digits\n";
    cin>>digits;
    cout<<"Enter number\n";
    cin>>n;
    orig=n;
    while(n!=0){
        r=n%10;
        arm=arm+pow(r,digits);
        n=n/10;
    }
    cout<<"DIGIT IS "<<arm<<endl;
    if(arm==orig){
        cout<<"Number is Armstrong";
    }
    else{
        cout<<"Number is not armstrong";
    }
}