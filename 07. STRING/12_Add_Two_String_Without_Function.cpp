// Write a program to add two string without using predefined function.

#include<iostream>
using namespace std;
int main(){
    char a[50];
    char b[50];
    char c[100];

    cout<<"Enter any First String: ";
    gets(a);

    cout<<"Enter any Second String: ";
    gets(b);

    int i = 0;
    while(a[i] != '\0'){
        c[i] = a[i];
        i++;
    }
    
    int j = 0;
    while(b[j] != '\0'){
        c[i] = b[j];
        j++;
        i++;
    }
    c[i] = '\0';

    cout<<"Concatenated String = "<<c;
    return 0;
}