// Write a program to print the Reverse a String.

#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char a[50];
   
    cout<<"Type Any String: ";
    gets(a);

    cout<<"Reverse String = "<<strrev(a);

    return 0;
    
}