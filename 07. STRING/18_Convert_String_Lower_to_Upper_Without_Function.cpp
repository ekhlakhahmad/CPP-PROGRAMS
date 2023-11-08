// Write a program to convert Lower case to Upper case string without built-in function.

#include<iostream>
using namespace std;
int main(){
    char a[50];
    char b[50];

    cout<<"Type any String in Lower Case: ";
    gets(a);

    int i = 0;
    while(a[i] != '\0'){
        a[i] = a[i] - 32;
        i++;
    }

    cout<<"After Converting String in Upper Case = "<<a;
    return 0;
}