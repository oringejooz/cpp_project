#include <iostream>
#include <string>

using namespace std;
const int n = 54;
class Student{
    char Name[n];
    char Address[n];
    public:
    int Roll_no;
    int Mobile_no;
    int Marks;

    public:
    void input(){
        cout<<"Enter Name\n";
        cin.getline(Name,n);
        cout<<"Enter Address\n";
        cin.getline(Address,n);
        cout<<"Enter Roll No.\n";
        cin>>Roll_no;
        cout<<"Enter Mobile no.\n";
        cin>>Mobile_no;
        cout<<"Enter Marks\n";
        cin>>Marks;

    }
    void display(){
        cout<<Name<<endl;
        cout<<Address<<endl;
        cout<<Roll_no<<endl<<Mobile_no<<endl<<Marks<<endl;
    }
};

int main(){
    Student s1,s2;
    s1.input();
    s2.input();
    s1.display();
    s2.display();
}
