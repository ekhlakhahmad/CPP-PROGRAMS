// Write  a program to add two number using Pointer .

#include<iostream>
using namespace std;
int main(){
    int a, b, *p, *q, c;
    cout<<"Enter First Number: ";
    cin>>a;
    cout<<"Enter Second Number: ";
    cin>>b;
    p = &a;
    q = &b;
    c = *p + *q;

    cout<<"Addition = "<<c;
    return 0;
}