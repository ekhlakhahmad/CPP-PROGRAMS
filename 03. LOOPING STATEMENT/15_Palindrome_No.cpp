// Write a program to check the number is palindrome or not.

#include<iostream>
using namespace std;
int main(){
    int n, digit, orig, rev = 0;
    cout<<"Enter any number: ";
    cin>>n;
    orig = n;

    for(; n > 0; n=n/10){
        digit = rev % 10;
        rev = (rev * 10) + n %10;
    }

    if(rev == orig)
        cout<<orig<<" is Palindrome number";

    else
        cout<<orig<<" is Not a Palindrome number";

    return 0;

}