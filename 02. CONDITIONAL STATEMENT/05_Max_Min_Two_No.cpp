// Write a program to find the greates number of two given number.

#include<iostream>
using namespace std;
int main(){
    int a,b;

    cout<<"Enter any two number:\n";
    cin>>a>>b;

    if(a > b)
        cout<<a<<" is Maximum number";
    
    else    
        cout<<a<<" is Not a Maximum number";
    
    return 0;
}
