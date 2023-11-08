// Write a program to find out the greatest and the smallest among three numbers using pointer.

#include<iostream>
using namespace std;
int main(){
    int a,b,c, *p, *q, *r;
    cout<<"Enter any three Number: ";
    cin>>a>>b>>c;

    p = &a;
    q = &b;
    r = &c;

    if(*p > *q && *p > *r)
        cout<<"Greatest Number is "<<*p<<endl;
    else if(*p < *q && *p < *r)
        cout<<"Smallest Number is "<<*p<<endl;

    if(*q > *p && *q > *r)
        cout<<"Greatest Number is "<<*q<<endl;
    else if(*q < *p && *q < *r)
        cout<<"Smallest Number is "<<*q<<endl;

    else if(*r > *p && *r > *q)
        cout<<"Greatest Number is "<<*r<<endl;
    else if(*r < *q && *r < *q)
        cout<<"Smallest Number is "<<*r<<endl;

    return 0;

}
