// Write a program to print the Total sum of Array element.

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 6, 5, 4, 7, 8, 9, 10};
    int sum = 0;
    int temp;

    int n = size(arr);

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        temp = sum;
    }

    cout << "Total Sum of Element = " << temp;
    return 0;
}