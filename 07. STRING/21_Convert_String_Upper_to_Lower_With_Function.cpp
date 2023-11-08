// Write a program to convert string in Upper case to Lower case with built-in function.

#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char a[50];

    cout<<"Enter any String in Upper Case: ";
    gets(a);

    cout<<"After Converting in Lower Case = "<<strlwr(a);
    return 0;
}