// Write a program to convert Upper case to lower case string without built-in function.

#include<iostream>
using namespace std;
int main(){
    char a[50];
    char b[50];

    cout<<"Type any String in Upper Case: ";
    gets(a);

    int i = 0;
    while(a[i] != '\0'){
        a[i] = a[i] + 32;
        i++;
    }

    cout<<"After Converting String in Lower Case = "<<a;
    return 0;
}