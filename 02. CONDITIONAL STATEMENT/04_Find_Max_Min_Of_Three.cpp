// Write a program to find the greatest number of three given number.

#include<iostream>
using namespace std;
int main(){
    int a,b,c;

    cout<<"Enter any three number:\n";
    cin>>a>>b>>c;

    if(a > b && a > c)
        cout<<a<<" is greatest number";
    
    else if(b > a && b > c)
        cout<<b<<" is greatest number";

    else
        cout<<c<<" is greatest number";

    return 0;
}