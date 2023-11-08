// Write a program to print the address of any variable.

#include<iostream>
using namespace std;
int main(){
    int a = 10;
    cout<<"Value of a = "<<a<<endl;
    cout<<"Address of a = "<<&a<<endl;

    return 0;
}