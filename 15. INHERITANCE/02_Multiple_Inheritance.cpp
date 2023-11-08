// Write a program to Add two number using multiple Inheritance.

#include<iostream>
using namespace std;
class A{
    protected:
    int x;

    public:
    void input(){
        cout<<"Enter First Number: ";
        cin>>x;
    }
};

class B{
    protected:
    int y;

    public:
    void getdata(){
        cout<<"Enter Second Number: ";
        cin>>y;
    }
};

class C : public A, public B{
    public:
    void addition(){
        cout<<"Addition = "<<x + y;
    }
};

int main(){
    C obj;
    obj.input();
    obj.getdata();
    obj.addition();

    return 0;
}