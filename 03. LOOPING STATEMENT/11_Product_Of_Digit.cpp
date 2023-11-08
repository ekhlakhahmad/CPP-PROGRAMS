// Write a program to print the Product of Digit.

#include<iostream>
using namespace std;
int main(){
    int n, temp, product = 1;
    
    cout<<"Enter any number: ";
    cin>>n;

    for(; n > 0; n = n / 10){
    
        temp = n % 10;
        product = product * temp;
    }
    
    cout<<"Product of Digits = "<<product;
    return 0;
}