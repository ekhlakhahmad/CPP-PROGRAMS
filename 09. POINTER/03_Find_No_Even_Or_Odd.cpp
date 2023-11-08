// Write a program to find the number is Even or Odd.

#include<iostream>
using namespace std;
int main(){
    int a, *p;

    cout<<"Enter any Number: ";
    cin>>a;

    p = &a;

    if(*p % 2 == 0)
        cout<<"Even Number"<<endl;
    else
        cout<<"Odd Number"<<endl;

    return 0;
}