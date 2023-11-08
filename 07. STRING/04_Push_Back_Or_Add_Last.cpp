// Write a program to add string in last or use push_back function.

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str, last;

    cout<<"Enter First Name: ";
    getline(cin,str);

    cout<<"Enter Last Name : ";
    getline(cin,last);
    
    str.append(last);
    cout<<"Your Full Name is "<<str;
}