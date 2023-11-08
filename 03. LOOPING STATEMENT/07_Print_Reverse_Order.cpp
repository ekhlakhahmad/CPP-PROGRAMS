// Write a program to print the counting in Reverse order using for loop.

#include<iostream>
using namespace std;
int main(){
    int n;
    
    cout<<"Enter any number : ";
    cin>>n;

    for(int i = n; i >= 1; i--){
        cout<<i<<"\n";
    }

    return 0;
}