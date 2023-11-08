// Write a program to Print the Reverse a given number.

#include<iostream>
using namespace std;
int main(){
    int n, digit, Reverse = 0;
    cout<<"Enter any number: ";
    cin>>n;

    while(n > 0){

        digit = n % 10;
        Reverse = Reverse * 10  + digit;
        n = n / 10;
    }

    cout<<"Reverse number is "<<" = "<<Reverse<<endl;

    return 0;
}