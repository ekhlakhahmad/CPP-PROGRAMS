// Write a program to Add two number.

#include<iostream>
using namespace std;
class addition{
    private:
    int a, b, c;

    public:
void get(){
    cout<<"Enter First Number: ";
    cin>>a;
    cout<<"Enter Second Number: ";
    cin>>b;
}

void put(){
    c = a + b;
    cout<<"Addition = "<<c;
}
};

int main(){
    addition obj;
    obj.get();
    obj.put();

    return 0;
}