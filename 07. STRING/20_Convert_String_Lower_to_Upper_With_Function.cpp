// Write a program to convert string in Lower case to Upper case with built-in function.

#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char a[50];

    cout<<"Enter any String in Lower Case: ";
    gets(a);

    cout<<"After Converting in Upper Case = "<<strupr(a);
    return 0;
}