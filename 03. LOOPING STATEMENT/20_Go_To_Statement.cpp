// Write a program find the number is Even or Odd using goto statement.

#include<iostream>
using namespace std;
int main(){
    int n;
    
    cout<<"Enter any number: ";
    cin>>n;

    if(n % 2 == 0)
        goto even;

    else
        goto odd;

    even:
        cout<<"This is Even number"<<endl;
        return 0;

    odd:
        cout<<"This is Odd number"<<endl;
        return 0;
        
}