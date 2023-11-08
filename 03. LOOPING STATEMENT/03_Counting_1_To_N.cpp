// Write a program to print the counting from 1 to given number using while loop.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;

    int i=1;
    while(i <= n){
        cout<<i<<endl;
        i++;
    }

    return 0;
}