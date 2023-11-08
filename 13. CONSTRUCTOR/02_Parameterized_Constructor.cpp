// Write a program to implementation of Parameterized Constructor.

#include<iostream>
using namespace std;
class demo{
    int a, b;
    public:

    demo(int m, int n){
        a = m;
        b = n;
    }

    void putdata(){
        cout<<"A = "<<a<<"\t B = "<<b<<endl;
    }
};

int main(){
    int x, y;
    cout<<"Enter any Two Number: ";
    cin>>x>>y;

    demo obj(x, y);
    obj.putdata();

    return 0;
}