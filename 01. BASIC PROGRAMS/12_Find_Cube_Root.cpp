// Write a program to find the cube root of given the number.

#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n, squaroot;
    cout<<"Enter any number: ";
    cin>>n;

    squaroot = sqrt(n);
    cout<<"Square Root of "<<n<<" = "<<squaroot;

    return 0;

}