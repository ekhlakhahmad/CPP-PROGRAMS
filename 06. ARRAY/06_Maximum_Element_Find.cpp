// Write a program to find the maximum element in a array.

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {20, 25, 18, 6, 53, 1,85,74,11,25,63};
    int n = size(arr);

    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    cout << "Maximum Number = " << max;

    return 0;
}