// Write a program to print a number which is entered form keyboard using pointer.

#include<iostream>
using namespace std;
int main(){
    int n, *ptr;
    cout<<"Enter any Number: ";
    cin>>n;

    cout<<"After Entered value Output = ";
    cout<<*(&n)<<endl;
    return 0;
}