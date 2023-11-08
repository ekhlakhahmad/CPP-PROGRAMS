// Write a program to Add and Subtract of Two number using Hierarchical Inheritance.

#include<iostream>
using namespace std;
class number{
    protected:
    int a, b;

    public:
    void getdata(){
        cout<<"Enter First Number: ";
        cin>>a;
        cout<<"Enter Second Number: ";
        cin>>b;
    }
};

class add : public number{
    public:
    void addition(){
        cout<<"Addition = "<<a+b<<endl;
    }
};

class sub : public number{
    public:
    void subtraction(){
        cout<<"Subtraction = "<<a - b<<endl;
    }
};

int main(){
    add obj1;
    sub obj2;
    obj1.getdata();
    obj1.addition();
    obj2.getdata();
    obj2.subtraction();

    return 0;
}
