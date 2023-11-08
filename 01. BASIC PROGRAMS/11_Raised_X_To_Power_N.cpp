// Write a program to raise any number x to power n.

#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int x,n, result;
    cout<<"Enter any number: ";
    cin>>x;
    cout<<"Enter to Power Number: ";
    cin>>n;

    result = pow(x,n);
    cout<<x<<" Raised to Power "<<n<<" ("<<x<<"^"<<n<<")"<<" = "<<result;

    return 0;

}