// Write a program to check the string is palindrome or not.

#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char a[50];
    char b[50];

    cout<<"Enter Any String: ";
    gets(a);

    int i = 0;
    b[i] = strrev(a);
}