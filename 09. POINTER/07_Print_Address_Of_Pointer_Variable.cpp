// Write a program to print the address of the pointer to a variable whose value is input from user.

#include<iostream>
using namespace std;
int main(){
    int n, *ptr;
    cout<<"Enter any Number: ";
    cin>>n;

    cout<<"Address of the Pointer to a Variable = "<<&n;
    return 0;
}