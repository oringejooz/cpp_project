#include <iostream>
using namespace std;

int main(){
    int denominator,numerator,div;
    cout<<"Enter Numerator"<<endl;
    cin>>numerator;
    cout<<"Enter Denominator"<<endl;
    cin>>denominator;

    try{
        if(denominator == 0){
        throw denominator;}
        div= numerator/denominator;
    }
    
    catch(int denominator){
        cout<<"Div by 0 Exception\n";
    }

    catch(...){
        cout<<"Default Exception \n";
    }
    cout<<"Result is "<<div<<endl;
}