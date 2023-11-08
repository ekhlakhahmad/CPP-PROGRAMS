// Write a program to implementation of pure virtual function.

#include<iostream>
using namespace std;
class A{
    int x = 5;
    public:
    virtual void display() = 0;
};

class B : public A{
    int y = 10;

    public: 
    void display(){
        cout<<"Value of Y = "<<y<<endl;
    }
};

int main(){
    A *bptr;
    B obj;
    bptr = &obj;
    bptr -> display();
    return 0;
}