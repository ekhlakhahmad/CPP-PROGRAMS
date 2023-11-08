// Write a program to find the Max element and Minimum element in array.

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {8, 5, 19, 86, 4, 1, 6, 57, 18, 99, 16, 52, 10, 41};
    int n = size(arr);

    int max = arr[0];
    int min = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    cout << "Maximum number is " << max << endl;

    for (int j = 0; j < n; j++)
    {
        if (min > arr[j])
            min = arr[j];
    }
    cout << "Minimum number is " << min << endl;
    return 0;
}