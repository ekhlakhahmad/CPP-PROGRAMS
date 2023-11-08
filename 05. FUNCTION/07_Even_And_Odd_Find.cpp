// Write a program to check the number is Even and Odd.

#include<iostream>
using namespace std;

int even(int);
int odd(int);

int main(){
    int x;
    cout<<"Enter Any Number: ";
    cin>>x;

    even(x);
    odd(x);

    return 0;
}

int even(int a){
    if(a % 2 == 0)
        cout<<"This number is Even";
        
    return 0;
}

int odd(int a){
    if(a % 2 == 1)
        cout<<"This number is Odd";
    
    return 0;
}