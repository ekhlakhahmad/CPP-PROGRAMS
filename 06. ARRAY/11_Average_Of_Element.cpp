// Write a program to find the Average of element of an Array.

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {5, 4, 7, 8, 9, 10,12,15,20};
    int sum = 0;
    int temp;

    int n = size(arr);

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        temp = sum;
    }

    cout << "Average of Element = " << temp/n;
    return 0;
}