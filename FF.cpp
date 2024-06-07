#include <iostream>
using namespace std;

class abc{
    int a,b;
    public:
    void setno(int n1,int n2){
        a=n1;
        b=n2;
    }
    void print(){
        cout<<"You number is "<<a<<" + "<<b<<"i"<<endl;
            }
    friend abc sum(abc o1,abc o2);

};
abc sum(abc o1,abc o2){
    abc s;
    s.setno((o1.a+o2.a),(o1.b+o2.b));
    s.print();
    return s;
}

int main(){
    abc c1,c2,c3;
    c1.setno(2,3);
    c2.setno(4,5);
    c1.print();
    c2.print();
    sum(c1,c2);
}