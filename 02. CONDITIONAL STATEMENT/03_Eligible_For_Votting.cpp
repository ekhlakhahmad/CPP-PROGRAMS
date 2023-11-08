// Write a program to check the given number is Eligible for votting or not.

#include<iostream>
using namespace std;
int main(){
    int y;
    cout<<"Enter your age:\n";
    cin>>y;

    if(y >= 18){
        cout<<"You are Eligible for Votting";
    }

    else{
        cout<<"You age Not Eligible for Votting";
    }

    return 0;
}