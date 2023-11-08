// Write a program to Add Two number using the Single Inheritance.

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

class B : public A{
    int y;
    
    public:
    void getdata(){
        cout<<"Enter Second Number: ";
        cin>>y;
    }

    void putdata(){
        cout<<"Addition = "<<x + y<<endl;
    }
};

int main(){
    B obj;
    obj.input();
    obj.getdata();
    obj.putdata();

    return 0;
}