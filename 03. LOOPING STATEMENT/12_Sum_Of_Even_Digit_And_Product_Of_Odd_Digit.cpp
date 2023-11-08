// Write a program to print the sum of Even digit and Product of Odd digit.

#include<iostream>
using namespace std;
int main(){
    int n, digit, sum = 0, product = 1;
    
    cout<<"Enter any Number: ";
    cin>>n;

    while(n > 0){
        digit = n % 10;

        if(digit % 2 == 0){
            sum = sum + digit;
        }

        else{
            product = product * digit;
        }

        n = n / 10;
    }

    cout<<"Sum of Even digits = "<<sum<<endl;
    cout<<"Product of Odd digits ="<<product<<endl;

    return 0;
}