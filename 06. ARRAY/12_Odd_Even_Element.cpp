// Write a program to find the Odd and Even number in an Array.

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {5, 2, 9, 6, 8, 4, 7, 1, 3, 84, 12, 11};
    int n = size(arr);
    cout << "Even element = ";
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cout << arr[i] << " ";
        }
    }

    cout << "\nOdd element = ";
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 1)
            cout << arr[i] << " ";
    }
    return 0;
}