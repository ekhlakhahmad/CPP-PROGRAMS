// Write a program to find the First element and last element in a array.

#include<iostream>
using namespace std;
int main(){
    int arr[]={81,5,9,64,1,2,3,7,11};
    int n=size(arr);

    cout<<"First Element = "<<arr[0]<<endl<<" Last Element = "<<arr[n-1];
    
    return 0;
}