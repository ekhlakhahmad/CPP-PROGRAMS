// Write a program to take input from user in array element and print that element.

#include<iostream>
using namespace std;
int main(){
    int *ptr;
    int arr[5];
    
    cout<<"Enter 5 Element in a Array: "<<endl;
    for(int i = 0; i < 5; i++){
        cin>>arr[i];
    }

    ptr = arr;

    for(int i = 0; i < 5; i++){
        cout<<*ptr<<" ";
        ptr ++;
    }
    
    return 0;
}