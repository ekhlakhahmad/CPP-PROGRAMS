// Write a program to find the minimum no in a array.

#include<iostream>
using namespace std;
int main(){
    int arr[]={22,51,9,6,8,41,7,10,43};

    int n=size(arr);
    int min=arr[0];

    for(int i=0;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }

    cout<<"Mininum Number = "<<min;

    return 0;
}