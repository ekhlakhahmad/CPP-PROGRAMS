// Write a program to copied Word or sentences one location to another location or variable.

#include<iostream>
using namespace std;
int main(){
    char a[100];
    char b[100];

    cout<<"Enter any word or sentences in First location: ";
    gets(a);

    int i = 0;
    while(a[i] != '\0'){
        b[i] = a[i];
        i++;
    }

    cout<<"After copied Word or sentences in Second location = "<<b;
    return 0;
}