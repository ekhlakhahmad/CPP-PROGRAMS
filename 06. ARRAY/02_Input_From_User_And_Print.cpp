// Write a program to take input and print the element in Array.

#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"How many number you want to print: ";
    cin>>n;
    int arr[n];


    cout<<"Enter any element: "<<endl;
    for(i = 1; i <= n; i++){
        cin>>arr[i];
    }

    cout<<"******************** OUTPUT *********************"<<endl;
    for(i = 1; i <= n; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}