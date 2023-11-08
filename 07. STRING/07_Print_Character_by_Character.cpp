// Write a program to print any word or sentence one by one means character by character.

#include<iostream>
using namespace std;
int main(){
    char a[50];
    cout<<"Enter any Name: ";
    gets(a);

    int i = 0;
    while(a[i] != '\0'){
        cout<<"\n"<<a[i];
        i++;
    }
    return 0;
}