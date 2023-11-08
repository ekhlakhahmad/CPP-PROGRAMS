// Write a program to find the length of string using built-in function.

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    
    cout<<"Enter any String: ";
    getline(cin, str);

    cout<<"Length of String = "<<str.length();
    return 0;
}