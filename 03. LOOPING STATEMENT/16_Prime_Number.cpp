// Write a program to check the number is prime number or not.

#include<iostream>
using namespace std;
int main(){
    int i, n, fact = 0;
    cout<<"Enter any number: ";
    cin>>n;

    for(i = 1; i <= n; i++){
        if(n % i == 0)
            fact = fact + 1;
    }

    if( fact == 2)
        cout<<n<<" is Prime number";
    
    else
        cout<<n<<" is Not a Prime number";

    return 0;
}