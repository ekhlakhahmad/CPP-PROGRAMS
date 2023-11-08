// Write a program to check the given number is positive, negative or zero.

#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter any number:\n";
    cin>>a;

    if(a > 0){
        cout<<a<<" is positive number";
    }

    else if(a < 0){
        cout<<a<<" is negative number";
    }

    else{
        cout<<a<<" is Zero";
    }

    return 0;
}