// Write a program to print the Reverse of an Array.

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {5, 2, 9, 6, 3, 8, 4, 7, 1};
    int n = size(arr);

    cout<<"Reverse Element = ";
    for (int i = n-1; i >= 0; i--)
        cout<< arr[i]<<" ";
    return 0;
}