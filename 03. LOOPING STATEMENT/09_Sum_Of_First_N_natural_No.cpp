// Write a program to print the sum of the first N natural number.

#include<iostream>
using namespace std;
int main(){
    int i, n, sum = 0;
    cout<<"Enter any number: ";
    cin>>n;

    for(i = 1;i <= n; i++){
        sum = sum + i;
    }

    cout<<"Total sum = "<<sum;

    return 0;
}