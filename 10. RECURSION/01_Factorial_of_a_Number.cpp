// Write a program to find the factorial of the number.

#include<iostream>
using namespace std;
int factorial(int n){
    if(n == 0)
        return (1);
    
    else
        return(n * factorial(n - 1));
}

int main(){
    int a;
    cout<<"Enter any Number: ";
    cin>>a;

    cout<<"Factorial = "<<factorial(a);
    return 0;
}