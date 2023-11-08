// Write a program to print the sum of digit from number is user input.

#include<iostream>
using namespace std;
int main(){
    int n, temp, sum = 0;

    cout<<"Enter any number: ";
    cin>>n;

    while(n > 0){
        temp = n % 10;
        sum = sum + temp;
        n = n / 10;
    }

    cout<<"Sum of Digits = "<<sum;

    return 0;
}