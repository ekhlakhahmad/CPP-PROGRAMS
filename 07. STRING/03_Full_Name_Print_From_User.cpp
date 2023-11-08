// Write a program to print the full name from user input.

#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter Your Name: ";
    getline(cin, str);

    cout<<"Your Full Name is "<<str;

    return 0;
}