// Write a program to concatenate two string using built-in function.

#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char s1[50];
    char s2[50];

    cout<<"Enter First String: ";
    gets(s1);

    cout<<"Enter Second String: ";
    gets(s2);

    strcat(s1,s2);
    cout<<"After Concatenated Form = "<<s1;

    return 0;
}