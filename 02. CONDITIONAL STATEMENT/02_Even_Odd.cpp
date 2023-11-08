// Write a program to check the given number is Even or Odd.

#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter any number:\n";
    cin>>a;

    if(a % 2 == 0)
        cout<<"This is Even number";

    else
        cout<<"This is Odd number";

    return 0;
}